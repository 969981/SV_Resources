"""R5 provenance of a native Lua 5.4 register at CLOSURE creation.

This is a bounded, read-only *syntactic candidate* analysis, NOT a Lua VM
emulator. The transfer graph includes the known Lua 5.4 arithmetic fallback
skip edge. Unknown writes are never silently treated as impossible.
Runtime register contents / UpVal* object identity remain NOT_OBSERVED.
"""
from __future__ import annotations

from collections import Counter, deque
from .chunk import Proto
from .r1 import decode, op_record, syntactic_edges

NO_WRITE = frozenset({
    "SETUPVAL", "SETTABUP", "SETTABLE", "SETI", "SETFIELD", "SETLIST",
    "JMP", "EQ", "LT", "LE", "EQK", "EQI", "LTI", "LEI", "GTI", "GEI",
    "TEST", "TBC", "CLOSE", "MMBIN", "MMBINI", "MMBINK",
    "RETURN", "RETURN0", "RETURN1", "TAILCALL", "EXTRAARG", "VARARGPREP",
})
A_WRITE = frozenset({
    "MOVE", "LOADI", "LOADF", "LOADK", "LOADKX", "LOADFALSE",
    "LFALSESKIP", "LOADTRUE", "GETUPVAL", "GETTABUP", "GETTABLE",
    "GETI", "GETFIELD", "NEWTABLE", "ADDI", "ADDK", "SUBK", "MULK",
    "MODK", "POWK", "DIVK", "IDIVK", "BANDK", "BORK", "BXORK",
    "SHRI", "SHLI", "ADD", "SUB", "MUL", "MOD", "POW", "DIV",
    "IDIV", "BAND", "BOR", "BXOR", "SHL", "SHR", "UNM", "BNOT",
    "NOT", "LEN", "CONCAT", "CLOSURE",
})
ARITHMETIC_FALLBACK = frozenset({
    "ADDI", "ADDK", "SUBK", "MULK", "MODK", "POWK", "DIVK", "IDIVK",
    "BANDK", "BORK", "BXORK", "SHRI", "SHLI", "ADD", "SUB",
    "MUL", "MOD", "POW", "DIV", "IDIV", "BAND", "BOR", "BXOR",
    "SHL", "SHR",
})


def write_kind(ins, reg: int) -> str:
    """Return NO, DEFINITE, or MAYBE for one target register.

    Every opcode not explicitly understood is MAYBE, rather than an assumed
    non-write. Loop control, TESTSET and variable-result calls are MAYBE.
    """
    name = ins.name
    if name in NO_WRITE:
        return "NO"
    if name in A_WRITE:
        return "DEFINITE" if ins.a == reg else "NO"
    if name == "LOADNIL":
        return "DEFINITE" if ins.a <= reg <= ins.a + ins.b else "NO"
    if name == "SELF":
        return "DEFINITE" if ins.a <= reg <= ins.a + 1 else "NO"
    if name == "TESTSET":
        return "MAYBE" if ins.a == reg else "NO"
    if name == "CALL":
        if ins.c == 1:
            return "NO"
        if ins.c == 0:
            return "MAYBE" if reg >= ins.a else "NO"
        return "DEFINITE" if ins.a <= reg < ins.a + ins.c - 1 else "NO"
    if name == "VARARG":
        if ins.c:  # C is not output arity in Lua5.4; B is authoritative
            pass
        if ins.b == 1:
            return "NO"
        if ins.b == 0:
            return "MAYBE" if reg >= ins.a else "NO"
        return "DEFINITE" if ins.a <= reg < ins.a + ins.b - 1 else "NO"
    if name in {"FORLOOP", "FORPREP"}:
        return "MAYBE" if ins.a <= reg <= ins.a + 3 else "NO"
    if name in {"TFORPREP", "TFORLOOP"}:
        return "MAYBE" if ins.a <= reg <= ins.a + 4 else "NO"
    if name == "TFORCALL":
        return "MAYBE" if ins.a <= reg <= ins.a + 3 + ins.c else "NO"
    return "MAYBE"


