#!/usr/bin/env python3
"""SV 4.0.0 read-only Lua handler-PC and UpVal memory identity helpers.

Every offset is gated by prior original ARM64 instruction audits; these
helpers do not connect to a game or attest the origin of supplied memory.
Use ONLY at an exact VM opcode handler entry, not its interior or VM entry.
"""
from __future__ import annotations

import hashlib
import hmac
import struct

TARGET_HANDLERS = {"CALL":(0x4487C,68),"SETI":(0x41D14,17),
                   "SETTABLE":(0x41B9C,16),"CLOSURE":(0x453FC,79)}
MAX_CODE_BYTES=8*1024*1024
TYPE_BASE={0:"nil",1:"boolean",2:"lightuserdata",3:"number",
           4:"string",5:"table",6:"function",7:"userdata",8:"thread"}


def read_exact(reader,addr,length,*,align=1):
    if (not isinstance(addr,int) or isinstance(addr,bool) or addr<0x10000
        or addr%align or length<1 or length>MAX_CODE_BYTES
        or addr+length>(1<<64)):
        raise ValueError("untrusted or out-of-bounds guest address")
    result=bytes(reader(addr,length))
    if len(result)!=length:
        raise ValueError("short guest memory read")
    return result


def read_u64(reader,addr):
    return struct.unpack("<Q",read_exact(reader,addr,8,align=8))[0]


def pseudonym(address,session_salt):
    if not session_salt:
        return None
    if not isinstance(session_salt,(bytes,bytearray)) or len(session_salt)<16:
        raise ValueError("session_salt must be at least 16 secret random bytes")
    return hmac.new(session_salt,struct.pack("<Q",address),
                    hashlib.sha256).hexdigest()[:20]


def read_tvalue(reader,addr,session_salt=None):
    """Read 16-byte TValue and only output type and safe identity, not raw heap bytes."""
    blob=read_exact(reader,addr,16,align=8)
    value_u64=struct.unpack_from("<Q",blob,0)[0]
    tag=blob[8]
    base=tag&0xf
    result={
        "tag_byte":tag,
        "base_type":TYPE_BASE.get(base,"unknown"),
        "variant_tag":tag>>4,
        "tvalue_addr_id":pseudonym(addr,session_salt),
        "opaque_payload_id":None,
        "value":None,
        "runtime_type_verified_in_game":False,
    }
    if tag==0:
        result["value"]="nil"
    elif tag==1 or tag==0x11:  # 5.4 boolean variants (never interpret other bytes)
        result["value"]=bool(tag==0x11)
    elif tag==3:
        result["value"]=struct.unpack_from("<q",blob,0)[0]
    elif tag==0x13:
        result["value"]=struct.unpack_from("<d",blob,0)[0]
    else:
        result["opaque_payload_id"]=pseudonym(value_u64,session_salt)
    return result


def snapshot_upval(reader,closure_addr,slot,session_salt=None):
    """Read actual UpVal* slot then UpVal.v* and its TValue (no guest writes).

    No claim is made that closure_addr really is the intended Closure
    until its parent Proto and creation event were independently validated.
    """
    if slot not in (0,1,2):
        raise ValueError("only original Setup three UpVal slots can be inspected")
    cell_ptr=read_u64(reader,closure_addr+0x20+8*slot)
    v_ptr=read_u64(reader,cell_ptr+0x10)
    info=read_tvalue(reader,v_ptr,session_salt)
    return {
        "slot":slot, "cell_id":pseudonym(cell_ptr,session_salt),
        "value_tvalue_id":pseudonym(v_ptr,session_salt),
        "storage_kind_candidate":"closed_internal" if v_ptr==cell_ptr+0x18
                                  else "open_or_external",
        "tvalue":info,
        "runtime_cell_identity_verified_in_game":False,
    }


