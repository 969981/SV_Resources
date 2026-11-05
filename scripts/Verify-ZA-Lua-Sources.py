#!/usr/bin/env python3
"""Audit ZA Lua hash provenance against PokeDocs and pinned ZAScripts Haxe annotations.

Never changes vendored PokeDocs or the third-party source checkout.
Candidate name/hash equality is necessary but not proof of game-native semantics.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / "tools/PokeDocs/ZA/Hashlists/Lua"
OVERLAY = ROOT / "tools/PokeDocs-Supplement/ZA/Hashlists/Lua"
SOURCE_REPOSITORY = "Reisyukaku/ZAScripts"
PINNED_COMMIT = "c7bc243ac4d28356dff9f06b6723330ea92247d5"
KINDS = ("c", "e", "f", "s")
HASH_ROW = re.compile(r"^(0x[0-9a-fA-F]{16})[ \t]*(\S+)?[ \t]*$")
HASH_ABI = re.compile(
    r'@:hashAbi\("(S|F)([0-9a-fA-F]{16})"\)\s*'
    r'(?:@[^\n]*\n\s*)*(?:override\s+)?(?:public\s+)?'
    r'(?:static\s+)?(?:override\s+)?(?:function|var)\s+([a-zA-Z_]\w*)'
)
INDEX_HEADER = (
    "kind", "hash", "candidate_name", "original_line", "source_sha",
    "evidence_grade", "reconstruction_path", "reconstruction_line",
)
EVIDENCE_HEADER = (
    "kind", "hash", "name", "original_line", "reconstruction_path",
    "reconstruction_line", "reconstruction_blob_sha", "reconstruction_commit",
)
CANDIDATE_HEADER = (
    "kind", "hash", "candidate_name", "status", "method", "hash_algorithm",
)

def fnv1a64(name: str) -> int:
    h = 0xCBF29CE484222645
    for b in name.encode("utf-8"):
        h = ((h ^ b) * 0x100000001B3) & 0xFFFFFFFFFFFFFFFF
    return h

def blob_sha(data: bytes) -> str:
    return hashlib.sha1(b"blob " + str(len(data)).encode() + b"\0" + data).hexdigest()

def read_tsv(path: Path, expected: tuple[str, ...]):
    with path.open("r", encoding="utf-8", newline="") as f:
        reader = csv.DictReader(f, delimiter="\t")
        if tuple(reader.fieldnames or ()) != expected:
            raise ValueError(f"{path}: unexpected header")
        return list(reader)

def read_source(source: Path):
    records, stats = {}, {}
    for kind in KINDS:
        raw = (source / f"lua_{kind}_hashes.txt").read_bytes()
        stats[kind] = {"sha": blob_sha(raw), "mapped": 0, "unknown": 0}
        for lineno, line in enumerate(raw.decode("utf-8-sig").splitlines(), 1):
            if not line.strip():
                continue
            m = HASH_ROW.fullmatch(line)
            if not m:
                raise ValueError(f"Malformed source row {kind}:{lineno}")
            key = (kind, int(m.group(1), 16))
            if key in records:
                raise ValueError(f"Duplicate source Hash {key}")
            name = m.group(2)
            if name is None:
                stats[kind]["unknown"] += 1
            else:
                stats[kind]["mapped"] += 1
                if fnv1a64(name) != key[1]:
                    raise ValueError(f"Invalid known name at {kind}:{lineno}")
            records[key] = (name, lineno)
    return records, stats

def validate_table(source: Path, overlay: Path):
    originals, stats = read_source(source)
    candidates = {}
    for row in read_tsv(overlay / "recovered.tsv", CANDIDATE_HEADER):
        kind, name = row["kind"], row["candidate_name"]
        if kind not in KINDS or not re.fullmatch(r"0x[0-9a-fA-F]{16}", row["hash"]):
            raise ValueError(f"Invalid candidate kind/hash {row}")
        key = (kind, int(row["hash"], 16))
        if key not in originals or originals[key][0] is not None or key in candidates:
            raise ValueError(f"Candidate overwrites original/duplicate {key}")
        if fnv1a64(name) != key[1] or row["status"] != "HASH_EXACT_CANDIDATE":
            raise ValueError(f"Invalid candidate FNV/status {key}")
        candidates[key] = name
    evidence = {}
    for row in read_tsv(overlay / "source-evidence.tsv", EVIDENCE_HEADER):
        kind, name = row["kind"], row["name"]
        if kind not in ("s", "f") or not re.fullmatch(r"0x[0-9a-fA-F]{16}", row["hash"]):
            raise ValueError(f"Invalid source evidence row {row}")
        key = (kind, int(row["hash"], 16))
        path = Path(row["reconstruction_path"])
        if (key not in candidates or name != candidates[key] or key in evidence
            or fnv1a64(name) != key[1] or not path.parts
            or path.parts[0] != "source" or ".." in path.parts
            or not str(path).endswith(".hx")
            or row["reconstruction_commit"] != PINNED_COMMIT
            or not re.fullmatch(r"[0-9a-f]{40}", row["reconstruction_blob_sha"])
            or int(row["reconstruction_line"]) < 1
            or int(row["original_line"]) != originals[key][1]):
            raise ValueError(f"Invalid source evidence {row}")
        evidence[key] = row
    return originals, stats, candidates, evidence

def reconstruction_symbols(content: str):
    for m in HASH_ABI.finditer(content):
        kind, h, name = m.group(1).lower(), int(m.group(2), 16), m.group(3)
        if re.fullmatch(r"[sSfF][0-9a-fA-F]{16}", name):
            continue
        if fnv1a64(name) != h:
            continue
        yield kind, h, name, content.count("\n", 0, m.start()) + 1

def verify_reconstruction(root: Path, evidence: dict):
    paths = sorted(set(v["reconstruction_path"] for v in evidence.values()))
    for path in paths:
        src = root / path
        if not src.is_file():
            raise ValueError(f"Missing pinned reconstruction source: {src}")
        raw = src.read_bytes()
        expected_sha = {v["reconstruction_blob_sha"]
                        for v in evidence.values() if v["reconstruction_path"] == path}
        if len(expected_sha) != 1 or blob_sha(raw) not in expected_sha:
            raise ValueError(f"Source blob mismatch (wrong revision?): {src}")
        annotations = set(reconstruction_symbols(raw.decode("utf-8-sig")))
        for (kind, h), row in evidence.items():
            if row["reconstruction_path"] == path:
                expected = kind, h, row["name"], int(row["reconstruction_line"])
                if expected not in annotations:
                    raise ValueError(f"HashAbi annotation missing/moved: {path} {expected}")
    return len(paths)

def outputs(source: Path = SOURCE, overlay: Path = OVERLAY):
    originals, stats, candidates, evidence = validate_table(source, overlay)
    keys = sorted(candidates)
    header = "\t".join(INDEX_HEADER) + "\n"
    lines = [header]
    for key in keys:
        kind, value = key
        name = candidates[key]
        annotation = evidence.get(key)
        lines.append("\t".join((
            kind, f"0x{value:016X}", name, str(originals[key][1]),
            stats[kind]["sha"],
            "SOURCE_CORROBORATED" if annotation else "HASH_EXACT_CANDIDATE",
            annotation["reconstruction_path"] if annotation else "",
            annotation["reconstruction_line"] if annotation else "",
        )) + "\n")
    audit = {
        "source_repository": SOURCE_REPOSITORY,
        "source_commit": PINNED_COMMIT,
        "source_claim": "third-party Haxe reconstruction; not original game Lua bytecode",
        "total_candidates": len(candidates),
        "corroborated_by_pinned_source": len(evidence),
        "hash_only": len(candidates) - len(evidence),
        "source_file_paths": len(set(x["reconstruction_path"] for x in evidence.values())),
        "status": "SOURCE_CORROBORATED_NOT_NATIVE_CONFIRMED",
    }
    return {
        "source-line-index.tsv": "".join(lines).encode("utf-8"),
        "source-audit.json": (json.dumps(audit, indent=2) + "\n").encode("utf-8"),
    }, audit, evidence

def scan_reconstruction(root: Path, source: Path, overlay: Path):
    originals, _, candidates, _ = validate_table(source, overlay)
    new = {}
    for path in sorted((root / "source").rglob("*.hx")):
        raw = path.read_bytes()
        for kind, h, name, line in reconstruction_symbols(raw.decode("utf-8-sig")):
            key = (kind, h)
            if key in originals and originals[key][0] is None and key not in candidates:
                new.setdefault(key, (
                    kind, f"0x{h:016X}", name,
                    str(originals[key][1]), path.relative_to(root).as_posix(),
                    str(line), blob_sha(raw),
                ))
    print("kind\thash\tname\toriginal_line\tpath\tline\tblob_sha")
    for row in sorted(new.values()):
        print("\t".join(row))
    return len(new)

def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--source", type=Path, default=SOURCE)
    p.add_argument("--overlay", type=Path, default=OVERLAY)
    p.add_argument("--reconstruction-root", type=Path,
                   help="Checkout of pinned Reisyukaku/ZAScripts revision")
    p.add_argument("--verify-only", action="store_true")
    p.add_argument("--scan-reconstruction", action="store_true",
                   help="Print extra exact-hash names in all available Haxe sources")
    args = p.parse_args()
    source, overlay = args.source.resolve(), args.overlay.resolve()
    if args.scan_reconstruction:
        if not args.reconstruction_root:
            p.error("--scan-reconstruction requires --reconstruction-root")
        scan_reconstruction(args.reconstruction_root.resolve(), source, overlay)
        return
    generated, audit, evidence = outputs(source, overlay)
    if args.reconstruction_root:
        verify_reconstruction(args.reconstruction_root.resolve(), evidence)
    if args.verify_only:
        for name, data in generated.items():
            path = overlay / name
            if not path.is_file() or path.read_bytes() != data:
                raise SystemExit(f"Stale/incorrect provenance output: {path}")
    else:
        overlay.mkdir(parents=True, exist_ok=True)
        for name, data in generated.items():
            path = overlay / name
            if not path.is_file() or path.read_bytes() != data:
                path.write_bytes(data)
    print(json.dumps(audit, indent=2))

if __name__ == "__main__":
    main()
