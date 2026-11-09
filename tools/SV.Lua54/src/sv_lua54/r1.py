"""SV 4.0.0 Lua 5.4 R1 bytecode diagnostics and evidence graph.

This is NOT a decompiler: it preserves PC, opcode, parent capture,
SETLIST array-write ranges and exact root C->F closure assignments.
No game binary or recovered bulk source code is modified.
"""
from __future__ import annotations

from collections import Counter, defaultdict
from dataclasses import dataclass
import csv
import hashlib
from pathlib import Path
import re
import struct

from .chunk import Chunk, Proto, Lua54FormatError

OPNAMES = """MOVE LOADI LOADF LOADK LOADKX LOADFALSE LFALSESKIP LOADTRUE LOADNIL GETUPVAL SETUPVAL GETTABUP GETTABLE GETI GETFIELD SETTABUP SETTABLE SETI SETFIELD NEWTABLE SELF ADDI ADDK SUBK MULK MODK POWK DIVK IDIVK BANDK BORK BXORK SHRI SHLI ADD SUB MUL MOD POW DIV IDIV BAND BOR BXOR SHL SHR MMBIN MMBINI MMBINK UNM BNOT NOT LEN CONCAT CLOSE TBC JMP EQ LT LE EQK EQI LTI LEI GTI GEI TEST TESTSET CALL TAILCALL RETURN RETURN0 RETURN1 FORLOOP FORPREP TFORPREP TFORCALL TFORLOOP SETLIST CLOSURE VARARG VARARGPREP EXTRAARG""".split()
assert OPNAMES[78:80] == ["SETLIST", "CLOSURE"]

C_HASH = re.compile(rb"C[0-9A-F]{16}\Z")
F_HASH = re.compile(rb"F[0-9A-F]{16}\Z")
HASH_ROW = re.compile(r"^0x([A-Fa-f0-9]{16})(?:[ \t]+(\S+))?\s*$")
METHOD_PATTERN = ("GETUPVAL", "LOADK", "GETTABLE", "LOADK", "GETTABLE", "LOADK", "CLOSURE", "SETTABLE")


@dataclass(frozen=True)
class Ins:
    pc: int
    name: str
    a: int
    b: int
    c: int
    k: int
    bx: int
    ax: int
    word: int

    @property
    def sj(self) -> int:
        return self.ax - 16777215

    @property
    def sbx(self) -> int:
        return self.bx - 65535


def decode(proto: Proto) -> list[Ins]:
    result = []
    for pc, (word,) in enumerate(struct.iter_unpack("<I", proto.code)):
        op = word & 127
        if op >= len(OPNAMES):
            raise Lua54FormatError(f"unsupported opcode {op}, proto={proto.id}, pc={pc}")
        result.append(Ins(pc, OPNAMES[op], (word >> 7) & 255,
                          (word >> 16) & 255, (word >> 24) & 255,
                          (word >> 15) & 1, (word >> 15) & 131071,
                          (word >> 7) & 33554431, word))
    return result


def op_record(proto: Proto, ins: Ins) -> dict:
    return {
        "pc": ins.pc, "offset": proto.code_offset + ins.pc * 4,
        "op": ins.name, "a": ins.a, "b": ins.b, "c": ins.c, "k": ins.k,
        "bx": ins.bx, "ax": ins.ax, "sj": ins.sj if ins.name == "JMP" else None,
        "raw_word_hex": f"{ins.word:08X}",
    }


def setlist_records(proto: Proto, radius: int = 6) -> list[dict]:
    instr = decode(proto)
    result = []
    for ins in instr:
        if ins.name != "SETLIST":
            continue
        # Lua 5.4 lvm.c OP_SETLIST: last=C+n+(k ? Ax*(MAXARG_C+1):0);
        # writes R[A+i] into table array indices C+i, for i=1..B.
        extra = None
        extra_error = None
        if ins.k:
            if ins.pc + 1 >= len(instr) or instr[ins.pc + 1].name != "EXTRAARG":
                extra_error = "MISSING_EXTRAARG"
            else:
                extra = instr[ins.pc + 1].ax
        first_index = ins.c + 1 + ((extra or 0) * 256)
        item_count = ins.b if ins.b != 0 else None
        record = {
            "proto_id": proto.id,
            "pc": ins.pc,
            "byte_offset": proto.code_offset + ins.pc * 4,
            "target_register": ins.a,
            "source_register_first": ins.a + 1,
            "source_register_last": ins.a + ins.b if ins.b else None,
            "count": item_count,
            "dynamic_top": ins.b == 0,
            "array_index_first": first_index if not extra_error else None,
            "array_index_last": first_index + ins.b - 1 if ins.b and not extra_error else None,
            "extraarg": extra,
            "status": extra_error or "DECODED_SEMANTICS_ONLY",
            "not_ast_recovered": True,
            "context": [op_record(proto, x) for x in instr[max(0, ins.pc - radius):min(len(instr), ins.pc + radius + 2)]],
        }
        result.append(record)
    return result


