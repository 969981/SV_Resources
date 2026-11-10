#!/usr/bin/env python3
"""Inspect original 4.0.0 GETFIELD/SETFIELD constants before any Haxe output.

Read-only. Determines field key/value and original Ctrl/Proto/PC facts; never
automatically makes up field names, types, or C++ native binding behavior.
"""
from __future__ import annotations
import hashlib
import json
from pathlib import Path
import sys

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools/SV.Lua54/src"))
from sv_lua54.chunk import parse
from sv_lua54.r1 import decode, direct_cf_methods, annotate_methods, read_symbols

MAIN=Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main/main.blua")
SHA="c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815"
TARGETS={
    ("main.event.base.IEventScript","get_CallFromReserve"):669,
    ("main.event.debug.DebugAreaJump","onCreate"):11176,
    ("main.battle.BattleResidentEffectManager","GetResidentEffectNum"):5683,
}


def constant(c):
    tag=c.tag
    if tag in (4,20):
        b=c.payload
        try:
            value=b.decode("utf-8")
        except UnicodeDecodeError:
            return {"tag":tag,"kind":"UNSUPPORTED_NON_UTF8","key_sha256":hashlib.sha256(b).hexdigest()}
        if len(value)>80 or any(ord(x)<32 for x in value):
            return {"tag":tag,"kind":"UNSUPPORTED_STRING_LENGTH_OR_CONTROLS",
                    "key_sha256":hashlib.sha256(b).hexdigest()}
        return {"tag":tag,"kind":"UTF8_STRING","value":value}
    if tag in (0,1,17,3,19):
        return {"tag":tag,"kind":"LUA_LITERAL","value":c.value_repr()}
    return {"tag":tag,"kind":"UNSUPPORTED_TAG"}


def report(root):
    raw=(root/MAIN).read_bytes()
    if hashlib.sha256(raw).hexdigest()!=SHA:raise ValueError("main.blua source changed")
    chunk=parse(raw)
    if chunk.encode()!=raw or chunk.summary()["prototype_count"]!=37743:
        raise ValueError("native Lua54 failed byte-roundtrip")
    by_id={p.id:p for p in chunk.protos()}
    edges,_=direct_cf_methods(chunk,"main")
    symbols=read_symbols(root/"tools/PokeDocs/SV/Hashlists/Lua")
    named=annotate_methods(edges,symbols)
    result=[]
    for (cls,method),pid in TARGETS.items():
        sites=[x for x in named if x["class_name_candidate"]==cls
               and x["function_name_candidate"]==method
               and x["child_proto_id"]==pid
               and x["class_name_evidence"]=="POKEDOCS_NAMED"
               and x["function_name_evidence"]=="POKEDOCS_NAMED"]
        if len(sites)!=1:raise ValueError("C/F native ownership ambiguous for "+cls+"."+method)
        proto=by_id[pid]
        ops=decode(proto)
        regs=[{"pc":i.pc,"opcode":i.name,"a":i.a,"b":i.b,"c":i.c,"k":i.k,"word":f"{i.word:08X}"} for i in ops]
        fields=[]
        for x in ops:
            keyindex=None
            if x.name=="GETFIELD":keyindex=x.c
            if x.name=="SETFIELD":keyindex=x.b
            if keyindex is not None:
                if keyindex>=len(proto.constants):raise ValueError("field constant index invalid")
                record={"pc":x.pc,"op":x.name,"key":constant(proto.constants[keyindex])}
                if x.name=="SETFIELD":
                    record["rhs_kind"]="CONSTANT" if x.k else "REGISTER"
                    record["rhs"]=constant(proto.constants[x.c]) if x.k else {"register":x.c}
                fields.append(record)
        result.append({
            "class":cls,"method":method,
            "class_hash":sites[0]["class_hash"],"method_hash":sites[0]["method_hash"],
            "proto_id":pid,"root_pc":sites[0]["root_pc"],
            "num_params":proto.num_params,"upvalues":proto.upvalue_count,
            "code_offset":proto.code_offset,
            "instructions":regs,"field_operands":fields,
            "haxe_status":"NOT_EMITTED_PENDING_VERIFIED_AST_AND_STATE_A_B",
            "original_sha256":SHA
        })
    return {"source":"SV Violet 4.0.0 original main.blua","targets":result,
            "runtime_status":"NOT_OBSERVED",
            "warning":"Field name and value evidence only; engine and table side effects remain unverified."}

if __name__=="__main__":
    import argparse
    a=argparse.ArgumentParser()
    a.add_argument("--output",required=True,type=Path)
    p=a.parse_args().output
    data=report(ROOT)
    p.parent.mkdir(parents=True,exist_ok=True)
    p.write_text(json.dumps(data,ensure_ascii=False,indent=2)+"\n","utf-8")
    print(json.dumps(data,ensure_ascii=False,indent=2))
