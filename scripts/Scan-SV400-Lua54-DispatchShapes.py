#!/usr/bin/env python3
"""Read-only, evidence-ranked AArch64 Lua 5.4 dispatch signature audit.

Lua 5.4 standard 7-bit opcode mask is a *heuristic*, not proof of a VM.
AArch64 AND-immediate/UBFM sequences alone occur in unrelated C/C++ code.
Do not promote candidates to Lua VM addresses without a verified runtime hit,
actual current LClosure/Proto identity, and opcode PC correlation.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import mmap
from pathlib import Path
import struct
from collections import Counter

# Logical AND 32-bit immediate wN,#127 and UBFM 32-bit immr0/imms6.
# Low 10 bits are Rd and Rn, which vary.
MASKED_OPCODE_WORDS = {
    0x12001800: "AND_W_IMM_7BIT",
    0x53001800: "UBFM_W_LOW_7BIT",
}


def extract_opmask(word: int):
    template = word & 0xFFFFFC00
    if template in MASKED_OPCODE_WORDS:
        return {
            "kind": MASKED_OPCODE_WORDS[template],
            "register_dst": word & 31,
            "register_src": (word >> 5) & 31,
        }
    return None


def cmp_imm_w(word: int):
    """Decode SUBS WZR,Wn,#imm12 (CMP wN,#imm); shift must be zero."""
    # sf=0, op=1, S=1, fixed 10001 bits and Rd=31
    if (word & 0xFF80001F) != 0x7100001F:
        return None
    if word & 0x00400000:
        return None
    return {
        "register": (word >> 5) & 31,
        "immediate": (word >> 10) & 4095,
    }


def br_register(word: int):
    if (word & 0xFFFFFC1F) == 0xD61F0000:
        return (word >> 5) & 31
    return None


def branch_imm(word: int, pc: int):
    if word & 0xFC000000 not in (0x14000000, 0x94000000):
        return None
    displacement = word & 0x3ffffff
    if displacement & 0x2000000:
        displacement -= 0x4000000
    return pc + displacement * 4


def static_candidates(data: bytes, text_base: int = 0,
                      window_words: int = 56, max_rows: int = 160):
    if len(data) % 4:
        raise ValueError("AArch64 text length must be word aligned")
    candidates = []
    counters=Counter()
    for index in range(0, len(data), 4):
        (word,) = struct.unpack_from("<I", data, index)
        m=extract_opmask(word)
        if not m:
            continue
        counters["mask_total"]+=1
        nearby_cmp=[]
        nearby_br=[]
        nearby_indirect=[]
        for offset in range(1, window_words+1):
            pos=index+4*offset
            if pos+4>len(data):
                break
            (ins,) = struct.unpack_from("<I",data,pos)
            cmp=cmp_imm_w(ins)
            if cmp and cmp["register"] == m["register_dst"]:
                if cmp["immediate"] in (81,82,83,84):
                    nearby_cmp.append({"rva": text_base+pos, **cmp})
            tgt=branch_imm(ins,text_base+pos)
            if tgt is not None and tgt <= text_base+index:
                nearby_br.append({"rva":text_base+pos,"target_rva":tgt})
            reg=br_register(ins)
            if reg is not None:
                nearby_indirect.append({"rva":text_base+pos,"register":reg})
        if nearby_cmp:
            counters["mask_with_81_to_84_cmp"]+=1
        if nearby_indirect:
            counters["mask_with_indirect_br"]+=1
        if nearby_cmp and nearby_indirect:
            counters["mask_cmp_and_br"]+=1
        score=4*(bool(nearby_cmp)) + 3*bool(nearby_indirect) + bool(nearby_br)
        if score < 4:
            continue
        candidates.append({
            "mask_rva":text_base+index,
            "mask_word":f"{word:08x}",
            "mask":m,
            "nearby_opcode_upper_bound_cmps":nearby_cmp[:4],
            "nearby_indirect_br":nearby_indirect[:4],
            "nearby_backward_b":nearby_br[:4],
            "heuristic_score":score,
            "vm_identity":"UNVERIFIED_STATIC_PATTERN",
        })
    candidates.sort(key=lambda c:(-c["heuristic_score"],c["mask_rva"]))
    return {"summary":dict(counters),
            "candidate_count_unbounded":len(candidates),
            "candidates":candidates[:max_rows],
            "candidate_list_truncated":len(candidates)>max_rows,
            "status":"STATIC_DISPATCH_SHAPE_CANDIDATES_NOT_VM_PROOF"}


def audit_elf(path:Path, expected_sha256:str):
    with path.open("rb") as f:
        digest=hashlib.sha256()
        for block in iter(lambda:f.read(1024*1024),b""):
            digest.update(block)
    actual=digest.hexdigest()
    if actual!=expected_sha256:
        raise ValueError(f"ELF hash mismatch: {actual}")
    with path.open("rb") as stream:
        with mmap.mmap(stream.fileno(),0,access=mmap.ACCESS_READ) as image:
            phoff=struct.unpack_from("<Q",image,32)[0]
            phentsize,phnum=struct.unpack_from("<HH",image,54)
            if image[:4]!=b"\x7fELF" or image[4:6]!=b"\x02\x01" or (
                struct.unpack_from("<H",image,18)[0]!=183
            ):
                raise ValueError("not ELF64 AArch64")
            executable=[]
            for i in range(phnum):
                p=phoff+i*phentsize
                typ,flags,off,vaddr,paddr,filesz,memsz,align=struct.unpack_from("<IIQQQQQQ",image,p)
                if typ==1 and flags & 1:
                    if filesz%4 or off+filesz>len(image):
                        raise ValueError("misaligned or invalid executable PT_LOAD")
                    executable.append((off,vaddr,filesz))
            if not executable:
                raise ValueError("no executable PT_LOAD")
            totals=Counter()
            all_rows=[]
            for off,va,size in executable:
                scan=static_candidates(image[off:off+size],va)
                totals.update(scan["summary"])
                all_rows.extend(scan["candidates"])
            all_rows.sort(key=lambda x:(-x["heuristic_score"],x["mask_rva"]))
            return {
                "elf_sha256":actual,
                "summary":dict(totals),
                "candidates":all_rows[:120],
                "candidates_truncated":len(all_rows)>120,
                "vm_opcode_dispatch_rva":None,
                "game_lua_runtime_events":False,
                "status":"STATIC_DISPATCH_SHAPE_CANDIDATES_NOT_VM_PROOF",
                "caution":"7-bit masks and nearby cmp/BR appear in many non-Lua loops. A VM PC requires original game runtime correlation and validated lua_State/Proto.",
            }


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("elf",type=Path)
    p.add_argument("--expected-sha256",required=True)
    p.add_argument("--output",type=Path,required=True)
    args=p.parse_args()
    r=audit_elf(args.elf,args.expected_sha256)
    args.output.write_text(json.dumps(r,sort_keys=True,indent=2)+"\n",encoding="utf-8")
    print("AARCH64_OPCODE_DISPATCH_SHAPES",r["summary"],
          "top",[(hex(x["mask_rva"]),x["heuristic_score"]) for x in r["candidates"][:12]],
          "VERIFIED_VM",r["vm_opcode_dispatch_rva"])


if __name__=="__main__":
    main()
