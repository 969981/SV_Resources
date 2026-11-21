#!/usr/bin/env python3
"""Prove the pinned SV Violet 4.0.0 83-way AArch64 Lua 5.4 interpreter switch.

This is static executable image evidence: read-only ELF, native opcodes, and
the RELA relocations that populate the zeroed switch table at load time.
It does NOT authenticate a live lua_State, CallInfo, LClosure or VM PC.
"""
from __future__ import annotations

import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path
import struct

ELF_SHA = "84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30"
VM_ENTRY_RVA = 0x41150
TABLE_RVA = 0x4383398
RELOCATION_TYPE_AARCH64_RELATIVE = 1027
OP_NAMES = """MOVE LOADI LOADF LOADK LOADKX LOADFALSE LFALSESKIP LOADTRUE LOADNIL GETUPVAL SETUPVAL GETTABUP GETTABLE GETI GETFIELD SETTABUP SETTABLE SETI SETFIELD NEWTABLE SELF ADDI ADDK SUBK MULK MODK POWK DIVK IDIVK BANDK BORK BXORK SHRI SHLI ADD SUB MUL MOD POW DIV IDIV BAND BOR BXOR SHL SHR MMBIN MMBINI MMBINK UNM BNOT NOT LEN CONCAT CLOSE TBC JMP EQ LT LE EQK EQI LTI LEI GTI GEI TEST TESTSET CALL TAILCALL RETURN RETURN0 RETURN1 FORLOOP FORPREP TFORPREP TFORCALL TFORLOOP SETLIST CLOSURE VARARG VARARGPREP EXTRAARG""".split()

# Each native instruction is independently grounded in Violet 4.0.0 disasm.
DISPATCH_INSTRUCTIONS = {
    0x41150: 0xD10383FF,   # sub sp,sp,#0xe0; identified function prologue
    0x41184: 0xAA0103F9,   # mov x25,x1 (candidate CallInfo*)
    0x41188: 0xAA0003F5,   # mov x21,x0 (candidate lua_State*)
    0x41190: 0xD0021A18,   # adrp x24,0x4383000
    0x41194: 0x910E6318,   # add x24,x24,#0x398
    0x411C0: 0xF8420D5B,   # ldr x27,[x10,#32]!
    0x411CC: 0xB8404774,   # ldr w20,[x27],#4
    0x411E4: 0x12001A88,   # and w8,w20,#0x7f
    0x411EC: 0xF8685B08,   # ldr x8,[x24,w8,uxtw #3]
    0x411F0: 0xD61F0100,   # br x8
}

def elf_sections(blob: bytes):
    if blob[:4] != b"\x7fELF" or blob[4:6] != b"\x02\x01":
        raise ValueError("ELF64 little-endian required")
    if struct.unpack_from("<H",blob,18)[0]!=183:
        raise ValueError("ELF machine is not AArch64")
    shoff=struct.unpack_from("<Q",blob,40)[0]
    shentsize,shnum=struct.unpack_from("<HH",blob,58)
    if not 64 <= shentsize <= 256 or not 0 < shnum <= 8192:
        raise ValueError("invalid ELF section table size/count")
    sections=[]
    for i in range(shnum):
        at=shoff+i*shentsize
        if at+64>len(blob):
            raise ValueError("truncated ELF section table")
        _,kind,flags,addr,off,size,link,info,align,entsize=struct.unpack_from(
            "<IIQQQQIIQQ",blob,at)
        if off+size>len(blob) and kind!=8:
            raise ValueError("ELF section past end")
        sections.append(dict(type=kind,addr=addr,off=off,size=size,entsize=entsize))
    return sections


def elf_load_segments(blob: bytes):
    phoff=struct.unpack_from("<Q",blob,32)[0]
    entsize,num=struct.unpack_from("<HH",blob,54)
    if entsize<56 or num>4096:
        raise ValueError("invalid ELF PT_LOAD table")
    result=[]
    for n in range(num):
        at=phoff+n*entsize
        if at+56>len(blob):
            raise ValueError("truncated PT_LOAD")
        kind,flags,off,addr,paddr,size,memsz,align=struct.unpack_from(
            "<IIQQQQQQ",blob,at)
        if kind==1:
            if off+size>len(blob):
                raise ValueError("PT_LOAD beyond EOF")
            result.append(dict(flags=flags,off=off,addr=addr,size=size))
    return result


def elf_read_rva(blob: bytes, segments, rva: int, n: int):
    for seg in segments:
        if seg["addr"] <= rva and rva+n <= seg["addr"]+seg["size"]:
            off=seg["off"]+rva-seg["addr"]
            return blob[off:off+n]
    raise ValueError(f"RVA {rva:#x} does not belong to a file-backed PT_LOAD")


