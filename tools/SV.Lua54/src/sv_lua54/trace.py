"""Conservative Lua 5.4 C->F native method, CFG, and call-site evidence.

Does not mutate original BLUA or equate Hash references with resolved callees.
Method ownership uses the *verified eight-opcode register assignment* pattern.
"""
from __future__ import annotations

import argparse
import json
from pathlib import Path
import struct

from .chunk import Chunk, Proto, parse

OPNAMES = """MOVE LOADI LOADF LOADK LOADKX LOADFALSE LFALSESKIP LOADTRUE LOADNIL GETUPVAL SETUPVAL GETTABUP GETTABLE GETI GETFIELD SETTABUP SETTABLE SETI SETFIELD NEWTABLE SELF ADDI ADDK SUBK MULK MODK POWK DIVK IDIVK BANDK BORK BXORK SHRI SHLI ADD SUB MUL MOD POW DIV IDIV BAND BOR BXOR SHL SHR MMBIN MMBINI MMBINK UNM BNOT NOT LEN CONCAT CLOSE TBC JMP EQ LT LE EQK EQI LTI LEI GTI GEI TEST TESTSET CALL TAILCALL RETURN RETURN0 RETURN1 FORLOOP FORPREP TFORPREP TFORCALL TFORLOOP SETLIST CLOSURE VARARG VARARGPREP EXTRAARG""".split()
METHOD_PATTERN = ("GETUPVAL", "LOADK", "GETTABLE", "LOADK", "GETTABLE",
                  "LOADK", "CLOSURE", "SETTABLE")
CONDITIONS = set("EQ LT LE EQK EQI LTI LEI GTI GEI TEST TESTSET".split())
RETURNS = {"RETURN", "RETURN0", "RETURN1", "TAILCALL"}
ARITHMETIC_FALLBACK = set("ADDI ADDK SUBK MULK MODK POWK DIVK IDIVK BANDK BORK BXORK SHRI SHLI ADD SUB MUL MOD POW DIV IDIV BAND BOR BXOR SHL SHR".split())


def instructions(proto: Proto):
    """(op, A, B, C, k, Bx, sJ), one tuple per *original* PC."""
    out = []
    for (word,) in struct.iter_unpack("<I", proto.code):
        op = word & 127
        if op >= len(OPNAMES):
            raise ValueError(f"proto {proto.id}: invalid opcode {op}")
        out.append((OPNAMES[op], (word >> 7) & 255,
                    (word >> 16) & 255, (word >> 24) & 255,
                    (word >> 15) & 1, (word >> 15) & 131071,
                    ((word >> 7) & 33554431) - 16777215))
    return out


def string_at(proto: Proto, index: int, kind: str | None = None):
    if index >= len(proto.constants):
        return None
    const = proto.constants[index]
    if const.tag not in (4, 20) or const.payload is None:
        return None
    try:
        result = const.payload.decode("ascii")
    except UnicodeDecodeError:
        return None
    if kind and (len(result) != 17 or result[0] != kind
                 or any(x not in "0123456789ABCDEF" for x in result[1:])):
        return None
    return result


def field_hash_at(proto: Proto, index: int):
    """C/F/S hashes are *names of fields*, not necessarily callable owners."""
    return string_at(proto, index, "F") or string_at(proto, index, "S")


def native_methods(chunk: Chunk):
    """Confirmed root _ENV[C].prototype[F]=closure; not all possible layouts."""
    p = chunk.root
    code = instructions(p)
    for pc in range(len(code) - len(METHOD_PATTERN) + 1):
        s = code[pc:pc + 8]
        if tuple(x[0] for x in s) != METHOD_PATTERN:
            continue
        a = s[0][1]
        c_hash = string_at(p, s[1][5], "C")
        f_hash = string_at(p, s[5][5], "F")
        if not (c_hash and f_hash and string_at(p, s[3][5]) == "prototype"):
            continue
        if (s[0][2] != 0 or s[1][1] != a+1
            or s[2][1:4] != (a, a, a+1)
            or s[3][1] != a+1 or s[4][1:4] != (a, a, a+1)
            or s[5][1] != a+1 or s[6][1] != a+2
            or s[7][1:4] != (a, a+1, a+2)):
            continue
        child_index = s[6][5]
        if child_index >= len(p.children):
            raise ValueError(f"root PC {pc+6}: invalid child Proto index")
        child = p.children[child_index]
        yield {
            "class_hash": c_hash, "function_hash": f_hash,
            "definition_pc": pc, "assignment_pc": pc+7,
            "closure_pc": pc+6, "child_index": child_index,
            "proto_id": child.id, "proto_code_offset": child.code_offset,
            "evidence": "NATIVE_8OP_REGISTER_CLOSURE_SETTABLE",
        }


