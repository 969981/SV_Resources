#!/usr/bin/env python3
"""Stage real SV 4.0.0 C→F method Proto/PC evidence for future Haxe AST.

This deliberately emits NO .hx implementations: hash/name linkage alone is
insufficient evidence of a valid Haxe method body.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import sys
from collections import Counter
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools/SV.Lua54/src"))
from sv_lua54.chunk import parse
from sv_lua54.r1 import annotate_methods, direct_cf_methods, read_symbols, decode

NATIVE="Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main/main.blua"
SHA="c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815"
TARGETS=("main.field","main.battle","main.event")

def stage(root:Path)->tuple[list[dict],dict]:
    raw=(root/NATIVE).read_bytes()
    if hashlib.sha256(raw).hexdigest()!=SHA:
        raise ValueError("SV 4.0.0 original main.blua SHA differs")
    chunk=parse(raw)
    if chunk.summary()["prototype_count"]!=37743 or chunk.encode()!=raw:
        raise ValueError("not the verified exact SV 4.0.0 original chunk")
    native_edges,rejected=direct_cf_methods(chunk,"main")
    if len(native_edges)!=18991:
        raise ValueError(f"native C→F evidence baseline changed: {len(native_edges)}")
    names=read_symbols(root/"tools/PokeDocs/SV/Hashlists/Lua")
    annotated=annotate_methods(native_edges,names)
    native_root_ops=decode(chunk.root)
    protos={p.id:p for p in chunk.protos()}
    result=[]
    counts=Counter()
    unknown=Counter()
    for row in annotated:
        cls=row["class_name_candidate"]
        namespace=row["class_namespace_candidate"]
        group=next((p for p in TARGETS if namespace==p or
                     (namespace is not None and namespace.startswith(p+"."))),None)
        if group is None:
            continue
        # Only exact known PokeDocs names can be used for a readable Haxe class.
        if row["class_name_evidence"]!="POKEDOCS_NAMED":
            continue
        if row["function_name_evidence"]!="POKEDOCS_NAMED" or not row["function_name_candidate"]:
            unknown[group]+=1
            continue
        proto=protos[row["child_proto_id"]]
        if proto.parent_id!=0 or proto.instruction_count!=row["child_instructions"]:
            raise ValueError("root-registered Child Proto ownership mismatch")
        result.append({
            "game_version":"SV Violet 4.0.0","module":"main",
            "source_sha256":SHA,"class_name":cls,
            "class_hash":row["class_hash"],
            "method_name":row["function_name_candidate"],
            "method_hash":row["method_hash"],
            "namespace_group":group,
            "root_pc":row["root_pc"],
            "class_load_pc":row["root_pc"]+1,
            "method_load_pc":row["root_pc"]+5,
            "closure_pc":row["root_pc"]+6,
            "child_index":row["child_index"],
            "native_root_opcode_words":[f"{x.word:08X}" for x in native_root_ops[row["root_pc"]:row["root_pc"]+8]],
            "native_child_opcode_words":[f"{x.word:08X}" for x in decode(proto)],
            "assignment_pc":row["assignment_pc"],
            "proto_id":proto.id,
            "parent_proto_id":0,
            "code_offset":proto.code_offset,
            "pc_start":0,
            "pc_end_exclusive":proto.instruction_count,
            "native_opcode_sha256":hashlib.sha256(proto.code).hexdigest(),
            "num_params":proto.num_params,
            "upvalue_count":proto.upvalue_count,
            "owner_evidence":"NATIVE_LUA54_CLOSURE_SETTABLE",
            "naming_evidence":"POKEDOCS_NAMED_C_AND_F",
            "haxe_body_status":"NO_VERIFIED_AST_OR_HAXE_BODY",
            "lua_differential_status":"NOT_RUN",
            "game_runtime_status":"NOT_OBSERVED",
            "promotion_decision":"CANDIDATE_ONLY_DO_NOT_EMIT_HX",
        })
        counts[group]+=1
    result.sort(key=lambda r:(r["namespace_group"],r["class_name"],r["method_name"],r["root_pc"]))
    return result,{
        "schema_version":1,"source_sha256":SHA,
        "total_native_c_f_edges":len(native_edges),
        "named_prototype_candidates_by_group":dict(sorted(counts.items())),
        "unresolved_method_names_in_selected_groups":dict(sorted(unknown.items())),
        "total_named_candidates":len(result),
        "haxe_files_generated":0,
        "status":"NATIVE_PROTO_PC_CANDIDATES_ONLY_NO_HAXE_BODY",
        "warning":"No compiled or behavior-verified Haxe for these staged field/battle/event functions",
    }

if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=ROOT)
    p.add_argument("--output",type=Path,required=True)
    args=p.parse_args()
    root=args.root.resolve()
    dest=args.output.resolve()
    if dest.is_relative_to(root):
        raise ValueError("large stage output must remain outside the tracked repository")
    entries,summary=stage(root)
    dest.parent.mkdir(parents=True,exist_ok=True)
    with dest.open("w",encoding="utf-8") as f:
        for row in entries:f.write(json.dumps(row,sort_keys=True)+"\n")
    summary["sample_protos"]={g:[{k:x[k] for k in ("class_name","method_name","proto_id","root_pc","pc_end_exclusive")}
                                  for x in entries if x["namespace_group"]==g][:5]
                            for g in TARGETS}
    summary_file=dest.with_suffix(".summary.json")
    summary_file.write_text(json.dumps(summary,indent=2,sort_keys=True)+"\n",encoding="utf-8")
    print(json.dumps(summary,indent=2,sort_keys=True))
