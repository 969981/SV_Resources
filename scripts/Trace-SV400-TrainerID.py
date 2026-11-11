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
