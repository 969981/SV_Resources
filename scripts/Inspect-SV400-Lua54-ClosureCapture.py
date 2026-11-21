"""SV 4.0.0 root PC215523: read *just created* Setup LClosure at R70.

Exact original root CLOSURE PC215522 has A=70, and the next SETTABLE
PC215523 uses C=70,k=0; this bridge is proven by the pinned original BLUA.
Only a full guest memory SHA match for both root and child Setup code may
identify a runtime LClosure. The helper never modifies guest memory.
"""
from __future__ import annotations

import hashlib
import struct

ROOT_PC_CREATE=215522
ROOT_PC_AFTER=215523
ROOT_CLOSURE_A=70
SETUP_SHA="9491ca5a3f0ca76cc7a21d31ef8320bb57b95e7e2bdf990806d21d02946006c1"


def inspect_completed_setup_capture(reader,context,register_base,
                                    x27_nextpc,expected,opcode_helper,
                                    session_salt):
    """Inspect freshly created child Closure from parent's *next* SETTABLE.

    Evidence of actual execution only originates from independently verified
    debugger registers/guest process; Python fixtures cannot authenticate.
    """
    if not isinstance(context,dict) or (
        context.get("status") != "ORIGINAL_PROTO_HANDLER_WORD_AND_SHA_MATCH"
        or context.get("proto_scope")!="root"
        or context.get("lua_pc")!=ROOT_PC_AFTER
        or context.get("opcode")!="SETTABLE"
    ):
        raise ValueError("not verified original root SETTABLE PC215523")
    if not isinstance(expected,dict) or expected.get("setup",{}).get("code_sha256")!=SETUP_SHA:
        raise ValueError("pinned original Setup code SHA is required")
    # During PC215523, current instruction address is X27-4.
    # Previous word at X27-8 must be CLOSURE A=70, not merely a stale
    # root stack slot or a synthetic function with matching code bytes.
    previous=struct.unpack("<I",opcode_helper.read_exact(reader,x27_nextpc-8,4,align=4))[0]
    now=struct.unpack("<I",opcode_helper.read_exact(reader,x27_nextpc-4,4,align=4))[0]
    if (previous & 0x7f)!=79 or ((previous>>7)&0xff)!=ROOT_CLOSURE_A:
        raise ValueError("previous original CLOSURE A register is not R70")
    if ((now&0x7f)!=16 or ((now>>15)&1)!=0
        or ((now>>24)&0xff)!=ROOT_CLOSURE_A):
        raise ValueError("current SETTABLE does not consume new Closure R70")
    register_address=register_base+ROOT_CLOSURE_A*16
    result_value=opcode_helper.read_tvalue(reader,register_address,session_salt)
    if result_value["base_type"]!="function":
        raise ValueError("new R70 is not a Lua function TValue candidate")
    child=opcode_helper.read_u64(reader,register_address)
    child_proto=opcode_helper.read_u64(reader,child+0x18)
    code_ptr=opcode_helper.read_u64(reader,child_proto+0x40)
    original_size=expected["setup"]["code_length_bytes"]
    if original_size!=1056:
        raise ValueError("unexpected Setup Proto instruction length")
    child_code=opcode_helper.read_exact(reader,code_ptr,original_size,align=4)
    if hashlib.sha256(child_code).hexdigest()!=SETUP_SHA:
        raise ValueError("R70's LClosure does not point to original Setup Proto code")
    cells=[
        opcode_helper.snapshot_upval(reader,child,slot,session_salt)
        for slot in (0,1,2)]
    value_r58=opcode_helper.read_tvalue(reader,register_base+58*16,session_salt)
    value_r55=opcode_helper.read_tvalue(reader,register_base+55*16,session_salt)
    v58=opcode_helper.read_u64(
        reader,opcode_helper.read_u64(reader,child+0x28)+0x10)
    v55=opcode_helper.read_u64(
        reader,opcode_helper.read_u64(reader,child+0x30)+0x10)
    expected58=register_base+58*16
    expected55=register_base+55*16
    r58_link=(v58==expected58)
    r55_link=(v55==expected55)
    return {
        "status":("NEW_SETUP_CLOSURE_CODE_AND_PARENT_UPVAL_LINK_MATCH"
                  if r55_link and r58_link else
                  "NEW_SETUP_CLOSURE_CODE_MATCH_LINK_NOT_CONFIRMED"),
        "root_lua_pc":ROOT_PC_AFTER,
        "new_closure_register":70,
        "setup_proto_id":17900,
        "setup_code_sha256":SETUP_SHA,
        "new_setup_closure_id":opcode_helper.pseudonym(child,session_salt),
        "new_setup_value":result_value,
        "upval_slots":cells,
        "parent_root_register_58":value_r58,
        "parent_root_register_55":value_r55,
        "slot1_v_points_to_root_R58":r58_link,
        "slot2_v_points_to_root_R55":r55_link,
        "both_parent_stack_links_confirmed":r58_link and r55_link,
        "actual_game_runtime_source_attested":False,
        "semantic_equivalence_verified":False,
        "warning":"A live UpVal pointer only establishes shared cell identity, not original module semantics",
    }
