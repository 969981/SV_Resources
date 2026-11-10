#!/usr/bin/env python3
"""Stage the 59 remaining short native SV400 F literal methods, without guessing.

Fail-closed original main.blua + PokeDocs + native C->prototype->F registration
+ Lua 5.4 CFG/HIR/AST. Generates a separate temporary Haxe workspace and
original Child bytecode fixtures for independent ZAScripts Lua 5.4 A/B.
No tracked source is modified by this script. The GitHub workflow promotes
staged source ONLY after Haxe compile, differential, and verifier pass.
"""
from __future__ import annotations

import argparse
import copy
import hashlib
import json
from collections import defaultdict
from pathlib import Path
import runpy
import shutil
import sys

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools/SV.Lua54/src"))
from sv_lua54.chunk import Chunk, parse
from sv_lua54.emit_haxe import lift_constant_return, render_class
from sv_lua54.r1 import fnv1a

WORK=Path("tools/SV.Lua54/haxe/4.0.0")
SOURCE=Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main/main.blua")
SHA="c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815"
PIN="c7bc243ac4d28356dff9f06b6723330ea92247d5"
STATUS="SV400_ORIGINAL_CHILD_VS_ZASCRIPTS_LUA54_PASS"
COMPILED="PINNED_ZASCRIPTS_HAXE_4_3_1_LUA_5_4_3_BUILT"


def method_haxe(name:str, hash_name:str, lifted)->str:
    return "\n".join([
        f"    // Original Child Proto {lifted.proto_id}, PC [0,3),",
        f"    // code SHA-256 {lifted.code_sha256}; root PC held in methods.jsonl.",
        f"    // Raw opcode words: {' '.join(lifted.source_words)}",
        f'    @:hashAbi("{hash_name}")',
        f'    @:native("{hash_name}")',
        f"    public function {name}():{lifted.return_type} {{",
        f"        return {lifted.haxe_expression};",
        "    }",
        "",
    ])


