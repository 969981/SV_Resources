#!/usr/bin/env python3
"""Recover the remaining SV TRPRE keys from PokeDocs with verifiable provenance.

Matches *exact 64-bit hash values* in the two independent PokeDocs hash lists.
If a path is supplied, verify native seed FNV-1a against that path; no automatic
promotion from a raw hex match to verified resource name without hash check.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import io
import json
import re
from collections import defaultdict
from pathlib import Path

PREFETCH = Path("Unpack/4.0.0/romfs/system/prefetch/data/_index")
HASHLISTS = (
    Path("tools/PokeDocs/SV/Hashlists/FileSystem/hashes_inside_fd.txt"),
    Path("tools/PokeDocs/SV/Hashlists/FileSystem/hashes_inside_trpak.txt"),
)
HEX = re.compile(r"^(?:0[xX])?([0-9A-Fa-f]{16})$")
NATIVE_OFFSET = 0xCBF29CE484222645
PRIME = 0x100000001B3

def native_fnv64(name):
    h = NATIVE_OFFSET
    for b in name.encode("utf-8"):
        h = ((h ^ b) * PRIME) & 0xFFFFFFFFFFFFFFFF
    return h

def read_missing(root):
    p = root / PREFETCH / "prefetch_trpfd_unmatched.csv"
    missing = {}
    with p.open(encoding="utf-8", newline="") as f:
        for row in csv.DictReader(f):
            h = row["hash64_hex"].lower()[2:]
            if len(h) != 16 or int(h, 16) < 0:
                raise ValueError("Invalid hash " + h)
            missing[h] = row
    if len(missing) != 82:
        raise ValueError(f"Expected 82 input gap records, got {len(missing)}")
    return missing

def read_lists(root, missing):
    found = defaultdict(list)
    report = []
    for relative in HASHLISTS:
        path = root / relative
        hasher = hashlib.sha256()
        records = invalid = empty = candidate = 0
        with path.open("rb") as stream:
            for raw in stream:
                hasher.update(raw)
                line = raw.decode("utf-8-sig").strip()
                if not line or line.startswith("#"):
                    empty += 1
                    continue
                cells = line.split(maxsplit=1)
                match = HEX.fullmatch(cells[0]) if cells else None
                if not match:
                    invalid += 1
                    continue
                records += 1
                h = match.group(1).lower()
                if h not in missing:
                    continue
                candidate += 1
                name = cells[1].strip() if len(cells) > 1 else ""
                # Hash only the name exactly as PokeDocs lists it; alternative
                # transforms must remain independently labeled candidates.
                exact = bool(name) and native_fnv64(name) == int(h, 16)
                found[h].append({
                    "name": name, "source": relative.as_posix(),
                    "originalNameFnvMatches": exact
                })
        report.append({
            "path": relative.as_posix(), "sourceSha256": hasher.hexdigest().upper(),
            "validRecords": records, "skippedLines": empty,
            "invalidOrNonhashLines": invalid,
            "keyOccurrencesAmong82": candidate
        })
    return found, report

def csv_output(headers, rows):
    out = io.StringIO(newline="")
    writer = csv.writer(out, lineterminator="\n")
    writer.writerow(headers)
    writer.writerows(rows)
    return out.getvalue()

def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--repo", type=Path, default=Path(__file__).resolve().parent.parent)
    args = ap.parse_args()
    repo = args.repo.resolve()
    missing = read_missing(repo)
    found, input_stats = read_lists(repo, missing)
    rows = []
    validated = raw_only = absent = 0
    for h in sorted(missing):
        entries = found.get(h, [])
        verified = [e for e in entries if e["originalNameFnvMatches"]]
        if verified:
            status = "POKEDOCS_PATH_NATIVE_FNV_VERIFIED"
            validated += 1
        elif entries:
            status = "POKEDOCS_HASH_ONLY_PATH_NOT_VERIFIED"
            raw_only += 1
        else:
            status = "NOT_IN_POKEDOCS_FILE_HASHLISTS"
            absent += 1
        # Do not suppress conflicting candidate names: keep full source context.
        original = missing[h]
        rows.append([
            "0x" + h, original["prefetch0_index"], original["prefetch1_index"],
            original["membership_mask"], status,
            json.dumps(entries, ensure_ascii=False, separators=(",", ":")),
        ])
    audit = {
        "schemaVersion": 1, "sourceGapList": (PREFETCH / "prefetch_trpfd_unmatched.csv").as_posix(),
        "prefetchRemaining82": len(missing),
        "confirmedViaNativePathFnv": validated,
        "foundHashOnlyButNameUnverified": raw_only,
        "notPresentInEitherList": absent,
        "nativeHashOffsetBasis": f"0x{NATIVE_OFFSET:016X}",
        "nativeHashPrime": f"0x{PRIME:016X}",
        "nameHashProofExample": {
            "name": "event/trevt/bin/event.trevt",
            "nativeHash": f"0x{native_fnv64('event/trevt/bin/event.trevt'):016X}",
            "nativeCodeConstantAt": "main+0x11BE11C..0x11BE128",
        },
        "sourceLists": input_stats,
        "warning": (
            "Only exact native FNV of the PokeDocs-provided path proves a path/hash pair. "
            "Even verified path/hash equality does not imply the file is in Violet 4.0.0 TRPFD."
        ),
    }
    (repo / PREFETCH).mkdir(parents=True, exist_ok=True)
    (repo / PREFETCH / "prefetch_unmatched_pokedocs.csv").write_text(csv_output(
        ["hash64_hex", "prefetch0_index", "prefetch1_index",
         "membership_mask", "recovery_status", "candidate_records_json"], rows),
        encoding="utf-8", newline="\n")
    (repo / PREFETCH / "prefetch_unmatched_pokedocs_audit.json").write_text(
        json.dumps(audit, ensure_ascii=False, indent=2) + "\n", encoding="utf-8"
    )
    print("POKEDOCS_AUDIT " + json.dumps(audit, ensure_ascii=False), flush=True)
    print("VERIFIED_RECOVERIES " + json.dumps([
        {"hash": "0x" + h, "paths": [e["name"] for e in records if e["originalNameFnvMatches"]]}
        for h, records in sorted(found.items()) if any(e["originalNameFnvMatches"] for e in records)
    ], ensure_ascii=False), flush=True)

if __name__ == "__main__":
    main()
