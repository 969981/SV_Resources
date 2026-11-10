#!/usr/bin/env python3
"""Emit only strictly provenance-checked SV400 literal-return F methods.

Reads original 4.0.0 main.blua and PokeDocs C/F, constructs
Lua5.4 CFG -> typed HIR -> restricted Return AST -> Haxe.
Output is to external staging path; --verify-repo-source requires byte-exact
match against curated committed .hx files before any differential is allowed.
"""
from __future__ import annotations

import argparse
import copy
import hashlib
import json
from collections import defaultdict
from pathlib import Path
import sys

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools/SV.Lua54/src"))
from sv_lua54.chunk import Chunk, parse
from sv_lua54.r1 import annotate_methods, direct_cf_methods, fnv1a, read_symbols
from sv_lua54.emit_haxe import LiftFailure, lift_constant_return, render_class

REL="Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main/main.blua"
PIN="c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815"
# Promoted only after direct bytecode layout and PokeDocs evidence were reviewed.
# (class, method): (exact Proto ID, original root registration PC, literal)
TARGETS={
 ("main.field.behaviour.DanPartnerPokemon","GetBehaviourType"):(14216,173130,2),
 ("main.field.behaviour.DanPokemonBehavior","GetBehaviourType"):(14223,173264,3),
 ("main.battle.BattleView","GetIntervalAddPopup"):(6349,93938,300),
 ("main.event.base.BaseScenarioEvent","checkStartCondition"):(689,25082,True),
 ("main.event.base.BaseScenarioEvent","isImportant"):(699,25162,False),
}


