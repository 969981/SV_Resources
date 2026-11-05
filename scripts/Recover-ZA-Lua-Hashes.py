#!/usr/bin/env python3
"""Rebuild and verify ZA Lua hash candidate overlays without changing PokeDocs."""
from __future__ import annotations
import argparse
import csv
import hashlib
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "tools/PokeDocs/ZA/Hashlists/Lua"
OUT = ROOT / "tools/PokeDocs-Supplement/ZA/Hashlists/Lua"
KINDS = ("c", "e", "f", "s")
LINE = re.compile(r"^(0x[0-9a-fA-F]{16})[ \t]*(\S+)?[ \t]*$")

def fnv1a64(name: str) -> int:
    h = 0xCBF29CE484222645
    for b in name.encode("utf-8"):
        h = ((h ^ b) * 0x100000001B3) & 0xFFFFFFFFFFFFFFFF
    return h

def blob_sha(data: bytes) -> str:
    return hashlib.sha1(b"blob " + str(len(data)).encode() + b"\x00" + data).hexdigest()

def read_source(source: Path):
    raw, known, unknown, stats = {}, {}, {}, {}
    for kind in KINDS:
        data = (source / f"lua_{kind}_hashes.txt").read_bytes()
        raw[kind] = data.decode("utf-8-sig")
        known[kind], unknown[kind], seen = {}, set(), set()
        for n, line in enumerate(raw[kind].splitlines(), 1):
            if not line.strip(): continue
            m = LINE.fullmatch(line)
            if not m: raise ValueError(f"{kind}:{n}: malformed entry")
            h, name = int(m.group(1), 16), m.group(2)
            if h in seen: raise ValueError(f"{kind}:{n}: duplicate hash")
            seen.add(h)
            if name:
                if fnv1a64(name) != h: raise ValueError(f"{kind}:{n}: invalid known mapping")
                known[kind][h] = name
            else:
                unknown[kind].add(h)
        stats[kind] = {"known":len(known[kind]), "unknown":len(unknown[kind]),
                       "recovered":0, "still_unknown":len(unknown[kind]),
                       "source_git_blob_sha":blob_sha(data)}
    return raw, known, unknown, stats

def read_candidates(path: Path, known, unknown):
    found = {k:{} for k in KINDS}
    with path.open(encoding="utf-8", newline="") as f:
        reader = csv.DictReader(f, delimiter="\t")
        keys = {"kind","hash","candidate_name","status","method","hash_algorithm"}
        if not reader.fieldnames or set(reader.fieldnames) != keys:
            raise ValueError("Bad recovered.tsv header")
        for n, row in enumerate(reader, 2):
            k, name = row["kind"], row["candidate_name"]
            if k not in KINDS or not name or not re.fullmatch(r"0x[0-9A-Fa-f]{16}",row["hash"]):
                raise ValueError(f"Bad candidate row {n}")
            h = int(row["hash"],16)
            if row["status"]!="HASH_EXACT_CANDIDATE" or fnv1a64(name)!=h:
                raise ValueError(f"Candidate hash mismatch at row {n}")
            if h in known[k] or h not in unknown[k] or h in found[k]:
                raise ValueError(f"Candidate overwrites source/duplicates at row {n}")
            found[k][h] = name
    return found

def build_outputs(source: Path = SOURCE, candidates: Path = OUT/"recovered.tsv"):
    raw, known, unknown, stats = read_source(source)
    found = read_candidates(candidates, known, unknown)
    outputs = {}
    for kind in KINDS:
        stats[kind]["recovered"] = len(found[kind])
        stats[kind]["still_unknown"] -= len(found[kind])
        lines = []
        for entry in raw[kind].splitlines(keepends=True):
            row = entry.rstrip("\r\n")
            m = LINE.fullmatch(row)
            if m and not m.group(2):
                h = int(m.group(1),16)
                if h in found[kind]:
                    entry = f"{m.group(1)} {found[kind][h]}{entry[len(row):]}"
            lines.append(entry)
        outputs[f"lua_{kind}_hashes.merged.txt"] = "".join(lines).encode("utf-8")
    summary = {
        "original_total":sum(v["known"]+v["unknown"] for v in stats.values()),
        "original_known":sum(v["known"] for v in stats.values()),
        "original_unknown":sum(v["unknown"] for v in stats.values()),
        "recovered":sum(v["recovered"] for v in stats.values()),
        "still_unknown":sum(v["still_unknown"] for v in stats.values()),
    }
    report = {
        "source":"tools/PokeDocs/ZA/Hashlists/Lua",
        "source_is_modified":False,
        "algorithm":"FNV-1a-64; offset_basis=0xCBF29CE484222645; prime=0x100000001B3",
        "status":"HASH_EXACT_CANDIDATE",
        "summary":summary,
        "kinds":stats,
    }
    outputs["recovery-report.json"] = (json.dumps(report,indent=2,ensure_ascii=False)+"\n").encode()
    return outputs, report

def scan_names(names: Path, source: Path, candidates: Path):
    _, known, unknown, _ = read_source(source)
    found = read_candidates(candidates, known, unknown)
    matches = set()
    for line in names.read_text(encoding="utf-8").splitlines():
        name=line.strip()
        if not name or name.startswith("#"): continue
        h=fnv1a64(name)
        for kind in KINDS:
            if h in unknown[kind] and h not in found[kind]:
                matches.add((kind,h,name))
    for kind,h,name in sorted(matches):
        print(f"{kind}\t0x{h:016X}\t{name}")
    return len(matches)

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--source",type=Path,default=SOURCE)
    p.add_argument("--output",type=Path,default=OUT)
    p.add_argument("--candidates",type=Path)
    p.add_argument("--scan-names",type=Path)
    p.add_argument("--verify-only",action="store_true")
    p.add_argument("--min-recovered",type=int,default=0)
    args=p.parse_args()
    source,output=args.source.resolve(),args.output.resolve()
    table=(args.candidates or output/"recovered.tsv").resolve()
    if args.scan_names:
        scan_names(args.scan_names,source,table)
        return
    outputs,report=build_outputs(source,table)
    if report["summary"]["recovered"]<args.min_recovered:
        raise SystemExit("Candidate recovery count below threshold")
    if args.verify_only:
        for filename,data in outputs.items():
            file=output/filename
            if not file.is_file() or file.read_bytes()!=data:
                raise SystemExit(f"Missing/stale output: {file}")
    else:
        output.mkdir(parents=True,exist_ok=True)
        for filename,data in outputs.items():
            file=output/filename
            if not file.is_file() or file.read_bytes()!=data:
                file.write_bytes(data)
    print(json.dumps(report["summary"],indent=2))

if __name__=="__main__":
    main()
