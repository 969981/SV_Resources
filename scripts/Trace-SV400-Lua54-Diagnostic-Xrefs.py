#!/usr/bin/env python3
"""Source-backed AArch64 xrefs from standard Lua-style diagnostic strings.

Use stronger Lua error anchors than the Lua 5.4 version banner. These are
still diagnostics, NOT a proven luaV_execute, lua_State layout or opcode PC.
"""
from __future__ import annotations

import argparse
import hashlib
from importlib.util import module_from_spec, spec_from_file_location
import json
import mmap
from pathlib import Path

MESSAGES = (
    b"attempt to compare two %s values",
    b"attempt to compare %s with %s",
    b"C stack overflow",
    b"stack overflow (%s)",
    b"stack overflow",
)


def _load_sibling(name: str, filename: str):
    spec=spec_from_file_location(name, Path(__file__).with_name(filename))
    m=module_from_spec(spec)
    spec.loader.exec_module(m)
    return m


def scan_bytes(image, segments, xref_module, *, max_results=24):
    """Return exact source file offsets + mapped virtual addresses + xref hints."""
    executable=[s for s in segments if s["flags"] & 1]
    rows=[]
    for message in MESSAGES:
        occurrences=[]
        start=0
        while True:
            file_offset=image.find(message,start)
            if file_offset<0:
                break
            elf_addr=None
            for s in segments:
                if s["file_offset"] <= file_offset < s["file_end"]:
                    elf_addr=s["elf_vaddr"]+file_offset-s["file_offset"]
                    break
            if elf_addr is None:
                raise ValueError("message outside PT_LOAD")
            refs=[]
            for executable_segment in executable:
                lo,hi=(executable_segment["file_offset"],
                       executable_segment["file_end"])
                if lo % 4:
                    raise ValueError("unexpected instruction file alignment")
                text=image[lo:hi]
                refs+=xref_module.find_xrefs(
                    text,executable_segment["elf_vaddr"],elf_addr,
                    max_results=max_results)
            occurrences.append({
                "elf_vaddr":elf_addr,
                "file_offset":file_offset,
                "native_xref_candidates":refs[:max_results],
                "candidate_xref_count":len(refs),
                "function_identity":"UNVERIFIED_STATIC_STRING_REFERENCES",
            })
            if len(occurrences)>=8:
                break
            start=file_offset+1
        rows.append({
            "message":message.decode("ascii"),
            "occurrence_count_bounded":len(occurrences),
            "anchors":occurrences,
            "limit_bounded":len(occurrences)>=8,
        })
    return rows


def audit(path:Path,sha:str):
    h=hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda:f.read(1<<20),b""):
            h.update(chunk)
    actual=h.hexdigest()
    if actual!=sha:
        raise ValueError("original ELF SHA-256 mismatch")
    fmt=_load_sibling("slr_luavm_elf_format","Audit-SV400-LuaVM-ELF.py")
    xref=_load_sibling("slr_luavm_xref","Locate-SV400-LuaVM-Xrefs.py")
    with path.open("rb") as f:
        with mmap.mmap(f.fileno(),0,access=mmap.ACCESS_READ) as image:
            segments=fmt.segments_from_elf(image)
            rows=scan_bytes(image,segments,xref)
    return {
        "source_sha256":actual,
        "source_module":path.name,
        "anchors":rows,
        "runtime_vm_dispatch_rva":None,
        "runtime_lua_state":None,
        "runtime_upvalue_ids":None,
        "status":"STATIC_LUA_DIAGNOSTIC_XREF_EVIDENCE_ONLY",
        "limitations":[
          "Canonical Lua-style error text can be wrapped or copied by game code",
          "A nearby BL is not proof of a Lua VM dispatcher",
          "ADRP ADD scanner misses indirect and register-overwrite address chains",
          "Lua per-Proto PCs have no mapping to native RVAs without runtime context",
        ],
    }


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("elf",type=Path)
    ap.add_argument("--expected-sha256",required=True)
    ap.add_argument("--output",type=Path,required=True)
    args=ap.parse_args()
    report=audit(args.elf,args.expected_sha256)
    args.output.write_text(json.dumps(report,indent=2,sort_keys=True)+"\n",encoding="utf-8")
    print("LUA_DIAGNOSTIC_XREFS",
          [(x["message"],x["occurrence_count_bounded"],
            sum(y["candidate_xref_count"] for y in x["anchors"]))
           for x in report["anchors"]])
    print("VM_OPCODE_DISPATCH",report["runtime_vm_dispatch_rva"])


if __name__=="__main__":
    main()
