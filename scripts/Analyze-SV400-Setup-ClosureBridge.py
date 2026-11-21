#!/usr/bin/env python3
"""Pin the root Lua CLOSURE PC215522 -> SETTABLE PC215523 register bridge.

Reports exact Lua5.4 A/C registers from original read-only main.blua; the
extracted A register is a proven way to locate the newly created LClosure
TValue at the *next* handler entry, not a live object pointer.
"""
from __future__ import annotations
import argparse
import hashlib
import json
from pathlib import Path
import struct
import sys

PROJECT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(PROJECT/"tools"/"SV.Lua54"/"src"))
from sv_lua54.chunk import parse
from sv_lua54.trace import instructions,native_methods

BLUA_SHA="c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815"
ROOT_CODE_SHA="402537c209657ed69f8147a0cc5ac7a377b88e30b1485595a993463f2ce68265"
SETUP_CODE_SHA="9491ca5a3f0ca76cc7a21d31ef8320bb57b95e7e2bdf990806d21d02946006c1"
CLASS="C850E69B34478276C"
METHOD="F7C68FEDB79AB6396"


def analyze(chunk):
    methods=[x for x in native_methods(chunk) if
             x["class_hash"]==CLASS and x["function_hash"]==METHOD]
    if len(methods)!=1:
        raise ValueError("not exactly one original GemSettingManager.Setup method")
    method=methods[0]
    root=chunk.root
    setup=next(p for p in chunk.protos() if p.id==method["proto_id"])
    if (root.id!=0 or setup.id!=17900 or
        hashlib.sha256(root.code).hexdigest()!=ROOT_CODE_SHA or
        hashlib.sha256(setup.code).hexdigest()!=SETUP_CODE_SHA):
        raise ValueError("not the original pinned root and Setup code")
    creation=method["closure_pc"]
    binding=method["assignment_pc"]
    if creation!=215522 or binding!=215523:
        raise ValueError("wrong original Lua code indexes")
    ins=instructions(root)
    op0=ins[creation]
    op1=ins[binding]
    if op0[0]!="CLOSURE" or op1[0]!="SETTABLE":
        raise ValueError("target instructions aren't canonical CLOSURE -> SETTABLE")
    child_register=op0[1]
    rhs_register=op1[3] if op1[4]==0 else None
    output={
        "root_proto_id":0,
        "setup_proto_id":17900,
        "root_code_sha256":ROOT_CODE_SHA,
        "setup_code_sha256":SETUP_CODE_SHA,
        "closure_lua_pc":creation,
        "closure_opcode":op0[0],
        "closure_result_register":child_register,
        "next_assignment_pc":binding,
        "assignment_opcode":op1[0],
        "settable_rhs_is_register":op1[4]==0,
        "settable_rhs_register":rhs_register,
        "closure_is_next_settable_rhs":rhs_register==child_register,
        "return_object_observed_in_game":False,
        "captured_upval_cells_observed_in_game":False,
        "state":"PINNED_ROOT_CODE_REGISTER_BRIDGE_ONLY",
        "limits":[
            "The Closure TValue is valid to inspect only while the original root activation is alive",
            "Proving the register bridge cannot prove the corresponding runtime closure was created",
            "Read UpVal* after construction, not at CLOSURE opcode entry",
        ],
    }
    return output


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("blua",type=Path)
    ap.add_argument("--output",type=Path,required=True)
    args=ap.parse_args()
    blob=args.blua.read_bytes()
    if hashlib.sha256(blob).hexdigest()!=BLUA_SHA:
        ap.error("original main.blua SHA mismatch")
    data=analyze(parse(blob))
    args.output.parent.mkdir(parents=True,exist_ok=True)
    args.output.write_text(json.dumps(data,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    print("SV400_ROOT_CLOSURE_REGISTER_BRIDGE",data["closure_result_register"],
          "SETTABLE_REG",data["settable_rhs_register"],"same",
          data["closure_is_next_settable_rhs"],"runtime",False)


if __name__=="__main__":
    main()
