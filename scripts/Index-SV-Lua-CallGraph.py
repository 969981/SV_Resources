#!/usr/bin/env python3
"""Index SV Lua C -> F definitions and source evidence from SV-Script-RE.

Old decompiled code is *cross-version supporting evidence*, never SV 4.0.0
native proof. Only names with an exact FNV-1a-64 match are name candidates.
The vendored PokeDocs/ source and its 48-row original supplement stay unchanged.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import io
import json
import re
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
LUA = ROOT / "tools/PokeDocs/SV/Hashlists/Lua"
OUTPUT = ROOT / "tools/PokeDocs-Supplement/SV/Hashlists/Lua/context"
EXTERNAL_SHA = "1f843bd2517c707fbb47491dad58856eaa2c2cc7"
FNV_BASIS = 0xCBF29CE484222645
FNV_PRIME = 0x100000001B3
MASK = 0xFFFFFFFFFFFFFFFF
ROW_RE = re.compile(r"^0x([A-Fa-f0-9]{16})(?:[ \t]+(\S+))?\s*$")
C_CLASS = re.compile(r"^C([A-F0-9]{16})\.lua$")
METHOD = re.compile(r"^\s*function\s+C([A-F0-9]{16})_prototype:F([A-F0-9]{16})\s*\(")
RAW_METHOD = re.compile(r'_ENV\["C([A-F0-9]{16})"\]\["prototype"\]\s*\n\s*L\d+_1\s*=\s*"F([A-F0-9]{16})"')
CLASS_REF = re.compile(r"\bC([A-F0-9]{16})\b")
SUPER = re.compile(r"\bC([A-F0-9]{16})\.__super__\s*=\s*C([A-F0-9]{16})")
COMMENT = re.compile(r"^\s*---\s+(\S+)\s*$")
INLINE_COMMENT = re.compile(r"^\s*function\b.*?(?:--\s+)(\S+)\s*$")
HASH_METHOD = re.compile(r"^F[A-F0-9]{16}$")
HASH_CLASS = re.compile(r"^C[A-F0-9]{16}$")


def fnv64(name: str) -> str:
    h = FNV_BASIS
    for b in name.encode("utf-8"):
        h = ((h ^ b) * FNV_PRIME) & MASK
    return f"{h:016X}"


def checksum(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as stream:
        for chunk in iter(lambda: stream.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()


def read_names(source: Path):
    out = {}
    for kind in ("c", "e", "f", "s"):
        mapping = {}
        unknown = set()
        file = source / f"lua_{kind}_hashes.txt"
        for line in file.read_text(encoding="utf-8-sig").splitlines():
            m = ROW_RE.match(line)
            if not m:
                if not line.strip():
                    continue
                raise ValueError(f"Invalid row in {file}: {line[:120]!r}")
            name = m.group(2)
            key = m.group(1).upper()
            if name:
                if fnv64(name) != key:
                    raise ValueError(f"Broken source known mapping: {kind} {key} {name}")
                mapping[key] = name
            else:
                unknown.add(key)
        out[kind] = {"known": mapping, "unknown": unknown, "sha256": checksum(file)}
    return out


def read_prior_overlay(path: Path):
    names = {"c": {}, "e": {}, "f": {}, "s": {}}
    if path.is_file():
        with path.open("r", encoding="utf-8", newline="") as f:
            for row in csv.DictReader(f, delimiter="\t"):
                kind = row["kind"]
                hashed = row["hash"].replace("0x", "").upper()
                name = row["candidate_name"]
                if kind not in names or fnv64(name) != hashed:
                    raise ValueError(f"Invalid existing supplement row: {row}")
                names[kind][hashed] = name
    return names


def tsv(rows, fields):
    buf = io.StringIO()
    writer = csv.DictWriter(buf, delimiter="\t", fieldnames=fields, lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow({k: row.get(k, "") for k in fields})
    return buf.getvalue().encode("utf-8")


def candidate_comments(lines, line_number, class_hex, f_hex):
    """Only adjacent editor annotations, not guessed names from callsites."""
    annotations = []
    for idx in range(max(0, line_number - 4), line_number - 1):
        m = COMMENT.match(lines[idx])
        if m:
            annotations.append((m.group(1), idx + 1))
    inline = INLINE_COMMENT.match(lines[line_number - 1])
    if inline:
        annotations.append((inline.group(1), line_number))
    results = []
    for full_name, annotation_line in annotations:
        if "." not in full_name:
            continue
        cls, meth = full_name.rsplit(".", 1)
        if fnv64(meth) != f_hex:
            continue
        if cls == "C" + class_hex:
            results.append({
                "kind": "f", "hash": "0x" + f_hex,
                "candidate_name": meth, "annotation": full_name,
                "annotation_line": annotation_line,
                "status": "HASH_EXACT_EDITOR_COMMENT"
            })
        elif fnv64(cls) == class_hex:
            results.append({
                "kind": "c", "hash": "0x" + class_hex,
                "candidate_name": cls, "annotation": full_name,
                "annotation_line": annotation_line,
                "status": "HASH_EXACT_EDITOR_COMMENT"
            })
            results.append({
                "kind": "f", "hash": "0x" + f_hex,
                "candidate_name": meth, "annotation": full_name,
                "annotation_line": annotation_line,
                "status": "HASH_EXACT_EDITOR_COMMENT"
            })
    return results


def scan_file(path, external_dir, source_names, prior):
    name = C_CLASS.fullmatch(path.name)
    if not name:
        return None
    class_hash = name.group(1)
    lines = path.read_text(encoding="utf-8", errors="replace").splitlines()
    raw_path = external_dir / "split" / path.name
    raw_text = raw_path.read_text(encoding="utf-8", errors="replace") if raw_path.exists() else ""
    raw_defs = {(c, f) for c, f in RAW_METHOD.findall(raw_text)}
    raw_hash_mentions = {"C" + class_hash} if raw_path.is_file() else set()
    class_known = source_names["c"]["known"].get(class_hash, prior["c"].get(class_hash, ""))
    references = Counter(x for x in CLASS_REF.findall(raw_text or "\n".join(lines))
                         if x != class_hash)
    super_match = SUPER.search("\n".join(lines))
    parent = ""
    if super_match and super_match.group(1) == class_hash:
        parent = super_match.group(2)
    methods = []
    candidates = []
    for number, line in enumerate(lines, 1):
        m = METHOD.match(line)
        if not m or m.group(1) != class_hash:
            continue
        f_hash = m.group(2)
        comments = candidate_comments(lines, number, class_hash, f_hash)
        for cand in comments:
            kind = cand["kind"]
            hh = cand["hash"][2:]
            if hh in source_names[kind]["unknown"] and hh not in prior[kind]:
                cand.update({
                    "class_hash": "C" + class_hash,
                    "source_file": f"decompiled/{path.name}",
                    "evidence_line": number,
                    "raw_confirmed": int((class_hash, f_hash) in raw_defs),
                })
                candidates.append(cand)
        inferred = [x["candidate_name"] for x in comments if x["kind"] == "f"]
        methods.append({
            "class_hash": "C" + class_hash,
            "class_name": class_known,
            "function_hash": "F" + f_hash,
            "function_name": source_names["f"]["known"].get(f_hash, prior["f"].get(f_hash, "")),
            "annotation_name": sorted(set(inferred))[0] if inferred else "",
            "decompiled_file": f"decompiled/{path.name}",
            "decompiled_line": number,
            "raw_assignment_confirmed": int((class_hash, f_hash) in raw_defs),
            "split_source_file": f"split/{path.name}" if raw_path.exists() else "",
            "source_sha256": checksum(path),
        })
    # Prefer distinct known C refs, not frequency of repeated calls.
    by_namespace = defaultdict(set)
    known_refs = []
    for h in references:
        fullname = source_names["c"]["known"].get(h, prior["c"].get(h))
        if fullname and "." in fullname:
            namespace = fullname.rsplit(".", 1)[0]
            by_namespace[namespace].add(h)
            known_refs.append((h, fullname))
    ranked = sorted(by_namespace.items(), key=lambda pair: (-len(pair[1]), pair[0]))
    record = {
        "class_hash": "C" + class_hash,
        "class_name": class_known,
        "status": "HASH_NAMED" if class_known else "UNMAPPED",
        "source_file": f"decompiled/{path.name}",
        "source_sha256": checksum(path),
        "raw_split_present": int(raw_path.exists()),
        "raw_sha256": checksum(raw_path) if raw_path.exists() else "",
        "methods_defined": len(methods),
        "superclass_hash": "C" + parent if parent else "",
        "superclass_name": source_names["c"]["known"].get(parent, prior["c"].get(parent, "")),
        "reference_count": sum(references.values()),
        "distinct_known_class_refs": len(known_refs),
        "namespace_hints_NOT_PROOF": "; ".join(
            f"{namespace} ({len(hashes)} distinct refs)" for namespace, hashes in ranked[:5]),
        "known_reference_examples": "; ".join(sorted(set(x[1] for x in known_refs))[:5]),
    }
    return record, methods, candidates


def build(external_dir: Path, hash_root: Path, supplemental_file: Path):
    sources = read_names(hash_root)
    prior = read_prior_overlay(supplemental_file)
    decompiled = external_dir / "decompiled"
    if not decompiled.is_dir() or not (external_dir / "split").is_dir():
        raise FileNotFoundError("Expected SV-Script-RE/decompiled and split directories")
    paths = sorted(decompiled.glob("C*.lua"))
    if not paths:
        raise ValueError("No class Lua files found in external corpus")
    class_rows = []
    method_rows = []
    candidates = []
    for path in paths:
        res = scan_file(path, external_dir, sources, prior)
        if res:
            cls, methods, new_candidates = res
            class_rows.append(cls)
            method_rows.extend(methods)
            candidates.extend(new_candidates)
    unique = {}
    conflicts = defaultdict(set)
    for item in candidates:
        key = (item["kind"], item["hash"])
        conflicts[key].add(item["candidate_name"])
        unique.setdefault(key, item)
    exact = [r for k, r in sorted(unique.items())
             if len(conflicts[k]) == 1 and r["raw_confirmed"]]
    collision = [{"kind": k[0], "hash": k[1], "names": sorted(v)}
                 for k, v in sorted(conflicts.items()) if len(v) != 1]
    und_c = {h: r for r in class_rows for h in [r["class_hash"][1:]]}
    missing_c = []
    for h in sorted(sources["c"]["unknown"]):
        r = und_c.get(h, {})
        row = {"class_hash": "C" + h, "status": "PRESENT_IN_OLDER_CORPUS" if r else "NOT_IN_OLDER_CORPUS"}
        row.update(r)
        row["class_hash"] = "C" + h
        row["status"] = "PRESENT_IN_OLDER_CORPUS" if r else "NOT_IN_OLDER_CORPUS"
        missing_c.append(row)
    owners = []
    for r in method_rows:
        if r["function_hash"][1:] in sources["f"]["unknown"]:
            owners.append(r)
    cls_fields = [
        "class_hash","class_name","status","source_file","source_sha256",
        "raw_split_present","raw_sha256","methods_defined","superclass_hash",
        "superclass_name","reference_count","distinct_known_class_refs",
        "namespace_hints_NOT_PROOF","known_reference_examples"
    ]
    meth_fields = [
        "class_hash","class_name","function_hash","function_name","annotation_name",
        "decompiled_file","decompiled_line","raw_assignment_confirmed",
        "split_source_file","source_sha256"
    ]
    exact_fields = [
        "kind","hash","candidate_name","status","class_hash","source_file",
        "evidence_line","annotation","annotation_line","raw_confirmed"
    ]
    out = {
        "class_to_function.tsv": tsv(method_rows, meth_fields),
        "unmapped_c_context.tsv": tsv(missing_c, cls_fields),
        "unmapped_f_owners.tsv": tsv(owners, meth_fields),
        "new_exact_comment_names.tsv": tsv(exact, exact_fields)
    }
    report = {
        "external_repository": "https://github.com/Martmists-GH/SV-Script-RE",
        "external_sha": EXTERNAL_SHA,
        "external_version": "3.0.1 era per source README; not verified as SV 4.0.0",
        "evidence_level": "OLDER_LUA_EDITOR_CONTEXT / NOT_NATIVE_4_0_0",
        "classes_in_external_corpus": len(class_rows),
        "methods_defined_in_external_corpus": len(method_rows),
        "method_definitions_with_raw_assignment": sum(int(x["raw_assignment_confirmed"]) for x in method_rows),
        "unknown_c_target_count": len(sources["c"]["unknown"]),
        "unknown_c_with_file": sum(x["status"] == "PRESENT_IN_OLDER_CORPUS" for x in missing_c),
        "unknown_f_target_count": len(sources["f"]["unknown"]),
        "unknown_f_with_owner": len({x["function_hash"] for x in owners}),
        "unknown_f_owner_edges": len(owners),
        "new_exact_comment_candidates": len(exact),
        "new_exact_comment_by_type": dict(Counter(x["kind"] for x in exact)),
        "editor_annotation_collisions": collision,
        "source_hashlists_sha256": {k: x["sha256"] for k, x in sources.items()},
        "original_pokedocs_files_modified": False,
        "proposed_merged_changes": False,
    }
    out["context-report.json"] = (
        json.dumps(report, ensure_ascii=False, sort_keys=True, indent=2) + "\n"
    ).encode("utf-8")
    return out, report


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--external", required=True, type=Path,
                    help="Local checkout of pinned SV-Script-RE source")
    ap.add_argument("--hash-root", default=LUA, type=Path)
    ap.add_argument("--prior", default=OUTPUT.parent / "recovered.tsv", type=Path)
    ap.add_argument("--output", default=OUTPUT, type=Path)
    ap.add_argument("--verify-only", action="store_true")
    args = ap.parse_args()
    result, report = build(args.external.resolve(), args.hash_root.resolve(), args.prior.resolve())
    target = args.output.resolve()
    if args.verify_only:
        for name, data in result.items():
            path = target / name
            if not path.exists() or path.read_bytes() != data:
                raise SystemExit(f"Stale or missing report {path}")
    else:
        target.mkdir(parents=True, exist_ok=True)
        for name, data in result.items():
            path = target / name
            if not path.is_file() or path.read_bytes() != data:
                path.write_bytes(data)
    print(json.dumps({k:v for k,v in report.items() if k not in ("editor_annotation_collisions", "source_hashlists_sha256")}, indent=2))


if __name__ == "__main__":
    main()