def reaching_register_writes(proto: Proto, target_pc: int, reg: int,
                             max_details: int = 36) -> dict:
    ops = decode(proto)
    if not 0 <= target_pc < len(ops):
        raise ValueError("target PC outside original instruction array")
    edges, defects = syntactic_edges(proto)
    # Arithmetic fast paths skip their following MMBIN* fallback.
    # This augments the existing conservative VM candidate edges; unlike
    # a debugger trace it does not attest which branch the VM actually took.
    augments = []
    for i, op in enumerate(ops[:-2]):
        if op.name in ARITHMETIC_FALLBACK and ops[i+1].name in {
            "MMBIN", "MMBINI", "MMBINK"
        }:
            augments.append((i, i+2, "ARITHMETIC_FAST_SKIP_MM"))
    nexts = [[] for _ in ops]
    for src, dst, kind in edges + augments:
        if not 0 <= src < len(ops) or not 0 <= dst < len(ops):
            defects.append({"code": "R5_BAD_EDGE", "pc": src, "target": dst})
        else:
            nexts[src].append((dst, kind))
    # Root PC zero can be entered in different host invocations. Track
    # ENTRY as a separate bit; don't reinterpret this as a runtime value.
    kinds = [write_kind(ins, reg) for ins in ops]
    states = [0] * len(ops)
    states[0] = 1  # ENTRY
    queue = deque([0])
    enqueued = {0}
    iterations = 0
    while queue:
        pc = queue.popleft()
        enqueued.remove(pc)
        iterations += 1
        if iterations > len(ops) * 500:
            raise RuntimeError("R5 conservative graph did not converge")
        current = states[pc]
        if kinds[pc] == "DEFINITE":
            after = 1 << (pc + 1)
        elif kinds[pc] == "MAYBE":
            after = current | (1 << (pc + 1))
        else:
            after = current
        for dst, _ in nexts[pc]:
            union = states[dst] | after
            if union != states[dst]:
                states[dst] = union
                if dst not in enqueued:
                    enqueued.add(dst)
                    queue.append(dst)
    mask = states[target_pc]
    bits = []
    while mask:
        lsb = mask & -mask
        bit = lsb.bit_length() - 1
        bits.append(bit)
        mask ^= lsb
    sites = [-1 if i == 0 else i - 1 for i in bits]
    site_details = []
    for site in sites[-max_details:]:
        if site == -1:
            site_details.append({"pc": None, "kind": "ROOT_ENTRY_UNDEFINED"})
        else:
            o = ops[site]
            site_details.append({**op_record(proto, o),
                                 "write_status": kinds[site]})
    local_writes = [
        {**op_record(proto, x), "write_status": kinds[x.pc]}
        for x in ops[max(0, target_pc-200):target_pc]
        if kinds[x.pc] != "NO"
    ]
    from_order = [
        {**op_record(proto, x), "write_status": kinds[x.pc]}
        for x in ops[:target_pc] if kinds[x.pc] != "NO"
    ]
    extra_control = [x for x in augments if x[0] < target_pc]
    return {
        "register": reg, "capture_pc": target_pc,
        "analysis": "SYNTACTIC_MAY_REACHING_WRITES_NOT_SSA_NOT_RUNTIME",
        "raw_pc_count": len(ops), "reachable_capture": bool(states[target_pc]),
        "entry_is_candidate": -1 in sites,
        "candidate_write_count": len(sites) - int(-1 in sites),
        "candidate_write_sites_tail": site_details,
        "lexical_last_writes_tail": from_order[-25:],
        "near_capture_writes_last_200": local_writes[-18:],
        "cfg_defect_count": len(defects),
        "cfg_defects_head": defects[:12],
        "arith_fallback_skip_edges": len(extra_control),
        "graph_iterations": iterations,
        "guarantee": "CANDIDATES_ONLY; live root R16 value and UpVal cell remain NOT_OBSERVED",
    }


def sibling_closure_capture_sites(parent: Proto, reg: int,
                                  target_pc: int, max_sites: int = 30) -> dict:
    uses = []
    for ins in decode(parent):
        if ins.name != "CLOSURE" or ins.bx >= len(parent.children):
            continue
        child = parent.children[ins.bx]
        for i in range(child.upvalue_count):
            pos = i * 3
            if child.upvalues[pos] == 1 and child.upvalues[pos + 1] == reg:
                uses.append({"pc": ins.pc, "byte_offset": parent.code_offset + ins.pc*4,
                             "child_proto_id": child.id, "child_index": ins.bx,
                             "upvalue_slot": i})
    return {
        "count": len(uses),
        "before_or_at_target": sum(x["pc"] <= target_pc for x in uses),
        "site_near_target": sorted(uses, key=lambda x: abs(x["pc"] - target_pc))[:max_sites],
        "meaning": "POTENTIAL_SHARED_PARENT_REGISTER_CELL_NO_RUNTIME_IDENTITY",
    }
