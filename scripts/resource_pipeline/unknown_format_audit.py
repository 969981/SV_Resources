#!/usr/bin/env python3
"""Audit committed SV Trinity native-file inspections against ALL tracked virtual paths.

This script never treats a candidate extension or byte signature as a semantic decode.
It reads committed task reports (not transient worker output), and gives exact
source-path coverage, top unsupported signatures, and reproducible file lists.
"""
from __future__ import annotations

import argparse
from collections import Counter, defaultdict
import csv
import json
from pathlib import Path, PurePosixPath
import subprocess

ROOT = "Unpack/4.0.0/romfs/arc/data.trpfs"
RAW_PREFIX = ROOT + "/virtual/"
REPORT_PREFIX = ROOT + "/virtual_converted/_index/tasks/"
STATUSES = {"STRUCTURE_PARSED", "INSPECTED_UNPARSED", "SOURCE_HASH_MISMATCH"}
RANK = {"SOURCE_HASH_MISMATCH": 0, "INSPECTED_UNPARSED": 1, "STRUCTURE_PARSED": 2}


def tree_blobs(repo: Path, prefix: str):
    proc = subprocess.run(["git", "ls-tree", "-r", "-z", "HEAD", "--", prefix.rstrip("/")],
                          cwd=repo, check=True, capture_output=True)
    result = []
    for entry in proc.stdout.split(b"\0"):
        if not entry:
            continue
        meta, name = entry.split(b"\t", 1)
        mode, kind, oid = meta.decode("ascii").split(" ")
        path = name.decode("utf-8", errors="strict")
        if kind == "blob" and mode in ("100644", "100755") and path.startswith(prefix):
            result.append((path, oid))
    return result


def read_git_blobs(repo: Path, objects, batch_size=128):
    """Read small report blobs by object ID, without checking out game assets."""
    for start in range(0, len(objects), batch_size):
        batch = objects[start:start + batch_size]
        proc = subprocess.run(["git", "cat-file", "--batch"], cwd=repo, check=True,
                              input="".join(sha + "\n" for _, sha in batch).encode("ascii"),
                              capture_output=True)
        data = proc.stdout
        offset = 0
        for path, expected in batch:
            end = data.index(b"\n", offset)
            header = data[offset:end].decode("ascii").split()
            if len(header) != 3 or header[0] != expected or header[1] != "blob":
                raise ValueError("Invalid Git blob for " + path)
            count = int(header[2])
            begin = end + 1
            finish = begin + count
            if finish >= len(data) or data[finish:finish + 1] != b"\n":
                raise ValueError("Truncated Git batch result for " + path)
            yield path, data[begin:finish]
            offset = finish + 1
        if offset != len(data):
            raise ValueError("Trailing Git batch output")


