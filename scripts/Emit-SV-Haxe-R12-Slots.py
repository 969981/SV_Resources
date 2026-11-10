#!/usr/bin/env python3
"""Stage original SV400 R12 GETI, SETI, and LT/MOVE clamp Haxe for A/B.

All input method identities are pinned to original main.blua SHA, root C/F
register binding, child Proto, PC, and exact native opcode fingerprints.
Nothing is written to the tracked repository until a separate CI job
successfully compares both return values and observable table state.
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
from sv_lua54.r1 import fnv1a
from sv_lua54.emit_haxe.side_effects import lift_instance,haxe_method
from sv_lua54.emit_haxe import LiftFailure

WORK=Path("tools/SV.Lua54/haxe/4.0.0")
SOURCE=Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main/main.blua")
PIN="c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815"
ZA="c7bc243ac4d28356dff9f06b6723330ea92247d5"
# Verified direct root assignments from original 4.0.0 in the R9 candidate inventory.
TARGETS={
  ("main.battle.BattleView","GetGemEnableCount"):(6367,94058,"self_slot_get",86),
  ("main.battle.BattleView","SetGemEnableCount"):(6366,94050,"self_slot_set",86),
  ("main.event.general.ajito.DanRushAfterEvent","clamp"):(2183,45622,"min_max_clamp",None),
}


def run(root:Path,stage:Path,run_id:int):
    root,stage=root.resolve(),stage.resolve()
    if stage.is_relative_to(root):
        raise ValueError("staging is not allowed inside source repository")
    if run_id<=42761612949: raise ValueError("R12 needs its own Actions run id")
    raw=(root/SOURCE).read_bytes()
    if hashlib.sha256(raw).hexdigest()!=PIN:
        raise ValueError("original SV400 main.blua changed")
    chunk=parse(raw)
    protos={p.id:p for p in chunk.protos()}
    if chunk.summary()["prototype_count"]!=37743 or chunk.encode()!=raw:
        raise ValueError("not the lossless original SV400 Lua54 chunk")
    scanner=runpy.run_path(str(root/"scripts/Stage-SV-Haxe-Namespace-Candidates.py"))["stage"]
    rows,summary=scanner(root)
    indexed={(r["class_name"],r["method_name"]):r for r in rows
             if (r["class_name"],r["method_name"]) in TARGETS}
    if set(indexed)!=set(TARGETS):
        raise ValueError("missing one of three source-proven native C/F methods")
    baseline=[json.loads(s) for s in
              (root/WORK/"methods.jsonl").read_text("utf-8").splitlines() if s.strip()]
    if len(baseline)!=71 or {r.get("promotion_batch") for r in baseline}.isdisjoint({"R11_59"}):
        raise ValueError("R11 59-method source promotion must be complete before R12")
    if any((r["class_name"],r["method_name"]) in TARGETS for r in baseline):
        raise ValueError("R12 method already recovered")
    project=stage/"project"
    shutil.copytree(root/WORK/"source",project/"source")
    for hxml in ("build-za-main.hxml","build-za-dll-util.hxml"):
        shutil.copy2(root/WORK/hxml,project/hxml)
    (project/"build").mkdir()
    native=stage/"native"
    native.mkdir(parents=True)
    new_records=[]
    changed=[]
    for (cls,method),(pid,pc,expected_ast,expected_slot) in TARGETS.items():
        r=indexed[(cls,method)]
        if (r["proto_id"],r["root_pc"])!=(pid,pc):
            raise ValueError(f"native C/F assignment shifted for {cls}.{method}")
        if r["class_hash"]!="C"+f"{fnv1a(cls):016X}" or r["method_hash"]!="F"+f"{fnv1a(method):016X}":
            raise ValueError(f"native C/F key not PokeDocs hash exact: {cls}.{method}")
        p=protos[pid]
        if (p.parent_id!=0 or chunk.root.children[r["child_index"]].id!=pid
                or p.code_offset!=r["code_offset"]):
            raise ValueError("native child proto ownership or code offset mismatch")
        lowered=lift_instance(p)
        if (lowered.kind,lowered.slot)!=(expected_ast,expected_slot):
            raise ValueError("native AST shape or self numeric slot differs")
        if list(lowered.raw_words)!=r["native_child_opcode_words"]:
            raise ValueError("native child instruction fingerprint differs")
        rel=Path("source")/Path(*cls.split(".")).with_suffix(".hx")
        target=project/rel
        target.parent.mkdir(parents=True,exist_ok=True)
        method_src=haxe_method(method,r["method_hash"],lowered)
        if target.is_file():
            old=target.read_text("utf-8")
            if f"public function {method}(" in old:
                raise ValueError("duplicate native method already in Haxe class")
            at=old.rfind("}")
            if at<0 or f"class {cls.rsplit('.',1)[-1]} {{" not in old:
                raise ValueError("cannot safely extend existing class")
            target.write_text(old[:at]+method_src+"\n"+old[at:],"utf-8")
        else:
            package,short=cls.rsplit(".",1)
            src="\n".join([
                f"package {package};","",
                "/** R12 native SV400 method; other members are NOT recovered.",
                f" * Original main.blua SHA-256: {PIN}",
                f" * Native C class: {r['class_hash']}; original Proto/PC in methods.jsonl.",
                " */",
                "@:keep", '@:chunk("main")',
                f'@:hashAbi("{r["class_hash"]}")',
                f'@:expose("{r["class_hash"]}")',
                f'@:native("{r["class_hash"]}")',
                f"class {short} {{",method_src,"}",""
            ])
            target.write_text(src,"utf-8")
        changed.append(str(rel))
        child=copy.deepcopy(p)
        child.id=0;child.parent_id=None
        data=Chunk(chunk.header,child.upvalue_count,child,"").encode()
        rebuilt=parse(data)
        if (rebuilt.encode()!=data or rebuilt.root.code!=p.code
                or rebuilt.root.constants!=p.constants
                or rebuilt.root.upvalues!=p.upvalues):
            raise ValueError("detached native child opcode/constant/upvalue altered")
        (native/f"R12_{pid}.luac").write_bytes(data)
        new_records.append({
            "schema_version":1,"game_version":"SV Violet 4.0.0","module":"main",
            "source_path":str(SOURCE),"source_sha256":PIN,
            "class_name":cls,"class_hash":r["class_hash"],
            "method_name":method,"method_hash":r["method_hash"],
            "proto_id":pid,"parent_proto_id":0,"root_pc":pc,
            "class_load_pc":r["class_load_pc"],"method_load_pc":r["method_load_pc"],
            "closure_pc":r["closure_pc"],"assignment_pc":r["assignment_pc"],
            "child_index":r["child_index"],
            "pc_start":0,"pc_end_exclusive":p.instruction_count,
            "code_offset":p.code_offset,
            "native_root_opcode_words":r["native_root_opcode_words"],
            "native_child_opcode_words":list(lowered.raw_words),
            "native_child_code_sha256":lowered.source_code_sha256,
            "native_binding_status":"SV400_NATIVE_INSTANCE_CLOSURE_LINKED",
            "naming_evidence":"POKEDOCS_HASH_EXACT",
            "ownership_evidence":"SV400_NATIVE_CLOSURE_ASSIGNMENT",
            "body_status":"SV400_NATIVE_MAPPED",
            "haxe_body_status":"R12_NATIVE_OPERATION_AST",
            "haxe_compile_status":"NOT_RUN",
            "stock_lua_smoke_status":"NOT_RUN",
            "za_toolchain_pin":ZA,
            "za_haxe_compile_status":"PINNED_ZASCRIPTS_HAXE_4_3_1_LUA_5_4_3_BUILT",
            "za_haxe_build_evidence_run_id":run_id,
            "lua_differential_status":"SV400_ORIGINAL_CHILD_VS_ZASCRIPTS_LUA54_PASS",
            "za_differential_cases":(6 if expected_ast=="self_slot_set" else 7 if expected_ast=="min_max_clamp" else 6),
            "za_differential_passed":(6 if expected_ast=="self_slot_set" else 7 if expected_ast=="min_max_clamp" else 6),
            "za_differential_run_id":run_id,
            "za_differential_evidence_url":f"https://github.com/969981/SV_Resources/actions/runs/{run_id}",
            "runtime_status":"NOT_OBSERVED",
            "r12_operation_kind":expected_ast,"r12_slot":expected_slot,
            "r12_write_side_effect_status":
              ("TABLE_STATE_AND_METAMETHOD_DIFFERENTIAL_PASS"
               if expected_ast=="self_slot_set" else "NOT_APPLICABLE_READ_ONLY"),
            "promotion_batch":"R12_GETI_SETI_LT_MOVE",
            "haxe_source":str(WORK/rel),
            "reference_urls":["https://github.com/pkZukan/PokeDocs/tree/main/SV/Hashlists/Lua"]
        })
    # Reconstruct all 59 already-verified R11 native child fixtures, so the
    # R12 compiler must also regress them before newly staged source is pushed.
    r11=[x for x in baseline if x.get("promotion_batch")=="R11_59"]
    if len(r11)!=59:
        raise ValueError("R11 baseline requires exactly 59 proven native methods")
    for row in r11:
        proto=protos[row["proto_id"]]
        if (proto.parent_id!=0 or proto.code_offset!=row["code_offset"]
                or [f"{x.word:08X}" for x in __import__(
                   "sv_lua54.r1",fromlist=["decode"]).decode(proto)]
                    !=row["native_child_opcode_words"]):
            raise ValueError("R11 native source identity changed during R12 regression")
        child=copy.deepcopy(proto)
        child.id=0; child.parent_id=None
        source=Chunk(chunk.header,child.upvalue_count,child,"").encode()
        if parse(source).root.code!=proto.code:
            raise ValueError("R11 original regression fixture differs from original")
        (native/f'R11_{row["proto_id"]}.luac').write_bytes(source)
    regress_rows="\n".join(
        "  {"+f'file="R11_{r["proto_id"]}",'
        +f'c="{r["class_hash"]}",f="{r["method_hash"]}",'
        +f'name="{r["class_name"]}.{r["method_name"]}"'+"},"
        for r in r11
    )
    comparison=(root/WORK/"compare-r11-batch.lua").read_text("utf-8")
    (stage/"compare-r11-regression.lua").write_text(
        comparison.replace("-- <NATIVE_METHOD_ROWS>",regress_rows),"utf-8")
    probe=project/"source/RecoveryZaMain.hx"
    src=probe.read_text("utf-8")
    cls="main.event.general.ajito.DanRushAfterEvent"
    if f"import {cls};" not in src:
        src=f"import {cls};\n"+src
    anchor='        if (untyped __lua__("false")) {'
    if src.count(anchor)!=1: raise ValueError("Haxe native class retention probe anchor missing")
    src=src.replace(anchor,
        '        var r12DanRushClass:Class<DanRushAfterEvent> = DanRushAfterEvent;\n'+
        anchor+'\n            trace(r12DanRushClass);')
    probe.write_text(src,"utf-8")
    changed.append("source/RecoveryZaMain.hx")
    (stage/"methods.jsonl").write_text(
        "".join(json.dumps(x,ensure_ascii=False)+"\n" for x in baseline+new_records),"utf-8")
    result={"new_methods":len(new_records),"new_classes":1,
            "mapped_methods":len(baseline)+len(new_records),
            "expected_new_cases":19,
            "changed_source_paths":changed,
            "protos":[x["proto_id"] for x in new_records],
            "runtime_status":"NOT_OBSERVED",
            "source_sha256":PIN}
    (stage/"r12-summary.json").write_text(json.dumps(result,indent=2)+"\n","utf-8")
    return result


if __name__=="__main__":
    a=argparse.ArgumentParser(description=__doc__)
    a.add_argument("--root",type=Path,default=ROOT)
    a.add_argument("--out",type=Path,required=True)
    a.add_argument("--run-id",type=int,required=True)
    opts=a.parse_args()
    print(json.dumps(run(opts.root,opts.out,opts.run_id),indent=2))
