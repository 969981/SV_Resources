#!/usr/bin/env python3
"""Inspect original SV 4.0.0 main_dynamic Proto 752 runtime requirements.

Only compact metadata and the initial register/opcode entry signature are
written.  Never exports source constants, original Lua bytecode or recovered
game Lua; this report is a feasibility gate for any later full-function A/B.
"""
import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools"/"SV.Lua54"/"src"))
from sv_lua54.chunk import parse
from sv_lua54.r1 import decode, direct_cf_methods, annotate_methods, read_symbols

REL = Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main_dynamic/main_dynamic.blua")
PIN = "ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572"

def build(root):
    native=(root/REL).read_bytes()
    sha=hashlib.sha256(native).hexdigest()
    if sha != PIN:raise RuntimeError("source SHA mismatch")
    chunk=parse(native)
    p=next(x for x in chunk.protos() if x.id==752)
    ops=decode(p)
    descendants=0
    def walk(n):
        nonlocal descendants
        for child in n.children:
            descendants+=1
            walk(child)
    walk(p)
    nodes={x.id:x for x in chunk.protos()}
    parent=nodes.get(p.parent_id)
    if parent is None:raise RuntimeError("Proto752 parent cannot be found")
    child_indices=[i for i,x in enumerate(parent.children) if x.id==p.id]
    if len(child_indices)!=1:raise RuntimeError("Proto752 parent child index ambiguous")
    index=child_indices[0]
    parent_callsites=[
        {"pc":ins.pc,"byte_offset":parent.code_offset+ins.pc*4,
         "target_register":ins.a,"child_index":ins.bx}
        for ins in decode(parent)
        if ins.name=="CLOSURE" and ins.bx==index
    ]
    if not parent_callsites:raise RuntimeError("No original parent CLOSURE site found")
    methods,_=direct_cf_methods(chunk,"main_dynamic")
    method_edges=[e for e in methods if e["child_proto_id"]==p.id]
    if (root/"tools/PokeDocs/SV/Hashlists/Lua").is_dir():
        candidates=read_symbols(
            root/"tools/PokeDocs/SV/Hashlists/Lua",
            root/"tools/PokeDocs-Supplement/SV/Hashlists/Lua/recovered.tsv",
        )
        method_edges=annotate_methods(method_edges,candidates)
    else:
        method_edges=[dict(x, class_name_candidate=None, function_name_candidate=None)
                      for x in method_edges]
    upvalues=[{"slot":i,"instack":p.upvalues[3*i],
               "parent_index":p.upvalues[3*i+1],
               "kind":p.upvalues[3*i+2]}
              for i in range(p.upvalue_count)]
    return {
        "source_sha256":sha,"module":"main_dynamic","proto_id":752,
        "instructions":p.instruction_count,
        "num_params":p.num_params,"is_vararg":bool(p.is_vararg),
        "parent_proto_id":p.parent_id,
        "parent_child_index":index,
        "parent_closure_creation_sites":parent_callsites,
        "parent_instruction_count":parent.instruction_count,
        "direct_native_method_assignments":method_edges,
        "max_stack":p.max_stack_size,
        "upvalue_count":p.upvalue_count,"upvalue_lexical_descriptors":upvalues,
        "direct_children":len(p.children),
        "descendant_prototypes":descendants,
        "opcode_histogram":dict(sorted(Counter(x.name for x in ops).items())),
        "entry_instructions":[{"pc":x.pc,"op":x.name,
            "a":x.a,"b":x.b,"c":x.c,"k":x.k}
            for x in ops[:40]],
        "warnings":[
            "Upvalue descriptors are lexical references, not captured runtime values.",
            "The original parent registration and environment have not been reconstructed.",
            "This cannot establish game API behavior, side effects or complete function parity.",
        ],
    }
def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root",type=Path,default=ROOT)
    ap.add_argument("--report",type=Path,required=True)
    a=ap.parse_args()
    d=build(a.root.resolve())
    a.report.parent.mkdir(parents=True,exist_ok=True)
    a.report.write_text(json.dumps(d,indent=2,ensure_ascii=False,sort_keys=True)+"\n","utf-8")
    print("SLR_R4_SHELL",json.dumps({k:v for k,v in d.items()
          if k in ("instructions","num_params","is_vararg","max_stack",
                   "upvalue_count","upvalue_lexical_descriptors",
                   "parent_proto_id","parent_child_index",
                   "parent_closure_creation_sites",
                   "direct_native_method_assignments",
                   "direct_children","descendant_prototypes","entry_instructions")}))
if __name__=="__main__":main()