def inspect_handler_entry(reader,ci_ptr,register_base,x27_nextpc,w20_opcode,
                          handler_rva,expected_manifest):
    """Identify original root/Setup PC with *both* code SHA and current opcode.

    x27 points to next instruction only at the original native handler entry.
    Caller must independently verify the game executable SHA, live main map,
    and that actual guest CPU $pc == main_base + handler_rva.
    """
    evidence={
        "status":"UNVERIFIED_OPCODE_CONTEXT",
        "proto_scope":None,"proto_id":None,"lua_pc":None,
        "handler_rva":hex(handler_rva),"opcode":None,
        "original_code_sha256":None,
        "savedpc_memory_is_current_pc":False,
        "root_stack_R55":None,"root_stack_R58":None,
        "actual_upval_cells":None,"game_runtime_authenticated":False,
        "diagnostic":None,
    }
    try:
        if not isinstance(w20_opcode,int) or not 0<=w20_opcode<2**32:
            raise ValueError("invalid raw current Lua opcode word")
        index=w20_opcode&0x7f
        matched_op=next((name for name,(rva,op) in TARGET_HANDLERS.items()
                         if rva==handler_rva and op==index),None)
        if matched_op is None:
            raise ValueError("wrong handler RVA or current opcode")
        evidence["opcode"]=matched_op
        if not isinstance(expected_manifest,dict) or set(expected_manifest)!={"root","setup"}:
            raise ValueError("wrong original root/setup Proto manifest")
        for row in expected_manifest.values():
            size=row.get("code_length_bytes")
            if not isinstance(size,int) or size<4 or size>MAX_CODE_BYTES or size%4:
                raise ValueError("invalid original Proto code size")
        ci_func=read_u64(reader,ci_ptr)
        if register_base != ci_func+0x10:
            raise ValueError("VM x26 register base does not match ci.func+0x10")
        closure=read_u64(reader,ci_func)
        proto=read_u64(reader,closure+0x18)
        code_ptr=read_u64(reader,proto+0x40)
        if x27_nextpc<=code_ptr or (x27_nextpc-code_ptr)%4:
            raise ValueError("x27 not aligned next instruction pointer")
        pc=(x27_nextpc-code_ptr)//4-1
        instruction=struct.unpack("<I",read_exact(reader,code_ptr+pc*4,4,align=4))[0]
        if instruction!=w20_opcode:
            raise ValueError("w20 opcode is not the bytes at (x27-4)")
        for scope,row in expected_manifest.items():
            length=row["code_length_bytes"]
            if pc>=length//4:
                continue
            code=read_exact(reader,code_ptr,length,align=4)
            sha=hashlib.sha256(code).hexdigest()
            if sha!=row["code_sha256"]:
                continue
            evidence.update({
                "status":"ORIGINAL_PROTO_HANDLER_WORD_AND_SHA_MATCH",
                "proto_scope":scope, "proto_id":row["proto_id"],
                "lua_pc":pc, "original_code_sha256":sha,
                "is_target_pc":pc in row["target_pcs"],
                "handler_pc_rule":"x27 points one instruction past w20 at handler ENTRY",
            })
            return evidence
        raise ValueError("candidate Proto code does not match original full SHA")
    except Exception as exc:
        evidence["diagnostic"]=f"{type(exc).__name__}: {str(exc)[:150]}"
        return evidence


def snapshot_root_regs_if_confirmed(reader,context,register_base,session_salt=None):
    if (context.get("status")!="ORIGINAL_PROTO_HANDLER_WORD_AND_SHA_MATCH"
        or context.get("proto_scope")!="root" or context.get("lua_pc")!=215522
        or context.get("opcode")!="CLOSURE"):
        raise ValueError("root R55/R58 sampling requires verified original root CLOSURE PC")
    return {"root_R55":read_tvalue(reader,register_base+55*16,session_salt),
            "root_R58":read_tvalue(reader,register_base+58*16,session_salt),
            "phase":"BEFORE_CLOSURE_UPVAL_CAPTURE",
            "cells_already_captured":False,"game_runtime_authenticated":False}
