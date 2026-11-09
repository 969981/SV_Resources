#!/usr/bin/env python3
"""Generate/verify the pinned SV 4.0.0 native Lua 5.4 manifest, read-only.

Outputs only metadata. Full binary chunks and recovered source are NOT copied.
"""
from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.chunk import Lua54FormatError, parse

VIRTUAL = Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release")
OUTPUT = Path("tools/SV.Lua54/fixtures/native_manifest.json")

MODULES = ("main", "main_dynamic", "dll_danbattle", "dll_picnic",
           "dll_stadium", "dll_util")
EXPECTED = {
    "main": ("c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815", 12912264, 37743),
    "main_dynamic": ("ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572", 5342713, 7036),
}


def first_difference(original: bytes, rebuilt: bytes):
    for i, (a, b) in enumerate(zip(original, rebuilt)):
        if a != b:
            return i
    return min(len(original), len(rebuilt))


def generate(root: Path) -> dict:
    records = []
    for name in MODULES:
        source = VIRTUAL / name / f"{name}.blua"
        file = root / source
        if not file.is_file():
            raise FileNotFoundError(f"missing original native Lua file: {file}")
        raw = file.read_bytes()
        chunk = parse(raw)
        rebuilt = chunk.encode()
        if raw != rebuilt:
            pos = first_difference(raw, rebuilt)
            raise Lua54FormatError(
                f"{name}: binary round-trip mismatch at offset {pos}; "
                f"native {len(raw)} bytes / rebuilt {len(rebuilt)} bytes"
            )
        stats = chunk.summary()
        if name in EXPECTED:
            sha, expected_length, proto_count = EXPECTED[name]
            if (stats["sha256"], len(raw), stats["prototype_count"]) != (sha, expected_length, proto_count):
                raise Lua54FormatError(
                    f"{name}: source differs from pinned 4.0.0 baseline: "
                    f"sha={stats['sha256']} size={len(raw)} prototypes={stats['prototype_count']}"
                )
        records.append({
            "module": name,
            "relative_source": source.as_posix(),
            "bytes": len(raw),
            "lua_header_hex": raw[:31].hex(),
            "roundtrip_byte_identical": True,
            **stats,
        })
        print(f"{name}: {len(raw)} bytes / {stats['prototype_count']} prototypes / "
              f"{stats['instruction_count']} instructions / roundtrip PASS", flush=True)
    return {
        "schema_version": 1,
        "game_version": "SV Violet 4.0.0",
        "lua_format": "Lua 5.4 standard binary chunk; little-endian 4/8/8 ABI",
        "status": "PARSED_AND_BINARY_ROUNDTRIP_ONLY",
        "warning": "Successful binary round-trip is not Lua source decompilation or runtime equivalence.",
        "file_count": len(records),
        "total_prototypes": sum(x["prototype_count"] for x in records),
        "total_instructions": sum(x["instruction_count"] for x in records),
        "sources": records,
    }


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=ROOT)
    parser.add_argument("--output", type=Path, default=OUTPUT)
    parser.add_argument("--verify-only", action="store_true")
    args = parser.parse_args()
    result = generate(args.root.resolve())
    data = (json.dumps(result, indent=2, ensure_ascii=False, sort_keys=True) + "\n").encode("utf-8")
    target = args.output if args.output.is_absolute() else args.root / args.output
    if args.verify_only:
        if not target.is_file() or target.read_bytes() != data:
            raise SystemExit(f"FAIL: missing/stale manifest {target}")
        print(f"Verified {result['file_count']} native modules, "
              f"{result['total_prototypes']} prototypes, "
              f"{result['total_instructions']} instructions (no changes)")
    else:
        target.parent.mkdir(parents=True, exist_ok=True)
        target.write_bytes(data)
        print(f"Wrote metadata manifest {target}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
