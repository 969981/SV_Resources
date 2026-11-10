#!/usr/bin/env python3
"""Publish *actual* Ghidra 12.2 artifacts as uncompressed Git-safe parts.

Source GitHub Actions run is supplied through GITHUB_RUN_ID. Database is losslessly split into binary
parts, NDJSON is split at line boundaries; C is kept as individual files and
native Ghidra .gpr/.rep contents are extracted, never stored as a ZIP/TAR.
"""
from __future__ import annotations

import argparse
import os
import csv
import gzip
import hashlib
import json
import shutil
import sqlite3
import subprocess
import tarfile
import zipfile
from pathlib import Path, PurePosixPath

RUN = int(os.environ.get('GITHUB_RUN_ID', '0'))
ELF = ""
LIMIT = 45 * 1024 * 1024
ARTIFACTS = {}


def sha(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as src:
        while buf := src.read(4 * 1024 * 1024):
            h.update(buf)
    return h.hexdigest()


def source(root: Path, typ: str, filename: str) -> Path:
    path = root / ARTIFACTS[typ] / filename
    if path.is_file():
        return path
    # actions/upload-artifact preserves nested paths when its inputs have
    # different parent folders (notably the original FDE recovery audit).
    matches = [p for p in (root / ARTIFACTS[typ]).rglob(filename) if p.is_file()]
    if len(matches) != 1:
        raise FileNotFoundError(f"Expected exactly one {filename} in {root / ARTIFACTS[typ]}, got {len(matches)}")
    return matches[0]


def split_binary(file: Path, target: Path, base: str) -> dict:
    target.mkdir(parents=True, exist_ok=True)
    parts = []
    count = 0
    with file.open("rb") as stream:
        while buf := stream.read(LIMIT):
            part = target / (base + ".part" + format(count, "04d") + ".bin")
            part.write_bytes(buf)
            parts.append({"path": part.name, "size": len(buf), "sha256": sha(part)})
            count += 1
    if not parts:
        raise ValueError("Cannot publish empty binary file " + str(file))
    return {"size": file.stat().st_size, "sha256": sha(file), "parts": parts}


def split_ndjson_gzip(file: Path, target: Path) -> dict:
    target.mkdir(parents=True, exist_ok=True)
    parts = []
    n = 0
    total = 0
    digest = hashlib.sha256()
    writer = None
    bytes_in_part = 0
    part_path = None
    try:
        with gzip.open(file, "rb") as src:
            for line in src:
                if not line.endswith(b"\n") or not line.strip():
                    raise ValueError("Invalid/unterminated Ghidra NDJSON record")
                # Individual parts are valid JSONL; no line can cross boundaries.
                if len(line) > LIMIT:
                    raise ValueError("Oversized single NDJSON record; cannot split safely")
                if writer is None or bytes_in_part + len(line) > LIMIT:
                    if writer is not None:
                        writer.close()
                        parts.append({"path": part_path.name, "size": bytes_in_part,
                                      "sha256": sha(part_path)})
                    part_path = target / ("events.part" + format(n, "04d") + ".ndjson")
                    writer = part_path.open("wb")
                    bytes_in_part = 0
                    n += 1
                writer.write(line)
                bytes_in_part += len(line)
                digest.update(line)
                total += len(line)
    finally:
        if writer is not None:
            writer.close()
            parts.append({"path": part_path.name, "size": bytes_in_part,
                          "sha256": sha(part_path)})
    if not parts:
        raise ValueError("Empty Ghidra NDJSON")
    return {"size": total, "sha256": digest.hexdigest(), "parts": parts,
            "gzip_source_sha256": sha(file)}


def untar_project(src: Path, target: Path, parts_dir: Path) -> dict:
    target.mkdir(parents=True, exist_ok=True)
    result = {"regular_files": 0, "split_files": {}}
    with subprocess.Popen(["zstd", "-dc", str(src)], stdout=subprocess.PIPE) as decoder:
        if decoder.stdout is None:
            raise RuntimeError("zstd not executable")
        with tarfile.open(fileobj=decoder.stdout, mode="r|") as tar:
            for entry in tar:
                name = PurePosixPath(entry.name)
                if (name.is_absolute() or ".." in name.parts or not name.parts
                        or name.parts[0] not in ("SV4000.gpr", "SV4000.rep")):
                    raise ValueError("Unsafe Ghidra project tar path: " + entry.name)
                output = target.joinpath(*name.parts)
                if entry.isdir():
                    output.mkdir(parents=True, exist_ok=True)
                    continue
                if not entry.isfile():
                    raise ValueError("Unsupported link/device in native Ghidra project")
                inp = tar.extractfile(entry)
                if inp is None:
                    raise ValueError("Missing project file data")
                if entry.size > LIMIT:
                    # The final Ghidra project is still lossless; rebuild this large
                    # internal file before opening the .gpr in the Ghidra GUI.
                    with inp:
                        parts = []
                        i = 0
                        rem = entry.size
                        original_digest = hashlib.sha256()
                        while rem:
                            data = inp.read(min(LIMIT, rem))
                            if not data:
                                raise ValueError("Short read from native Ghidra project")
                            original_digest.update(data)
                            p = parts_dir / name.parent / (name.name + ".part" + format(i, "04d") + ".bin")
                            p.parent.mkdir(parents=True, exist_ok=True)
                            p.write_bytes(data)
                            parts.append({"path": p.relative_to(parts_dir).as_posix(),
                                          "sha256": sha(p), "size": len(data)})
                            rem -= len(data)
                            i += 1
                        result["split_files"][name.as_posix()] = {
                            "size": entry.size, "sha256": original_digest.hexdigest(),
                            "parts": parts}
                else:
                    output.parent.mkdir(parents=True, exist_ok=True)
                    with inp, output.open("wb") as dest:
                        shutil.copyfileobj(inp, dest, 1 * 1024 * 1024)
                    if output.stat().st_size != entry.size:
                        raise ValueError("Invalid project extracted size")
                    result["regular_files"] += 1
        if decoder.wait() != 0:
            raise ValueError("zstd native project decoder failed")
    if not (target / "SV4000.gpr").exists() or not (target / "SV4000.rep").is_dir():
        raise ValueError("Native Ghidra .gpr / .rep missing")
    return result


def unpack_c(src: Path, dest: Path, expected: int) -> int:
    total = 0
    dest.mkdir(parents=True, exist_ok=True)
    with zipfile.ZipFile(src) as z:
        for item in z.infolist():
            if item.is_dir():
                continue
            p = PurePosixPath(item.filename)
            if (p.is_absolute() or ".." in p.parts or not p.parts
                    or p.parts[0] not in ("decompiled", "decompiled_index.csv",
                                            "decompiled_manifest.json")):
                raise ValueError("Unsafe C source archive member")
            if p.parts[0] != "decompiled":
                continue
            if len(p.parts) != 2 or not p.name.endswith(".c") or item.file_size > LIMIT:
                raise ValueError("Invalid/oversized C file: " + item.filename)
            to = dest / p.name
            with z.open(item) as inp, to.open("wb") as out:
                shutil.copyfileobj(inp, out, 1024 * 1024)
            total += 1
    if total != expected:
        raise ValueError("C file count " + str(total) + " != " + str(expected))
    return total


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--artifacts", type=Path, required=True)
    ap.add_argument("--output", type=Path, required=True)
    ap.add_argument("--game", choices=["scarlet_main", "violet_main"], required=True)
    args = ap.parse_args()
    global ELF, ARTIFACTS
    ELF = {"scarlet_main": "53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f",
           "violet_main": "84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30"}[args.game]
    ARTIFACTS = {key: f"SV400-{args.game}-complete" for key in ("project", "sqlite", "c", "ndjson", "fde")}
    root, out = args.artifacts, args.output
    if out.exists() and any(out.iterdir()):
        raise ValueError("Output must be empty to avoid stale files")
    out.mkdir(parents=True, exist_ok=True)
    project = source(root, "project", "SV4000_ghidra_project.tar.zst")
    db = source(root, "sqlite", "sv400_main_410.sqlite")
    db_manifest = source(root, "sqlite", "sv400_ghidra_manifest.json")
    code = source(root, "c", "SV4000_all_decompiled_C.zip")
    c_manifest = source(root, "c", "decompiled_manifest.json")
    c_index = source(root, "c", "decompiled_index.csv")
    ndjson = source(root, "ndjson", "sv400_ghidra_events.ndjson.gz")
    fde = source(root, "fde", "fde_recovery.csv")

    db_info = json.loads(db_manifest.read_text(encoding="utf-8"))
    c_info = json.loads(c_manifest.read_text(encoding="utf-8"))
    if db_info.get("status") != "COMPLETE" or db_info.get("elf_sha256") != ELF:
        raise ValueError("Ghidra SQLite report is not complete or wrong ELF")
    if c_info.get("original_elf_sha256_expected") != ELF:
        raise ValueError("C manifest does not match original ELF")
    if c_info.get("ndjson_sha256") != sha(ndjson):
        raise ValueError("Original NDJSON gzip SHA mismatch")
    expected = int(c_info["functions"])
    if int(c_info["decompiler_attempted"]) != expected or int(c_info["c_success"]) + int(c_info["c_fail_or_empty"]) != expected:
        raise ValueError("C archive does not cover all identified functions")

    with sqlite3.connect(db) as conn:
        if conn.execute("PRAGMA integrity_check").fetchone()[0] != "ok":
            raise ValueError("SQLite integrity_check failed")
        count = {}
        for tab in ("functions", "instructions", "references_full", "decompilation"):
            count[tab] = conn.execute("SELECT COUNT(*) FROM " + tab).fetchone()[0]
        count["c_ok"] = conn.execute(
            "SELECT COUNT(*) FROM decompilation WHERE status='OK'").fetchone()[0]
        gzip_sha = conn.execute(
            "SELECT value FROM metadata WHERE key='source_ndjson_sha256'").fetchone()
        if gzip_sha and gzip_sha[0] != sha(ndjson):
            raise ValueError("Database source NDJSON SHA mismatch")
    if count["functions"] != expected or count["decompilation"] != expected or count["c_ok"] != int(c_info["c_success"]):
        raise ValueError("SQLite and C function counts differ")
    for tab, kind in (("functions", "function"), ("instructions", "instruction"),
                      ("references_full", "reference"), ("decompilation", "decompile")):
        if count[tab] != db_info["counts"].get(kind):
            raise ValueError("SQLite/manifest count mismatch: " + tab)

    with c_index.open("r", newline="", encoding="utf-8") as src:
        rows = list(csv.DictReader(src))
    if len(rows) != expected or sum(r["status"] == "OK" for r in rows) != int(c_info["c_success"]):
        raise ValueError("C function coverage CSV inconsistent")

    project_info = untar_project(project, out / "project", out / "project_parts")
    binary = split_binary(db, out / "database", "sv400_main_410.sqlite")
    raw = split_ndjson_gzip(ndjson, out / "ndjson")
    if raw["gzip_source_sha256"] != sha(ndjson):
        raise ValueError("Compressed input NDJSON changed")
    num_c = unpack_c(code, out / "c", int(c_info["c_success"]))
    shutil.copyfile(c_index, out / "decompiled_index.csv")
    shutil.copyfile(c_manifest, out / "decompiled_manifest.json")
    shutil.copyfile(db_manifest, out / "sv400_ghidra_manifest.json")
    shutil.copyfile(fde, out / "fde_recovery.csv")
    info = {
        "status": "UNCOMPRESSED_SPLIT_VERIFIED",
        "source_run_id": RUN,
        "source_url": "https://github.com/969981/SV_Resources/actions/runs/" + str(RUN),
        "elf_sha256": ELF, "chunk_limit_bytes": LIMIT,
        "project": project_info, "sqlite": binary, "ndjson": raw,
        "c_files": num_c, "sqlite_table_counts": count,
        "source_artifact_names": ARTIFACTS,
    }
    (out / "parts_manifest.json").write_text(
        json.dumps(info, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
    (out / "README.md").write_text(
        "# SV 4.0.0 Ghidra 12.2 — uncompressed / losslessly split\n\n"
        "Source: Actions Run #" + str(RUN) + " (validated outputs), ELF SHA256: " + ELF + "\n\n"
        "- project/SV4000.gpr and project/SV4000.rep/: editable native Ghidra project;\n"
        "- c/: " + str(num_c) + " individual Ghidra pseudocode .c files;\n"
        "- database/: byte-exact raw SQLite pieces, not ZIP/GZ;\n"
        "- ndjson/: plain newline-delimited JSON fragments, each line intact;\n"
        "- fde_recovery.csv: 25,803 original FDE recovery audit;\n"
        "- parts_manifest.json: every chunk SHA256 and original full-file SHA256.\n\n"
        "Restore the original SQLite and NDJSON using: "
        "python tools/ghidra/sv400_restore_split.py "
        "--source Unpack/4.0.0/exefs/" + args.game + "/ghidra12.2 "
        "--out /some/local/directory\n\n"
        "GitHub cannot accept >100 MB ordinary Git blobs; we deliberately use "
        "uncompressed binary chunks <=45 MiB rather than LFS, TAR, or ZIP. "
        "If project_parts/ is present, restoration also reconstructs any "
        "oversized internal Ghidra project files.\n\n"
        "This is Ghidra-generated C pseudocode, not Nintendo source code. "
        "All " + str(expected) + " discovered functions have individual decompiler statuses; ",
        "not all decompilers necessarily succeed. See decompiled_index.csv.\n",
        encoding="utf-8")
    for path in out.rglob("*"):
        if path.is_file() and path.stat().st_size > LIMIT:
            raise ValueError("GitHub size limit violated: " + str(path))
    print(json.dumps({"status": info["status"], "source_run": RUN,
                      "sqlite_bytes": binary["size"], "sqlite_parts": len(binary["parts"]),
                      "ndjson_bytes": raw["size"], "ndjson_parts": len(raw["parts"]),
                      "c_files": num_c, "project": project_info,
                      "sqlite_counts": count}, indent=2))


if __name__ == "__main__":
    main()
