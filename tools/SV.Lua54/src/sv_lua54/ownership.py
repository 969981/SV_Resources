"""R2: conservative private-table ownership evidence for Lua 5.4 SETLIST.

This module does not emit modified bytecode, recovered game source or AST.
It matches a concrete NEWTABLE producer to each raw SETLIST, and records
possible alias/escape/control-flow barriers. A "local candidate" is never
reported as proven behavior-equivalence.
"""
from __future__ import annotations

from collections import Counter
from .chunk import Proto
from .r1 import decode, op_record, syntactic_edges

# Explicit registers definitely written by the subset below.
_NO_A_WRITE = {
    "SETTABUP", "SETTABLE", "SETI", "SETFIELD", "SETUPVAL", "SETLIST",
    "JMP", "EQ", "LT", "LE", "EQK", "EQI", "LTI", "LEI", "GTI", "GEI",
    "TEST", "TBC", "CLOSE", "MMBIN", "MMBINI", "MMBINK",
    "RETURN", "RETURN0", "RETURN1", "TAILCALL", "FORPREP",
    "TFORPREP", "TFORCALL", "EXTRAARG", "VARARGPREP",
}
# This is deliberately incomplete: unknown operations are a proof barrier.
_KNOWN_WRITERS = {
    "MOVE", "LOADI", "LOADF", "LOADK", "LOADKX", "LOADFALSE",
    "LFALSESKIP", "LOADTRUE", "LOADNIL", "GETUPVAL", "GETTABUP",
    "GETTABLE", "GETI", "GETFIELD", "NEWTABLE", "SELF",
    "ADDI", "ADDK", "SUBK", "MULK", "MODK", "POWK", "DIVK",
    "IDIVK", "BANDK", "BORK", "BXORK", "SHRI", "SHLI",
    "ADD", "SUB", "MUL", "MOD", "POW", "DIV", "IDIV",
    "BAND", "BOR", "BXOR", "SHL", "SHR", "UNM",
    "BNOT", "NOT", "LEN", "CONCAT", "TESTSET", "CALL",
    "FORLOOP", "TFORLOOP", "CLOSURE", "VARARG",
}

def write_status(ins, register: int) -> str:
    """Identify definite or potential target slot overwrite."""
    if ins.name in _NO_A_WRITE:
        return "NONE"
    if ins.name not in _KNOWN_WRITERS:
        return "UNKNOWN"
    if ins.name == "SELF":
        return "WRITE" if ins.a <= register <= ins.a + 1 else "NONE"
    if ins.name == "LOADNIL":
        return "WRITE" if ins.a <= register <= ins.a + ins.b else "NONE"
    if ins.name == "CALL":
        if ins.c == 1:
            return "NONE"  # no return values
        if ins.c == 0:
            return "POTENTIAL_WRITE" if register >= ins.a else "NONE"
        return "WRITE" if ins.a <= register < ins.a + ins.c - 1 else "NONE"
    if ins.name == "VARARG":
        if ins.c == 1:
            return "NONE"
        if ins.c == 0:
            return "POTENTIAL_WRITE" if register >= ins.a else "NONE"
        return "WRITE" if ins.a <= register < ins.a + ins.c - 1 else "NONE"
    # FORLOOP and TFORLOOP write more than one register.
    if ins.name == "FORLOOP":
        return "POTENTIAL_WRITE" if ins.a <= register <= ins.a + 3 else "NONE"
    if ins.name == "TFORLOOP":
        return "POTENTIAL_WRITE" if ins.a <= register <= ins.a + 2 else "NONE"
    return "WRITE" if ins.a == register else "NONE"