def validate_extraarg(proto: Proto) -> list[dict]:
    ops = decode(proto)
    defects = []
    expected = set()
    for i, ins in enumerate(ops):
        required = ins.name in ("LOADKX", "NEWTABLE") or (ins.name == "SETLIST" and ins.k == 1)
        if required:
            if i + 1 >= len(ops) or ops[i + 1].name != "EXTRAARG":
                defects.append({"proto_id": proto.id, "pc": i, "code": "MISSING_EXTRAARG", "opcode": ins.name})
            else:
                expected.add(i + 1)
    for ins in ops:
        if ins.name == "EXTRAARG" and ins.pc not in expected:
            defects.append({"proto_id": proto.id, "pc": ins.pc, "code": "ORPHAN_EXTRAARG", "opcode": ins.name})
    return defects


def syntactic_edges(proto: Proto) -> tuple[list[tuple[int, int, str]], list[dict]]:
    """Conservative PC-level edges; not full SSA or proof of runtime reachability."""
    ops = decode(proto)
    edges = []
    defects = validate_extraarg(proto)
    consumed = {i + 1 for i, x in enumerate(ops[:-1])
                if (x.name in ("NEWTABLE", "LOADKX") or (x.name == "SETLIST" and x.k)) and ops[i + 1].name == "EXTRAARG"}
    comparisons = {"EQ", "LT", "LE", "EQK", "EQI", "LTI", "LEI", "GTI", "GEI", "TEST", "TESTSET"}
    for ins in ops:
        if ins.pc in consumed or ins.name == "EXTRAARG":
            continue
        pc = ins.pc
        if ins.name in ("RETURN", "RETURN0", "RETURN1", "TAILCALL"):
            nexts = []
        elif ins.name == "JMP":
            nexts = [(pc + 1 + ins.sj, "JMP")]
        elif ins.name == "LFALSESKIP":
            nexts = [(pc + 2, "SKIP")]
        elif ins.name in comparisons:
            nexts = [(pc + 1, "TEST_NEXT"), (pc + 2, "TEST_SKIP")]
        elif ins.name == "FORLOOP":
            nexts = [(pc + 1 - ins.bx, "FOR_BACK"), (pc + 1, "FOR_EXIT")]
        elif ins.name == "FORPREP":
            nexts = [(pc + 1, "FOR_ENTER"), (pc + ins.bx + 2, "FOR_SKIP")]
        elif ins.name == "TFORPREP":
            nexts = [(pc + 1 + ins.bx, "TFOR_PREP")]
        elif ins.name == "TFORLOOP":
            nexts = [(pc + 1 - ins.bx, "TFOR_BACK"), (pc + 1, "TFOR_EXIT")]
        elif ins.name in ("LOADKX", "NEWTABLE") or (ins.name == "SETLIST" and ins.k):
            nexts = [(pc + 2, "CONSUME_EXTRAARG")]
        else:
            nexts = [(pc + 1, "SEQUENTIAL")]
        for target, kind in nexts:
            if not 0 <= target < len(ops) or target in consumed:
                # Fallthrough beyond final instruction or into data must not be accepted.
                defects.append({"proto_id": proto.id, "pc": pc, "target": target,
                                "code": "BAD_EDGE_TARGET", "edge_kind": kind})
            else:
                edges.append((pc, target, kind))
    return edges, defects


def upvalue_records(chunk: Chunk) -> tuple[list[dict], list[dict]]:
    """Record closure capture *structure*, not runtime value identity.

    Instack=1 binds to register in lexical parent at closure execution time.
    Instack=0 captures parent's upvalue cell. Both require runtime resolution.
    """
    protos = list(chunk.protos())
    byid = {p.id: p for p in protos}
    sites: dict[int, list[dict]] = defaultdict(list)
    errors = []
    for parent in protos:
        for ins in decode(parent):
            if ins.name != "CLOSURE":
                continue
            if ins.bx >= len(parent.children):
                errors.append({"proto_id": parent.id, "pc": ins.pc,
                               "code": "CLOSURE_CHILD_OUT_OF_RANGE", "child_index": ins.bx})
                continue
            child = parent.children[ins.bx]
            sites[child.id].append({"parent_proto_id": parent.id,
                                     "pc": ins.pc, "byte_offset": parent.code_offset + 4*ins.pc,
                                     "closure_register": ins.a, "child_index": ins.bx})
    records = []
    for child in protos:
        if child.parent_id is None:
            for i in range(child.upvalue_count):
                b = child.upvalues[3*i:3*i+3]
                records.append({"proto_id": child.id, "upvalue_index": i,
                                "instack": b[0], "source_index": b[1], "kind": b[2],
                                "binding": "ROOT_UPVALUE_HOST_DEPENDENT", "closure_sites": []})
            continue
        parent = byid[child.parent_id]
        for i in range(child.upvalue_count):
            instack, idx, kind = child.upvalues[3*i:3*i+3]
            if instack == 1:
                binding = "PARENT_REGISTER_AT_CLOSURE"
                if idx >= parent.max_stack_size:
                    errors.append({"proto_id": child.id, "upvalue_index": i, "code": "PARENT_REGISTER_OOB"})
            elif instack == 0:
                binding = "PARENT_UPVALUE_CELL"
                if idx >= parent.upvalue_count:
                    errors.append({"proto_id": child.id, "upvalue_index": i, "code": "PARENT_UPVALUE_OOB"})
            else:
                binding = "INVALID_INSTACK_FLAG"
                errors.append({"proto_id": child.id, "upvalue_index": i, "code": binding})
            records.append({"proto_id": child.id, "parent_proto_id": parent.id,
                            "upvalue_index": i, "instack": instack, "source_index": idx,
                            "kind": kind, "binding": binding,
                            "closure_sites": sites.get(child.id, [])})
    return records, errors


