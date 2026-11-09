#!/usr/bin/env python3
"""R7 read-only Violet 4.0.0 ELF native Lua VM dispatch audit.

Correlates AArch64 machine words, a real ELF RELATIVE relocation at opcode 79,
and real native BL instructions to closure allocation / UpVal lookup.
Does not connect to or read a running game process.
"""
from __future__ import annotations

import argparse
from hashlib import sha256
import json
from pathlib import Path
import struct

PIN = "d17403eaa9d844db82f647fd2f1518806b10c0518d53602fc0ac1766298fdba0"
BUILD_ID = "709BFD66115298640155FCC4979DBA151C7CC79A"
JUMP_TABLE = 0x4383398
OP_CLOSURE = 79
NATIVE_HANDLER = 0x453FC
MACHINE_WORDS = {
    0x41150: 0xD10383FF,  # VM entry prologue
    0x411CC: 0xB8404774,  # ldr w20,[x27],#4
    0x411E4: 0x12001A88,  # and w8,w20,#0x7f
    0x411EC: 0xF8685B08,  # ldr x8,[x24,w8,uxtw#3]
    0x411F0: 0xD61F0100,  # br x8
    0x453FC: 0xF9400BE8,  # handler enter
    0x45400: 0x530F7E89,  # lsr w9,w20,#15 (Bx)
    0x45410: 0xF9402508,  # Proto.p at +0x48
    0x45414: 0xF8695914,  # child Proto* load
    0x45430: 0xB9401297,  # child Proto.sizeupvalues at +0x10
    0x45434: 0xF9402A99,  # child Proto.upvalues at +0x50
    0x4543C: 0x97FF9081,  # BL closure allocator
    0x45444: 0x528008C8,  # TValue Lua closure tag 0x46
    0x4544C: 0xF90002C0,  # store closure pointer to target TValue
    0x45450: 0x390022C8,  # store closure tag to TValue+8
    0x4548C: 0x97FF90B5,  # BL findupval
    0x45494: 0xF9000280,  # store UpVal*
    0x454AC: 0xF9401102,  # inherit parent UpVal
    0x454B0: 0xF9000282,  # store inherited UpVal
    0x454D8: 0xF85E83B4,  # handler post-loop marker
    0x29640: 0xA9BE7BFD,  # closure allocation prologue (reverified below)
    0x29760: 0xA9BD7BFD,  # findupval prologue (reverified below)
}
# The last two prologues above must be verified from exact ELF bytes, not
# inferred from disassembler decoration.


def elf_sections(raw: bytes):
    if raw[:6] != b"\x7fELF\x02\x01" or struct.unpack_from("<H", raw, 18)[0] != 183:
        raise ValueError("expected ELF64 little endian AArch64")
    shoff = struct.unpack_from("<Q", raw, 0x28)[0]
    entsize, count, strings = struct.unpack_from("<HHH", raw, 0x3A)
    if entsize != 64 or not 0 < count < 1000 or strings >= count:
        raise ValueError("invalid section header table")
    if shoff + entsize * count > len(raw):
        raise ValueError("truncated section header table")
    sections = [struct.unpack_from("<IIQQQQIIQQ", raw, shoff + i * entsize)
                for i in range(count)]
    strsec = sections[strings]
    names = raw[strsec[4]:strsec[4] + strsec[5]]
    result = {}
    for s in sections:
        start = s[0]
        end = names.find(b"\0", start)
        if 0 <= start < len(names) and end > start:
            result[names[start:end].decode("ascii", errors="replace")] = s
    return result


def u32(raw: bytes, section, rva: int) -> int:
    addr, off, size = section[3], section[4], section[5]
    if not addr <= rva <= addr + size - 4:
        raise ValueError("RVA outside executable .text")
    return struct.unpack_from("<I", raw, off + rva - addr)[0]


