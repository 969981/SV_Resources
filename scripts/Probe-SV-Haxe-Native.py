#!/usr/bin/env python3
"""Read-only native BLUA opcode/constant probe for specific Haxe symbol pairs.

This prints bounded *candidate* windows, never promotes a method without
register/closure-ownership proof, and never writes to original bytecode.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools/SV.Lua54/src"))
from sv_lua54.chunk import parse
from sv_lua54.r1 import decode

SOURCE = Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release")
MANIFEST = ROOT / "tools/SV.Lua54/fixtures/native_manifest.json"
TARGETS = {
    "main": [
        ("CFEA9C3BFB3FCD429", "S424E3EA0446070E7", "main.util.CompositionCamera.CalcXFov"),
        ("C23E5342B132D5323", "S042B860498E558B2", "main.util.StrUtil.Format"),
    ],
    "dll_util": [
        ("CB87925D1C1B918F9", "S042B860498E558B2", "dll_util.StrUtil.Format"),
    ],
}

def load_module(name, root):
    recorded = next(x for x in json.loads((root / "tools/SV.Lua54/fixtures/native_manifest.json").read_text())["sources"] if x["module"] == name)
    source = root / SOURCE / name / f"{name}.blua"
    raw = source.read_bytes()
    sha = hashlib.sha256(raw).hexdigest()
    if sha != recorded["sha256"]:
        raise ValueError(f"{name}: native source SHA changed")
    chunk = parse(raw)
    if chunk.summary()["prototype_count"] != recorded["prototype_count"]:
        raise ValueError(f"{name}: native prototype count changed")
    return chunk, sha

def summarize_op(op, proto):
    row = {"pc":op.pc, "opcode":op.name, "a":op.a,
           "b":op.b, "c":op.c, "bx":op.bx, "word":f"{op.word:08X}"}
    if op.name == "LOADK" and 0 <= op.bx < len(proto.constants):
        item = proto.constants[op.bx].payload
        if isinstance(item, bytes):
            row["string"] = item.decode("utf-8", errors="backslashreplace")[:100]
    elif op.name == "CLOSURE" and 0 <= op.bx < len(proto.children):
        row["child_proto_id"] = proto.children[op.bx].id
        row["child_code_offset"] = proto.children[op.bx].code_offset
        row["child_code_length"] = proto.children[op.bx].instruction_count
    return row

def probe_pair(root, op, ckey, skey, name):
    cindices = {i for i,k in enumerate(root.constants) if k.payload == ckey.encode()}
    sindices = {i for i,k in enumerate(root.constants) if k.payload == skey.encode()}
    cpcs = [x.pc for x in op if x.name == "LOADK" and x.bx in cindices]
    spcs = [x.pc for x in op if x.name == "LOADK" and x.bx in sindices]
    near = []
    for pc in spcs:
        enclosing = [i for i in cpcs if abs(i-pc) <= 20]
        # Capture all nearby S occurrences, including those without class nearby.
        near.append({"method_load_pc":pc, "class_load_pcs_near_20":enclosing[:25],
                     "native_instructions":[summarize_op(x, root)
                         for x in op[max(0,pc-8):min(len(op),pc+9)]]})
    return {"qualified_name":name,"class_hash":ckey,"member_hash":skey,
            "root_class_constant_index":sorted(cindices),
            "root_member_constant_index":sorted(sindices),
            "root_class_loadk_count":len(cpcs),"root_member_loadk_count":len(spcs),
            "root_class_loadk_sites":cpcs[:60],
            "root_member_loadk_sites":spcs[:60],
            "windows_near_member_load":near[:12],
            "result_status":"CANDIDATE_ONLY_NOT_LINKED"}

def run(root):
    reports=[]
    for module, targets in TARGETS.items():
        chunk, sha=load_module(module,root)
        op=decode(chunk.root)
        for klass,member,label in targets:
            row=probe_pair(chunk.root,op,klass,member,label)
            row["module"]=module
            row["source_sha256"]=sha
            row["root_code_offset"]=chunk.root.code_offset
            row["root_instructions"]=chunk.root.instruction_count
            reports.append(row)
    return {"schema_version":1,"status":"TARGETED_NATIVE_OPCODE_CANDIDATES_NOT_PROVEN",
            "sources":"original SV 4.0.0 BLUA; read-only SHA checked",
            "targets":reports}

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root",type=Path,default=ROOT)
    parser.add_argument("--output",type=Path,default=None)
    args=parser.parse_args()
    result=run(args.root.resolve())
    if args.output:
        args.output.parent.mkdir(parents=True,exist_ok=True)
        args.output.write_text(json.dumps(result,sort_keys=True,indent=2)+"\n")
    for row in result["targets"]:
        # Short stdout so Actions logs can be inspected without publishing full game data.
        print(json.dumps(row,sort_keys=True))
    return 0
if __name__ == "__main__":
    raise SystemExit(main())
