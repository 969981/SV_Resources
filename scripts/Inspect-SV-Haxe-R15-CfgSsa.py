#!/usr/bin/env python3
"""Read-only native SV400 CFG/SSA-precondition census.

The register reaching definitions and candidate PHIs are NOT proven
memory SSA or Haxe restoration, especially around CALL/SELF/SETFIELD.
"""
import argparse,hashlib,json,sys
from collections import Counter
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools/SV.Lua54/src"))
from sv_lua54.chunk import parse
from sv_lua54.r1 import direct_cf_methods,annotate_methods,read_symbols,decode
from sv_lua54.emit_haxe.cfg_ssa_diagnostic import inspect
from sv_lua54.emit_haxe.restricted import LiftFailure
MAIN=Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main/main.blua")
SHA="c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815"
PINNED={
 "main.field.action.base.IAction.Setup":(12930,160285),
 "main.field.action.base.IAutoAction.Setup":(13197,163143),
}
def run(root):
    raw=(root/MAIN).read_bytes()
    if hashlib.sha256(raw).hexdigest()!=SHA:raise ValueError("original SV400 main.blua changed")
    chunk=parse(raw)
    if chunk.encode()!=raw or chunk.summary()["prototype_count"]!=37743:
        raise ValueError("original Lua54 byte roundtrip failed")
    registrations,_=direct_cf_methods(chunk,"main")
    if len(registrations)!=18991:raise ValueError("native C/F registration census changed")
    names=annotate_methods(registrations,read_symbols(root/"tools/PokeDocs/SV/Hashlists/Lua"))
    byid={p.id:p for p in chunk.protos()}
    counts=Counter()
    rejected=Counter()
    records=[]
    pinned={}
    for row in names:
        cls,m=row["class_name_candidate"],row["function_name_candidate"]
        if (not cls or not m or
                row["class_name_evidence"]!="POKEDOCS_NAMED" or
                row["function_name_evidence"]!="POKEDOCS_NAMED" or
                not cls.startswith(("main.field.","main.battle.","main.event."))):
            continue
        counts["named_c_f_methods"]+=1
        proto=byid[row["child_proto_id"]]
        if proto.instruction_count>64 or proto.num_params>6 or proto.max_stack_size>64:
            counts["outside_bounded_diagnostic"]+=1
            continue
        ops=decode(proto)
        present={x.name for x in ops}
        if not {"SELF","CALL","TEST"}.issubset(present):
            continue
        counts["native_self_call_test_methods"]+=1
        try:
            diagnostics=inspect(proto)
        except LiftFailure as ex:
            rejected[str(ex)]+=1
            continue
        counts["diagnosed_self_call_test_methods"]+=1
        if diagnostics["phi_candidates"]:
            counts["native_register_phi_candidate_methods"]+=1
        if diagnostics["synthetic_exit_return_join"]:
            counts["synthetic_return_join_methods"]+=1
        if diagnostics["unsupported_register_effect_pcs"]:
            counts["unknown_register_semantics_methods"]+=1
        full=cls+"."+m
        record={
            "name":full,"class_hash":row["class_hash"],
            "method_hash":row["method_hash"],"proto_id":proto.id,
            "root_pc":row["root_pc"],"code_offset":proto.code_offset,
            "pc_count":proto.instruction_count,
            "upvalue_count":proto.upvalue_count,
            "basic_blocks":diagnostics["basic_blocks"],
            "phi_candidates":diagnostics["phi_candidates"],
            "synthetic_exit_return_join":diagnostics["synthetic_exit_return_join"],
            "call_sites":diagnostics["call_sites"],
            "heap_effect_barriers":diagnostics["call_or_unhandled_effect_barriers"],
            "unsupported_register_effect_pcs":diagnostics["unsupported_register_effect_pcs"],
            "haxe_status":"NOT_GENERATED_NOT_EXEC_VERIFIED",
            "memory_ssa_status":"NOT_PROVEN",
            "runtime_status":"NOT_OBSERVED",
            "native_child_code_sha256":diagnostics["code_sha256"],
        }
        if full in PINNED:
            if (proto.id,row["root_pc"])!=PINNED[full]:
                raise ValueError(f"pinned R15 native owner changed for {full}")
            pinned[full]=record
        records.append(record)
    if set(pinned)!=set(PINNED):
        raise ValueError("R15 source-proven SELF/CALL/TEST methods missing")
    chosen=sorted(records,key=lambda x:(
       -len(x["phi_candidates"]),
       -len(x["call_sites"]),x["pc_count"],x["name"]))
    return {
      "kind":"R15_NATIVE_BOUNDED_CFG_SSA_DIAGNOSTIC",
      "original_main_sha256":SHA,"original_proto_total":37743,
      "source_registered_root_C_F":18991,
      "counts":dict(counts),"rejections":dict(rejected.most_common(15)),
      "pinned_original_methods":pinned,
      "top_30_potential_phi_calls":chosen[:30],
      "not_full_register_SSA":True,"memory_ssa_status":"NOT_PROVEN",
      "Haxe_generated_by_this_script":False,
      "game_runtime_status":"NOT_OBSERVED"
    }

if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--out",type=Path,required=True)
    args=p.parse_args()
    report=run(ROOT)
    args.out.parent.mkdir(parents=True,exist_ok=True)
    args.out.write_text(json.dumps(report,indent=2,ensure_ascii=False)+"\n","utf-8")
    print(json.dumps({"counts":report["counts"],
                      "top_examples":[{"name":x["name"],"proto_id":x["proto_id"],
                                       "phi_count":len(x["phi_candidates"]),
                                       "call_sites":len(x["call_sites"])}
                                      for x in report["top_30_potential_phi_calls"][:10]],
                      "pinned_methods":list(report["pinned_original_methods"])},indent=2))
