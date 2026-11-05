#!/usr/bin/env python3
"""Process an already-extracted SV 4.0.0 Trinity virtual subtree.

Only verified, local files are candidates. This does NOT reconstruct data.trpfs.
The native input is immutable; semantic game IDs require independent evidence.
"""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path, PurePosixPath
import sqlite3
import sys

try:
    from . import cli, r4_pipeline
except ImportError:
    import cli
    import r4_pipeline


def scoped_paths(root: Path, prefix: str, max_files: int):
    prefix = cli.safe_path(prefix)
    if prefix.startswith(("parsed/", "converted/", "resources/", "_index/")):
        raise ValueError("Prefix must be relative to virtual/")
    base = root / "virtual"
    scope = base.joinpath(*PurePosixPath(prefix).parts)
    if scope.is_symlink() or not scope.resolve().is_relative_to(base.resolve()):
        raise ValueError("Unsafe virtual scope")
    candidates = [scope] if scope.is_file() else (scope.rglob("*") if scope.is_dir() else ())
    selected = []
    for path in candidates:
        if path.is_symlink() or not path.is_file():
            continue
        if not path.resolve().is_relative_to(base.resolve()):
            raise ValueError("Virtual entry escapes root")
        rel = cli.safe_path(path.relative_to(base).as_posix())
        selected.append((rel, path))
        if len(selected) > max_files:
            raise ValueError(f"Scope has more than {max_files} native files; choose a smaller --prefix")
    if not selected:
        raise ValueError(f"No local native files at virtual/{prefix}")
    return sorted(selected)


def index_local(root: Path, conn: sqlite3.Connection, files):
    """Index native bytes without inventing a TRPFD hash or pack identity.

    A previously indexed native-manifest SHA is immutable and is checked.
    If there is no independent manifest, computed bytes are still checksummed,
    but sha256_verified stays zero (not independently verified).
    """
    result = {"available": 0, "native_sha_matches": 0, "hash_mismatch": 0,
              "local_only": 0, "formats": {}}
    for rel, path in files:
        st = path.stat()
        sha = cli.digest(path)
        old = conn.execute(
            "SELECT hash64,sha256_recorded,source_pack,pack_offset,sha256_verified "
            "FROM raw_files WHERE source_version=? AND virtual_path=?",
            (cli.VERSION, rel)).fetchone()
        indexed_hash = old[1] if old and old[2] else None
        matches = not indexed_hash or sha == indexed_hash.upper()
        fmt, magic, confidence, fmt_status = cli.detect(path, path.suffix.lower())
        status = "OK" if matches else "HASH_MISMATCH"
        if not matches:
            result["hash_mismatch"] += 1
            fmt_status = "MISMATCH"
        elif indexed_hash:
            result["native_sha_matches"] += 1
        else:
            result["local_only"] += 1
        result["formats"][fmt] = result["formats"].get(fmt, 0) + 1
        conn.execute("""
          INSERT INTO raw_files(source_version,virtual_path,hash64,size_bytes,
            sha256_recorded,sha256_verified,source_pack,pack_offset,
            extract_status,available,last_scanned_utc)
          VALUES(?,?,?,?,?,?,?,?,?,?,?)
          ON CONFLICT(source_version,virtual_path) DO UPDATE SET
            size_bytes=excluded.size_bytes,
            sha256_recorded=excluded.sha256_recorded,
            sha256_verified=excluded.sha256_verified,
            extract_status=excluded.extract_status,
            available=excluded.available,last_scanned_utc=excluded.last_scanned_utc
        """, (cli.VERSION, rel, old[0] if old else None, st.st_size,
              indexed_hash or sha, int(bool(indexed_hash and matches)),
              old[2] if old else None, old[3] if old else None,
              status, int(matches), cli.utcnow()))
        rid = conn.execute(
            "SELECT id FROM raw_files WHERE source_version=? AND virtual_path=?",
            (cli.VERSION, rel)).fetchone()[0]
        conn.execute("""
          INSERT INTO file_formats(raw_file_id,extension,magic_hex,format_name,
            confidence,parser_name,detector_version,parse_status)
          VALUES(?,?,?,?,?,?,?,?)
          ON CONFLICT(raw_file_id) DO UPDATE SET
            extension=excluded.extension,magic_hex=excluded.magic_hex,
            format_name=excluded.format_name,confidence=excluded.confidence,
            parser_name=excluded.parser_name,detector_version=excluded.detector_version,
            parse_status=excluded.parse_status
        """, (rid, path.suffix.lower(), magic, fmt, confidence,
              "r1-ahtb" if fmt == "AHTB" else
              "r1-bntx" if fmt == "BNTX" else None,
              cli.DETECTOR_VERSION, fmt_status))
        result["available"] += int(matches)
    conn.commit()
    return result


