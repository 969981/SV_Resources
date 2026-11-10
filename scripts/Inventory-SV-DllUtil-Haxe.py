#!/usr/bin/env python3
"""Enumerate 4.0.0 dll_util Lua-native symbols without assuming old SV parity."""
from __future__ import annotations
import hashlib
import json
import re
import sys
from collections import Counter
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools/SV.Lua54/src"))
from sv_lua54.chunk import parse
from sv_lua54.r1 import decode
from sv_lua54.r1 import read_symbols

REPO_PATH="Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/dll_util/dll_util.blua"
SHA="bc2b5891d70c57bddbdd5c9f221756509b93dd24e6f2226664cd0e48797d7e01"
PATTERN=re.compile(rb"^[CEFS][0-9A-F]{16}$")

def main():
    raw=(ROOT/REPO_PATH).read_bytes()
    if hashlib.sha256(raw).hexdigest()!=SHA:
        raise RuntimeError("dll_util 4.0.0 original byte SHA mismatch")
    chunk=parse(raw)
    if chunk.encode()!=raw:
        raise RuntimeError("dll_util parser roundtrip mismatch")
    symbols=read_symbols(ROOT/"tools/PokeDocs/SV/Hashlists/Lua")
    protos=list(chunk.protos())
    root=chunk.root
    ops=decode(root)
    hashes=[]
    for i,c in enumerate(root.constants):
        val=c.payload
        if isinstance(val,bytes) and PATTERN.fullmatch(val):
            key=val.decode()
            lookup=symbols.get(key[0],{}).get(key,{})
            hashes.append({"constant_index":i,"key":key,"name":lookup.get("name"),"kind":key[0]})
    # An exactly-pinned lower bound: root constants do NOT by themselves
    # imply the presence of a method or class declaration.
    sites=[]
    for op in ops:
        if op.name!="LOADK":continue
        matches=[h for h in hashes if h["constant_index"]==op.bx]
        if matches:
            sites.append({"pc":op.pc,"op":"LOADK","value":matches[0]["key"],
                          "name":matches[0]["name"]})
    status="NO_DIRECT_ROOT_CLASS_MATCH"
    wanted="CB87925D1C1B918F9"
    if any(h["key"]==wanted for h in hashes):
        status="DLL_UTIL_STRUTIL_CLASS_HASH_PRESENT"
    symbols_by_index={h["constant_index"]:h for h in hashes}

    def describe(op):
        d={"pc":op.pc,"op":op.name,"a":op.a,"b":op.b,"c":op.c,
           "bx":op.bx,"word":f"{op.word:08X}"}
        idx=None
        if op.name in ("GETTABUP","GETFIELD"):
            idx=op.c
        elif op.name in ("SETTABUP","SETFIELD"):
            idx=op.b
        elif op.name=="LOADK":
            idx=op.bx
        if idx in symbols_by_index:
            d["abi_key"]=symbols_by_index[idx]["key"]
            d["resolved_name"]=symbols_by_index[idx]["name"]
        if op.name=="CLOSURE" and op.bx<len(root.children):
            d["child_proto_id"]=root.children[op.bx].id
            d["child_code_offset"]=root.children[op.bx].code_offset
            d["child_instruction_count"]=root.children[op.bx].instruction_count
        return d

    targets={
        "CE5FCD7D9D8F34718":"dll_util.Assert",
        "SB859A84B9E933D14":"Assert.IsNull",
        "CED59418C4CAB0EC4":"dll_util.MathUtil",
        "S05B90B9B5A6DE6BC":"MathUtil.Clamp",
    }
    trace={}
    for key,label in targets.items():
        sites=[]
        for i,op in enumerate(ops):
            d=describe(op)
            if d.get("abi_key")==key:
                sites.append({"site":d,
                    "window":[describe(x) for x in ops[max(0,i-7):min(len(ops),i+8)]]})
        trace[label]={"key":key,"count":len(sites),"sites":sites[:8]}

    report={"module":"dll_util","source_sha256":SHA,
            "root_instructions":root.instruction_count,
            "proto_count":len(protos),
            "root_constant_count":len(root.constants),
            "root_hashed_constants":len(hashes),
            "hash_kind_counts":dict(sorted(Counter(h["kind"] for h in hashes).items())),
            "root_hashed_symbols":hashes,
            "root_hash_load_sites":sites,
            "target_opcode_trace":trace,
            "strutil_class_status":status,
            "status":"INVENTORY_ONLY_NOT_METHOD_LINKED"}
    print(json.dumps(report,ensure_ascii=False,sort_keys=True))
    return 0

if __name__=="__main__":
    raise SystemExit(main())
