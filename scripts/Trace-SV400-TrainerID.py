#!/usr/bin/env python3
"""Read-only Scarlet/Violet Ghidra-C and ELF identity research probe."""
from pathlib import Path
import hashlib, re, struct, sys
base=Path(sys.argv[1])
game=sys.argv[2]
root=base/'Unpack/4.0.0/exefs'/game
elf=root/(game+'.elf')
croot=root/'ghidra12.2/c'
expected={
 'scarlet_main':'53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f',
 'violet_main':'84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30'
}[game]
raw=elf.read_bytes()
assert hashlib.sha256(raw).hexdigest()==expected
files=list(croot.glob('*.c'))
print('PROVENANCE',game,expected,'c_count',len(files),flush=True)
patterns={
 'K_MY_STATUS':re.compile(r'e3e89bd1',re.I),
 'TRAINER_TERMS':re.compile(r'trainer.?id|secret.?id|trainer.?status|player.?status|my.?status|tid16|sid16|new.?game',re.I),
 'DISPLAY_1M':re.compile(r'0xf4240\b|\b1000000\b',re.I),
}
results={p:[] for p in patterns}
for file in files:
 content=file.read_text(encoding='utf-8',errors='replace')
 for key,regex in patterns.items():
  if regex.search(content):
   results[key].append(file)
for key,found in results.items():
 print('CATEGORY',key,'COUNT',len(found),flush=True)
 for file in found[:65]:
  content=file.read_text(encoding='utf-8',errors='replace')
  hits=list(patterns[key].finditer(content))
  snippets='\n'.join(content[max(0,m.start()-200):min(len(content),m.end()+200)] for m in hits[:2])
  body=content[:6000] if key=='K_MY_STATUS' else snippets
  print('FILE',file.name,'HITS',len(hits),'SIZE',len(content),'BODY',body,flush=True)
for key,pat in [('K_MY_STATUS',struct.pack('<I',0xe3e89bd1)),('MOD_1M',struct.pack('<I',1000000))]:
 positions=[];start=0
 while True:
  p=raw.find(pat,start)
  if p<0:break
  positions.append(p);start=p+1
 print('RAW_LITERAL_LE',key,len(positions),[hex(x) for x in positions[:150]],flush=True)
for half in (0x9bd1,0xe3e8,0x4240,0x000f):
 found=[]
 for off in range(0,len(raw)-4,4):
  ins=int.from_bytes(raw[off:off+4],'little')
  if (ins & 0x7f800000) in (0x52800000,0x72800000) and ((ins>>5)&0xffff)==half:
   found.append((hex(off),hex(ins),(ins>>21)&3,ins&31))
 print('MOV_W_HALF',hex(half),'COUNT',len(found),'FIRST',found[:90],flush=True)

print('===== CALL GRAPH CANDIDATES =====',flush=True)
targets=['0168d238','020f8d00','015d0cb8','00f844f4']
for target in targets:
 pattern=re.compile('FUN_'+target,re.I)
 callers=[]
 for file in files:
  if file.stem.lower()==target:continue
  c=file.read_text(encoding='utf-8',errors='replace')
  m=pattern.search(c)
  if m:callers.append((file.name,c[max(0,m.start()-180):m.end()+220]))
 print('CALLERS',target,'COUNT',len(callers),flush=True)
 for file,excerpt in callers[:40]:
  print('CALLER',target,file,excerpt.replace('\n',' | '),flush=True)
print('===== ARM64 ELF KEY INSTRUCTION WINDOWS =====',flush=True)
from elftools.elf.elffile import ELFFile
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
md=Cs(CS_ARCH_ARM64,CS_MODE_ARM)
with elf.open('rb') as fp:
 ef=ELFFile(fp)
 segs=[s for s in ef.iter_segments() if s['p_type']=='PT_LOAD']
 print('ELF_SEGMENTS',[(hex(s['p_offset']),hex(s['p_vaddr']),hex(s['p_filesz']),hex(s['p_flags'])) for s in segs],flush=True)
 for half in (0x9bd1,):
  for off in range(0,len(raw)-4,4):
   ins=int.from_bytes(raw[off:off+4],'little')
   if (ins & 0x7f800000) not in (0x52800000,0x72800000) or (ins>>5)&0xffff!=half:continue
   seg=next((s for s in segs if s['p_offset']<=off<s['p_offset']+s['p_filesz']),None)
   if seg is None:continue
   start=max(int(seg['p_offset']),off-48);end=min(int(seg['p_offset']+seg['p_filesz']),off+120)
   va=int(seg['p_vaddr'])+(start-int(seg['p_offset']))
   print('ARM64_WINDOW',game,'key_half_offset',hex(off),'ELF_VA',hex(int(seg['p_vaddr'])+off-int(seg['p_offset'])),flush=True)
   for inst in md.disasm(raw[start:end],va):
    print('INS',hex(inst.address),inst.bytes.hex(),inst.mnemonic,inst.op_str,flush=True)

print('===== INITIALIZER ARM64 WINDOWS =====',flush=True)
for start_rva,size in [(0x158d10c,0x30),(0x158d138,0x80),(0x158d1b0,0x14),(0x158d1c0,0x70)]:
 seg=next((s for s in segs if s['p_vaddr']<=start_rva<s['p_vaddr']+s['p_filesz']),None)
 if seg is None:print('NO_SEGMENT',hex(start_rva),flush=True);continue
 off=int(seg['p_offset'])+start_rva-int(seg['p_vaddr'])
 print('INIT_FUNC',game,hex(start_rva),'ELF_OFFSET',hex(off),flush=True)
 for ins in md.disasm(raw[off:off+size],start_rva):
  print('INIT_INS',hex(ins.address),ins.bytes.hex(),ins.mnemonic,ins.op_str,flush=True)
