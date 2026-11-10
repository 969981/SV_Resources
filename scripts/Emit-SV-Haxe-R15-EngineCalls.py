#!/usr/bin/env python3
"""Evidence-gated R15 source staging for two original SELF CALL TEST methods.

Original main.blua, PokeDocs class/member identities, closure Root PC,
Proto/PC, raw opcode sequence, constants and CFG/HIR must match. No tracked
.hx or original ROM data changes until independent ZAScripts Lua5.4 A/B
including mock host call traces, table alias/side-effect and CFG/SSA regression.
"""
from __future__ import annotations
import argparse,copy,hashlib,json,runpy,shutil,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools/SV.Lua54/src"))
from sv_lua54.chunk import Chunk,parse
from sv_lua54.r1 import decode,fnv1a
from sv_lua54.emit_haxe.r15_calls_ssa import lift_setup as lift, emit_setup as emit, CALL_SITES, RETURN_PHI
WORK=Path("tools/SV.Lua54/haxe/4.0.0")
SOURCE=Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main/main.blua")
SHA="c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815"
ZA="c7bc243ac4d28356dff9f06b6723330ea92247d5"

# (proto ID, root registration PC, literal opcode fingerprint, AST kind, cases)
TARGETS={
  ("main.field.action.base.IAction","Setup"):(
    12930,160285,["00008094","020200C4","000000C2","800003B8",
       "0A00008D","0C00010D","02010092","02028194",
       "0301028E","010301C4","00000187","000201C8",
       "00000085","000200C8","000100C7"],"SELF_CALL_TEST_CFG_SSA_RETURN_PHI",14),
  ("main.field.action.base.IAutoAction","Setup"):(
    13197,163143,["00008094","020200C4","000000C2","800003B8",
       "0200008D","0400010D","02010092","02028194",
       "0301028E","010301C4","00000187","000201C8",
       "00000085","000200C8","000100C7"],"SELF_CALL_TEST_CFG_SSA_RETURN_PHI",14),
}

def fixture(chunk,proto):
    child=copy.deepcopy(proto)
    child.id=0;child.parent_id=None
    raw=Chunk(chunk.header,child.upvalue_count,child,"").encode()
    clean=parse(raw)
    if (clean.encode()!=raw or clean.root.code!=proto.code or
            clean.root.constants!=proto.constants or
            clean.root.upvalues!=proto.upvalues):
        raise ValueError("original native child code/constants/upvalues modified")
    return raw

