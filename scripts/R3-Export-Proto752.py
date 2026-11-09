#!/usr/bin/env python3
"""Produce an ephemeral full Proto 752 native Lua 5.4 binary for R3 pipeline tests.

The lifted chunk contains the original 2071 instruction words and all nested
Prototypes. Parent runtime Upvalue cells are NOT supplied; this is static
decompilation input only, not an independently runnable game function.
"""
from __future__ import annotations
import argparse
import hashlib
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools/SV.Lua54/src"))
from sv_lua54.chunk import Chunk, parse

SOURCE = Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main_dynamic/main_dynamic.blua")
SHA256 = "ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572"


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--output", type=Path, required=True)
    parser.add_argument("--root", type=Path, default=ROOT)
    args = parser.parse_args()
    root = args.root.resolve()
    src = root / SOURCE
    data = src.read_bytes()
    if hashlib.sha256(data).hexdigest() != SHA256:
        raise ValueError("original 4.0.0 source SHA has changed")
    chunk = parse(data)
    target = next((p for p in chunk.protos() if p.id == 752), None)
    if target is None or target.instruction_count != 2071:
        raise ValueError("native target Proto 752 changed")
    out = Chunk(chunk.header, target.upvalue_count, target, "").encode()
    assert parse(out).encode() == out
    destination = args.output.resolve()
    if str(destination).startswith(str(root / "Unpack")):
        raise ValueError("refuse write into original ROM directory")
    destination.parent.mkdir(parents=True, exist_ok=True)
    destination.write_bytes(out)
    print(f"R3 isolated full native Proto 752: {target.instruction_count} "
          f"instructions, {len(target.children)} children; {len(out)} bytes")
    print("Temporary test input only; NOT a standalone behavioral oracle.")


if __name__ == "__main__":
    main()
