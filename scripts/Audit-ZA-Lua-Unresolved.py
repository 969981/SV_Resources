#!/usr/bin/env python3
"""Audit unresolved ZA Lua hashes and scan explicitly supplied native binary files.

Evidence boundaries:
 - Haxe source references are THIRD_PARTY_RECONSTRUCTION_REFERENCE_ONLY.
 - A literal 8-byte match is RAW_HASH_LITERAL_ONLY, NOT a proved Lua opcode,
   method name, native caller, ABI, or recovered identifier.
 - This script NEVER edits source hash lists or source game binary files.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
import re
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
MERGED = ROOT / "tools/PokeDocs-Supplement/ZA/Hashlists/Lua"
ORIGINAL = ROOT / "tools/PokeDocs/ZA/Hashlists/Lua"
PINNED = "c7bc243ac4d28356dff9f06b6723330ea92247d5"
HEX = re.compile(r"^0x[0-9a-fA-F]{16}$")
REF_HEADER = ("kind", "hash", "path", "line", "role", "scope",
              "scope_line", "excerpt", "blob_sha", "commit")
INDEX_HEADER = ("kind", "hash", "original_line", "original_blob_sha",
                "haxe_ref_count", "decl_count", "call_count", "read_count",
                "write_count", "abi_annotation_count", "first_haxe_path",
                "first_haxe_line", "evidence_grade", "native_confirmed")
ROLES = ("DECLARATION", "CALL", "READ", "WRITE", "ABI_ANNOTATION")
BLOCK_SIZE = 1024 * 1024

def git_blob_sha(data: bytes) -> str:
    return hashlib.sha1(b"blob " + str(len(data)).encode("ascii") + b"\0" + data).hexdigest()

def read_tsv(path: Path, expected: tuple[str, ...]) -> list[dict[str, str]]:
    with path.open("r", encoding="utf-8", newline="") as f:
        reader = csv.DictReader(f, delimiter="\t")
        if tuple(reader.fieldnames or ()) != expected:
            raise ValueError(f"Unexpected TSV columns in {path}")
        return list(reader)

def missing_hashes(merged_dir: Path = MERGED,
                   original_dir: Path = ORIGINAL):
    missing, original = {}, {}
    for kind in ("s", "f", "e"):
        src_file = original_dir / f"lua_{kind}_hashes.txt"
        source_bytes = src_file.read_bytes()
        source_lines = source_bytes.decode("utf-8-sig").splitlines()
        src_sha = git_blob_sha(source_bytes)
        for i, line in enumerate(source_lines, 1):
            m = re.fullmatch(r"(0x[0-9a-fA-F]{16})(?:[ \t]+(\S+))?[ \t]*", line)
            if not m:
                if line.strip():
                    raise ValueError(f"Malformed original row {kind}:{i}")
                continue
            key = (kind, m.group(1).upper().replace("0X", "0x"))
            original[key] = (i, src_sha, bool(m.group(2)))
        for line in (merged_dir / f"lua_{kind}_hashes.merged.txt").read_text(
                encoding="utf-8-sig").splitlines():
            if re.fullmatch(r"0x[0-9a-fA-F]{16}[ \t]*", line):
                h = "0x" + line[2:18].upper()
                key = (kind, h)
                if key not in original or original[key][2]:
                    raise ValueError(f"Not an original unknown row: {key}")
                missing[key] = original[key]
    return missing

def validate(merged_dir: Path = MERGED, original_dir: Path = ORIGINAL,
             reconstruction_root: Path | None = None):
    missing = missing_hashes(merged_dir, original_dir)
    index = read_tsv(merged_dir / "unresolved-symbol-index.tsv", INDEX_HEADER)
    refs = read_tsv(merged_dir / "unresolved-s-references.tsv", REF_HEADER)
    grouped = defaultdict(list)
    paths = defaultdict(set)
    for r in refs:
        k, h = r["kind"], r["hash"]
        key = (k, h)
        if key not in missing or k != "s" or r["role"] not in ROLES:
            raise ValueError(f"Invalid unresolved S reference: {r}")
        if r["commit"] != PINNED or not re.fullmatch("[0-9a-f]{40}", r["blob_sha"]):
            raise ValueError(f"Source revision missing/mismatched: {r}")
        name = Path(r["path"])
        if not name.parts or name.parts[0] != "source" or ".." in name.parts or name.suffix != ".hx":
            raise ValueError(f"Invalid source relative path: {name}")
        line = int(r["line"])
        if line < 1 or "S" + h[2:] not in r["excerpt"]:
            raise ValueError(f"Invalid reference line/excerpt: {r}")
        grouped[key].append(r)
        paths[r["path"]].add(r["blob_sha"])
    seen = set()
    for i in index:
        key = i["kind"], i["hash"]
        if key not in missing or key in seen:
            raise ValueError(f"Stale or duplicate unresolved-index row: {key}")
        seen.add(key)
        line, original_sha, _ = missing[key]
        if int(i["original_line"]) != line or i["original_blob_sha"] != original_sha:
            raise ValueError(f"Original line/provenance changed: {key}")
        rows = grouped[key]
        role_counter = Counter(r["role"] for r in rows)
        expectations = {
            "haxe_ref_count": len(rows),
            "decl_count": role_counter["DECLARATION"],
            "call_count": role_counter["CALL"],
            "read_count": role_counter["READ"],
            "write_count": role_counter["WRITE"],
            "abi_annotation_count": role_counter["ABI_ANNOTATION"],
        }
        if any(int(i[field]) != val for field, val in expectations.items()):
            raise ValueError(f"Role counts mismatch: {key}")
        expected_grade = ("THIRD_PARTY_RECONSTRUCTION_REFERENCE_ONLY" if rows
                          else "UNKNOWN_NO_NAME_EVIDENCE")
        if (i["evidence_grade"] != expected_grade or i["native_confirmed"] != "NO"
            or i["first_haxe_path"] != (rows[0]["path"] if rows else "")
            or i["first_haxe_line"] != (rows[0]["line"] if rows else "")):
            raise ValueError(f"Misclassified evidence: {key}")
    if seen != set(missing):
        raise ValueError(f"Index does not equal all remaining hashes: {len(seen)} != {len(missing)}")
    if reconstruction_root:
        for rel, shas in sorted(paths.items()):
            file = reconstruction_root / rel
            raw = file.read_bytes()
            if len(shas) != 1 or git_blob_sha(raw) not in shas:
                raise ValueError(f"Wrong pinned Haxe file version: {file}")
            source_lines = raw.decode("utf-8-sig").splitlines()
            for r in refs:
                if r["path"] != rel:
                    continue
                ln = int(r["line"])
                if ln > len(source_lines):
                    raise ValueError(f"Reference out of range: {rel}:{ln}")
                actual = source_lines[ln - 1].strip().replace("\t", " ").replace("\r", "")[:180]
                if r["excerpt"] != actual:
                    raise ValueError(f"Source reference moved/modified: {rel}:{ln}")
    roles = Counter(r["role"] for r in refs)
    return {
        "unresolved": dict(Counter(kind for kind, _ in missing)),
        "source_reference_rows": len(refs),
        "source_referenced_s_hashes": len({k for k in grouped if k[0] == "s"}),
        "source_paths": len(paths),
        "roles": dict(roles),
        "native_confirmed": 0,
        "source_revision": PINNED,
    }, missing

def scan_binary(path: Path, target: dict[tuple[str, str], tuple],
                block_size: int = BLOCK_SIZE):
    """Scan bytes for literal 64-bit values only, even if names are unknown."""
    patterns = []
    for kind, hexval in sorted(target):
        number = int(hexval, 16)
        for byte_order in ("little", "big"):
            patterns.append((kind, hexval, byte_order,
                             number.to_bytes(8, byte_order)))
    sha = hashlib.sha256()
    matches = []
    total = 0
    carry = b""
    with path.open("rb") as inp:
        while True:
            chunk = inp.read(block_size)
            if not chunk:
                break
            sha.update(chunk)
            data = carry + chunk
            base = total - len(carry)
            for kind, h, order, needle in patterns:
                pos = 0
                while True:
                    pos = data.find(needle, pos)
                    if pos < 0:
                        break
                    matches.append({
                        "kind": kind, "hash": h, "byte_order": order,
                        "offset_hex": f"0x{base + pos:X}",
                        "offset_decimal": base + pos,
                        "context_hex": data[max(0, pos - 16):pos + 24].hex(),
                        "evidence": "RAW_HASH_LITERAL_ONLY",
                    })
                    pos += 1
            total += len(chunk)
            carry = data[-7:]
    matches.sort(key=lambda x: (x["offset_decimal"], x["kind"], x["hash"], x["byte_order"]))
    return {"path": str(path), "size": total, "sha256": sha.hexdigest(),
            "matches": matches}

def main() -> None:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--merged-dir", type=Path, default=MERGED)
    p.add_argument("--original-dir", type=Path, default=ORIGINAL)
    p.add_argument("--haxe-root", type=Path,
                   help="Pinned checkout of Reisyukaku/ZAScripts (optional)")
    p.add_argument("--native-file", action="append", type=Path, default=[],
                   help="Explicitly extracted native Lua/resource binary; repeat for multiple files")
    p.add_argument("--max-native-size", type=int, default=512 * 1024 * 1024)
    p.add_argument("--out", type=Path, default=ROOT / ".research/za-lua-native")
    args = p.parse_args()
    summary, target = validate(args.merged_dir, args.original_dir, args.haxe_root)
    summary["evidence_limit"] = (
        "Haxe is third-party reconstruction; literal byte matches do not prove original "
        "Lua bytecode opcodes, field accesses, class membership or identifier names."
    )
    reports = []
    if args.native_file:
        if args.max_native_size <= 0:
            p.error("--max-native-size must be positive")
        for file in args.native_file:
            if not file.is_file():
                raise SystemExit(f"Not an extracted native file: {file}")
            if file.suffix.lower() in {".7z", ".zip", ".rar"}:
                raise SystemExit(f"Archive needs extraction before scanning: {file}")
            if file.stat().st_size > args.max_native_size:
                reports.append({"path": str(file), "status": "SKIPPED_TOO_LARGE",
                                "size": file.stat().st_size})
                continue
            reports.append(scan_binary(file, target))
        args.out.mkdir(parents=True, exist_ok=True)
        destination = args.out / "native-raw-literal-matches.json"
        destination.write_text(json.dumps({
            "evidence_grade": "RAW_HASH_LITERAL_ONLY",
            "reference": summary,
            "files": reports,
        }, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
        summary["native_scan_output"] = str(destination)
        summary["raw_literal_hits"] = sum(len(x.get("matches", [])) for x in reports)
        summary["native_confirmed"] = 0
    print(json.dumps(summary, ensure_ascii=False, indent=2))

if __name__ == "__main__":
    main()
