#!/usr/bin/env python3
"""Evidence-only audit of SV 4.0.0 Lua bytecode extracted from verified TRPFS.

Exact raw encoded C/F tokens are presence evidence, NOT a decoded call graph.
The script NEVER mutates original .blua files or vendors copyrighted bytecode.
"""
import argparse
import csv
import hashlib
import json
import re
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
VIRTUAL = ROOT / "Unpack/4.0.0/romfs/arc/data.trpfs/virtual"
INDEX = ROOT / "Unpack/4.0.0/romfs/arc/data.trpfd/_index/lua_pack_locations.json"
HASHLISTS = ROOT / "tools/PokeDocs/SV/Hashlists/Lua"
RECOVERED = ROOT / "tools/PokeDocs-Supplement/SV/Hashlists/Lua/recovered.tsv"
OUTPUT = ROOT / "Unpack/4.0.0/romfs/arc/data.trpfs/_index/lua_bytecode_audit.json"
TOKEN = re.compile(rb"(?<![A-Za-z0-9_])([CF])([0-9A-F]{16})(?![A-Za-z0-9_])")
HASH = re.compile(r"^0x([0-9A-F]{16})(?:\s+\S+)?\s*$", re.I)


def sha256(file):
    h = hashlib.sha256()
    with file.open("rb") as r:
        for piece in iter(lambda: r.read(1024 * 1024), b""):
            h.update(piece)
    return h.hexdigest()


def load_hash_lists(folder):
    values = {}
    for k in ("c", "f"):
        known, missing = set(), set()
        for line in (folder / f"lua_{k}_hashes.txt").read_text(encoding="utf-8-sig").splitlines():
            m = HASH.fullmatch(line)
            if not m:
                if not line.strip():
                    continue
                raise ValueError(f"Malformed Hashlist: {line[:80]!r}")
            h = m.group(1).upper()
            # An original row with nothing after the hex hash remains unknown.
            if line.strip().split(maxsplit=1).__len__() >= 2:
                known.add(h)
            else:
                missing.add(h)
        values[k] = {"known": known, "unknown": missing}
    return values


def known_candidates(file):
    candidates = {"c": set(), "f": set()}
    if not file.is_file():
        return candidates
    with file.open("r", encoding="utf-8", newline="") as f:
        for row in csv.DictReader(f, delimiter="\t"):
            k = row["kind"].lower()
            if k not in candidates:
                continue
            h = row["hash"].removeprefix("0x").upper()
            if h not in candidates[k]:
                candidates[k].add(h)
    return candidates


def build(virtual, index, hashlists, recovered):
    locator = json.loads(index.read_text(encoding="utf-8"))
    if not locator.get("all_unique"):
        raise ValueError("Original TRPFD has no unique name for each target")
    targets = {"main": "script/lua/bin/release/main/main.blua",
               "main_dynamic": "script/lua/bin/release/main_dynamic/main_dynamic.blua"}
    declared = load_hash_lists(hashlists)
    previously = known_candidates(recovered)
    files = {}
    observed = {"c": set(), "f": set()}
    for key, rel in targets.items():
        entries = locator["targets"][key]["matches"]
        if len(entries) != 1 or entries[0]["virtual_path"].replace("\\", "/").lower() != rel:
            raise ValueError(f"Mismatch with native TRPFD for {key}")
        source = virtual / rel
        if not source.is_file():
            raise FileNotFoundError(f"Target 4.0.0 bytecode not yet extracted: {source}")
        data = source.read_bytes()
        if len(data) < 16:
            raise ValueError(f"Truncated .blua: {source}")
        counts = {"c": Counter(), "f": Counter()}
        offsets = {"c": {}, "f": {}}
        for m in TOKEN.finditer(data):
            kind = m.group(1).decode().lower()
            hashed = m.group(2).decode().upper()
            counts[kind][hashed] += 1
            offsets[kind].setdefault(hashed, m.start())
            observed[kind].add(hashed)
        files[key] = {
            "virtual_path": rel,
            "native_descriptor_hash": entries[0]["hash"],
            "native_pack_index": entries[0]["pack_index"],
            "native_pack_name": entries[0]["pack_name"],
            "bytes": len(data),
            "sha256": sha256(source),
            "header_hex_first_32": data[:32].hex().upper(),
            "lua54_signature_at_offset_zero": data.startswith(b"\x1bLua\x54"),
            "encoded_tokens": {
                kind: {
                    "distinct": len(counts[kind]),
                    "occurrences": sum(counts[kind].values()),
                    "original_unknown_hits": [
                        {"hash": "0x" + h, "occurrences": counts[kind][h],
                         "first_file_offset": offsets[kind][h],
                         "from_previous_48": h in previously[kind]}
                        for h in sorted(counts[kind]) if h in declared[kind]["unknown"]
                    ]
                } for kind in ("c", "f")
            }
        }
    return {
        "evidence": "CONFIRMED_NATIVE_4_0_0_BYTECODE_RAW_STRING_PRESENCE",
        "critical_limit": "Matching a raw C/F token in Lua bytecode does NOT prove owner, method definition or a call",
        "native_descriptor_index_sha256": sha256(index),
        "original_file_count_checked": locator["descriptor_files_scanned"],
        "files": files,
        "unknown_hashlist_counts": {k: len(v["unknown"]) for k,v in declared.items()},
        "unknown_seen_in_either_file": {
            kind: sum(h in declared[kind]["unknown"] for h in observed[kind]) for kind in ("c","f")
        },
        "unknown_not_seen_in_either_file": {
            kind: len(declared[kind]["unknown"] - observed[kind]) for kind in ("c", "f")
        },
        "previous_candidates_seen_in_either_file": {
            kind: len(previously[kind] & observed[kind]) for kind in ("c", "f")
        },
        "source_modified": False,
    }


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--virtual", type=Path, default=VIRTUAL)
    ap.add_argument("--locator", type=Path, default=INDEX)
    ap.add_argument("--hashlists", type=Path, default=HASHLISTS)
    ap.add_argument("--recovered", type=Path, default=RECOVERED)
    ap.add_argument("--output", type=Path, default=OUTPUT)
    ap.add_argument("--verify-only", action="store_true")
    args = ap.parse_args()
    report = build(args.virtual, args.locator, args.hashlists, args.recovered)
    data = (json.dumps(report, indent=2, ensure_ascii=False, sort_keys=True) + "\n").encode()
    if args.verify_only:
        if not args.output.exists() or args.output.read_bytes() != data:
            raise SystemExit("Missing/stale Lua bytecode audit")
    else:
        args.output.parent.mkdir(parents=True, exist_ok=True)
        args.output.write_bytes(data)
    print(json.dumps({
        "files": {k: {"bytes": v["bytes"], "sha256": v["sha256"],
                      "header": v["header_hex_first_32"],
                      "known_lua54_header": v["lua54_signature_at_offset_zero"],
                      "encoded_tokens": {kk: {
                          "distinct": vv["distinct"],
                          "original_unknown_count": len(vv["original_unknown_hits"])}
                          for kk, vv in v["encoded_tokens"].items()}}
                  for k,v in report["files"].items()},
        "unknown_seen": report["unknown_seen_in_either_file"],
        "unknown_unseen": report["unknown_not_seen_in_either_file"],
    }, indent=2))


if __name__ == "__main__":
    main()
