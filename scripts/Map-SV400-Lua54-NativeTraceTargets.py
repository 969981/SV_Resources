#!/usr/bin/env python3
"""Pin original SV Lua Proto PCs to static native AArch64 opcode handlers.

Requires the independently-verified 83-way ELF RELA dispatch manifest.
This creates a *read-only GDB observation plan*, never a live trace.
"""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import sys

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools"/"SV.Lua54"/"src"))

from sv_lua54.chunk import parse
from sv_lua54.trace import instructions, native_methods

BLUA_SHA="c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815"
CLASS="C850E69B34478276C"
METHOD="F7C68FEDB79AB6396"
DEFAULT_TARGETS=(
    ("root",215522,"CLOSURE","before_Setup_Closure_construction"),
    ("root",215523,"SETTABLE","after_Setup_Closure_construction"),
    ("setup",7,"CALL","before_factory_GemSettingFB_new"),
    ("setup",8,"SETI","after_factory_return_and_before_self14_write"),
    ("setup",11,"CALL","before_self14_field_method"),
    ("setup",32,"CALL","before_static_S_field_method"),
    ("setup",47,"CALL","before_factory_GemSettingStartWindow_new"),
    ("setup",48,"SETI","after_factory_return_and_before_self7_write"),
    ("setup",83,"CALL","before_self7_field_method"),
)


def plan(chunk,dispatch,targets=DEFAULT_TARGETS,
         class_hash=CLASS,function_hash=METHOD):
    if dispatch.get("static_identity")!="LUA54_83_WAY_NATIVE_OPCODE_DISPATCH_VERIFIED":
        raise ValueError("native 83-opcode dispatch not validated")
    if dispatch.get("dispatch_native_entry_rva")!="0x41150":
        raise ValueError("unknown interpreter native entry")
    table=dispatch.get("opcode_handlers")
    if not isinstance(table,list) or len(table)!=83:
        raise ValueError("incomplete native opcode table")
    by_name={}
    for index,row in enumerate(table):
        if row.get("opcode")!=index or row.get("lua54_name") in by_name:
            raise ValueError("noncanonical opcode table index/order")
        by_name[row["lua54_name"]]=row
    definitions=[m for m in native_methods(chunk)
                 if m["class_hash"]==class_hash and m["function_hash"]==function_hash]
    if len(definitions)!=1:
        raise ValueError("expected one exact C-F native Setup closure definition")
    methods={p.id:p for p in chunk.protos()}
    method=definitions[0]
    proto=methods[method["proto_id"]]
    expected={"root":chunk.root,"setup":proto}
    code_by_kind={name:instructions(p) for name,p in expected.items()}
    rows=[]
    for label,pc,op,purpose in targets:
        if label not in expected:
            raise ValueError(f"unknown Proto scope {label}")
        source=expected[label]
        code=code_by_kind[label]
        if pc<0 or pc>=len(code) or code[pc][0]!=op:
            raise ValueError(f"{label} Lua PC {pc} is not exact opcode {op}")
        if op not in by_name:
            raise ValueError(f"no native handler for opcode {op}")
        table_entry=by_name[op]
        rows.append({
            "scope":label,"proto_id":source.id,"proto_code_sha256":hashlib.sha256(source.code).hexdigest(),
            "lua_pc":pc,"expected_lua_opcode":op,
            "original_blua_file_code_word_offset":source.code_offset+pc*4,
            "native_handler_rva":table_entry["target_handler_rva"],
            "native_opcode_index":table_entry["opcode"],
            "observation_phase":purpose,
            "live_code_pointer":None,
            "live_savedpc":None,
            "live_closure_identity":None,
            "live_object_id":None,
            "status":"STATIC_OPCODE_HANDLER_MAPPING_NOT_RUNTIME_OBSERVED",
        })
    unique={r["expected_lua_opcode"]:r["native_handler_rva"] for r in rows}
    return {
        "source_blua_sha256":chunk.input_sha256,
        "native_elf_sha256":dispatch["elf_sha256"],
        "native_vm_dispatch_entry_rva":dispatch["dispatch_native_entry_rva"],
        "setup_class_hash":class_hash,"setup_function_hash":function_hash,
        "setup_proto_id":proto.id,
        "root_closure_creation_pc":method["closure_pc"],
        "probe_rows":rows,
        "unique_native_handler_rvas":unique,
        "native_handler_count":len(unique),
        "runtime_vm_attached":False,
        "runtime_objects_observed":False,
        "status":"PINNED_LUA_PC_TO_NATIVE_HANDLER_PLAN_ONLY",
        "warning":[
            "Lua Proto PC and native ARM64 RVA are separate coordinate systems",
            "A native opcode handler is shared by many Lua functions and runs frequently",
            "Do not arm four unconditional hardware breakpoints on a busy game without a verified Proto filter",
            "At entry the candidate savedpc may point to the next instruction, depending on opcode handler state",
            "Actual Lua Closure, UpVal cells and receiver lookup remain unobserved",
        ],
    }


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("blua",type=Path)
    ap.add_argument("--dispatch-manifest",type=Path,required=True)
    ap.add_argument("--output",type=Path,required=True)
    ap.add_argument("--expected-sha256",default=BLUA_SHA)
    args=ap.parse_args()
    chunk=parse(args.blua.read_bytes())
    if chunk.input_sha256!=args.expected_sha256:
        ap.error("main BLUA SHA mismatch")
    d=json.loads(args.dispatch_manifest.read_text(encoding="utf-8"))
    j=plan(chunk,d)
    args.output.parent.mkdir(parents=True,exist_ok=True)
    args.output.write_text(json.dumps(j,indent=2,sort_keys=True)+"\n",encoding="utf-8")
    print("LUA54_STATIC_HOOK_PLAN","entries",len(j["probe_rows"]),
          "native_handlers",j["unique_native_handler_rvas"],
          "runtime",j["runtime_vm_attached"])


if __name__=="__main__":
    main()