def direct_cf_methods(chunk: Chunk, module: str) -> tuple[list[dict], Counter]:
    """Exactly match the eight root instructions validated in existing native analysis."""
    root = chunk.root
    constants = root.constants
    ins = decode(root)
    results = []
    stats = Counter()
    for pc in range(len(ins) - 7):
        part = ins[pc:pc+8]
        if tuple(x.name for x in part) != METHOD_PATTERN:
            continue
        if not all(0 <= x.bx < len(constants) for x in (part[1], part[3], part[5])):
            continue
        ca, mid, fa = (constants[x.bx].payload for x in (part[1], part[3], part[5]))
        if not (isinstance(ca, bytes) and C_HASH.fullmatch(ca)
                and mid == b"prototype" and isinstance(fa, bytes) and F_HASH.fullmatch(fa)):
            continue
        a = part[0].a
        if not (part[0].b == 0 and part[1].a == a+1
                and (part[2].a,part[2].b,part[2].c) == (a,a,a+1)
                and part[3].a == a+1
                and (part[4].a,part[4].b,part[4].c) == (a,a,a+1)
                and part[5].a == a+1 and part[6].a == a+2
                and (part[7].a,part[7].b,part[7].c) == (a,a+1,a+2)):
            stats["UNVERIFIED_REGISTER_PATTERN"] += 1
            continue
        child_index = part[6].bx
        if child_index >= len(root.children):
            raise Lua54FormatError(f"root CLOSURE child out of range: {module}, pc {pc}")
        child = root.children[child_index]
        results.append({"module": module, "class_hash": ca.decode(),
                        "method_hash": fa.decode(),
                        "class_registration_proto": root.id,
                        "root_pc": pc, "assignment_pc": pc+7,
                        "assignment_byte_offset": root.code_offset + 4*(pc+7),
                        "child_proto_id": child.id, "child_index": child_index,
                        "child_instructions": child.instruction_count,
                        "owner_evidence": "NATIVE_LUA54_CLOSURE_SETTABLE"})
    return results, stats


def read_symbols(folder: Path, supplement: Path | None = None) -> dict[str, dict]:
    """Return display names and provenance without ever rewriting runtime hash keys."""
    tables = {}
    for kind in "cefs":
        known = {}
        source = folder / f"lua_{kind}_hashes.txt"
        for line in source.read_text("utf-8-sig").splitlines():
            if not line.strip():
                continue
            m = HASH_ROW.fullmatch(line)
            if not m:
                raise ValueError(f"malformed PokeDocs Lua hash list: {source}")
            known[kind.upper()+m[1].upper()] = {"name": m[2], "evidence":
                "POKEDOCS_NAMED" if m[2] else "UNKNOWN"}
        tables[kind.upper()] = known
    if supplement is not None and supplement.is_file():
        with supplement.open(encoding="utf-8", newline="") as f:
            for row in csv.DictReader(f, delimiter="\t"):
                kind = row.get("kind", "").upper()
                key = kind + row.get("hash", "").removeprefix("0x").upper()
                candidate = row.get("candidate_name", "")
                if not candidate or kind not in tables or key not in tables[kind]:
                    continue
                if tables[kind][key]["name"]:
                    continue
                if f"{fnv1a(candidate):016X}" != key[1:]:
                    raise ValueError(f"candidate does not match full 64-bit FNV-1a: {key}")
                tables[kind][key] = {"name": candidate, "evidence": "HASH_EXACT_CANDIDATE"}
    return tables


def fnv1a(name: str) -> int:
    h = 0xCBF29CE484222645
    for byte in name.encode("utf-8"):
        h = ((h ^ byte) * 0x100000001B3) & 0xFFFFFFFFFFFFFFFF
    return h


def annotate_methods(edges: list[dict], symbols: dict) -> list[dict]:
    enriched = []
    for e in edges:
        c = symbols.get("C", {}).get(e["class_hash"], {"name": None, "evidence": "UNKNOWN"})
        f = symbols.get("F", {}).get(e["method_hash"], {"name": None, "evidence": "UNKNOWN"})
        enriched.append({**e, "class_name_candidate": c["name"],
                         "class_name_evidence": c["evidence"],
                         "function_name_candidate": f["name"],
                         "function_name_evidence": f["evidence"],
                         "runtime_key_preserved": True})
    return enriched
