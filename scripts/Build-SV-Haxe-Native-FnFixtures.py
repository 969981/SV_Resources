#!/usr/bin/env python3
"""Extract exact SV400 child function opcodes into TEMP Lua5.4 fixtures.

The original 4.0.0 BLUA is read-only, SHA-256 pinned, and each selected
child's code, constants, upvalues, and signatures are copied without edits.
The standalone root CHUNK metadata necessarily differs from the original
enclosing BLUA. Never commit/upload the temporary executable native chunks.
"""
from __future__ import annotations
import argparse
import copy
import hashlib
import json
import struct
import sys
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools/SV.Lua54/src"))
from sv_lua54.chunk import Chunk, parse

WORK=ROOT/"tools/SV.Lua54/haxe/4.0.0"
TARGETS={"main.util.CompositionCamera.CalcXFov":"CalcXFov",
         "main.util.StrUtil.Format":"Format",
         "dll_util.MathUtil.Clamp":"Clamp"}


def extract(repo:Path, out:Path)->dict:
    repo=repo.resolve()
    out=out.resolve()
    if out.is_relative_to(repo):
        raise ValueError("Native executable fixtures MUST be outside the repo")
    records=[json.loads(x) for x in
             (repo/"tools/SV.Lua54/haxe/4.0.0/methods.jsonl").read_text().splitlines()
             if x.strip()]
    chosen={r["class_name"]+"."+r["method_name"]:r for r in records
            if r["class_name"]+"."+r["method_name"] in TARGETS}
    if set(chosen)!=set(TARGETS):
        raise ValueError("Exactly three native-mapped method entries required")
    report={"status":"TEMPORARY_ORIGINAL_NATIVE_CHILD_CODE_ONLY",
            "game_version":"SV Violet 4.0.0","methods":[]}
    chunks={}
    out.mkdir(parents=True,exist_ok=True)
    for key,label in TARGETS.items():
        row=chosen[key]
        if row["body_status"]!="SV400_NATIVE_MAPPED":
            raise ValueError(f"{key}: original native ownership not validated")
        mod=row["module"]
        if mod not in chunks:
            original=(repo/row["source_path"]).read_bytes()
            if hashlib.sha256(original).hexdigest()!=row["source_sha256"]:
                raise ValueError(f"{key}: original source SHA mismatch")
            chunks[mod]=parse(original)
        source=chunks[mod]
        proto=next((p for p in source.protos() if p.id==row["proto_id"]),None)
        if proto is None or proto.parent_id!=row["parent_proto_id"]:
            raise ValueError(f"{key}: native Proto owner mismatch")
        if (proto.code_offset!=row["code_offset"] or proto.instruction_count!=row["pc_end_exclusive"]
             or row["pc_start"]!=0 or proto.children):
            raise ValueError(f"{key}: unexpected original native child layout")
        native_words=[f"{w:08X}" for (w,) in struct.iter_unpack("<I",proto.code)]
        if native_words!=row["native_child_opcode_words"]:
            raise ValueError(f"{key}: native instruction word mismatch")
        child=copy.deepcopy(proto)
        child.id=0
        child.parent_id=None
        # Preserve the original child code, constants and original upvalue
        # descriptors. Lua's load() injects the provided _ENV into first upvalue.
        payload=Chunk(source.header,child.upvalue_count,child,"").encode()
        detached=parse(payload)
        if detached.encode()!=payload or detached.root.code!=proto.code:
            raise ValueError(f"{key}: standalone child code was modified")
        if detached.root.constants!=proto.constants or detached.root.upvalues!=proto.upvalues:
            raise ValueError(f"{key}: child constant/upvalue mutation")
        target=out/(label+".luac")
        target.write_bytes(payload)
        report["methods"].append({
            "qualified_name":key,"source_sha256":row["source_sha256"],
            "proto_id":row["proto_id"],"native_child_pc":[0,proto.instruction_count],
            "native_code_sha256":hashlib.sha256(proto.code).hexdigest(),
            "fixture_sha256":hashlib.sha256(payload).hexdigest(),
            "fixture_filename":target.name,
            "source_code_words_unchanged":True,"native_execution_status":"NOT_RUN"
        })
    (out/"fixture-provenance.json").write_text(json.dumps(report,indent=2)+"\n",encoding="utf-8")
    return report


if __name__=="__main__":
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root",type=Path,default=ROOT)
    parser.add_argument("--out",required=True,type=Path)
    opts=parser.parse_args()
    r=extract(opts.root,opts.out)
    print(json.dumps({"status":r["status"],"methods":[
        {k:v for k,v in row.items() if k not in ("native_code_sha256","fixture_sha256")}
        for row in r["methods"]]},indent=2))