def rela_entries(blob: bytes, sections):
    for section in sections:
        if section["type"] != 4:
            continue
        size=section["size"]
        step=section["entsize"]
        if step < 24 or size % step:
            raise ValueError("invalid SHT_RELA entry size")
        for offset in range(section["off"],section["off"]+size,step):
            r_offset,r_info,addend=struct.unpack_from("<QQq",blob,offset)
            yield r_offset,r_info & 0xffffffff,addend


def verify_native_image(blob: bytes, expected_sha=ELF_SHA,
                        base=TABLE_RVA, count=83,
                        expected_instructions=DISPATCH_INSTRUCTIONS,
                        opcode_names=OP_NAMES):
    sha=hashlib.sha256(blob).hexdigest()
    if expected_sha and sha!=expected_sha:
        raise ValueError("ELF SHA256 mismatch")
    segments=elf_load_segments(blob)
    sections=elf_sections(blob)
    if len(opcode_names)!=count:
        raise ValueError(f"opcode count mismatch, expected {count}")
    for rva,word in expected_instructions.items():
        have=struct.unpack("<I",elf_read_rva(blob,segments,rva,4))[0]
        if have!=word:
            raise ValueError(f"native Lua dispatch instruction mismatched at {rva:#x}: {have:#x}")
    all_relocations=list(rela_entries(blob,sections))
    matches=[(off,typ,target) for off,typ,target in all_relocations
             if base <= off < base+count*8]
    if len(matches)!=count:
        raise ValueError(f"dispatch table must have exactly {count} relocations; have {len(matches)}")
    by_offset={}
    for off,kind,target in matches:
        if off in by_offset:
            raise ValueError(f"duplicate relocation at {off:#x}")
        if kind!=RELOCATION_TYPE_AARCH64_RELATIVE:
            raise ValueError(f"non-relative relocation in dispatch table at {off:#x}")
        by_offset[off]=target
    rows=[]
    for i,name in enumerate(opcode_names):
        addr=base+i*8
        if addr not in by_offset:
            raise ValueError(f"missing opcode {i} table relocation")
        target=by_offset[addr]
        if target<=0 or target%4 or not any(
            s["flags"]&1 and s["addr"]<=target<s["addr"]+s["size"]
            for s in segments
        ):
            raise ValueError(f"opcode {i}: target not executable: {target:#x}")
        raw=struct.unpack("<Q",elf_read_rva(blob,segments,addr,8))[0]
        if raw!=0:
            raise ValueError(f"unexpected preinitialized dispatch pointer at {addr:#x}")
        rows.append({
            "opcode":i, "lua54_name":name,
            "relocation_entry_rva":hex(addr),
            "target_handler_rva":hex(target),
            "relocation_type":"R_AARCH64_RELATIVE",
            "original_file_slot":hex(raw),
        })
    return {
        "elf_sha256":sha,
        "dispatch_native_entry_rva":hex(VM_ENTRY_RVA),
        "dispatch_table_rva":hex(base),
        "dispatch_table_slots":count,
        "relative_relocation_count":len(matches),
        "unique_targets":len(set(x["target_handler_rva"] for x in rows)),
        "opcode_handlers":rows,
        "native_instruction_words_verified":{hex(x):hex(y) for x,y in expected_instructions.items()},
        "static_identity":"LUA54_83_WAY_NATIVE_OPCODE_DISPATCH_VERIFIED",
        "runtime_state":"NOT_OBSERVED",
        "runtime_lua_state":None,
        "runtime_callinfo":None,
        "runtime_closure":None,
        "runtime_upvalues":None,
        "operational_warning":"ELF RELA addends are native offsets; dynamic load base and pointer identity require a real game process",
    }


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("elf",type=Path)
    ap.add_argument("--expected-sha256",default=ELF_SHA)
    ap.add_argument("--output",type=Path,required=True)
    args=ap.parse_args()
    doc=verify_native_image(args.elf.read_bytes(),args.expected_sha256)
    args.output.parent.mkdir(parents=True,exist_ok=True)
    args.output.write_text(json.dumps(doc,indent=2,sort_keys=True)+"\n",encoding="utf-8")
    print("LUA54_NATIVE_SWITCH_VERIFIED","entry",doc["dispatch_native_entry_rva"],
          "opcodes",doc["dispatch_table_slots"],"relocations",doc["relative_relocation_count"],
          "unique_targets",doc["unique_targets"],"runtime",doc["runtime_state"])


if __name__=="__main__":
    main()
