#!/usr/bin/env python3
"""Read-only 4.0.0 native C→S method binder with exact opcode/register proof.

This establishes class/key → CLOSURE Proto ownership, NOT Haxe body parity.
No source BLUA is modified. A mismatched or duplicate binding fails closed.
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

SOURCES = Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release")
MANIFEST = "tools/SV.Lua54/fixtures/native_manifest.json"
TARGETS = {
    "main": (
        ("CFEA9C3BFB3FCD429", "S424E3EA0446070E7", "main.util.CompositionCamera", "CalcXFov"),
        ("C23E5342B132D5323", "S042B860498E558B2", "main.util.StrUtil", "Format"),
    ),
    "dll_util": (
        ("CB87925D1C1B918F9", "S042B860498E558B2", "dll_util.StrUtil", "Format"),
    ),
}
PATTERN = ("GETUPVAL", "LOADK", "GETTABLE", "LOADK", "CLOSURE", "SETTABLE")

def check_binding(proto, op, pc, class_hash: str, method_hash: str):
    part = op[pc:pc+6]
    if len(part) != 6 or tuple(x.name for x in part) != PATTERN:
        return None
    a = part[0].a
    if not (
        part[0].b == 0
        and part[1].a == a + 1
        and (part[2].a, part[2].b, part[2].c) == (a, a, a+1)
        and part[3].a == a+1 and part[4].a == a+2
        and (part[5].a, part[5].b, part[5].c) == (a, a+1, a+2)
    ):
        return None
    for ins, expected in ((part[1], class_hash), (part[3], method_hash)):
        if ins.bx >= len(proto.constants) or proto.constants[ins.bx].payload != expected.encode("ascii"):
            return None
    if part[4].bx >= len(proto.children):
        raise ValueError(f"invalid CLOSURE child index pc={pc+4}")
    child = proto.children[part[4].bx]
    return {
        "binding_status": "SV400_NATIVE_STATIC_CLOSURE_LINKED",
        "parent_proto_id": child.parent_id,
        "proto_id": child.id,
        "pc_start": 0,
        "pc_end_exclusive": child.instruction_count,
        "code_offset": child.code_offset,
        "root_pc": pc,
        "class_load_pc": pc+1,
        "method_load_pc": pc+3,
        "closure_pc": pc+4,
        "assignment_pc": pc+5,
        "child_index": part[4].bx,
        "native_root_opcode_words": [f"{x.word:08X}" for x in part],
        "child_params": child.num_params,
        "child_upvalues": child.upvalue_count,
        "child_instruction_count": child.instruction_count,
    }

def read_chunk(root: Path, name: str):
    src = root / SOURCES / name / f"{name}.blua"
    raw = src.read_bytes()
    manifest=json.loads((root / MANIFEST).read_text("utf-8"))
    expected=next(x for x in manifest["sources"] if x["module"]==name)
    sha=hashlib.sha256(raw).hexdigest()
    if sha != expected["sha256"] or len(raw)!=expected["bytes"]:
        raise ValueError(f"native {name} SHA/size mismatch")
    chunk=parse(raw)
    if chunk.summary()["prototype_count"]!=expected["prototype_count"] or chunk.encode()!=raw:
        raise ValueError("native byte-exact parser roundtrip mismatch")
    return chunk,expected

def details(proto):
    ops=decode(proto)
    constants=[]
    for i,k in enumerate(proto.constants):
        payload=k.payload
        if isinstance(payload,bytes):
            if k.tag in (4,20):
                value=payload.decode("utf-8",errors="backslashreplace")[:150]
            else:value=payload.hex()
        else:value=None
        constants.append({"index":i,"tag":k.tag,"value":value})
    instructions=[]
    for op in ops:
        instructions.append({"pc":op.pc,"opcode":op.name,"a":op.a,"b":op.b,
                             "c":op.c,"bx":op.bx,"k":op.k,"word":f"{op.word:08X}"})
    return {"constants":constants,"instructions":instructions,"upvalues_raw_hex":proto.upvalues.hex()}

def run(root: Path):
    out={"schema_version":1,"status":"ORIGINAL_BYTECODE_OWNERSHIP_ONLY",
         "game_version":"SV Violet 4.0.0","methods":[]}
    for module,targets in TARGETS.items():
        chunk,meta=read_chunk(root,module)
        parent=chunk.root
        ops=decode(parent)
        for class_hash,method_hash,cls,method in targets:
            candidates=[]
            # Exclude impossible LOADK locations before checking full six-op pattern.
            for i in range(len(ops)-5):
                x=ops[i+3]
                if (x.name=="LOADK" and x.bx<len(parent.constants)
                    and parent.constants[x.bx].payload==method_hash.encode("ascii")):
                    proof=check_binding(parent,ops,i,class_hash,method_hash)
                    if proof is not None:
                        candidates.append(proof)
            entry={"module":module,"class_name":cls,"method_name":method,
                   "class_hash":class_hash,"method_hash":method_hash,
                   "source_sha256":meta["sha256"],"source_path":meta["relative_source"],
                   "matching_bindings":len(candidates)}
            if len(candidates)==1:
                proof=candidates[0]
                child=next(p for p in chunk.protos() if p.id==proof["proto_id"])
                entry.update(proof)
                entry["native_body_disassembly"]=details(child)
            elif len(candidates)==0:
                entry["binding_status"]="NOT_FOUND_IN_DIRECT_ROOT_C_TO_S_PATTERN"
            else:
                entry["binding_status"]="AMBIGUOUS_MULTIPLE_MATCHES"
                entry["ambiguous_bindings"]=candidates
            out["methods"].append(entry)
    return out

if __name__=="__main__":
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root",type=Path,default=ROOT)
    ap.add_argument("--output",type=Path)
    args=ap.parse_args()
    data=run(args.root.resolve())
    if args.output:
        args.output.parent.mkdir(parents=True,exist_ok=True)
        args.output.write_text(json.dumps(data,sort_keys=True,indent=2)+"\n",encoding="utf-8")
    for m in data["methods"]:
        print(json.dumps(m,sort_keys=True))