def read_of_target(ins, register: int) -> str | None:
    """Conservative table identity usage; no claims of complete register SSA."""
    op = ins.name
    if op == "MOVE" and ins.b == register:
        return "MOVE_ALIAS"
    if op == "SETUPVAL" and ins.a == register:
        return "UPVALUE_ESCAPE"
    if op == "RETURN1" and ins.a == register:
        return "RETURN_ESCAPE"
    if op in ("RETURN", "TAILCALL"):
        if ins.b == 0 and register >= ins.a:
            return "POSSIBLE_RETURN_ESCAPE"
        if ins.b and ins.a <= register < ins.a + ins.b - 1:
            return "RETURN_ESCAPE"
    if op in ("SETFIELD", "SETI", "SETTABLE", "SETLIST") and ins.a == register:
        return "TABLE_MUTATION"
    if op == "GETFIELD" and ins.b == register:
        return "TABLE_READ"
    if op == "GETI" and ins.b == register:
        return "TABLE_READ"
    if op == "GETTABLE" and (ins.b == register or ins.c == register):
        return "TABLE_READ_OR_KEY"
    if op == "SELF" and (ins.b == register or ins.c == register):
        return "TABLE_READ_OR_KEY"
    if op == "CALL":
        if ins.b == 0 and register >= ins.a:
            return "POTENTIAL_CALL_ESCAPE"
        if ins.b and ins.a <= register <= ins.a + ins.b - 1:
            return "CALL_ESCAPE"
    if op in ("SETTABLE", "SETFIELD", "SETI") and ins.k == 0 and ins.c == register:
        return "POTENTIAL_VALUE_ESCAPE"
    return None


def trace_owner(proto: Proto, setlist_pc: int, window: int = 140) -> dict:
    instructions = decode(proto)
    if not 0 <= setlist_pc < len(instructions) or instructions[setlist_pc].name != "SETLIST":
        raise ValueError("target PC is not a native SETLIST")
    batch = instructions[setlist_pc]
    reg = batch.a
    # Backward candidate: most recent NEWTABLE to that exact register,
    # with an explicit diagnostics list if any later clobber is found.
    producers = [x for x in instructions[max(0, setlist_pc - window):setlist_pc]
                 if x.name == "NEWTABLE" and x.a == reg]
    producer = producers[-1] if producers else None
    if producer is None:
        return {
            "proto_id": proto.id, "setlist_pc": setlist_pc,
            "target_register": reg, "producer_pc": None,
            "status": "NO_LOCAL_NEWTABLE_IN_WINDOW",
            "proof_complete": False, "events": [], "control_flow_barriers": [],
        }
    events = []
    for ins in instructions[producer.pc+1:setlist_pc]:
        read = read_of_target(ins, reg)
        write = write_status(ins, reg)
        if read or write != "NONE":
            events.append({"pc": ins.pc, "op": ins.name,
                           "read_kind": read, "write_kind": write})
    edges, cfg_errors = syntactic_edges(proto)
    # Interior may not be reached from outside the candidate producer region.
    inbound = [
        {"source": start, "target": end, "kind": kind}
        for start, end, kind in edges
        if producer.pc < end <= setlist_pc and not producer.pc <= start < setlist_pc
    ]
    # A nonsequential branch inside region requires SSA/phi to validate
    # producer dominance; static nearest-write is insufficient.
    branches = [
        {"source": start, "target": end, "kind": kind}
        for start, end, kind in edges if producer.pc <= start < setlist_pc
        and kind not in {"SEQUENTIAL", "CONSUME_EXTRAARG"}
    ]
    hard = [e for e in events if e["write_kind"] != "NONE"
            or e["read_kind"] not in (None, "TABLE_MUTATION")]
    barriers = {
        "candidate_clobber_or_escape": hard,
        "region_incoming_edges": inbound,
        "region_nontrivial_branches": branches,
        "cfg_defects": [x for x in cfg_errors
                        if x.get("pc", -1) >= producer.pc and x.get("pc", -1) <= setlist_pc],
    }
    # Even without barriers this is ONLY a potential private constructor:
    # value effects and native metamethod path have not been fully proved.
    clean = not (hard or inbound or branches or barriers["cfg_defects"])
    return {
        "proto_id": proto.id, "setlist_pc": setlist_pc,
        "native_byte_offset": proto.code_offset + setlist_pc * 4,
        "target_register": reg, "producer_pc": producer.pc,
        "producer_byte_offset": proto.code_offset + producer.pc * 4,
        "producer_to_setlist_instructions": setlist_pc - producer.pc,
        "setlist_fixed_count": batch.b if batch.b else None,
        "setlist_dynamic_top": batch.b == 0,
        "setlist_initial_array_index": batch.c + 1,
        "events": events[:80],
        "events_truncated": len(events) > 80,
        "control_flow_barriers": barriers,
        "native_precheck": "POTENTIAL_PRIVATE_TABLE" if clean else "PROOF_BLOCKED",
        "proof_complete": False,
        "ast_lowering_approved": False,
    }