def branch_target(pc: int, word: int) -> int:
    if word & 0xFC000000 != 0x94000000:
        raise ValueError("not a direct AArch64 BL")
    imm = word & 0x03FFFFFF
    if imm & 0x02000000:
        imm -= 0x04000000
    return pc + imm * 4


def relative_reloc(raw: bytes, rela_section, address: int) -> dict:
    _, _, _, _, off, length, _, _, _, entry_size = rela_section
    if entry_size != 24 or length % 24:
        raise ValueError("RELA entry format incorrect")
    for pos in range(off, off + length, 24):
        where, info, addend = struct.unpack_from("<QQq", raw, pos)
        if where == address:
            if (info & 0xFFFFFFFF) != 0x403 or (info >> 32) != 0:
                raise ValueError("expected R_AARCH64_RELATIVE with symbol zero")
            return {"slot": hex(address), "reloc_type": "R_AARCH64_RELATIVE",
                    "addend_target": hex(addend)}
    raise ValueError("opcode dispatch relocation not found")


def inspect(raw: bytes) -> dict:
    if sha256(raw).hexdigest() != PIN:
        raise ValueError("Violet 4.0.0 ELF SHA mismatch")
    sections = elf_sections(raw)
    text = sections[".text"]
    verified = {}
    for pc, expected in MACHINE_WORDS.items():
        actual = u32(raw, text, pc)
        if actual != expected:
            raise ValueError(f"code word mismatch at main+{pc:X}: {actual:08X} != {expected:08X}")
        verified[f"0x{pc:X}"] = f"{actual:08X}"
    slot = JUMP_TABLE + OP_CLOSURE * 8
    relocation = relative_reloc(raw, sections[".rela.dyn"], slot)
    if int(relocation["addend_target"], 16) != NATIVE_HANDLER:
        raise ValueError("Lua opcode 79 did not resolve to native handler")
    alloc = branch_target(0x4543C, u32(raw, text, 0x4543C))
    find = branch_target(0x4548C, u32(raw, text, 0x4548C))
    if (alloc, find) != (0x29640, 0x29760):
        raise ValueError("closure/newUpval BL targets changed")
    return {
        "status": "ELF_NATIVE_STATIC_VERIFIED_NO_GUEST_DATA",
        "original_elf_sha256": PIN, "build_id_expected": BUILD_ID,
        "luaV_execute_candidate_rva": "0x41150",
        "dispatch_opcode_mask_rva": "0x411E4",
        "dispatch_table_rva": hex(JUMP_TABLE),
        "op_closure_index": OP_CLOSURE,
        "closure_handler_rva": hex(NATIVE_HANDLER),
        "closure_table_entry": relocation,
        "new_lclosure_rva": hex(alloc),
        "find_upval_rva": hex(find),
        "native_word_fingerprints": verified,
        "layout_derived_from_instructions": {
            "CallInfo.func": "0x0",
            "CallInfo.savedpc": "0x20",
            "LClosure.proto": "0x18",
            "LClosure.upvals[1]": "0x28",
            "Proto.sizeupvalues": "0x10",
            "Proto.sizecode": "0x18",
            "Proto.code": "0x38",
            "Proto.children": "0x48",
            "Proto.upvalue_descriptors": "0x50",
            "UpVal.v.p": "0x10",
            "TValue.tag": "0x8",
        },
        "guest_CallInfo_observed": False,
        "guest_UpVal_observed": False,
        "guest_Proto752_called": False,
    }


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--elf", type=Path, required=True)
    p.add_argument("--report", type=Path, required=True)
    args = p.parse_args()
    result = inspect(args.elf.read_bytes())
    args.report.parent.mkdir(parents=True, exist_ok=True)
    args.report.write_text(json.dumps(result, indent=2, ensure_ascii=False, sort_keys=True)+"\n", encoding="utf-8")
    print("SLR_R7_NATIVE_DISPATCH_STATIC_OK", result["closure_handler_rva"], result["find_upval_rva"])


if __name__ == "__main__":
    main()
