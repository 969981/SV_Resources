#!/usr/bin/env python3
"""Fail-closed, bounded Lua AST emitter for native SV main_dynamic Proto 752.

Only emits the verified PC 649..665 *pure table* region.  It reproduces
native math opcode ordering and float constant tags, leaving Lua 5.4
metamethod fallback behavior to native Lua operators.

This tool does NOT patch unluac-rs, decompile Proto 752, or reconstruct
external game runtime state. Generated source stays in a temp directory.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import math
import struct
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.chunk import parse
from sv_lua54.r1 import decode
from sv_lua54.ownership import trace_owner

ORIGINAL = Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main_dynamic/main_dynamic.blua")
PIN = "ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572"
EXPECTED_OPS = [
    "NEWTABLE", "EXTRAARG",
    "MULK", "MMBINK", "ADD", "MMBIN",
    "MULK", "MMBINK", "ADD", "MMBIN",
    "ADDK", "MMBINK", "MULK", "MMBINK",
    "ADD", "MMBIN", "SETLIST"
]


def float_const(proto, index: int) -> str:
    c = proto.constants[index]
    if c.tag != 19 or c.payload is None or len(c.payload) != 8:
        raise ValueError(f"constant K{index} is not a native 64-bit FLOAT")
    x = struct.unpack("<d", c.payload)[0]
    if not math.isfinite(x):
        raise ValueError(f"non-finite float K{index} not supported by safe emitter")
    text = repr(x)  # Lua 5.4 3.0 remains floating, not integer 3
    if x == 3.0 and index == 117:
        return text
    if x == 20.0 and index == 118:
        return text
    raise ValueError(f"unexpected original float constant K{index}={text}")


def emit_from_native(data: bytes) -> tuple[str, dict]:
    sha = hashlib.sha256(data).hexdigest()
    if sha != PIN:
        raise ValueError("native SHA differs")
    chunk = parse(data)
    proto = next(p for p in chunk.protos() if p.id == 752)
    instructions = decode(proto)[649:666]
    if [o.name for o in instructions] != EXPECTED_OPS:
        raise ValueError("native opcodes have changed; refuse unsafe AST output")
    owner = trace_owner(proto, 665)
    if owner["producer_pc"] != 649 or owner["events"] or owner["control_flow_barriers"]["region_incoming_edges"]:
        raise ValueError("original owner trace has changed")
    if owner["control_flow_barriers"]["candidate_clobber_or_escape"] or owner["control_flow_barriers"]["closure_capture_of_table_pcs"]:
        raise ValueError("native alias/escape/capture proof barrier")
    if owner["control_flow_barriers"]["implicit_metamethod_skip_pcs"] != [
        652, 654, 656, 658, 660, 662, 664
    ]:
        raise ValueError("unexpected math metamethod fallback")
    known = {8, 9, 10, 11, 12, 13}
    defined = set()
    out = ["-- Bounded original-PC-derived Lua. No whole-game source code.",
           "return function(r8, r9, r10, r11, r12, r13)"]
    mapping = []
    last_arithmetic = None
    for i in instructions:
        pc = i.pc
        note = {"pc": pc, "byte_offset": proto.code_offset + pc * 4,
                "opcode": i.name}
        if i.name == "NEWTABLE":
            if pc != 649 or i.a != 14 or i.c != 3 or i.k:
                raise ValueError("unexpected table producer")
            out.append("  local r14 = {}")
            known.add(14)
            note["ast_kind"] = "NEW_TABLE"
        elif i.name == "EXTRAARG":
            if pc != 650 or i.ax != 0:
                raise ValueError("unexpected NEWTABLE extra argument")
            note["ast_kind"] = "NATIVE_TABLE_CAPACITY_ONLY"
        elif i.name in ("MULK", "ADDK", "ADD"):
            if i.a not in (15, 16, 17):
                raise ValueError(f"unexpected arithmetic destination R{i.a} at PC {pc}")
            if i.b not in known:
                raise ValueError(f"source R{i.b} not initialized before PC {pc}")
            if i.name == "ADD":
                if i.c not in known:
                    raise ValueError(f"right-hand register R{i.c} not initialized")
                expression = f"r{i.b} + r{i.c}"
            else:
                expression = f"r{i.b} {('*' if i.name == 'MULK' else '+')} {float_const(proto, i.c)}"
            declaration = "local " if i.a not in known else ""
            out.append(f"  {declaration}r{i.a} = {expression}")
            known.add(i.a)
            defined.add(i.a)
            note["ast_kind"] = "SCALAR_ASSIGN"
            last_arithmetic = i.name
        elif i.name in ("MMBINK", "MMBIN"):
            if not (last_arithmetic in ("MULK", "ADDK") and i.name == "MMBINK"
                    or last_arithmetic == "ADD" and i.name == "MMBIN"):
                raise ValueError(f"unsupported metamethod fallback at PC {pc}")
            note["ast_kind"] = "LUA_OPERATOR_HANDLES_METAMETHOD"
            last_arithmetic = None
        elif i.name == "SETLIST":
            if pc != 665 or (i.a, i.b, i.c, i.k) != (14, 3, 0, 0):
                raise ValueError("unexpected table assignment shape")
            if not {15, 16, 17} <= defined:
                raise ValueError("table batch value registers not all defined")
            out.append("  r14[1], r14[2], r14[3] = r15, r16, r17")
            note["ast_kind"] = "FIXED_RAW_ARRAY_BATCH"
        else:
            raise ValueError(f"unsupported opcode {i.name} at PC {pc}")
        mapping.append(note)
    out.append("  return r14")
    out.append("end")
    lua = "\n".join(out) + "\n"
    if (float_const(proto, 117), float_const(proto, 118)) != ("3.0", "20.0"):
        raise AssertionError("floating constants type changed")
    report = {
        "schema_version": 1,
        "status": "REGION_AST_EMITTED_NOT_FULL_FUNCTION",
        "module": "main_dynamic",
        "proto_id": 752,
        "source_sha256": sha,
        "original_pc_start": 649,
        "original_pc_end": 665,
        "original_word_count": len(instructions),
        "native_newtable_pc": owner["producer_pc"],
        "native_setlist_pc": owner["setlist_pc"],
        "native_mm_fallback_pc_count": 7,
        "float_constant_tags": {"K117": "3.0", "K118": "20.0"},
        "emitted_lua_sha256": hashlib.sha256(lua.encode("utf-8")).hexdigest(),
        "emitted_lua_line_count": len(out),
        "source_map": mapping,
        "limitation": "Bounded region only: without full game function, alias/SSA proof and real game API equivalence remain unverified.",
    }
    return lua, report


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=ROOT)
    parser.add_argument("--out-lua", type=Path, required=True)
    parser.add_argument("--report", type=Path)
    args = parser.parse_args()
    data = (args.root.resolve() / ORIGINAL).read_bytes()
    lua, report = emit_from_native(data)
    output = args.out_lua.resolve()
    if str(output).startswith(str(args.root.resolve() / "Unpack")):
        raise ValueError("never write generated game Lua into source ROM folder")
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(lua, encoding="utf-8")
    if args.report:
        dst = args.report if args.report.is_absolute() else args.root.resolve() / args.report
        dst.parent.mkdir(parents=True, exist_ok=True)
        dst.write_text(json.dumps(report, ensure_ascii=False, sort_keys=True, indent=2)+"\n", "utf-8")
    print(f"Generated bounded Lua AST with {len(report['source_map'])} original PC entries "
          f"and SHA-256 {report['emitted_lua_sha256']}.")
    print("Original game BLUA unchanged; generated Lua is ephemeral.")


if __name__ == "__main__":
    main()
