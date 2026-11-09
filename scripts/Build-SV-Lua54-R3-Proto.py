#!/usr/bin/env python3
"""Create a temporary standard Lua 5.4 chunk for full native Proto 752.

The original bytes are never modified. The derived chunk is for STATIC
decompiler validation; parent closures/Upvalue runtime cells are not present.
No derived game bytecode may be committed or uploaded.
"""
from __future__ import annotations
import argparse
from hashlib import sha256
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.chunk import Chunk, parse

REL = Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main_dynamic/main_dynamic.blua")
PIN = "ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572"

def create(root: Path):
    data=(root/REL).read_bytes()
    if sha256(data).hexdigest()!=PIN:
        raise ValueError("SV original main_dynamic SHA changed")
    original=parse(data)
    p=next(x for x in original.protos() if x.id==752)
    if p.instruction_count!=2071:
        raise ValueError("SV 4.0.0 pinned Proto 752 count changed")
    derived=Chunk(original.header,p.upvalue_count,p,"").encode()
    if parse(derived).encode()!=derived:
        raise ValueError("full proto 752 standalone chunk did not roundtrip")
    return derived

def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root",type=Path,default=ROOT)
    ap.add_argument("--out",type=Path,required=True)
    args=ap.parse_args()
    root=args.root.resolve()
    target=args.out.resolve()
    if str(target).startswith(str(root/"Unpack")):
        raise ValueError("output path must not be source ROM path")
    data=create(root)
    target.parent.mkdir(parents=True,exist_ok=True)
    target.write_bytes(data)
    print(f"Created transient full 2071-op source Proto752 chunk ({len(data)} bytes).")
    print("No parent runtime Upvalue identity retained; source untouched.")

if __name__=="__main__":
    main()
