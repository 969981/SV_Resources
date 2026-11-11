#!/usr/bin/env python3
"""Verify shared SV400 subsdk0 ELF and inspect executable ARM64 for field-28 accesses.

This is an optional, narrow module-scope sanity check; any literal 0x3c or
LDRH #0x3c is only a structural candidate and never a confirmed version filter.
No decompilation, patched ELF, ROM mutation, or re-analysis of full Ghidra.
"""
import argparse
import hashlib
import json
import struct
from pathlib import Path

ELF_SHA='463db1eac0b20bc7b92984b50c807af0640a2dc1aa586e1b920ab6a63c1a2a1a'
def u16(b,o):return struct.unpack_from('<H',b,o)[0]
def u32(b,o):return struct.unpack_from('<I',b,o)[0]
def u64(b,o):return struct.unpack_from('<Q',b,o)[0]
def exec_ranges(b):
    ranges=[]
    shoff=u64(b,0x28);shent=u16(b,0x3a);shnum=u16(b,0x3c)
    if shoff and shent>=64 and shoff+shent*shnum<=len(b):
        for i in range(shnum):
            p=shoff+i*shent; flags=u64(b,p+8)
            off=u64(b,p+24);size=u64(b,p+32);addr=u64(b,p+16)
            if flags&4 and size and off+size<=len(b):
                ranges.append((off,size,addr))
    if ranges:return ranges,'SHF_EXECINSTR'
    phoff=u64(b,0x20);phent=u16(b,0x36);phnum=u16(b,0x38)
    if not phoff or phent<56 or phoff+phent*phnum>len(b):
        raise ValueError('No ELF executable regions')
    for i in range(phnum):
        p=phoff+i*phent
        if u32(b,p)==1 and u32(b,p+4)&1:
            off=u64(b,p+8);size=u64(b,p+32);addr=u64(b,p+16)
            if off+size<=len(b):ranges.append((off,size,addr))
    if not ranges:raise ValueError('No executable segments')
    return ranges,'PF_X PT_LOAD fallback'
def scan(b):
    if b[:4]!=b'\x7fELF' or b[4]!=2 or b[5]!=1 or u16(b,0x12)!=183:
        raise ValueError('Not ELF64 little-endian AArch64')
    rs,method=exec_ranges(b)
    hits=[];n=0
    for off,size,addr in rs:
        for p in range(off,off+size-3,4):
            op=u32(b,p);n+=1
            if op&0xffc00000 == 0x79400000 and ((op>>10)&0xfff)==30:
                history=[{'elf_va':hex(addr+q-off),'opcode':f'{u32(b,q):08x}'}
                         for q in range(max(off,p-48),p,4)]
                hits.append({'elf_va':hex(addr+p-off),'file_offset':hex(p),
                         'opcode':f'{op:08x}','base_register':(op>>5)&31,
                         'prior_12_instructions':history})
    tokens=[b'EncountPokeData',b'pokedata',b'VersionTable',
            b'world/data/encount',b'Encount',b'Spawn',b'spawn']
    strings={}
    for t in tokens:
        pos=[];start=0
        while len(pos)<15:
            idx=b.find(t,start)
            if idx<0:break
            pos.append(hex(idx));start=idx+len(t)
        if pos:strings[t.decode('ascii')]=pos
    return {'status':'MODULE_SOURCE_VERIFIED_STATIC_SCAN_ONLY',
        'module':'subsdk0','version':'4.0.0','exec_region_method':method,
        'exec_regions':[{'file_offset':hex(o),'size':s,'elf_va':hex(a)} for o,s,a in rs],
        'arm64_instructions_scanned':n,'ldrh_field28_immediate_hits':len(hits),
        'hits':hits,'lexical_strings':strings,
        'unresolved':['May use generic FlatBuffers readers with dynamic field indices',
                      'main and subsdk0 dispatch links not established',
                      'No version context or native allow/deny branch established']}
def main():
    p=argparse.ArgumentParser()
    p.add_argument('--elf',type=Path,required=True)
    p.add_argument('--out',type=Path,required=True)
    a=p.parse_args()
    b=a.elf.read_bytes()
    sha=hashlib.sha256(b).hexdigest()
    if sha!=ELF_SHA:raise ValueError(f'Original subsdk0 ELF SHA mismatch {sha}')
    rep=scan(b);rep['source_elf_sha256']=sha
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(rep,indent=2)+'\n',encoding='utf-8')
    print(json.dumps({k:v for k,v in rep.items() if k not in ('hits','lexical_strings')},indent=2))
if __name__=='__main__':main()