def successors(code):
    """Instruction-level edges with Lua 5.4 next-PC rules."""
    n = len(code)
    edges = []
    for pc, (op, a, b, c, k, bx, sj) in enumerate(code):
        following = pc + 1
        if op in RETURNS or op == "EXTRAARG":
            dst = []
        elif op == "JMP":
            dst = [following + sj]
        elif op in CONDITIONS or op in ARITHMETIC_FALLBACK:
            # Arithmetic may skip immediately following MMBIN* on fast path.
            if op in ARITHMETIC_FALLBACK and (following >= n or
                code[following][0] not in {"MMBIN", "MMBINI", "MMBINK"}):
                dst = [following]
            else:
                dst = [following, following+1]
        elif op == "LFALSESKIP":
            dst = [following+1]
        elif op == "FORLOOP" or op == "TFORLOOP":
            dst = [following, following-bx]
        elif op == "FORPREP":
            dst = [following, following+bx+1]
        elif op == "TFORPREP":
            dst = [following+bx]
        elif op in {"LOADKX", "NEWTABLE"} or (op == "SETLIST" and k):
            if following >= n or code[following][0] != "EXTRAARG":
                raise ValueError(f"PC {pc}: expected EXTRAARG after {op}")
            dst = [following+1]
        else:
            dst = [following]
        unique = sorted(set(dst))
        for target in unique:
            if target < 0 or target >= n:
                raise ValueError(f"PC {pc} ({op}): invalid target {target} in {n} instructions")
            if code[target][0] == "EXTRAARG":
                raise ValueError(f"PC {pc} ({op}): jump into EXTRAARG at {target}")
        edges.append(unique)
    return edges


def basic_blocks(proto: Proto):
    code = instructions(proto)
    if not code:
        return [], [], code
    succ = successors(code)
    leaders = {0}
    for pc, targets in enumerate(succ):
        if targets != [pc+1]:
            leaders.update(targets)
            if pc+1 < len(code) and code[pc+1][0] != "EXTRAARG":
                leaders.add(pc+1)
    leaders = sorted(x for x in leaders if code[x][0] != "EXTRAARG")
    blocks = []
    for i, start in enumerate(leaders):
        end = leaders[i+1] if i+1 < len(leaders) else len(code)
        tail = end-1
        while tail >= start and code[tail][0] == "EXTRAARG":
            tail -= 1
        blocks.append({"start_pc": start, "end_pc_exclusive": end,
                       "successor_pcs": succ[tail] if tail >= start else []})
    start_to_block = {p: i for i, b in enumerate(blocks)
                      for p in range(b["start_pc"], b["end_pc_exclusive"])}
    for b in blocks:
        b["successor_blocks"] = sorted({start_to_block[x] for x in b["successor_pcs"]})
    return blocks, succ, code