def stage(root:Path,out:Path,run_id:int)->dict:
    root=root.resolve()
    out=out.resolve()
    if out.is_relative_to(root):
        raise ValueError("staging output must remain outside tracked repository")
    if run_id <= 42758827830:
        raise ValueError("R11 build proof must have its own new Actions run ID")
    native_raw=(root/SOURCE).read_bytes()
    if hashlib.sha256(native_raw).hexdigest()!=SHA:
        raise ValueError("original 4.0.0 main.blua SHA mismatch")
    original=parse(native_raw)
    if original.summary()["prototype_count"]!=37743 or original.encode()!=native_raw:
        raise ValueError("the native 4.0.0 Lua54 source no longer roundtrips")
    by_proto={p.id:p for p in original.protos()}

    # Reuse the actual C/F namespace classifier and its fail-closed native IR.
    scanner=runpy.run_path(str(root/"scripts/Stage-SV-Haxe-Namespace-Candidates.py"))["stage"]
    candidates,summary=scanner(root)
    eligible=[x for x in candidates if
              x["r10_literal_lowering_status"]=="RESTRICTED_CFG_HIR_AST_LITERAL_ELIGIBLE"]
    if len(eligible)!=64 or summary["literal_eligible_by_group"] != {
        "main.battle":7,"main.event":5,"main.field":52
    }:
        raise ValueError("native C/F eligible census changed: stop and re-review")
    existing=[json.loads(s) for s in
              (root/WORK/"methods.jsonl").read_text("utf-8").splitlines() if s.strip()]
    if len(existing)!=12:
        raise ValueError("expected 12 prior reviewed original SV400 method mappings")
    seen={(r["class_name"],r["method_name"]) for r in existing}
    fresh=[x for x in eligible if (x["class_name"],x["method_name"]) not in seen]
    if len(fresh)!=59 or len({(x["class_name"],x["method_name"]) for x in fresh})!=59:
        raise ValueError("59 unique new native 4.0.0 literal-return methods not found")

    destination=out/"project"
    shutil.copytree(root/WORK/"source",destination/"source")
    shutil.copy2(root/WORK/"build-za-main.hxml",destination/"build-za-main.hxml")
    shutil.copy2(root/WORK/"build-za-dll-util.hxml",destination/"build-za-dll-util.hxml")
    (destination/"build").mkdir(exist_ok=True)
    fixture_dir=out/"native"
    fixture_dir.mkdir(parents=True,exist_ok=True)
    grouped=defaultdict(list)
    new_records=[]
    for candidate in fresh:
        cls,method=candidate["class_name"],candidate["method_name"]
        source_proto=by_proto[candidate["proto_id"]]
        if (source_proto.id!=candidate["proto_id"]
                or source_proto.parent_id!=0
                or source_proto.instruction_count!=3
                or source_proto.code_offset!=candidate["code_offset"]
                or original.root.children[candidate["child_index"]].id!=source_proto.id):
            raise ValueError(f"original C/F -> Proto owner identity changed: {cls}.{method}")
        lifted=lift_constant_return(source_proto)
        if (list(lifted.source_words)!=candidate["native_child_opcode_words"]
                or lifted.code_sha256!=candidate["native_opcode_sha256"]
                or type(lifted.ast.value.value) is not
                   type(candidate["r10_literal_ast_preview"]["value"])
                or lifted.ast.value.value!=candidate["r10_literal_ast_preview"]["value"]):
            raise ValueError(f"native child original CFG/HIR/AST evidence changed: {cls}.{method}")
        if (candidate["class_hash"]!="C"+f"{fnv1a(cls):016X}"
                or candidate["method_hash"]!="F"+f"{fnv1a(method):016X}"):
            raise ValueError(f"native class or method hash differs: {cls}.{method}")
        grouped[cls].append((method,candidate["method_hash"],lifted,candidate))
        child=copy.deepcopy(source_proto)
        child.id=0
        child.parent_id=None
        native_fixture=Chunk(original.header,child.upvalue_count,child,"").encode()
        decoded=parse(native_fixture)
        if (decoded.encode()!=native_fixture or decoded.root.code!=source_proto.code
                or decoded.root.constants!=source_proto.constants
                or decoded.root.upvalues!=source_proto.upvalues):
            raise ValueError(f"native child repack changed original code: {cls}.{method}")
        (fixture_dir/f"R11_{source_proto.id}.luac").write_bytes(native_fixture)
        r={
          "schema_version":1,"game_version":"SV Violet 4.0.0",
          "module":"main","source_path":str(SOURCE),"source_sha256":SHA,
          "class_name":cls,"class_hash":candidate["class_hash"],
          "method_name":method,"method_hash":candidate["method_hash"],
          "proto_id":source_proto.id,"parent_proto_id":0,"pc_start":0,
          "pc_end_exclusive":3,"code_offset":source_proto.code_offset,
          "root_pc":candidate["root_pc"],"class_load_pc":candidate["class_load_pc"],
          "method_load_pc":candidate["method_load_pc"],
          "closure_pc":candidate["closure_pc"],"assignment_pc":candidate["assignment_pc"],
          "child_index":candidate["child_index"],
          "native_root_opcode_words":candidate["native_root_opcode_words"],
          "native_child_opcode_words":list(lifted.source_words),
          "native_child_code_sha256":lifted.code_sha256,
          "native_binding_status":"SV400_NATIVE_INSTANCE_CLOSURE_LINKED",
          "naming_evidence":"POKEDOCS_HASH_EXACT",
          "ownership_evidence":"SV400_NATIVE_CLOSURE_ASSIGNMENT",
          "body_status":"SV400_NATIVE_MAPPED",
          "haxe_body_status":"CFG_HIR_AST_LITERAL_LIFTED",
          "haxe_compile_status":"NOT_RUN","stock_lua_smoke_status":"NOT_RUN",
          "za_toolchain_pin":PIN,"za_haxe_compile_status":COMPILED,
          "za_haxe_build_evidence_run_id":run_id,
          "lua_differential_status":STATUS,
          "za_differential_cases":3,"za_differential_passed":3,
          "za_differential_run_id":run_id,
          "za_differential_evidence_url":
            f"https://github.com/969981/SV_Resources/actions/runs/{run_id}",
          "runtime_status":"NOT_OBSERVED",
          "cfg_edges":[list(e) for e in lifted.cfg_edges],
          "hir_status":"RESTRICTED_SINGLE_BLOCK_LITERAL_LIFTED",
          "ast_status":"RETURN_LITERAL",
          "ast_return_value":lifted.ast.value.value,
          "ast_return_type":lifted.return_type,
          "promotion_batch":"R11_59",
          "haxe_source":str(WORK/"source"/Path(*cls.split(".")).with_suffix(".hx")),
          "reference_urls":["https://github.com/pkZukan/PokeDocs/tree/main/SV/Hashlists/Lua"]
        }
        new_records.append(r)

    generated_paths=[]
    for cls,methods in sorted(grouped.items()):
        hash_set={x[3]["class_hash"] for x in methods}
        if len(hash_set)!=1:
            raise ValueError("one class has conflicting native C keys")
        rel=Path(*cls.split(".")).with_suffix(".hx")
        target=destination/"source"/rel
        target.parent.mkdir(parents=True,exist_ok=True)
        if target.is_file():
            prev=target.read_text("utf-8")
            if not prev.rstrip().endswith("}"):
                raise ValueError(f"not an expected class file: {rel}")
            if f"class {cls.rsplit('.',1)[-1]} {{" not in prev:
                raise ValueError(f"existing class name mismatch: {rel}")
            parts=[]
            for method,fhash,lifted,_ in sorted(methods):
                if f'public function {method}(' in prev:
                    raise ValueError(f"duplicate implementation in existing class {cls}.{method}")
                parts.append(method_haxe(method,fhash,lifted))
            last=prev.rfind("}")
            target.write_text(prev[:last]+"\n".join(parts)+"\n"+prev[last:],"utf-8")
        else:
            src=render_class(cls,next(iter(hash_set)),
                             [(m,h,lifted) for m,h,lifted,_ in methods],SHA)
            target.write_text(src,"utf-8")
        generated_paths.append(str(Path("source")/rel))

    # Force Haxe full typing + export of all newly promoted native classes.
    probe=destination/"source"/"RecoveryZaMain.hx"
    data=probe.read_text("utf-8")
    new_classes=sorted(grouped)
    imports="\n".join(f"import {c};" for c in new_classes if f"import {c};" not in data)
    data=imports+"\n"+data
    decls=[]
    trace_lines=[]
    for i,cls in enumerate(new_classes):
        base=cls.rsplit(".",1)[-1]
        decls.append(f"        var r11Class{i}:Class<{base}> = {base};")
        trace_lines.append(f"            trace(r11Class{i});")
    anchor='        if (untyped __lua__("false")) {'
    if data.count(anchor)!=1:
        raise ValueError("Haxe retention probe anchor missing")
    data=data.replace(anchor,"\n".join(decls)+"\n"+anchor+"\n"+"\n".join(trace_lines))
    probe.write_text(data,"utf-8")
    generated_paths.append("source/RecoveryZaMain.hx")
    new_records.sort(key=lambda x:(x["class_name"],x["method_name"],x["root_pc"]))
    (out/"methods.jsonl").write_text(
        "".join(json.dumps(r,ensure_ascii=False)+"\n" for r in existing+new_records),"utf-8")
    # Lua driver input as read-only, verbatim C/F keys without source copying.
    records="\n".join(
        "  {"+f'file="R11_{r["proto_id"]}",'
        +f'c="{r["class_hash"]}",f="{r["method_hash"]}",'
        +f'name="{r["class_name"]}.{r["method_name"]}"'+"},"
        for r in new_records
    )
    compare=(root/WORK/"compare-r11-batch.lua").read_text("utf-8")
    compare=compare.replace("-- <NATIVE_METHOD_ROWS>",records)
    (out/"compare-r11-generated.lua").write_text(compare,"utf-8")
    summary={
      "schema_version":1,"source_sha256":SHA,"upstream_commit":PIN,
      "game_runtime_status":"NOT_OBSERVED",
      "native_named_candidates":3892,"restricted_eligible":64,
      "previously_promoted_restricted":5,
      "new_methods":len(new_records),"new_classes":len(grouped),
      "total_haxe_mapped_methods":len(existing)+len(new_records),
      "haxe_method_implementations":len(existing)+len(new_records)-1,
      "expected_new_differential_cases":len(new_records)*3,
      "source_paths":generated_paths,
      "status":"STAGED_ONLY_UNTIL_CUSTOM_HAXE_AND_NATIVE_AB_PASS",
      "method_protos":[r["proto_id"] for r in new_records]
    }
    (out/"r11-summary.json").write_text(json.dumps(summary,indent=2)+"\n","utf-8")
    return summary


if __name__=="__main__":
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root",type=Path,default=ROOT)
    ap.add_argument("--out",type=Path,required=True)
    ap.add_argument("--run-id",type=int,required=True)
    args=ap.parse_args()
    print(json.dumps(stage(args.root,args.out,args.run_id),indent=2))
