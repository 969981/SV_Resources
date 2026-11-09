#!/usr/bin/env python3
"""Read-only SV4.0.0 ELF Lua VM entry preflight; no runtime claims.

A printable string/symbol match is not a function address. It is especially
not a VM instruction dispatch breakpoint or a Lua Proto PC.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import mmap
from pathlib import Path
import re
import struct

KNOWN_MARKERS = [
    rb"luaV_execute", rb"luaD_call", rb"luaD_precall", rb"lua_sethook",
    rb"lua_getstack", rb"lua_getinfo", rb"lua_getupvalue",
    rb"lua_upvalueid", rb"luaL_loadbufferx", rb"lua_load", rb"lua_pcallk",
    rb"lua_newstate", rb"lua_newthread", rb"lua_gettop", rb"Lua 5\.4",
    rb"Lua 5\.4\.?", rb"lua5\.4", rb"\.blua", rb"luaH_get", rb"luaF_newLclosure",
]
TARGET = re.compile(rb"|".join(KNOWN_MARKERS), flags=re.IGNORECASE)


def segments_from_elf(m):
    if m[:4] != b"\x7fELF" or m[4] != 2 or m[5] != 1:
        raise ValueError("expected ELF64 little-endian")
    machine = struct.unpack_from("<H", m, 18)[0]
    if machine != 183:
        raise ValueError("expected AArch64 e_machine=183")
    phoff = struct.unpack_from("<Q", m, 32)[0]
    entsize, count = struct.unpack_from("<HH", m, 54)
    if entsize < 56 or count > 4096:
        raise ValueError("invalid program header size/count")
    result = []
    for n in range(count):
        offset = phoff + n*entsize
        if offset+56 > len(m):
            raise ValueError("truncated program headers")
        typ, flags, off, vaddr, paddr, filesz, memsz, align = struct.unpack_from(
            "<IIQQQQQQ", m, offset)
        if typ != 1:
            continue
        if off + filesz > len(m):
            raise ValueError("PT_LOAD bytes past EOF")
        result.append({"file_offset": off, "file_end": off+filesz,
                       "elf_vaddr": vaddr, "memsz": memsz,
                       "flags": flags})
    if not result:
        raise ValueError("ELF has no PT_LOAD segments")
    return result


def elf_vaddr(segments, file_offset):
    found = [s for s in segments if s["file_offset"] <= file_offset < s["file_end"]]
    if not found:
        return None
    return found[0]["elf_vaddr"]+(file_offset-found[0]["file_offset"])


def audit(path: Path, expected_sha256: str):
    digest=hashlib.sha256()
    with path.open("rb") as f:
        for buf in iter(lambda: f.read(2**20),b""):
            digest.update(buf)
    sha=digest.hexdigest()
    if sha!=expected_sha256:
        raise ValueError(f"ELF SHA-256 mismatch: {sha}")
    with path.open("rb") as stream:
        with mmap.mmap(stream.fileno(),0,access=mmap.ACCESS_READ) as mm:
            segments=segments_from_elf(mm)
            markers=[]
            for match in TARGET.finditer(mm):
                token=match.group(0).decode("ascii",errors="replace")
                address=elf_vaddr(segments,match.start())
                markers.append({"token": token, "file_offset": match.start(),
                                "elf_vaddr": address,
                                "executable_segment": any(
                                    s["file_offset"]<=match.start()<s["file_end"]
                                    and s["flags"] & 1 for s in segments)})
                if len(markers)>=400:
                    break
            by_marker={}
            for row in markers:
                key=row["token"]
                by_marker[key]=by_marker.get(key,0)+1
            return {
                "source": str(path),
                "source_sha256": sha,
                "file_size": len(mm),
                "format": "ELF64-AARCH64",
                "load_segments": segments,
                "ascii_marker_count_bounded": len(markers),
                "ascii_markers_bounded": markers,
                "counts_bounded": by_marker,
                "candidate_dispatch_pc": None,
                "lua_state_layout_verified": False,
                "runtime_vm_attached": False,
                "status": "STATIC_IMAGE_STRING_PREFLIGHT_ONLY",
                "limits": [
                    "An ASCII string in rodata/text is not a function symbol or entry PC",
                    "ELF virtual address is not the live main base plus ASLR address without relocation mapping",
                    "Missing symbol/string cannot prove absent or custom Lua runtime",
                    "No VM instruction execution or live UpVal data collected",
                ],
            }


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument("elf",type=Path)
    parser.add_argument("--expected-sha256",required=True)
    parser.add_argument("--output",type=Path,required=True)
    args=parser.parse_args()
    data=audit(args.elf,args.expected_sha256)
    args.output.parent.mkdir(parents=True,exist_ok=True)
    args.output.write_text(json.dumps(data,indent=2,sort_keys=True)+"\n",encoding="utf-8")
    print("SV400_LUA_VM_ELF_PREFLIGHT",data["format"],
          data["source_sha256"], "markers",data["counts_bounded"],
          "DISPATCH_PC",data["candidate_dispatch_pc"],
          "RUNTIME",data["runtime_vm_attached"])

if __name__=="__main__":
    main()
