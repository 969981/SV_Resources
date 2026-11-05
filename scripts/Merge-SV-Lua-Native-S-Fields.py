#!/usr/bin/env python3
"""Merge only source-backed new SV 4.0.0 S hashes into a separate supplement.

Read-only inputs: PokeDocs SV Lua S list + native-4.0.0 C->S closure TSV.
Does not open, divide or modify either .blua file or original PokeDocs list.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import io
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "tools/PokeDocs/SV/Hashlists/Lua/lua_s_hashes.txt"
CLOSURES = ROOT / "tools/PokeDocs-Supplement/SV/Hashlists/Lua/native-4.0.0/followup-c-static-s-closures.tsv"
OUTPUT = ROOT / "tools/PokeDocs-Supplement/SV/Hashlists/Lua/native-4.0.0/phase4"
ROW = re.compile(r"^0x([a-fA-F0-9]{16})[ \t]*(\S+)?[ \t]*$")
FNV_OFFSET = 0xCBF29CE484222645
FNV_PRIME = 0x100000001B3
TARGET = "BB0DA3B1BEEB4D80"
CANDIDATE = "GetInt8"

def fnv64(s: str) -> str:
    h = FNV_OFFSET
    for b in s.encode("utf-8"):
        h = (h ^ b) * FNV_PRIME & 0xFFFFFFFFFFFFFFFF
    return f"{h:016X}"

def build(source: Path, closures: Path):
    raw = source.read_bytes()
    original = {}
    for line in raw.decode("utf-8-sig").splitlines():
        m = ROW.fullmatch(line)
        if not m:
            if not line.strip():
                continue
            raise ValueError("Malformed PokeDocs S row: " + repr(line))
        h, name = m.group(1).upper(), m.group(2) or ""
        if h in original or (name and fnv64(name) != h):
            raise ValueError("Duplicate or invalid source S hash: " + h)
        original[h] = name
    native = {}
    with closures.open("r", encoding="utf-8", newline="") as fp:
        for row in csv.DictReader(fp, delimiter="\t"):
            if row["s_field_name"]:
                continue
            symbol = row["s_field_hash"]
            if not re.fullmatch(r"S[0-9A-F]{16}", symbol):
                raise ValueError("Noncanonical native S hash: " + symbol)
            h = symbol[1:]
            if h in original:
                raise ValueError("Unmapped native S field already exists in original list: " + h)
            if h in native:
                raise ValueError("Duplicate original S closure field: " + h)
            native[h] = row
    if len(native) != 12:
        raise ValueError(f"Expected 12 unlisted native static fields, got {len(native)}")
    if TARGET not in native or fnv64(CANDIDATE) != TARGET:
        raise ValueError("GetInt8 candidate is not the native exact FNV hash")
    fields = [
        "s_field_hash", "name_candidate", "candidate_status", "owner_class_hash",
        "source", "root_pc", "closure_proto_id", "evidence"
    ]
    buffer = io.StringIO()
    writer = csv.DictWriter(buffer, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for h, row in sorted(native.items()):
        writer.writerow({
            "s_field_hash": "S" + h,
            "name_candidate": CANDIDATE if h == TARGET else "",
            "candidate_status": "HASH_EXACT_CANDIDATE_NEW_S_ENTRY" if h == TARGET else "NATIVE_UNNAMED_NEW_S_ENTRY",
            "owner_class_hash": row["class_hash"], "source": row["source"],
            "root_pc": row["root_pc"], "closure_proto_id": row["closure_proto_id"],
            "evidence": "NATIVE_4_0_0_CLASS_S_CLOSURE"
        })
    joined = {**original, **{h: CANDIDATE if h == TARGET else "" for h in native}}
    merged = "\n".join(f"0x{h}" + (f" {joined[h]}" if joined[h] else " ")
                       for h in sorted(joined)) + "\n"
    report = {
        "game_version": "4.0.0",
        "original_s_rows": len(original),
        "new_unlisted_native_s_hashes": len(native),
        "new_exact_candidate_names": 1,
        "remaining_new_s_unmapped": len(native) - 1,
        "merged_s_rows": len(joined),
        "original_s_sha256": hashlib.sha256(raw).hexdigest(),
        "native_closure_tsv_sha256": hashlib.sha256(closures.read_bytes()).hexdigest(),
        "original_s_modified": False,
        "big_binary_files_accessed": False,
        "evidence_limit": "FNV match plus native closure proves a name candidate, not the original source spelling"
    }
    return {
        "lua_s_hashes.native-extended.txt": merged.encode("utf-8"),
        "phase4-s-native-12.tsv": buffer.getvalue().encode("utf-8"),
        "phase4-s-merge-report.json": (json.dumps(report, ensure_ascii=False, sort_keys=True, indent=2)+"\n").encode("utf-8")
    }, report

def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--source", type=Path, default=SOURCE)
    p.add_argument("--closures", type=Path, default=CLOSURES)
    p.add_argument("--output", type=Path, default=OUTPUT)
    p.add_argument("--verify-only", action="store_true")
    a = p.parse_args()
    out, report = build(a.source, a.closures)
    if a.verify_only:
        for name,data in out.items():
            if not (a.output/name).is_file() or (a.output/name).read_bytes()!=data:
                raise SystemExit("Missing/stale S mapping artifact: "+str(a.output/name))
    else:
        a.output.mkdir(parents=True, exist_ok=True)
        for name,data in out.items():
            dest = a.output/name
            if not dest.exists() or dest.read_bytes()!=data:
                dest.write_bytes(data)
    print(json.dumps(report, ensure_ascii=False, indent=2))

if __name__ == "__main__":
    main()
