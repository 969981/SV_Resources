#!/usr/bin/env python3
"""Stage three genuine SV400 GETFIELD/SETFIELD Haxe methods, then gate A/B.

Original main.blua + exact PokeDocs C/F root registration + Child Proto opcode
and literal constant identity are mandatory. Stage outside Git; promotion is
handled only by the CI job after 28 new field-state/metamethod comparisons,
plus the 252 previous standalone native-vs-Haxe comparisons.
"""
from __future__ import annotations
import argparse
import copy
import hashlib
import json
from pathlib import Path
import runpy
import shutil
import sys

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools/SV.Lua54/src"))
from sv_lua54.chunk import Chunk,parse
from sv_lua54.r1 import fnv1a,decode
from sv_lua54.emit_haxe.side_effects import lift_instance,haxe_method
from sv_lua54.emit_haxe.restricted import LiftFailure

WORK=Path("tools/SV.Lua54/haxe/4.0.0")
SOURCE=Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main/main.blua")
SHA="c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815"
ZA="c7bc243ac4d28356dff9f06b6723330ea92247d5"

# Human-reviewed original Root C->prototype->F and CHILD PC from R13 read-only audit.
# tuples = proto, root_pc, kind, original GETI index, native K field, A/B cases
TARGETS={
  ("main.event.base.IEventScript","get_CallFromReserve"):
      (669,24815,"self_field_get",22,"callFromReserve",9),
  ("main.event.debug.DebugAreaJump","onCreate"):
      (11176,141665,"self_field_set_true",22,"skipPlayerStuckCheck",10),
  ("main.battle.BattleResidentEffectManager","GetResidentEffectNum"):
      (5683,87331,"self_field_get",1,"length",9),
}


def child_fixture(chunk,proto):
    p=copy.deepcopy(proto)
    p.id=0
    p.parent_id=None
    result=Chunk(chunk.header,p.upvalue_count,p,"").encode()
    decoded=parse(result)
    if (decoded.encode()!=result or decoded.root.code!=proto.code
            or decoded.root.constants!=proto.constants
            or decoded.root.upvalues!=proto.upvalues):
        raise ValueError("original Lua54 child opcode/constant/upvalue changed during repack")
    return result