def emit(root:Path,out:Path,verify_repo_source:bool=False,native_output:Path|None=None)->dict:
    root=root.resolve()
    out=out.resolve()
    if out.is_relative_to(root):
        raise ValueError("temporary emitted files must not be generated in repository")
    if native_output is not None:
        native_output=native_output.resolve()
        if native_output.is_relative_to(root):
            raise ValueError("original native fixtures must remain outside repository")
        native_output.mkdir(parents=True,exist_ok=True)
    raw=(root/REL).read_bytes()
    if hashlib.sha256(raw).hexdigest()!=PIN:
        raise ValueError("original 4.0.0 main.blua SHA mismatch")
    original=parse(raw)
    if original.summary()["prototype_count"]!=37743 or original.encode()!=raw:
        raise ValueError("input is not a losslessly roundtrippable original 4.0.0 chunk")
    by_id={p.id:p for p in original.protos()}
    edges,_=direct_cf_methods(original,"main")
    if len(edges)!=18991:
        raise ValueError("original C->F instruction ownership census changed")
    symbols=read_symbols(root/"tools/PokeDocs/SV/Hashlists/Lua")
    anno=annotate_methods(edges,symbols)
    selected={(r["class_name_candidate"],r["function_name_candidate"]):r
              for r in anno
              if (r["class_name_candidate"],r["function_name_candidate"]) in TARGETS}
    if set(selected)!=set(TARGETS):
        raise ValueError("missing or ambiguous original registered F method")
    counts={k:0 for k in TARGETS}
    for r in anno:
        k=(r["class_name_candidate"],r["function_name_candidate"])
        if k in counts:counts[k]+=1
    if any(c!=1 for c in counts.values()):
        raise ValueError("native C/F assignment not unique for curated method")
    out.mkdir(parents=True,exist_ok=True)
    grouped=defaultdict(list)
    details=[]
    for (cls,method),(expected_proto,root_pc,literal) in TARGETS.items():
        link=selected[(cls,method)]
        if (link["child_proto_id"]!=expected_proto or link["root_pc"]!=root_pc
                or link["class_name_evidence"]!="POKEDOCS_NAMED"
                or link["function_name_evidence"]!="POKEDOCS_NAMED"):
            raise ValueError(f"{cls}.{method}: provenance mismatch")
        if (link["class_hash"] != "C"+f"{fnv1a(cls):016X}"
                or link["method_hash"] != "F"+f"{fnv1a(method):016X}"):
            raise ValueError("named method FNV identity mismatch")
        proto=by_id[expected_proto]
        if proto.parent_id!=0 or original.root.children[link["child_index"]].id!=proto.id:
            raise ValueError("Closure child identity mismatch")
        lifted=lift_constant_return(proto)
        if type(lifted.ast.value.value) is not type(literal) or lifted.ast.value.value!=literal:
            raise ValueError(f"{cls}.{method}: original constant AST differs from reviewed expected")
        grouped[(cls,link["class_hash"])].append((method,link["method_hash"],lifted))
        if native_output is not None:
            child=copy.deepcopy(proto)
            child.id=0
            child.parent_id=None
            fixture=Chunk(original.header,child.upvalue_count,child,"").encode()
            check=parse(fixture)
            if (check.encode()!=fixture or check.root.code!=proto.code
                    or check.root.constants!=proto.constants
                    or check.root.upvalues!=proto.upvalues):
                raise ValueError("original child payload changed while repacking")
            (native_output/f"R10_{proto.id}.luac").write_bytes(fixture)
        details.append({
            "class_name":cls,"method_name":method,
            "class_hash":link["class_hash"],"method_hash":link["method_hash"],
            "source_sha256":PIN,"module":"main",
            "proto_id":proto.id,"parent_proto_id":proto.parent_id,
            "root_pc":root_pc,"closure_pc":root_pc+6,
            "assignment_pc":root_pc+7,"child_index":link["child_index"],
            "code_offset":proto.code_offset,
            "pc_start":0,"pc_end_exclusive":proto.instruction_count,
            "native_root_registration":"C_PROTOTYPE_F_REGISTER_LINKED",
            "native_child_opcode_words":list(lifted.source_words),
            "native_child_code_sha256":lifted.code_sha256,
            "cfg_edges":list(lifted.cfg_edges),"hir":list(lifted.hir),
            "ast":{"kind":"return_literal","value":lifted.ast.value.value,
                   "type":lifted.return_type,"return_pc":lifted.ast.return_pc},
            "upvalue_count":proto.upvalue_count,
            "haxe_body_status":"CFG_HIR_AST_LITERAL_LIFTED",
            "compile_status":"NOT_RUN_UNTIL_CI",
            "lua_differential_status":"NOT_RUN_UNTIL_CI",
            "runtime_status":"NOT_OBSERVED",
        })
    generated=[]
    for (cls,hash_name),methods in grouped.items():
        rel=Path("source")/Path(*cls.split(".")).with_suffix(".hx")
        src=render_class(cls,hash_name,methods,PIN)
        path=out/rel
        path.parent.mkdir(parents=True,exist_ok=True)
        path.write_text(src,"utf-8")
        if verify_repo_source:
            tracked=root/"tools/SV.Lua54/haxe/4.0.0"/rel
            if not tracked.is_file():
                raise ValueError(f"missing committed R10 Haxe source: {rel}")
            actual=tracked.read_text("utf-8")
            # An original R10 class may subsequently gain independently proven
            # R11/R12 members; require its entire R10 deterministic prefix to
            # remain byte-identical, while permitting append-only class methods.
            original_prefix=src.rsplit("\n}",1)[0]
            if not (actual.startswith(original_prefix)
                    and actual.rstrip().endswith("}")):
                raise ValueError(f"original R10 method text diverged from native AST: {rel}")
        generated.append(str(rel))
    result={"schema_version":1,"source_sha256":PIN,
            "class_count":len(generated),"method_count":len(details),
            "classes":generated,"methods":details,
            "status":"SOURCE_GENERATION_FROM_RESTRICTED_VERIFIED_LUA54_AST",
            "game_runtime_status":"NOT_OBSERVED"}
    (out/"r10-manifest.json").write_text(json.dumps(result,indent=2,sort_keys=True)+"\n","utf-8")
    return result


if __name__=="__main__":
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root",type=Path,default=ROOT)
    ap.add_argument("--output",type=Path,required=True)
    ap.add_argument("--verify-repo-source",action="store_true")
    ap.add_argument("--native-output",type=Path,help="temporary directory for untouched native Child code fixtures")
    opts=ap.parse_args()
    result=emit(opts.root,opts.output,opts.verify_repo_source,opts.native_output)
    print(json.dumps({"status":result["status"],"source_sha256":PIN,
                      "method_count":result["method_count"],"class_count":result["class_count"],
                      "methods":[{"name":r["class_name"]+"."+r["method_name"],
                                  "proto_id":r["proto_id"],"literal":r["ast"]["value"]}
                                 for r in result["methods"]]},indent=2))
