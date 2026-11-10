#!/usr/bin/env python3
"""R16 read-only original SV400 engine-binding evidence and memory-effect audit.

Inputs are EXACT SHA-pinned original main.blua, both main.elf editions,
PokeDocs-linked 4.0.0 C/F/Child provenance and ZAScripts pinned
cppbindings. Findings are STATIC, not Switch runtime object observations.
No recovered Haxe files or original ROM data are modified.
"""
from __future__ import annotations
import argparse
from hashlib import sha256
import json
from pathlib import Path
import sys

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools/SV.Lua54/src"))
from sv_lua54.chunk import parse
from sv_lua54.r1 import decode
from sv_lua54.emit_haxe.r16_engine_bridge import (
    EXPECTED_ELF,LUA_K,R15_METHODS,SOURCE_PIN,
    static_memory_effects,inspect_cppbindings,inspect_elf,compare_candidate_arity,
)
MAIN=Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main/main.blua")
MAIN_SHA="c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815"
WORK=Path("tools/SV.Lua54/haxe/4.0.0")
EDITION={
  "scarlet_main":Path("Unpack/4.0.0/exefs/scarlet_main/scarlet_main.elf"),
  "violet_main":Path("Unpack/4.0.0/exefs/violet_main/violet_main.elf"),
}


def audit(root:Path,bindings:Path,upstream_commit:str)->dict:
    root=root.resolve()
    lock=json.loads((root/WORK/"zascripts.lock.json").read_text("utf-8"))
    if (lock["upstream_commit"]!=SOURCE_PIN or upstream_commit!=SOURCE_PIN or
            lock["import_mode"]!="CI_PINNED_SPARSE_CHECKOUT_NOT_VENDORED"):
        raise ValueError("wrong original pinned ZAScripts/compiler/cppbindings provenance")
    raw=(root/MAIN).read_bytes()
    if sha256(raw).hexdigest()!=MAIN_SHA:
        raise ValueError("original 4.0.0 main.blua SHA-256 changed")
    chunk=parse(raw)
    if chunk.encode()!=raw or chunk.summary()["prototype_count"]!=37743:
        raise ValueError("not original roundtrip-safe 37,743 Proto file")
    byid={p.id:p for p in chunk.protos()}
    rows=[json.loads(s) for s in (root/WORK/"methods.jsonl").read_text("utf-8").splitlines()
          if s.strip()]
    if len(rows)!=83:
        raise ValueError("R15 83 original native Haxe provenance records not complete")
    index={(r["class_name"]+"."+r["method_name"]):r for r in rows}
    examined={}
    for name,meta in R15_METHODS.items():
        row=index[name]
        p=byid[meta["proto"]]
        if (row["proto_id"]!=p.id or row["root_pc"]!=meta["root_pc"]
                or row["source_sha256"]!=MAIN_SHA or
                row["parent_proto_id"]!=0 or p.parent_id!=0 or
                row["code_offset"]!=p.code_offset
                or row["r15_first_slot"]!=meta["owner_slot"]
                or row["r15_second_slot"]!=meta["child_slot"]
                or [f"{ins.word:08X}" for ins in decode(p)]!=row["native_child_opcode_words"]
                or row["runtime_status"]!="NOT_OBSERVED"
                or row["r15_engine_runtime_status"]!="NOT_OBSERVED"):
            raise ValueError(f"original R15 C/F/Proto/PC/native opcode discrepancy: {name}")
        examined[name]=static_memory_effects(p,name)
    binaries={game:inspect_elf(root/path,game,keys=LUA_K+("cE35B3EB3","CE35B3EB3")) for game,path in EDITION.items()}
    binding=inspect_cppbindings(bindings)
    arity=compare_candidate_arity(binding)
    if binding["upstream_commit"]!=upstream_commit:
        raise ValueError("checked-out cppbindings commit provenance drift")
    # The following are hypotheses/candidates only, even when a literal is present.
    native_abi={
       "first_call": {
          "K":LUA_K[0],
          "known_lua_method":"main.field.action.base.IAction.onSetup / IAutoAction.onSetup",
          "ownership":"ORIGINAL_LUA_C_TO_F_CLOSURE_STATIC_PROVEN",
          "native_cpp_entry":None,
          "native_argument_registers":"NOT_RESOLVED",
          "native_return_abi":"NOT_RESOLVED",
       },
       "second_call":{
          "K":LUA_K[2],
          "known_name":None,
          "ownership":"SCRIPT_OR_NATIVE_UNRESOLVED",
          "native_cpp_entry":None,
          "native_argument_registers":"NOT_RESOLVED",
          "native_return_abi":"NOT_RESOLVED",
       },
    }
    return {
      "schema_version":1,
      "kind":"SV400_R16_STATIC_ABI_BRIDGE_AND_CONSERVATIVE_MEMORY_EFFECTS",
      "main_blua_sha256":MAIN_SHA,
      "main_original_proto_count":37743,
      "haxe_verified_mappings_prior":83,
      "haxe_verified_method_bodies_prior":82,
      "independent_mock_host_lua_cases_prior":357,
      "upstream_cppbindings_commit":SOURCE_PIN,
      "r15_callsite_originals":examined,
      "native_binary_literal_evidence":binaries,
      "upstream_cppbindings_literal_evidence":binding,
      "combined_native_callable_status":native_abi,
      "upstream_cppbindings_vs_original_lua_call_arity":arity,
      "unsupported_inference": [
         "ELF literal bytes alone do not resolve a Lua C function pointer",
         "ZAScripts cppbindings are upstream toolchain reference, not SV400 engine ABI",
         "Register reaching definitions do not establish memory SSA",
         "Mocked host callbacks do not establish guest lua_State, TValue or C++ addresses",
         "Haxe-generated Lua does not attest a Nintendo Switch native engine call",
      ],
      "new_haxe_generated":False,
      "guest_trace_present":False,
      "engine_runtime_abi_status":"NOT_RESOLVED",
      "game_runtime_status":"NOT_OBSERVED",
    }


