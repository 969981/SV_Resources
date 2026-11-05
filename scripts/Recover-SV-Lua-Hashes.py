#!/usr/bin/env python3
"""Reproduce SV Lua C/E/F/S hash-name candidate recovery from vendored PokeDocs.

This script NEVER edits tools/PokeDocs. It builds a supplemental overlay and
complete merged copies under tools/PokeDocs-Supplement/SV/Hashlists/Lua.

Names are candidates even after exact 64-bit FNV-1a matches. Do not interpret
hash-match success as proof of runtime semantics or of an original source symbol.
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
DEFAULT_INPUT = ROOT / "tools/PokeDocs/SV/Hashlists/Lua"
DEFAULT_OUTPUT = ROOT / "tools/PokeDocs-Supplement/SV/Hashlists/Lua"
KINDS = ("c", "e", "f", "s")
LINE = re.compile(r"^0x([0-9a-fA-F]{16})[ \t]*(\S+)?[ \t]*$")
NUMERIC = re.compile(r"\d+")
MASK64 = 0xFFFFFFFFFFFFFFFF
FNV_OFFSET = 0xCBF29CE484222645
FNV_PRIME = 0x100000001B3


def fnv1a64(name: str) -> int:
    h = FNV_OFFSET
    for b in name.encode("utf-8"):
        h = ((h ^ b) * FNV_PRIME) & MASK64
    return h


def sha256(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def read_lists(source: Path):
    raw = {}
    known = []
    unknown = {k: set() for k in KINDS}
    seen_hashes = {k: set() for k in KINDS}
    stats = {}
    for kind in KINDS:
        path = source / f"lua_{kind}_hashes.txt"
        data = path.read_bytes()
        text = data.decode("utf-8-sig")
        raw[kind] = (text, data)
        mapped_count = 0
        empty_count = 0
        for lineno, entry in enumerate(text.splitlines(), 1):
            match = LINE.fullmatch(entry)
            if not match:
                if not entry.strip():
                    continue
                raise ValueError(f"Unexpected row layout in {path}:{lineno}: {entry!r}")
            h = int(match.group(1), 16)
            if h in seen_hashes[kind]:
                raise ValueError(f"Duplicate input hash {h:016X} in {path}:{lineno}")
            seen_hashes[kind].add(h)
            name = match.group(2)
            if name:
                if fnv1a64(name) != h:
                    raise ValueError(f"Bad known hash/name at {path}:{lineno} ({name})")
                known.append((kind, h, name, lineno))
                mapped_count += 1
            else:
                unknown[kind].add(h)
                empty_count += 1
        stats[kind] = {
            "known": mapped_count,
            "unknown": empty_count,
            "source_sha256": sha256(data),
            "source_path": str(path.relative_to(ROOT)) if path.is_relative_to(ROOT) else str(path),
        }
    return raw, known, unknown, stats


def numeric_variants(name: str):
    for match in NUMERIC.finditer(name):
        original = match.group()
        width = len(original)
        number = int(original)
        limits = {1: 15, 2: 110, 3: 1400, 4: 5000}
        upper = limits.get(width, 350)
        start, end = match.span()
        for value in range(upper + 1):
            replacement = str(value).zfill(width)
            if replacement != original:
                yield name[:start] + replacement + name[end:]
        for value in range(max(0, number - 100), number + 101):
            if value <= upper or value == number:
                continue
            yield name[:start] + str(value).zfill(width) + name[end:]


GYM_TYPES = (
    "kusa", "mizu", "koori", "denki", "mushi", "normal", "esper",
    "dragon", "hiko", "jimen", "hono", "hagane", "iwa", "ghost", "aku"
)


def additional_variants(kind: str, name: str):
    """Conservative semantic template changes; never add without full 64-bit match."""
    if kind in ("c", "e"):
        for old in GYM_TYPES:
            if old not in name:
                continue
            for new in GYM_TYPES:
                if new != old:
                    yield name.replace(old, new), "gym_token_substitution"
    if kind in ("f", "s") and name and name[0].isalpha():
        first = name[0].lower() if name[0].isupper() else name[0].upper()
        yield first + name[1:], "first_letter_case"


def recover(known, unknown):
    """Recover only exact FNV matches, rejecting hash collisions/ambiguity."""
    candidates = {k: {} for k in KINDS}
    attempts = 0
    for kind, _hash, name, line_number in known:
        variants = ((v, "numeric_substitution") for v in numeric_variants(name))
        for candidate, rule in (*variants, *additional_variants(kind, name)):
            attempts += 1
            target = fnv1a64(candidate)
            if target not in unknown[kind]:
                continue
            by_hash = candidates[kind].setdefault(target, {})
            by_hash.setdefault(candidate, (name, line_number, rule))
    accepted = {k: {} for k in KINDS}
    ambiguous = []
    for kind in KINDS:
        for h, options in candidates[kind].items():
            if len(options) == 1:
                name, evidence = next(iter(options.items()))
                accepted[kind][h] = (name, evidence[0], evidence[1], evidence[2])
            else:
                ambiguous.append({
                    "kind": kind, "hash": f"0x{h:016X}",
                    "possible_names": sorted(options),
                })
    return accepted, ambiguous, attempts


def build_outputs(source: Path):
    raw, known, unknown, stats = read_lists(source)
    accepted, ambiguous, attempts = recover(known, unknown)
    overlay = io.StringIO()
    tsv = csv.writer(overlay, delimiter="\t", lineterminator="\n")
    tsv.writerow(["kind", "hash", "candidate_name", "status",
                  "evidence_name", "evidence_line", "rule", "hash_algorithm"])
    for kind in KINDS:
        for h, (name, seed, lineno, rule) in sorted(accepted[kind].items()):
            assert h in unknown[kind] and fnv1a64(name) == h
            tsv.writerow([kind, f"0x{h:016X}", name, "HASH_EXACT_CANDIDATE",
                          seed, lineno, rule, "FNV-1a-64"])
        stats[kind]["recovered"] = len(accepted[kind])
        stats[kind]["still_unknown"] = len(unknown[kind]) - len(accepted[kind])
    outputs = {"recovered.tsv": overlay.getvalue().encode("utf-8")}
    for kind, (text, original) in raw.items():
        merged_lines = []
        for entry in text.splitlines(keepends=True):
            stripped = entry.rstrip("\r\n")
            match = LINE.fullmatch(stripped)
            if match and not match.group(2):
                h = int(match.group(1), 16)
                if h in accepted[kind]:
                    newline = entry[len(stripped):]
                    entry = f"0x{h:016X} {accepted[kind][h][0]}{newline}"
            merged_lines.append(entry)
        merged = "".join(merged_lines).encode("utf-8")
        outputs[f"lua_{kind}_hashes.merged.txt"] = merged
    report = {
        "source": "tools/PokeDocs/SV/Hashlists/Lua (full pinned vendor snapshot)",
        "source_is_modified": False,
        "algorithm": "FNV-1a-64 / exact 64-bit target-match / numeric + gym token + first-case variants",
        "status": "HASH_EXACT_CANDIDATE (not native semantic confirmation)",
        "tested_candidates": attempts,
        "source_statistics": stats,
        "total_original_unknown": sum(v["unknown"] for v in stats.values()),
        "total_recovered": sum(v["recovered"] for v in stats.values()),
        "total_still_unknown": sum(v["still_unknown"] for v in stats.values()),
        "ambiguous": ambiguous,
    }
    outputs["recovery-report.json"] = (
        json.dumps(report, ensure_ascii=False, sort_keys=True, indent=2) + "\n"
    ).encode("utf-8")
    return outputs, report


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--source", type=Path, default=DEFAULT_INPUT)
    p.add_argument("--output", type=Path, default=DEFAULT_OUTPUT)
    p.add_argument("--verify-only", action="store_true", help="Compare existing outputs without modifying them")
    p.add_argument("--min-recovered", type=int, default=0,
                   help="Exit with failure unless at least this many hashes are recovered")
    args = p.parse_args()
    outputs, report = build_outputs(args.source.resolve())
    if report["total_recovered"] < args.min_recovered:
        raise SystemExit(
            f"Insufficient recovery: {report['total_recovered']} < {args.min_recovered}"
        )
    output = args.output.resolve()
    if args.verify_only:
        for name, data in outputs.items():
            path = output / name
            if not path.is_file() or path.read_bytes() != data:
                raise SystemExit(f"Missing/stale/corrupt recovery artifact: {path}")
    else:
        output.mkdir(parents=True, exist_ok=True)
        for name, data in outputs.items():
            dest = output / name
            if not dest.is_file() or dest.read_bytes() != data:
                dest.write_bytes(data)
    print(json.dumps({
        "total_original_unknown": report["total_original_unknown"],
        "total_recovered": report["total_recovered"],
        "remaining": report["total_still_unknown"],
        "by_kind": {k: {
            "recovered": v["recovered"], "remaining": v["still_unknown"]
        } for k, v in report["source_statistics"].items()},
        "verify_only": args.verify_only,
        "output": str(output),
    }, indent=2))


if __name__ == "__main__":
    main()
