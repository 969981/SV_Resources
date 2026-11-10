#!/usr/bin/env python3
"""R14 evidence-only ranking of true original SV400 C/F Proto methods.

Read-only; no Haxe generated. Identify dynamic SETFIELD, two or more
table writes, and finite multi-test CFG for later exact syntax lowering.
Limits prevent a giant JSON artifact. No guess about output semantics.
"""
from __future__ import annotations
import argparse,hashlib,json,sys
from collections import Counter
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools/SV.Lua54/src"))
from sv_lua54.chunk import parse
from sv_lua54.r1 import decode,direct_cf_methods,read_symbols,annotate_methods,syntactic_edges
MAIN=Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main/main.blua")
PIN="c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815"
COMPARE={"EQ","LT","LE","EQK","EQI","LTI","LEI","GTI","GEI","TEST","TESTSET"}
WRITES={"SETFIELD","SETTABLE","SETI","SETLIST"}
def constant(p,i):
    if i>=len(p.constants):return {"invalid":i}
    c=p.constants[i]
    if c.tag in (4,20):
        b=c.payload or b""
        try:v=b.decode("utf-8")
        except UnicodeDecodeError:return {"tag":c.tag,"byte_sha256":hashlib.sha256(b).hexdigest()}
        return {"tag":c.tag,"text":v[:110]}
    return {"tag":c.tag,"value":c.value_repr()}
def analyze():
    raw=(ROOT/MAIN).read_bytes()
    if hashlib.sha256(raw).hexdigest()!=PIN:raise ValueError("original main.blua SHA changed")
    chunk=parse(raw)
    if chunk.encode()!=raw or chunk.summary()["prototype_count"]!=37743:
        raise ValueError("source parse/encode not lossless")
    cfs,_=direct_cf_methods(chunk,"main")
    if len(cfs)!=18991:raise ValueError("root C/F assignment count changed")
    names=read_symbols(ROOT/"tools/PokeDocs/SV/Hashlists/Lua")
    annotated=annotate_methods(cfs,names)
    by_id={p.id:p for p in chunk.protos()}
    known=json.loads if False else None
    import json as _json
    reviewed={(_json.loads(line)["class_name"],_json.loads(line)["method_name"])
              for line in (ROOT/"tools/SV.Lua54/haxe/4.0.0/methods.jsonl").read_text("utf-8").splitlines() if line.strip()}
    kinds=Counter();qualified=Counter();samples={"dynamic_setfield":[],"multi_write":[],"branch_multi":[]}
    seen=set()
    for r in annotated:
        cls,m=r["class_name_candidate"],r["function_name_candidate"]
        if (r["class_name_evidence"]!="POKEDOCS_NAMED" or
                r["function_name_evidence"]!="POKEDOCS_NAMED" or
                not cls or not cls.startswith(("main.field.","main.battle.","main.event.")) or
                (cls,m) in reviewed or (cls,m) in seen):
            continue
        seen.add((cls,m))
        p=by_id[r["child_proto_id"]]
        if (p.parent_id!=0 or p.upvalue_count or p.children or p.is_vararg or
                p.instruction_count>22 or p.num_params>5):
            continue
        ins=decode(p)
        opnames=[x.name for x in ins]
        writes=[x for x in ins if x.name in WRITES]
        comparisons=[x for x in ins if x.name in COMPARE]
        dy=[x for x in ins if x.name=="SETFIELD" and x.k==0]
        groups=(
          ["dynamic_setfield"] if dy else []
        )+(["multi_write"] if len(writes)>=2 else [])+(
          ["branch_multi"] if len(comparisons)>=2 else [])
        if not groups:continue
        edge,defects=syntactic_edges(p)
        if defects:continue
        for g in groups:qualified[g]+=1
        entry={
          "name":cls+"."+m,"class_hash":r["class_hash"],"method_hash":r["method_hash"],
          "proto_id":p.id,"root_pc":r["root_pc"],"child_index":r["child_index"],
          "code_offset":p.code_offset,"params":p.num_params,"upvalues":p.upvalue_count,
          "code_count":len(ins),"opnames":opnames,"words":[f"{x.word:08X}" for x in ins],
          "writes":len(writes),"conditional_tests":len(comparisons),
          "instructions":[{
             "pc":x.pc,"name":x.name,"a":x.a,"b":x.b,"c":x.c,"k":x.k,
             "sj":x.sj if x.name=="JMP" else None,
             "key":constant(p,x.b) if x.name=="SETFIELD" else
                   constant(p,x.c) if x.name=="GETFIELD" else None,
             "value":constant(p,x.c) if x.name=="SETFIELD" and x.k else None,
           } for x in ins],
          "constant_count":len(p.constants),
          "consts":[constant(p,i) for i in range(min(len(p.constants),8))]
        }
        for g in groups:
            samples[g].append(entry)
            kinds[(g,tuple(opnames))]+=1
    ordered={}
    for g in samples:
        candidates=sorted(samples[g],key=lambda x:(
            x["code_count"],x["params"],x["writes"],x["name"]))
        ordered[g]=candidates[:70]
    return {"status":"READ_ONLY_NO_SOURCE_EMITTED","source_sha256":PIN,
            "all_root_C_F":18991,"already_reviewed":len(reviewed),
            "qualified_counts":dict(qualified),
            "most_frequent_patterns":[{"family":g,"ops":list(ops),"count":v}
              for (g,ops),v in kinds.most_common(30)],
            "shortlist":ordered,"runtime_status":"NOT_OBSERVED"}
if __name__=="__main__":
    ap=argparse.ArgumentParser()
    ap.add_argument("--out",type=Path,required=True)
    a=ap.parse_args()
    res=analyze()
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(res,ensure_ascii=False,indent=2)+"\n","utf-8")
    print(json.dumps({"counts":res["qualified_counts"],
        "patterns":res["most_frequent_patterns"][:15],
        "first_candidates":{k:v[:9] for k,v in res["shortlist"].items()}},ensure_ascii=False,indent=2))