def call_sites(proto: Proto, blocks, code):
    """Block-local register reaching definitions; no guesses across block joins.

    A known function value survives unrelated register writes. Unknown / complex
    instructions discard provenance only where their documented destination is
    known, otherwise all provenance is invalidated.
    """
    rows = []
    write_a = set("""LOADI LOADF LOADK LOADKX LOADFALSE LFALSESKIP LOADTRUE
        GETUPVAL GETTABLE GETI ADDI ADDK SUBK MULK MODK POWK DIVK IDIVK
        BANDK BORK BXORK SHRI SHLI ADD SUB MUL MOD POW DIV IDIV BAND BOR
        BXOR SHL SHR UNM BNOT NOT LEN CONCAT NEWTABLE""".split())
    no_register_write = set("""SETUPVAL SETTABUP SETTABLE SETI SETFIELD
        SETLIST JMP EQ LT LE EQK EQI LTI LEI GTI GEI TEST
        RETURN RETURN0 RETURN1 CLOSE TBC EXTRAARG""".split())
    for block in blocks:
        registers = {}
        for pc in range(block["start_pc"], block["end_pc_exclusive"]):
            op, a, b, c, k, bx, sj = code[pc]
            if op == "CLOSURE":
                if bx >= len(proto.children):
                    raise ValueError(f"proto {proto.id} PC {pc}: bad closure child index")
                registers[a] = ("closure", proto.children[bx].id)
            elif op == "MOVE":
                value = registers.get(b)
                registers.pop(a, None)
                if value is not None:
                    registers[a] = value
            elif op in {"LOADK", "LOADKX"}:
                # LOADKX consumes the next EXTRAARG's Ax constant index.
                index = bx if op == "LOADK" else (
                    code[pc+1][6] + 16777215 if pc+1 < len(code)
                    and code[pc+1][0] == "EXTRAARG" else None)
                key = field_hash_at(proto, index) if index is not None else None
                registers.pop(a, None)
                if key is not None:
                    registers[a] = ("hash_key", key)
            elif op == "GETTABLE":
                index = registers.get(c)  # index comes from R[C]
                registers.pop(a, None)
                if index and index[0] == "hash_key":
                    registers[a] = ("field_hash", index[1])
            elif op == "SELF":
                index = field_hash_at(proto, c) if k else (
                    registers.get(c, (None, None))[1]
                    if registers.get(c, (None,))[0] == "hash_key" else None)
                registers.pop(a, None)
                registers.pop(a+1, None)
                if index is not None:
                    registers[a] = ("method_hash", index)
            elif op in {"GETFIELD", "GETTABUP"}:
                registers.pop(a, None)
                key = field_hash_at(proto, c)
                if key is not None:
                    registers[a] = ("field_hash", key)
            elif op in {"CALL", "TAILCALL"}:
                value = registers.get(a)
                if value and value[0] == "closure":
                    status, callee, f_hash = "DIRECT_LOCAL_CLOSURE", value[1], None
                elif value and value[0] in {"method_hash", "field_hash"}:
                    status, callee, f_hash = "HASH_FIELD_TARGET_UNRESOLVED", None, value[1]
                else:
                    status, callee, f_hash = "UNRESOLVED_DYNAMIC_CALL", None, None
                rows.append({"pc": pc, "file_offset": proto.code_offset + pc*4,
                             "opcode": op, "receiver_register": a,
                             "target_proto_id": callee,
                             "target_field_hash": f_hash,
                             "target_function_hash": f_hash if f_hash and f_hash.startswith("F") else None,
                             "resolution": status})
                # Lua CALL overwrites result registers only, not unrelated ones.
                if c == 0:
                    registers.clear()  # open / multret top is dynamically sized
                else:
                    for reg in range(a, a + max(1, c-1)):
                        registers.pop(reg, None)
            elif op == "LOADNIL":
                for reg in range(a, a+b+1):
                    registers.pop(reg, None)
            elif op in write_a:
                registers.pop(a, None)
            elif op in no_register_write:
                pass
            else:
                # FOR/TFOR, VARARG, TESTSET, metamethod and other complex ops.
                registers.clear()
    return rows

def report(chunk: Chunk, module: str, class_hash: str, function_hash: str, limit: int = 5):
    if limit < 1:
        raise ValueError("limit must be >= 1")
    matches = [m for m in native_methods(chunk)
               if m["class_hash"] == class_hash and m["function_hash"] == function_hash]
    items = []
    proto_by_id = {p.id: p for p in chunk.protos()}
    for method in matches[:limit]:
        p = proto_by_id[method["proto_id"]]
        blocks, succ, code = basic_blocks(p)
        items.append({
            **method, "code_instructions": p.instruction_count,
            "child_prototypes": [child.id for child in p.children],
            "cfg_status": "STATIC_PC_EDGES_ONLY",
            "cfg_blocks": blocks,
            "calls": call_sites(p, blocks, code),
            "decompilation_status": "NOT_ATTEMPTED",
            "lua_recompile_status": "NOT_ATTEMPTED",
            "runtime_equivalence": "NOT_TESTED",
        })
    return {
        "module": module, "source_sha256": chunk.input_sha256,
        "class_hash": class_hash, "function_hash": function_hash,
        "matched_definitions": len(matches), "items": items,
        "limits": ["Only canonical root eight-opcode C->F definitions are indexed",
                   "A function-hash field read is not a resolved callee",
                   "Register provenance does not cross basic blocks",
                   "Static CFG does not prove actual execution paths",
                   "No Lua source or game runtime equivalence is claimed"],
    }


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("blua", type=Path)
    ap.add_argument("--module", required=True)
    ap.add_argument("--class-hash", required=True)
    ap.add_argument("--function-hash", required=True)
    ap.add_argument("--expected-sha256")
    ap.add_argument("--limit", type=int, default=5)
    ap.add_argument("--output", type=Path)
    args = ap.parse_args()
    data = args.blua.read_bytes()
    chunk = parse(data)
    if args.expected_sha256 and chunk.input_sha256 != args.expected_sha256:
        ap.error("input SHA-256 mismatch: refusing to mix versions")
    result = report(chunk, args.module, args.class_hash.upper(),
                    args.function_hash.upper(), args.limit)
    encoded = json.dumps(result, indent=2, sort_keys=True, ensure_ascii=False) + "\n"
    if args.output:
        args.output.parent.mkdir(parents=True, exist_ok=True)
        args.output.write_text(encoded, encoding="utf-8")
    else:
        print(encoded, end="")
    if not result["matched_definitions"]:
        ap.error("no verified canonical method definition found; not proof of absence")


if __name__ == "__main__":
    main()
