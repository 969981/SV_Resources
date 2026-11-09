#!/usr/bin/env python3
"""SV 4.0.0 read-only AArch64 ADRP/ADD/BL references to Lua string anchors.

All results are static call-site HINTS. They do not identify luaV_execute,
recover a lua_State, or prove any original Lua VM instruction was executed.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import mmap
from pathlib import Path
import struct


def sign_extend(value: int, bits: int) -> int:
    boundary = 1 << (bits - 1)
    return (value ^ boundary) - boundary


def adrp(word: int, pc: int):
    if (word & 0x9F000000) != 0x90000000:
        return None
    immlo = (word >> 29) & 3
    immhi = (word >> 5) & 0x7FFFF
    displacement = sign_extend((immhi << 2) | immlo, 21) << 12
    return ((pc & ~4095) + displacement, word & 31)


def add_x_imm(word: int):
    # 64-bit ADD immediate; shift=0 or 12; rejects flag-setting ADD.
    if (word & 0xFF000000) != 0x91000000:
        return None
    shift = (word >> 22) & 3
    if shift not in (0, 1):
        return None
    return ((word >> 5) & 31, word & 31,
            ((word >> 10) & 4095) << (12 if shift else 0))


def bl_target(word: int, pc: int):
    if (word & 0xFC000000) != 0x94000000:
        return None
    return pc + (sign_extend(word & 0x3FFFFFF, 26) << 2)


def find_xrefs(executable: bytes | memoryview, exe_vaddr: int,
               target_vaddr: int, max_results: int = 80):
    """Look for ADRP Rn,page; then ADD Rn,Rn,#off in next 12 words.

    Rn clobber, basic block boundaries, and indirect relocations are not
    evaluated, so even matching pairs are candidate xrefs only.
    """
    if len(executable) % 4:
        raise ValueError("executable section must be multiple of four")
    results = []
    words = struct.iter_unpack("<I", executable)
    # Slicing just a 52-byte lookahead after candidate ADRP is efficient
    # for multi-million-word AArch64 executable segments.
    for idx, (word,) in enumerate(words):
        pc = exe_vaddr + 4*idx
        item = adrp(word, pc)
        if not item:
            continue
        page, rd = item
        if (target_vaddr & ~4095) != page:
            continue
        for d in range(1, 13):
            off = 4*(idx+d)
            if off+4 > len(executable):
                break
            nextword = struct.unpack_from("<I", executable, off)[0]
            add = add_x_imm(nextword)
            if add and add[0] == rd and add[2] + page == target_vaddr:
                near_calls=[]
                for k in range(1,17):
                    pos=off+4*k
                    if pos+4 > len(executable):
                        break
                    callee=bl_target(struct.unpack_from("<I", executable, pos)[0],
                                     exe_vaddr + pos)
                    if callee is not None:
                        near_calls.append({"bl_rva":exe_vaddr+pos,
                                           "target_rva":callee})
                results.append({"adrp_rva": pc, "add_rva":exe_vaddr+off,
                                "register": rd, "matched_data_vaddr":target_vaddr,
                                "nearby_bl_candidates":near_calls[:8],
                                "identity_status":"PC_RELATIVE_STRING_XREF_CANDIDATE"})
                break
        if len(results)>=max_results:
            break
    return results


def audit(path: Path, expected_sha: str, anchor_vaddrs: dict[str,int]):
    digest=hashlib.sha256()
    with path.open("rb") as f:
        for block in iter(lambda:f.read(2**20),b""):
            digest.update(block)
    actual=digest.hexdigest()
    if actual!=expected_sha:
        raise ValueError("ELF SHA-256 mismatch")
    from importlib.util import module_from_spec, spec_from_file_location
    preflight=Path(__file__).with_name("Audit-SV400-LuaVM-ELF.py")
    spec=spec_from_file_location("sv400_elf_preflight",preflight)
    module=module_from_spec(spec)
    spec.loader.exec_module(module)
    with path.open("rb") as f:
        with mmap.mmap(f.fileno(),0,access=mmap.ACCESS_READ) as m:
            segments=module.segments_from_elf(m)
            executable=[s for s in segments if s["flags"] & 1]
            if len(executable)!=1:
                raise ValueError("must have exactly one executable PT_LOAD")
            text=executable[0]
            data=m[text["file_offset"]:text["file_end"]]
            rows={}
            for token,vaddr in anchor_vaddrs.items():
                if not isinstance(vaddr,int):
                    raise ValueError("noninteger anchor")
                results=find_xrefs(data,text["elf_vaddr"],vaddr)
                rows[token]={"string_vaddr":vaddr,"xref_candidates":results,
                             "xref_candidate_count_bounded":len(results)}
            return {
                "source_sha256": actual, "format":"ELF64-AARCH64",
                "inputs":rows,
                "runtime_dispatch_entry": None,
                "active_lua_state":None,
                "real_vm_events_collected":False,
                "status":"STATIC_XREF_PRECURSOR_ONLY",
                "limits":[
                  "A candidate xref to 'Lua 5.4' or '.blua' does not locate Lua VM opcode dispatch",
                  "A nearby BL is a call-site heuristic, not a verified VM function",
                  "Runtime base, actual VM closure, and lua_State offsets are not known",
                ],
            }


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("elf",type=Path)
    ap.add_argument("--expected-sha256",required=True)
    ap.add_argument("--blua-vaddr",type=lambda s:int(s,0),required=True)
    ap.add_argument("--lua-version-vaddr",type=lambda s:int(s,0),required=True)
    ap.add_argument("--output",type=Path,required=True)
    args=ap.parse_args()
    result=audit(args.elf,args.expected_sha256,
                 {".blua":args.blua_vaddr,"Lua 5.4":args.lua_version_vaddr})
    args.output.parent.mkdir(parents=True,exist_ok=True)
    args.output.write_text(json.dumps(result,sort_keys=True,indent=2)+"\n")
    print("STATIC_XREF_PRECURSOR_ONLY",
          [(x,y["xref_candidate_count_bounded"]) for x,y in result["inputs"].items()],
          "DISPATCH",result["runtime_dispatch_entry"])

if __name__=="__main__":
    main()
