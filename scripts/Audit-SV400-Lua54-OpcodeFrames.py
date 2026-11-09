#!/usr/bin/env python3
"""Pinned SV 4.0.0 ARM64 Lua opcode/UpVal native-layout instruction audit.

Uses real ELF instruction bytes, not guessed standard Lua 5.4 C ABI.
The resulting address/offset facts are static only until game live sampling.
"""
from __future__ import annotations
import argparse
import hashlib
import json
from pathlib import Path
import struct

from importlib.util import module_from_spec, spec_from_file_location

ELF_SHA="84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30"
# independently disassembled with aarch64-linux-gnu-objdump from pinned image
WORDS={
    0x411A4: (0xF9400328, "LDR X8,[X25]  ; ci.func candidate"),
    0x411A8: (0xF9400109, "LDR X9,[X8] ; TValue.gc candidate"),
    0x411B0: (0xF9400D29, "LDR X9,[X9,#24] ; LClosure.p"),
    0x411B4: (0xF9401D2A, "LDR X10,[X9,#56] ; Proto.k"),
    0x411C0: (0xF8420D5B, "LDR X27,[X10,#32]! ; ci.savedpc"),
    0x411CC: (0xB8404774, "LDR W20,[X27],#4 ; fetch and advance pc"),
    0x4487C: (0x53187E89, "LSR W9,W20,#24 ; CALL C operand"),
    0x448A0: (0xF900011B, "STR X27,[X8] ; save next-pc to CallInfo"),
    0x448A4: (0x97FF8C03, "BL 0x278B0 ; invoke Lua call runtime"),
    0x448B8: (0xB8404774, "LDR W20,[X27],#4 ; next opcode after call"),
    0x453FC: (0xF9400BE8, "LDR X8,[SP,#16] ; enclosing Closure"),
    0x45430: (0xB9401297, "LDR W23,[X20,#16] ; child Proto sizeupvalues"),
    0x45434: (0xF9402A99, "LDR X25,[X20,#80] ; child Proto.upvalues"),
    0x45448: (0xF9000C14, "STR X20,[X0,#24] ; child LClosure.p"),
    0x4545C: (0x91008014, "ADD X20,X0,#32 ; child LClosure upval array"),
    0x45460: (0x91002739, "ADD X25,X25,#9 ; Upvaldesc instack/index bytes"),
    0x45468: (0x91002294, "ADD X20,X20,#8 ; next child UpVal pointer slot"),
    0x45470: (0x91004339, "ADD X25,X25,#16 ; next upvalue descriptor"),
    0x45478: (0x385FF329, "LDURB W9,[X25,#-1] ; instack"),
    0x4547C: (0x39400328, "LDRB W8,[X25] ; index"),
    0x45488: (0x8B081341, "ADD X1,X26,X8,LSL#4 ; parent stack TValue"),
    0x4548C: (0x97FF90B5, "BL 0x29760 ; open UpVal lookup"),
    0x45494: (0xF9000280, "STR X0,[X20] ; save UpVal* slot"),
    0x454A8: (0x8B080D28, "ADD X8,X9,X8,LSL#3 ; parent UpVal slot pointer"),
    0x454AC: (0xF9401102, "LDR X2,[X8,#32] ; parent UpVal*"),
    0x454B0: (0xF9000282, "STR X2,[X20] ; child reuses parent cell"),
    0x45520: (0xB8404774, "LDR W20,[X27],#4 ; next after closure"),
    0x41D14: (0xF94013E9, "LDR X9,[SP,#32] ; SETI table constants"),
    0x41D94: (0xF900011B, "STR X27,[X8] ; save next-pc before setter"),
    0x449A8: (0x394022C8, "LDRB W8,[X22,#8] ; TValue variant tag"),
    0x296D8: (0x91008038, "ADD X24,X1,#32 ; parent closure upval array"),
    0x29708: (0x91006008, "ADD X8,X0,#24 ; closed cell storage slot"),
    0x2970C: (0xF9000808, "STR X8,[X0,#16] ; closed UpVal v pointer"),
    0x29774: (0xF8438EA8, "LDR X8,[X21,#56]! ; lua_State openupval list"),
    0x29784: (0xF9400909, "LDR X9,[X8,#16] ; existing UpVal v pointer"),
    0x2979C: (0xF9400C08, "LDR X8,[X0,#24] ; next open UpVal"),
    0x297C4: (0xF94002A8, "LDR X8,[X21] ; previous link"),
    0x297CC: (0xF9000814, "STR X20,[X0,#16] ; open UpVal v points to parent stack TValue"),
    0x297D0: (0x3900281F, "STRB WZR,[X0,#10] ; UpVal status byte"),
    0x297D4: (0xF8018D28, "STR X8,[X9,#24]! ; linked UpVal next"),
    0x297D8: (0xF9001015, "STR X21,[X0,#32] ; previous link pointer"),
    0x297E4: (0xF90002A0, "STR X0,[X21] ; update open UpVal list head"),
}
# Cross-check global handler dispatch with same pinned opcode table.
HANDLER_STARTS={"CALL":0x4487C,"CLOSURE":0x453FC,"SETI":0x41D14}