def outputs(root: Path, max_output_mb: int):
    """Produce a bounded exact allowlist; never publish undeclared binaries."""
    allow = {".json", ".csv", ".png", ".gltf", ".glb"}
    cap = max_output_mb * 1024 * 1024
    used = 0
    published, deferred = [], []
    for layer in ("parsed", "converted", "resources"):
        base = root / layer
        if not base.exists():
            continue
        for path in sorted(base.rglob("*")):
            if not path.is_file() or path.is_symlink() or path.name == "README.md":
                continue
            rel = path.relative_to(root).as_posix()
            if path.suffix.lower() not in allow or path.stat().st_size > cap-used:
                deferred.append({"path": rel, "reason": "UNSUPPORTED_OR_BATCH_LIMIT"})
                continue
            used += path.stat().st_size
            published.append({"path": rel, "bytes": path.stat().st_size,
                              "sha256": cli.digest(path)})
    return published, deferred


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--repo", type=Path, default=Path(__file__).resolve().parents[2])
    parser.add_argument("--prefix", required=True, help="Bounded path below virtual/, not a glob")
    parser.add_argument("--max-source-files", type=int, default=3000)
    parser.add_argument("--max-output-mb", type=int, default=25)
    parser.add_argument("--limit", type=int, default=20, help="Max files per conversion stage")
    parser.add_argument("--kind", choices=("all", "messages", "labels", "bntx", "models"),
                        default="all")
    parser.add_argument("--png-converter", default="")
    parser.add_argument("--model-converter", default="")
    parser.add_argument("--retry-failed", action="store_true")
    opts = parser.parse_args(argv)
    if not (1 <= opts.limit <= 1000 and 1 <= opts.max_source_files <= 100000
            and 1 <= opts.max_output_mb <= 200):
        parser.error("Invalid nonzero batch limits")
    repo = opts.repo.resolve()
    root = repo / cli.BASE
    if not (root / "virtual").is_dir():
        parser.error("Missing native virtual/ directory")
    files = scoped_paths(root, opts.prefix, opts.max_source_files)
    with cli.connect(root / "_index" / "resource_catalog.sqlite") as conn:
        index = index_local(root, conn, files)
        stages = {}
        if opts.kind in ("all", "messages"):
            stages["messages"] = cli.decode_messages(root, conn, opts.limit, opts.retry_failed)
        if opts.kind in ("all", "labels"):
            stages["labels"] = cli.convert(root, conn, "labels", opts.limit,
                                            force=opts.retry_failed)
        if opts.kind in ("all", "bntx"):
            stages["bntx"] = cli.convert(root, conn, "bntx", opts.limit,
                                          converter=opts.png_converter or None,
                                          force=opts.retry_failed)
        if opts.kind in ("all", "models"):
            r4_pipeline.apply_schema(conn)
            stages["models"] = r4_pipeline.process(
                root, conn, repo, prefix=opts.prefix, limit=opts.limit,
                discover=True, retry_failed=opts.retry_failed,
                converter=opts.model_converter)
        problem_rows = conn.execute("""
            SELECT r.virtual_path,j.stage,j.status,j.error_message
            FROM conversion_jobs j JOIN raw_files r ON r.id=j.raw_file_id
            WHERE j.status IN ('FAILED','BLOCKED')
            ORDER BY r.virtual_path,j.stage LIMIT 200
        """).fetchall()
        problems = [
            {"source":p,"stage":stage,"status":status,"error":reason}
            for p,stage,status,reason in problem_rows
        ]
        if opts.kind in ("all","models"):
            problems.extend(
                {"source":p,"stage":"models","status":status,"error":reason}
                for p,status,reason in conn.execute(
                    "SELECT object_name,status,error_message FROM r4_object_jobs "
                    "WHERE status IN ('FAILED','BLOCKED') ORDER BY object_name LIMIT 200"
                ).fetchall()
            )
    selected, deferred = outputs(root, opts.max_output_mb)
    batch_id = hashlib.sha256((cli.VERSION + "|" + opts.prefix + "|" + opts.kind).encode()).hexdigest()[:16]
    report = {
        "version": cli.VERSION, "source": "virtual/" + opts.prefix,
        "kind": opts.kind, "completed_utc": cli.utcnow(),
        "input_sha_policy": "TRPFD_CHECKED_WHEN_PRIOR_NATIVE_MANIFEST_PRESENT_ELSE_LOCAL_ONLY",
        "source_files_seen": len(files),
        "index": index, "stages": stages, "problems": problems,
        "outputs": selected, "deferred_outputs": deferred,
        "not_proven": ["gameplay species/item/etc identifiers",
                       "undecoded proprietary formats", "visual fidelity of unreviewed models"]
    }
    path = root / "_index" / "secondary" / f"{batch_id}.json"
    cli.store_json(path, report)
    report["report_path"] = path.relative_to(repo).as_posix()
    print(json.dumps(report, ensure_ascii=False, indent=2))
    return 2 if any(item.get("failed", item.get("counts", {}).get("failed", 0))
                    for item in stages.values()) or index["hash_mismatch"] else 0


if __name__ == "__main__":
    sys.exit(main())
