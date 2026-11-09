#!/usr/bin/env python3
"""R3 experimental Lua54 array-capacity-preserved replacement for *one*
SHA-pinned PC649..665 emitted native region.

It changes only the initial table allocation to a Lua array-preallocated
constructor made of three nil slots. It is NOT a general SETLIST fix.
The generated source remains ephemeral and must be compared to real bytes.
"""
from __future__ import annotations
import argparse
import hashlib
from pathlib import Path

PIN = "2444ae67b188a12ba6653b2e237fb298733033d0add00e5ded46adeab6988233"
SOURCE = "  local r14 = {}\n"
REPLACEMENT = "  local r14 = { nil, nil, nil }\n"


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--emitted",required=True,type=Path)
    ap.add_argument("--output",required=True,type=Path)
    args=ap.parse_args()
    raw=args.emitted.read_bytes()
    if hashlib.sha256(raw).hexdigest()!=PIN:
        raise ValueError("R2 native-derived Lua source SHA changed")
    s=raw.decode("utf-8")
    if s.count(SOURCE)!=1:
        raise ValueError("expected exactly one fresh NEWTABLE seed")
    altered=s.replace(SOURCE,REPLACEMENT,1)
    out=args.output.resolve()
    if "Unpack/4.0.0" in out.as_posix():
        raise ValueError("must not write into original ROM content")
    out.parent.mkdir(parents=True,exist_ok=True)
    out.write_text(altered,encoding="utf-8")
    print("R3 capacity-preserved candidate: 3 nil preallocated slots and unchanged subsequent writes")
    print("WARNING: experimental bounded PC649-665 output, not full Proto752 or general SETLIST repair")


if __name__=="__main__":
    main()
