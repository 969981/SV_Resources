#!/usr/bin/env python3
"""Read-only focused Ghidra C XREF scanner: SV 4.0.0 SysBot pointers and trainer ID."""
from pathlib import Path
import argparse, hashlib, re, json
p=argparse.ArgumentParser()
p.add_argument("root",type=Path); p.add_argument("game",choices=["scarlet_main","violet_main"])
a=p.parse_args()
base=a.root/"Unpack/4.0.0/exefs"/a.game
expected={"scarlet_main":"53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f","violet_main":"84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30"}[a.game]
digest=hashlib.sha256((base/(a.game+".elf")).read_bytes()).hexdigest()
assert digest==expected,(a.game,digest)
croot=base/"ghidra12.2/c"
assert croot.exists()
patterns={
 "setter_call":re.compile(r"\bFUN_01b78d30\s*\(",re.I),
 "getter_call":re.compile(r"\bFUN_01b78da0\s*\(",re.I),
 "tid6_call":re.compile(r"\bFUN_01b79160\s*\(",re.I),
 "status_copy_call":re.compile(r"\bFUN_019a8130\s*\(",re.I),
 "state_global":re.compile(r"\b(?:PTR_)?DAT_04840ac0\b",re.I),
 "sysbot_root_ghidra":re.compile(r"\b(?:PTR_)?(?:DAT|UNK|LAB)_(?:048350d8|047350d8)\b",re.I),
 "sysbot_root_literal":re.compile(r"\b0x(?:47350d8|48350d8)\b",re.I),
 "other_roots":re.compile(r"\b(?:PTR_)?(?:DAT|UNK|LAB)_(?:0483a110|0485ea28|0485a0d0)\b",re.I),
}
out={"game":a.game,"elf_sha256":digest,"c_files":0,"groups":{}}
for path in croot.glob("*.c"):
 out["c_files"]+=1
 s=path.read_text(encoding="utf-8",errors="replace")
 for tag,rx in patterns.items():
  matches=list(rx.finditer(s))
  if not matches:continue
  grp=out["groups"].setdefault(tag,[])
  excerpt=[]
  for m in matches[:4]:
   excerpt.append(s[max(0,m.start()-170):min(len(s),m.end()+210)].replace("\n"," "))
  grp.append({"file":path.name,"count":len(matches),"snippets":excerpt})
for tag,found in out["groups"].items():
 print("GROUP",a.game,tag,"FILES",len(found),flush=True)
 for x in found[:120]:
  # include short provenance, never dump whole Ghidra C
  print("XREF",tag,x["file"],"hits",x["count"],"::"," || ".join(x["snippets"])[:1100],flush=True)
print("REPORT_BEGIN",flush=True)
print(json.dumps({"game":out["game"],"sha256":digest,"c_files":out["c_files"],"counts":{k:len(v) for k,v in out["groups"].items()}},ensure_ascii=False),flush=True)