def stage(root:Path,out:Path,run_id:int)->dict:
    root,out=root.resolve(),out.resolve()
    if out.is_relative_to(root):
        raise ValueError("never generate original native BLUA fixtures within Git")
    if run_id<=42763034047:
        raise ValueError("R13 must have distinct evidence CI run number")
    raw=(root/SOURCE).read_bytes()
    if hashlib.sha256(raw).hexdigest()!=SHA:
        raise ValueError("original 4.0.0 source SHA changed")
    chunk=parse(raw)
    if chunk.encode()!=raw or chunk.summary()["prototype_count"]!=37743:
        raise ValueError("not an exact SV400 main.blua roundtrip")
    by_id={p.id:p for p in chunk.protos()}
    candidates,_=runpy.run_path(
        str(root/"scripts/Stage-SV-Haxe-Namespace-Candidates.py"))["stage"](root)
    matches={(r["class_name"],r["method_name"]):r for r in candidates
             if (r["class_name"],r["method_name"]) in TARGETS}
    if set(matches)!=set(TARGETS):
        raise ValueError("missing or duplicate named original C/F mapping")

    existing=[json.loads(x) for x in
              (root/WORK/"methods.jsonl").read_text("utf-8").splitlines() if x.strip()]
    if len(existing)!=74 or len([x for x in existing if x.get("promotion_batch")=="R12_GETI_SETI_LT_MOVE"])!=3:
        raise ValueError("R12 Haxe promotion must be complete before R13")
    if any((r["class_name"],r["method_name"]) in TARGETS for r in existing):
        raise ValueError("one or more R13 methods already in source manifest")
    project=out/"project"
    shutil.copytree(root/WORK/"source",project/"source")
    for name in ("build-za-main.hxml","build-za-dll-util.hxml"):
        shutil.copy2(root/WORK/name,project/name)
    (project/"build").mkdir()
    native_dir=out/"native"
    native_dir.mkdir(parents=True)
    altered=[]
    new=[]
    for (cls,name),(proto_id,root_pc,kind,slot,key,cases) in TARGETS.items():
        site=matches[(cls,name)]
        p=by_id[proto_id]
        if (site["proto_id"]!=proto_id or site["root_pc"]!=root_pc
                or site["child_index"]>=len(chunk.root.children)
                or chunk.root.children[site["child_index"]].id!=proto_id
                or p.parent_id!=0 or p.code_offset!=site["code_offset"]):
            raise ValueError(f"{cls}.{name}: source Root C/F Child ownership changed")
        if (site["class_hash"]!="C"+f"{fnv1a(cls):016X}"
                or site["method_hash"]!="F"+f"{fnv1a(name):016X}") :
            raise ValueError("class/method C/F hash drift")
        if (site["class_name"]!=cls or site["method_name"]!=name):
            raise ValueError("PokeDocs C/F naming changed")
        lifted=lift_instance(p)
        if (lifted.kind!=kind or lifted.slot!=slot
                or list(lifted.raw_words)!=site["native_child_opcode_words"]):
            raise ValueError(f"{cls}.{name}: original field-register AST changed")
        expected=(f'["{key}"]' if kind=="self_field_get" else f'["{key}"] = true;')
        if not any(expected in stmt for stmt in lifted.statements):
            raise ValueError("original UTF-8 K constant or RHS no longer matches")
        if kind=="self_field_set_true":
            if not lifted.has_table_effect or p.constants[1].tag!=17:
                raise ValueError("SETFIELD native Lua true RHS and side effect missing")
        elif lifted.has_table_effect:
            raise ValueError("unexpected read-only field side effect")

        rel=Path("source")/Path(*cls.split(".")).with_suffix(".hx")
        target=project/rel
        target.parent.mkdir(parents=True,exist_ok=True)
        emitted=haxe_method(name,site["method_hash"],lifted)
        if target.exists():
            old=target.read_text("utf-8")
            if f"public function {name}(" in old:
                raise ValueError(f"duplicate native F method: {cls}.{name}")
            pos=old.rfind("}")
            if pos<0 or f"class {cls.rsplit('.',1)[-1]} {{" not in old:
                raise ValueError("existing Haxe class text changed")
            target.write_text(old[:pos]+emitted+"\n"+old[pos:],"utf-8")
        else:
            pkg,base=cls.rsplit(".",1)
            template="\n".join([
                f"package {pkg};","",
                "/** SV400 original Child Lua54 exact named-field AST; other methods not recovered.",
                f" * main.blua SHA256 {SHA}",
                f" * Original Proto {proto_id}, Root PC {root_pc}, Key {key}",
                " */",
                "@:keep",'@:chunk("main")',
                f'@:hashAbi("{site["class_hash"]}")',
                f'@:expose("{site["class_hash"]}")',
                f'@:native("{site["class_hash"]}")',
                f"class {base} {{",emitted,"}","",
            ])
            target.write_text(template,"utf-8")
        altered.append(str(rel))
        (native_dir/f"R13_{proto_id}.luac").write_bytes(child_fixture(chunk,p))
        new.append({
            "schema_version":1,"game_version":"SV Violet 4.0.0","module":"main",
            "source_path":str(SOURCE),"source_sha256":SHA,
            "class_name":cls,"class_hash":site["class_hash"],
            "method_name":name,"method_hash":site["method_hash"],
            "proto_id":proto_id,"parent_proto_id":0,
            "root_pc":root_pc,"class_load_pc":site["class_load_pc"],
            "method_load_pc":site["method_load_pc"],"closure_pc":site["closure_pc"],
            "assignment_pc":site["assignment_pc"],"child_index":site["child_index"],
            "pc_start":0,"pc_end_exclusive":p.instruction_count,
            "code_offset":p.code_offset,
            "native_root_opcode_words":site["native_root_opcode_words"],
            "native_child_opcode_words":list(lifted.raw_words),
            "native_child_code_sha256":lifted.source_code_sha256,
            "native_binding_status":"SV400_NATIVE_INSTANCE_CLOSURE_LINKED",
            "naming_evidence":"POKEDOCS_HASH_EXACT",
            "ownership_evidence":"SV400_NATIVE_CLOSURE_ASSIGNMENT",
            "body_status":"SV400_NATIVE_MAPPED",
            "haxe_body_status":"R13_NATIVE_FIELD_AST",
            "haxe_compile_status":"NOT_RUN","stock_lua_smoke_status":"NOT_RUN",
            "za_toolchain_pin":ZA,
            "za_haxe_compile_status":"PINNED_ZASCRIPTS_HAXE_4_3_1_LUA_5_4_3_BUILT",
            "za_haxe_build_evidence_run_id":run_id,
            "lua_differential_status":"SV400_ORIGINAL_CHILD_VS_ZASCRIPTS_LUA54_PASS",
            "za_differential_cases":cases,"za_differential_passed":cases,
            "za_differential_run_id":run_id,
            "za_differential_evidence_url":f"https://github.com/969981/SV_Resources/actions/runs/{run_id}",
            "runtime_status":"NOT_OBSERVED",
            "r13_operation_kind":kind,"r13_slot":slot,
            "r13_field_key":key,
            "r13_read_index_status":(
                "INDEX_METAMETHOD_EVENT_PARITY_PASS" if kind=="self_field_get"
                else "NOT_APPLICABLE"),
            "r13_write_side_effect_status":(
                "FIELD_TABLE_SNAPSHOT_AND_NEWINDEX_EVENTS_PASS"
                if kind=="self_field_set_true" else "NOT_APPLICABLE"),
            "promotion_batch":"R13_NAMED_FIELDS",
            "haxe_source":str(WORK/rel),
            "reference_urls":["https://github.com/pkZukan/PokeDocs/tree/main/SV/Hashlists/Lua"],
        })

    # Ensure exact main Lua original child code for all 59 R11 and 3 R12
    # regression methods, never using generated Haxe as the expected oracle.
    baseline=[x for x in existing if x.get("promotion_batch") in
              ("R11_59","R12_GETI_SETI_LT_MOVE")]
    if len(baseline)!=62:
        raise ValueError("not exactly 59 R11 + 3 R12 baseline native methods")
    for row in baseline:
        p=by_id[row["proto_id"]]
        if (p.parent_id!=0 or p.code_offset!=row["code_offset"]
                or [f"{ins.word:08X}" for ins in decode(p)]!=row["native_child_opcode_words"]):
            raise ValueError("original R11/R12 Child opcode changed")
        prefix="R11" if row["promotion_batch"]=="R11_59" else "R12"
        (native_dir/f'{prefix}_{row["proto_id"]}.luac').write_bytes(child_fixture(chunk,p))
    r11=[r for r in baseline if r.get("promotion_batch")=="R11_59"]
    method_lines="\n".join(
        "  {"+f'file="R11_{r["proto_id"]}",c="{r["class_hash"]}",'
        +f'f="{r["method_hash"]}",name="{r["class_name"]}.{r["method_name"]}"'+"},"
        for r in r11)
    code=(root/WORK/"compare-r11-batch.lua").read_text("utf-8")
    (out/"compare-r11-regression.lua").write_text(
        code.replace("-- <NATIVE_METHOD_ROWS>",method_lines),"utf-8")

    probe=project/"source/RecoveryZaMain.hx"
    text=probe.read_text("utf-8")
    imports=[]
    decls=[]
    trace=[]
    for i,cls in enumerate(sorted({x[0] for x in TARGETS})):
        if f"import {cls};" not in text:
            imports.append(f"import {cls};")
        short=cls.rsplit(".",1)[-1]
        decls.append(f"        var r13Class{i}:Class<{short}> = {short};")
        trace.append(f"            trace(r13Class{i});")
    text="\n".join(imports)+"\n"+text if imports else text
    anchor='        if (untyped __lua__("false")) {'
    if text.count(anchor)!=1:
        raise ValueError("Haxe class retention probe changed")
    text=text.replace(anchor,"\n".join(decls)+"\n"+anchor+"\n"+"\n".join(trace))
    probe.write_text(text,"utf-8")
    altered.append("source/RecoveryZaMain.hx")
    (out/"methods.jsonl").write_text(
        "".join(json.dumps(r,ensure_ascii=False)+"\n" for r in existing+new),"utf-8")
    summary={
        "new_methods":len(new),"total_mappings":len(existing)+len(new),
        "implemented_bodies":len(existing)+len(new)-1,
        "new_cases":sum(x["za_differential_cases"] for x in new),
        "cumulative_cases":sum(x.get("za_differential_passed") or 0 for x in existing+new),
        "proto_ids":sorted(x["proto_id"] for x in new),
        "source_sha256":SHA,"upstream_commit":ZA,
        "source_paths":altered,"status":"STAGED_PENDING_EXECUTION",
        "game_runtime_status":"NOT_OBSERVED",
    }
    (out/"r13-summary.json").write_text(json.dumps(summary,indent=2)+"\n","utf-8")
    return summary


if __name__=="__main__":
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=ROOT)
    p.add_argument("--out",type=Path,required=True)
    p.add_argument("--run-id",type=int,required=True)
    a=p.parse_args()
    print(json.dumps(stage(a.root,a.out,a.run_id),indent=2))