if __name__=="__main__":
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root",type=Path,default=ROOT)
    ap.add_argument("--cppbindings",type=Path,required=True)
    ap.add_argument("--upstream-commit",default=SOURCE_PIN)
    ap.add_argument("--out",type=Path,required=True)
    args=ap.parse_args()
    d=audit(args.root,args.cppbindings,args.upstream_commit)
    args.out.parent.mkdir(parents=True,exist_ok=True)
    args.out.write_text(json.dumps(d,indent=2,ensure_ascii=False)+"\n","utf-8")
    print(json.dumps({
       "status":d["game_runtime_status"],
       "checked_original_calls":list(d["r15_callsite_originals"]),
       "checked_elf_hashes":{k:v["elf_sha256"] for k,v in d["native_binary_literal_evidence"].items()},
       "cppbindings_hx_count":d["upstream_cppbindings_literal_evidence"]["files_scanned"],
       "cppbinding_candidate_occurrences":{
          k:len(v) for k,v in d["upstream_cppbindings_literal_evidence"]["matches"].items()},
       "candidate_binding_lines":d["upstream_cppbindings_literal_evidence"]["matches"]["f558733FC"][:3],
       "cppbinding_vs_lua_arity":d["upstream_cppbindings_vs_original_lua_call_arity"],
       "literal_in_game_elf": {
          edition:{
            k:sum(len(m["exact_ascii_matches_first_16"]) for m in result["literal_occurrences"]
                  if m["literal"]==k)
            for k in LUA_K
          }
          for edition,result in d["native_binary_literal_evidence"].items()
       },
       "upstream_cppbinding_native_class_text_elf_hits":{
          edition:{
            x:next((len(rec["exact_ascii_matches_first_16"])
                    for rec in v["literal_occurrences"] if rec["literal"]==x),0)
            for x in ("cE35B3EB3","CE35B3EB3")
          } for edition,v in d["native_binary_literal_evidence"].items()
       },
       "runtime_cpp_entry_resolved":False,
       "runtime_object_identity_observed":False,
    },indent=2))
