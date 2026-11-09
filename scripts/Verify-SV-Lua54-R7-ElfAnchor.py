#!/usr/bin/env python3
"""R7 offline ELF read-only identity / native AArch64 Lua load-call verifier."""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import struct

ELF_SHA = "d17403eaa9d844db82f647fd2f1518806b10c0518d53602fc0ac1766298fdba0"
ELF_BUILD_ID = "709bfd66115298640155fcc4979dba151c7cc79a"
RVA = 0xE37F70
EXPECTED_TARGET = 0xE382A0
EXPECTED_WORD = 0x940000CC


def verify(path: Path) -> dict:
    raw = path.read_bytes()
    sha = hashlib.sha256(raw).hexdigest()
    if sha != ELF_SHA:
        raise ValueError("This is NOT the pinned Violet 4.0.0 ELF")
    if raw[:6] != b"\x7fELF\x02\x01" or struct.unpack_from("<H", raw, 18)[0] != 183:
        raise ValueError("ELF64 AArch64 little endian required")
    shoff = struct.unpack_from("<Q", raw, 0x28)[0]
    shentsize, shnum, shstrndx = struct.unpack_from("<HHH", raw, 0x3A)
    if not (0 < shnum < 1000 and shentsize == 64 and shstrndx < shnum):
        raise ValueError("Invalid ELF section table")
    if shoff + shnum * shentsize > len(raw):
        raise ValueError("Truncated ELF section headers")
    secs = [struct.unpack_from("<IIQQQQIIQQ", raw, shoff + i * shentsize)
            for i in range(shnum)]
    names_sec = secs[shstrndx]
    names = raw[names_sec[4]:names_sec[4] + names_sec[5]]
    text_sec = None
    for section in secs:
        offset = section[0]
        end = names.find(b"\0", offset)
        if end >= offset and names[offset:end] == b".text":
            text_sec = section
            break
    if text_sec is None:
        raise ValueError("Missing ELF .text section")
    _, _, _, text_addr, text_offset, text_size, *_ = text_sec
    if not text_addr <= RVA < text_addr + text_size - 4:
        raise ValueError("BL callsite outside pinned executable .text")
    file_offset = text_offset + (RVA - text_addr)
    word = struct.unpack_from("<I", raw, file_offset)[0]
    if word != EXPECTED_WORD or (word & 0xFC000000) != 0x94000000:
        raise ValueError("AArch64 BL instruction mismatch")
    delta = word & 0x03FFFFFF
    if delta & (1 << 25):
        delta -= 1 << 26
    target = RVA + (delta << 2)
    if target != EXPECTED_TARGET:
        raise ValueError("Native load BL destination changed")
    return {
        "status": "STATIC_ELF_ANCHOR_VERIFIED_NOT_RUNTIME",
        "original_elf_sha256": sha,
        "build_id_expected": ELF_BUILD_ID,
        "text_file_offset": hex(text_offset),
        "bl_rva": hex(RVA),
        "bl_file_offset": hex(file_offset),
        "bl_opcode_le": f"{word:08X}",
        "bl_target_rva": hex(target),
        "live_lua_state": "NOT_OBSERVED",
        "live_upval": "NOT_OBSERVED",
    }


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--elf", type=Path, required=True)
    p.add_argument("--report", type=Path, required=True)
    args = p.parse_args()
    r = verify(args.elf)
    args.report.parent.mkdir(parents=True, exist_ok=True)
    args.report.write_text(json.dumps(r, indent=2, sort_keys=True) + "\n", encoding="utf-8")
    print("SLR_R7_ELF_ANCHOR_OK", r["bl_rva"], r["bl_target_rva"])


if __name__ == "__main__":
    main()
