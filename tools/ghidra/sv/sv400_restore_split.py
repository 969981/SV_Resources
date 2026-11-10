#!/usr/bin/env python3
"""Losslessly reconstruct direct-use Ghidra SQLite, NDJSON and native project.

Git parts are *uncompressed*; each part is protected by SHA-256, and the
assembled file is checked against the original source artifact SHA-256.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import shutil
import sqlite3
from pathlib import Path


def digest(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as inp:
        while buf := inp.read(4 * 1024 * 1024):
            h.update(buf)
    return h.hexdigest()


def combine(root: Path, entries: dict, dest: Path) -> None:
    dest.parent.mkdir(parents=True, exist_ok=True)
    tmp = dest.with_suffix(dest.suffix + ".tmp")
    size = 0
    try:
        with tmp.open("wb") as output:
            for part in entries["parts"]:
                path = root / part["path"]
                if path.stat().st_size != part["size"] or digest(path) != part["sha256"]:
                    raise ValueError("Corrupt/missing uncompressed shard: " + str(path))
                with path.open("rb") as source:
                    shutil.copyfileobj(source, output, 4 * 1024 * 1024)
                size += part["size"]
        if size != entries["size"] or digest(tmp) != entries["sha256"]:
            raise ValueError("Rebuilt original file does not match source SHA256")
        tmp.replace(dest)
    finally:
        if tmp.exists():
            tmp.unlink()


def run(source: Path, output: Path, copy_project: bool = True) -> dict:
    info = json.loads((source / "parts_manifest.json").read_text(encoding="utf-8"))
    if info.get("status") != "UNCOMPRESSED_SPLIT_VERIFIED":
        raise ValueError("Missing verified source run manifest")
    if output.resolve() == source.resolve() or source.resolve() in output.resolve().parents:
        raise ValueError("Refusing to write restoration into tracked source tree")
    if output.exists() and any(output.iterdir()):
        raise ValueError("Restore destination must be empty")
    output.mkdir(parents=True, exist_ok=True)

    sqlite_file = output / "sv400_main.sqlite"
    ndjson_file = output / "sv400_ghidra_events.ndjson"
    combine(source / "database", info["sqlite"], sqlite_file)
    combine(source / "ndjson", info["ndjson"], ndjson_file)
    if copy_project:
        shutil.copytree(source / "project", output / "project")
        if info["project"]["split_files"]:
            for name, specification in info["project"]["split_files"].items():
                # All paths and hashes are validated from the committed manifest.
                if name.startswith("/") or ".." in Path(name).parts:
                    raise ValueError("Invalid Ghidra project file path")
                dest = output / "project" / name
                combine(source / "project_parts",
                        specification, dest)
        if not (output / "project" / "SV400.gpr").exists():
            raise ValueError("Ghidra project is missing its .gpr entrypoint")

    with sqlite3.connect(sqlite_file) as db:
        status = db.execute("PRAGMA integrity_check").fetchone()[0]
        counts = {t: db.execute("SELECT COUNT(*) FROM " + t).fetchone()[0]
                  for t in ("functions", "instructions", "references_full", "decompilation")}
    if status != "ok" or counts != {k: info["sqlite_table_counts"][k] for k in counts}:
        raise ValueError("Rebuilt Ghidra SQLite consistency failure")
    report = {
        "source_run_id": info["source_run_id"],
        "status": "RECONSTRUCTED_AND_SHA256_VERIFIED",
        "sqlite_sha256": digest(sqlite_file),
        "ndjson_sha256": digest(ndjson_file),
        "project_reconstructed": copy_project,
        "sqlite_integrity_check": status,
        "sqlite_counts": counts,
    }
    (output / "restore_report.json").write_text(
        json.dumps(report, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
    return report


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--source", type=Path, required=True)
    parser.add_argument("--out", type=Path, required=True)
    parser.add_argument("--no-project", action="store_true",
                        help="Only reconstruct the raw SQLite and NDJSON files")
    args = parser.parse_args()
    print(json.dumps(run(args.source, args.out, not args.no_project),
                     indent=2, ensure_ascii=False))


if __name__ == "__main__":
    main()