def summarize(repo: Path, out: Path):
    raw = tree_blobs(repo, RAW_PREFIX)
    raw_paths = {path[len(RAW_PREFIX):] for path, _ in raw}
    if not raw_paths or len(raw_paths) != len(raw):
        raise ValueError("Missing/duplicated original tracked virtual paths")
    reports = [(path, sha) for path, sha in tree_blobs(repo, REPORT_PREFIX)
               if path.endswith(".json")]
    known = {}
    repeats = Counter()
    invalid = []
    for report_path, blob in read_git_blobs(repo, reports):
        try:
            report = json.loads(blob)
            sources = report["sources"]
            if not isinstance(sources, list) or len(sources) != report["input_files"]:
                raise ValueError("Input count != reported source records")
            if len({s["source"] for s in sources}) != len(sources):
                raise ValueError("Duplicate paths within report")
            for record in sources:
                name = record["source"]
                if (not isinstance(name, str) or name not in raw_paths
                        or record.get("parse_status") not in STATUSES):
                    raise ValueError("Unknown source path/status: " + str(name))
                digest = record.get("source_sha256", "")
                if not isinstance(digest, str) or len(digest) != 64 or any(
                        c not in "0123456789abcdefABCDEF" for c in digest):
                    raise ValueError("Missing SHA-256 inspection: " + name)
                previous = known.get(name)
                if previous:
                    repeats[name] += 1
                    if previous["source_sha256"].upper() != digest.upper():
                        raise ValueError("Conflicting input SHA-256: " + name)
                    if RANK[record["parse_status"]] > RANK[previous["parse_status"]]:
                        known[name] = record
                else:
                    known[name] = record
        except (KeyError, TypeError, ValueError, json.JSONDecodeError) as exc:
            invalid.append({"report": report_path, "error": str(exc)[:500]})
    # Fail closed: invalid reports cannot support a reliable global coverage claim.
    inspected = raw_paths.intersection(known)
    missing = sorted(raw_paths - inspected)
    statuses = Counter(v["parse_status"] for v in known.values())
    signatures = defaultdict(lambda: {"count": 0, "examples": [], "bytes": 0})
    for name, record in known.items():
        if record["parse_status"] != "INSPECTED_UNPARSED":
            continue
        extension = PurePosixPath(name).suffix.lower() or "<no-extension>"
        fmt = record.get("format_candidate") or "<unclassified>"
        probe = record.get("inspection") or {}
        magic = str(probe.get("header_hex", ""))[:16] or "<empty>"
        group = signatures[(fmt, extension, magic)]
        group["count"] += 1
        group["bytes"] += int(record.get("bytes") or 0)
        if len(group["examples"]) < 4:
            group["examples"].append(name)
    ordered = sorted(signatures.items(), key=lambda item: (-item[1]["count"], item[0]))
    out.mkdir(parents=True, exist_ok=True)
    with (out / "unknown_format_candidates.csv").open("w", encoding="utf-8-sig", newline="") as f:
        writer = csv.writer(f)
        writer.writerow(["format_candidate", "extension", "header_first_8_bytes_hex",
                         "unparsed_files", "total_bytes", "example_sources"])
        for (fmt, extension, magic), data in ordered:
            writer.writerow([fmt, extension, magic, data["count"], data["bytes"],
                             " | ".join(data["examples"])])
    (out / "missing_inspection_paths.txt").write_text(
        "".join(p + "\n" for p in missing), encoding="utf-8")
    summary = {
        "schema_version": 1,
        "scope": "COMMITTED_VIRTUAL_CONVERTED_TASK_REPORTS_ONLY",
        "source_version": "4.0.0",
        "tracked_native_files": len(raw_paths),
        "committed_task_reports": len(reports),
        "unique_inspected_sources": len(inspected),
        "missing_inspection_sources": len(missing),
        "inspection_coverage_percent": round(100 * len(inspected) / len(raw_paths), 4),
        "status_counts": dict(sorted(statuses.items())),
        "duplicate_report_sources": len(repeats),
        "duplicate_report_references": sum(repeats.values()),
        "invalid_task_reports": invalid[:100],
        "invalid_report_count": len(invalid),
        "unknown_signature_groups": len(signatures),
        "top_unknown_signatures": [
            {"candidate": key[0], "extension": key[1], "magic8": key[2],
             "unparsed": value["count"], "examples": value["examples"]}
            for key, value in ordered[:30]
        ],
        "classification_warning": (
            "INSPECTED_UNPARSED is NOT decoded. STRUCTURE_PARSED is NOT visual "
            "or complete semantic model validation. A committed report only "
            "proves the recorded inspection, not conversion of every resource."
        ),
    }
    (out / "coverage_summary.json").write_text(
        json.dumps(summary, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    return summary


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--repo", type=Path, default=Path(__file__).resolve().parents[2])
    parser.add_argument("--out", type=Path, default=Path("sv-unknown-format-audit"))
    args = parser.parse_args(argv)
    result = summarize(args.repo.resolve(), args.out.resolve())
    print(json.dumps(result, ensure_ascii=False, indent=2))
    return 2 if result["invalid_report_count"] else 0


if __name__ == "__main__":
    raise SystemExit(main())
