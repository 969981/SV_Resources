#!/usr/bin/env python3
"""R3 full-Proto752 *structural* review of native and recompiled Lua 5.4.

Compares inspectable metadata, never claims bytecode equality or runtime
equivalence. Source locations, real Game Freak variable names, parent
Upvalue cells and game-specific APIs cannot be reconstructed by luac.
"""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import sys

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT/"tools"/"SV.Lua54"/"src"))
from sv_lua54.chunk import parse

def structural(raw: bytes):
    chunk=parse(raw)
    records=list(chunk.protos())
    return {
        "sha256":hashlib.sha256(raw).hexdigest(),
        "bytes":len(raw),
        "prototypes":len(records),
        "instructions":sum(p.instruction_count for p in records),
        "root_instructions":chunk.root.instruction_count,
        "root_parameters":chunk.root.num_params,
        "root_is_vararg":chunk.root.is_vararg,
        "root_upvalues":chunk.root.upvalue_count,
        "root_children":len(chunk.root.children),
        "num_constants":sum(len(p.constants) for p in records),
        "float_constants":sum(c.tag==19 for p in records for c in p.constants),
        "with_debug":sum(bool(p.lineinfo or p.abslineinfo or p.locvars) for p in records),
        "roundtrip_exact":chunk.encode()==raw,
    }

def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--original",type=Path,required=True)
    ap.add_argument("--recompiled",type=Path,required=True)
    ap.add_argument("--output",type=Path,required=True)
    args=ap.parse_args()
    original=structural(args.original.read_bytes())
    compiled=structural(args.recompiled.read_bytes())
    if original["root_instructions"]!=2071:
        raise AssertionError("wrong full Proto752 original, expected 2071 opcode words")
    if not all((original["roundtrip_exact"],compiled["roundtrip_exact"])):
        raise AssertionError("Lua 5.4 parser reserialization failed")
    same_signature=all(original[k]==compiled[k] for k in ("root_parameters","root_is_vararg","root_upvalues"))
    report={
        "status":"ORIGINAL_AND_RECOMPILED_FULL_PROTO_STRUCTURALLY_PARSEABLE",
        "root_abi_signature_preserved":same_signature,
        "root_abi_signature_note":"Different root signature: source compiled as a Lua chunk, not yet a drop-in original Proto replacement" if not same_signature else "Root signature matches; runtime still unverified",
        "not_semantic_equivalence":True,
        "original_proto":original,
        "recompiled_source":compiled,
        "caveats":[
            "Original 4.0.0 parent Upvalue runtime cells absent from isolated Proto",
            "Original game C API / actual _ENV not supplied",
            "Instruction count or prototype tree need not be byte-identical",
            "Function behavior and in-game runtime equivalence not tested",
        ],
    }
    args.output.parent.mkdir(parents=True,exist_ok=True)
    args.output.write_text(json.dumps(report,indent=2,sort_keys=True)+"\n")
    print("Original root:",original)
    print("Recompiled:",compiled)
    print("Original->recompiled root ABI matches:",same_signature)
    print("R3 full function is structurally compiled only; behavioral parity NOT verified")

if __name__=="__main__":
    main()