def stage(root:Path,out:Path,run_id:int)->dict:
    root,out=root.resolve(),out.resolve()
    if out.is_relative_to(root):raise ValueError("no staging original game bytes inside Git")
    if run_id<=42767997155:raise ValueError("R15 proof requires distinct workflow run")
    raw=(root/SOURCE).read_bytes()
    if hashlib.sha256(raw).hexdigest()!=SHA:raise ValueError("original game 4.0.0 source has changed")
    chunk=parse(raw)
    if chunk.summary()["prototype_count"]!=37743 or chunk.encode()!=raw:
        raise ValueError("not losslessly parsed original main.blua")
    lookup={p.id:p for p in chunk.protos()}
    registered,_=runpy.run_path(str(root/"scripts/Stage-SV-Haxe-Namespace-Candidates.py"))["stage"](root)
    selected={(r["class_name"],r["method_name"]):r for r in registered
              if (r["class_name"],r["method_name"]) in TARGETS}
    if set(selected)!=set(TARGETS):
        raise ValueError("two original named 4.0.0 methods could not be linked uniquely")
    old=[json.loads(line) for line in (root/WORK/"methods.jsonl").read_text("utf-8").splitlines()
         if line.strip()]
    if len(old)!=81 or sum(x.get("promotion_batch")=="R14_DYNAMIC_MULTIWRITE_BRANCH" for x in old)!=4:
        raise ValueError("R14 source promotions not complete")
    if any((x["class_name"],x["method_name"]) in TARGETS for x in old):
        raise ValueError("duplicate R15 C/F method; staging refused")

    project=out/"project"
    shutil.copytree(root/WORK/"source",project/"source")
    for n in ("build-za-main.hxml","build-za-dll-util.hxml"):
        shutil.copy2(root/WORK/n,project/n)
    (project/"build").mkdir()
    fixture_dir=out/"native"
    fixture_dir.mkdir(parents=True)
    altered=[]
    fresh=[]
    for (cls,method),(pid,pc,fingerprint,kind,cases) in TARGETS.items():
        row=selected[(cls,method)]
        proto=lookup[pid]
        if (row["proto_id"]!=pid or row["root_pc"]!=pc or
                row["child_index"]>=len(chunk.root.children) or
                chunk.root.children[row["child_index"]].id!=pid or
                proto.parent_id!=0 or proto.code_offset!=row["code_offset"]):
            raise ValueError(f"{cls}.{method}: original root closure source no longer matches")
        if row["class_hash"]!="C"+f"{fnv1a(cls):016X}" or row["method_hash"]!="F"+f"{fnv1a(method):016X}":
            raise ValueError("native C/F keys differ from full FNV-1a names")
        ast=lift(proto,cls+'.'+method)
        if (ast.kind!=kind or list(ast.words)!=fingerprint or
                list(ast.words)!=row["native_child_opcode_words"]):
            raise ValueError(f"{cls}.{method}: original native CFG/opcode fingerprint changed")
        rel=Path("source")/Path(*cls.split(".")).with_suffix(".hx")
        target=project/rel
        target.parent.mkdir(parents=True,exist_ok=True)
        snippet=emit(method,row["method_hash"],ast)
        if target.is_file():
            current=target.read_text("utf-8")
            if f"public function {method}(" in current:raise ValueError("original class already has method")
            pos=current.rfind("}")
            if pos<0 or f"class {cls.rsplit('.',1)[-1]} {{" not in current:
                raise ValueError("unsafe existing Haxe class append")
            target.write_text(current[:pos]+snippet+"\n"+current[pos:],"utf-8")
        else:
            pkg,short=cls.rsplit(".",1)
            source="\n".join([
               f"package {pkg};","",
               "/** Evidence-gated SV400 original native F method, other members not recovered.",
               f" * Source main.blua SHA256 {SHA}; Child Proto {pid}; Root PC {pc}.",
               " */",
               "@:keep",'@:chunk("main")',
               f'@:hashAbi("{row["class_hash"]}")',
               f'@:expose("{row["class_hash"]}")',
               f'@:native("{row["class_hash"]}")',
               f"class {short} {{",
               snippet,"}","",
            ])
            target.write_text(source,"utf-8")
        altered.append(str(rel))
        (fixture_dir/f"R15_{pid}.luac").write_bytes(fixture(chunk,proto))
        fresh.append({
          "schema_version":1,"game_version":"SV Violet 4.0.0","module":"main",
          "source_path":str(SOURCE),"source_sha256":SHA,
          "class_name":cls,"class_hash":row["class_hash"],
          "method_name":method,"method_hash":row["method_hash"],
          "proto_id":pid,"parent_proto_id":0,
          "root_pc":pc,"class_load_pc":row["class_load_pc"],
          "method_load_pc":row["method_load_pc"],
          "closure_pc":row["closure_pc"],"assignment_pc":row["assignment_pc"],
          "child_index":row["child_index"],"pc_start":0,
          "pc_end_exclusive":proto.instruction_count,"code_offset":proto.code_offset,
          "native_root_opcode_words":row["native_root_opcode_words"],
          "native_child_opcode_words":list(ast.words),
          "native_child_code_sha256":ast.sha,
          "native_binding_status":"SV400_NATIVE_INSTANCE_CLOSURE_LINKED",
          "naming_evidence":"POKEDOCS_HASH_EXACT",
          "ownership_evidence":"SV400_NATIVE_CLOSURE_ASSIGNMENT",
          "body_status":"SV400_NATIVE_MAPPED",
          "haxe_body_status":"R15_NATIVE_SELF_CALL_SSA",
          "haxe_compile_status":"NOT_RUN","stock_lua_smoke_status":"NOT_RUN",
          "za_toolchain_pin":ZA,
          "za_haxe_compile_status":"PINNED_ZASCRIPTS_HAXE_4_3_1_LUA_5_4_3_BUILT",
          "za_haxe_build_evidence_run_id":run_id,
          "lua_differential_status":"SV400_ORIGINAL_CHILD_VS_ZASCRIPTS_LUA54_PASS",
          "za_differential_cases":cases,"za_differential_passed":cases,
          "za_differential_run_id":run_id,
          "za_differential_evidence_url":
             f"https://github.com/969981/SV_Resources/actions/runs/{run_id}",
          "runtime_status":"NOT_OBSERVED",
          "r15_kind":ast.kind,
          "r15_ssa":list(ast.ssa),
          "r15_cfg_edges":[list(e) for e in ast.edges],
          "r15_basic_blocks":list(ast.blocks),
          "r15_call_sites":CALL_SITES,
          "r15_return_phi":RETURN_PHI,
          "r15_mocked_host_status":"MOCK_HOST_CALL_EVENT_ALIAS_AND_PARTIAL_WRITE_PASS",
          "r15_engine_runtime_status":"NOT_OBSERVED",
          "promotion_batch":"R15_MOCKED_SELF_CALL_SSA",
          "haxe_source":str(WORK/rel),
          "reference_urls":["https://github.com/pkZukan/PokeDocs/tree/main/SV/Hashlists/Lua"]
        })
    previous=[x for x in old if x.get("promotion_batch") in
              ("R11_59","R12_GETI_SETI_LT_MOVE","R13_NAMED_FIELDS","R14_DYNAMIC_MULTIWRITE_BRANCH")]
    if len(previous)!=69:raise ValueError("required original baseline 59+3+3+4 not found")
    for row in previous:
        p=lookup[row["proto_id"]]
        if (p.parent_id!=0 or p.code_offset!=row["code_offset"]
                or [f"{x.word:08X}" for x in decode(p)]!=row["native_child_opcode_words"]):
            raise ValueError("previous original baseline Child fingerprint no longer matches")
        prefix={"R11_59":"R11","R12_GETI_SETI_LT_MOVE":"R12",
                "R13_NAMED_FIELDS":"R13","R14_DYNAMIC_MULTIWRITE_BRANCH":"R14"}[row["promotion_batch"]]
        (fixture_dir/f'{prefix}_{p.id}.luac').write_bytes(fixture(chunk,p))
    r11=[x for x in previous if x["promotion_batch"]=="R11_59"]
    method_lines="\n".join(
        "  {"+f'file="R11_{x["proto_id"]}",c="{x["class_hash"]}",'
        +f'f="{x["method_hash"]}",name="{x["class_name"]}.{x["method_name"]}"'+"},"
        for x in r11)
    driver=(root/WORK/"compare-r11-batch.lua").read_text("utf-8")
    (out/"compare-r11-regression.lua").write_text(
        driver.replace("-- <NATIVE_METHOD_ROWS>",method_lines),"utf-8")

    (out/"methods.jsonl").write_text(
       "".join(json.dumps(x,ensure_ascii=False)+"\n" for x in old+fresh),"utf-8")
    summary={
      "status":"STAGED_ONLY_AWAITING_NATIVE_COMPARISON",
      "source_sha256":SHA,"upstream_commit":ZA,
      "new_methods":len(fresh),"mapped_total":len(old)+len(fresh),
      "body_total":len(old)+len(fresh)-1,
      "new_cases":sum(x["za_differential_cases"] for x in fresh),
      "case_total":sum(x.get("za_differential_passed") or 0 for x in old+fresh),
      "promoted_source_paths":altered,
      "method_protos":sorted(x["proto_id"] for x in fresh),
      "runtime_status":"NOT_OBSERVED"
    }
    (out/"r15-summary.json").write_text(json.dumps(summary,indent=2)+"\n","utf-8")
    return summary

if __name__=="__main__":
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root",type=Path,default=ROOT)
    ap.add_argument("--out",type=Path,required=True)
    ap.add_argument("--run-id",type=int,required=True)
    a=ap.parse_args()
    print(json.dumps(stage(a.root,a.out,a.run_id),indent=2))