def audit(blob:bytes):
    sha=hashlib.sha256(blob).hexdigest()
    if sha!=ELF_SHA:
        raise ValueError("wrong 4.0.0 Violet main ELF SHA256")
    mod=Path(__file__).resolve().with_name("Verify-SV400-Lua54-NativeDispatch.py")
    spec=spec_from_file_location("sv400_native_dispatch_verify",mod)
    verifier=module_from_spec(spec)
    spec.loader.exec_module(verifier)
    native=verifier.verify_native_image(blob)
    segments=verifier.elf_load_segments(blob)
    checked={}
    for addr,(word,meaning) in WORDS.items():
        value=struct.unpack("<I",verifier.elf_read_rva(blob,segments,addr,4))[0]
        if value!=word:
            raise ValueError(f"native instruction changed at {addr:#x}: {value:#x}")
        checked[hex(addr)]={"original_word":hex(value),"disasm":meaning}
    handlers={x["lua54_name"]:int(x["target_handler_rva"],16)
              for x in native["opcode_handlers"]}
    for name,addr in HANDLER_STARTS.items():
        if handlers.get(name)!=addr:
            raise ValueError(f"{name} handler changed")
    return {
        "native_elf_sha256":sha,
        "static_vm_opcode_dispatch_entry_rva":hex(verifier.VM_ENTRY_RVA),
        "validated_instruction_words":checked,
        "verified_handler_starts":{k:hex(v) for k,v in HANDLER_STARTS.items()},
        "native_register_model":{
            "x25_at_handler_entry":"CallInfo* candidate carried from interpreter entry",
            "x26_at_handler_entry":"base TValue* candidate = ci.func+0x10",
            "x27_at_handler_entry":"NEXT Lua instruction pointer, after 0x411CC postincrement",
            "w20_at_handler_entry":"current Lua instruction word",
            "current_lua_pc_formula":"((x27 - verified_proto_code_ptr)/4) - 1",
        },
        "closure_capture_abi_candidates":{
            "child_proto_upvalue_count_offset":16,
            "child_proto_upvalue_descriptors_pointer_offset":80,
            "native_upvalue_descriptor_stride":16,
            "descriptor_instack_byte_offset":8,
            "descriptor_index_byte_offset":9,
            "lclosure_proto_pointer_offset":24,
            "lclosure_upval_pointer_array_offset":32,
            "parent_stack_slot_stride":16,
            "parent_upval_pointer_array_offset":32,
            "open_upval_candidate_native_rva":"0x29760",
            "upval_v_tvalue_pointer_offset":16,
            "upval_next_link_offset":24,
            "upval_previous_link_offset":32,
            "lua_state_open_upval_head_offset":56,
            "tvalue_tag_byte_offset":8,
            "closed_upval_internal_value_offset":24,
            "root_R55_stack_relative_to_x26":"0x370",
            "root_R58_stack_relative_to_x26":"0x3a0",
            "setup_upvalue_slot1_closure_relative_offset":"0x28",
            "setup_upvalue_slot2_closure_relative_offset":"0x30",
        },
        "runtime_identity_status":"NOT_OBSERVED",
        "savedpc_runtime_calibrated":False,
        "upvalue_cell_values_runtime_verified":False,
        "warning":[
            "Each offset is inferred from original AArch64 access instructions; object ABI still needs live pointer/code fingerprint validation",
            "X27 can change after a handler enters or nested calls: use only at the exact handler entry PC",
            "Do not treat savedpc at entry as an unmodified current PC",
            "LClosure UpVal pointer slots are not the TValue values contained by UpVal cells",
        ],
    }


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("elf",type=Path)
    ap.add_argument("--output",type=Path,required=True)
    args=ap.parse_args()
    data=audit(args.elf.read_bytes())
    args.output.parent.mkdir(parents=True,exist_ok=True)
    args.output.write_text(json.dumps(data,indent=2,sort_keys=True)+"\n",encoding="utf-8")
    print("NATIVE_LUA_OPCODE_UPVALUE_ABI_CHECKED",len(data["validated_instruction_words"]),
          "frame PC",data["native_register_model"]["current_lua_pc_formula"],
          "runtime",data["runtime_identity_status"])


if __name__=="__main__":
    main()
