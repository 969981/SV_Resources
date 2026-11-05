#!/usr/bin/env python3
"""SV Trinity virtual asset index and conservative R0/R1 converters (stdlib only)."""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
import os
from pathlib import Path, PurePosixPath
import sqlite3
import struct
import subprocess
import sys
import tempfile
from datetime import datetime, timezone

VERSION = "4.0.0"
BASE = "Unpack/4.0.0/romfs/arc/data.trpfs"
DETECTOR_VERSION = "r0.1"


def utcnow():
    return datetime.now(timezone.utc).isoformat()


def digest(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as stream:
        for data in iter(lambda: stream.read(1024 * 1024), b""):
            h.update(data)
    return h.hexdigest().upper()


def resolve_paths(args):
    repo = (args.repo or Path(__file__).resolve().parents[2]).resolve()
    root = (args.root or repo / BASE).resolve()
    db = (args.db or root / "_index" / "resource_catalog.sqlite").resolve()
    if not (root / "virtual").is_dir() or not (root / "_index").is_dir():
        raise ValueError("Missing source virtual/ or _index/ directory: " + str(root))
    return repo, root, db


def connect(db):
    db.parent.mkdir(parents=True, exist_ok=True)
    conn = sqlite3.connect(db)
    conn.execute("PRAGMA foreign_keys=ON")
    conn.execute("PRAGMA busy_timeout=60000")
    conn.execute("PRAGMA journal_mode=WAL")
    conn.executescript(Path(__file__).with_name("schema.sql").read_text("utf-8"))
    return conn


def safe_path(name: str) -> str:
    if not name or "\\" in name or "\x00" in name:
        raise ValueError("Invalid path")
    p = PurePosixPath(name)
    if p.is_absolute() or any(part in ("", ".", "..") for part in name.split("/")):
        raise ValueError("Unsafe virtual path")
    return str(p)


def source_records(root: Path):
    ix = root / "_index"
    paths = [ix / "export.jsonl"] + sorted((ix / "batches").glob("pack-*.jsonl"))
    for path in paths:
        if not path.is_file():
            continue
        with path.open("r", encoding="utf-8-sig") as f:
            for lineno, line in enumerate(f, 1):
                if line.strip():
                    try:
                        rec = json.loads(line)
                        yield path, lineno, rec
                    except json.JSONDecodeError as exc:
                        raise ValueError(f"{path}:{lineno}: {exc}") from exc


def detect(path: Path, ext: str):
    if not path.is_file():
        return "UNAVAILABLE", "", "UNKNOWN", "MISSING"
    with path.open("rb") as f:
        head = f.read(64)
    prefix = head[:16].hex().upper()
    if head.startswith(b"BNTX"):
        return "BNTX", prefix, "CONFIRMED", "READY"
    if head.startswith(b"AHTB"):
        return "AHTB", prefix, "CONFIRMED", "READY"
    if head.startswith(b"FBS") or ext == ".bfbs":
        return "FLATBUFFER_SCHEMA_CANDIDATE", prefix, "CANDIDATE", "PENDING_SCHEMA"
    if ext in (".trmdl", ".trmsh", ".trmbf", ".trskl", ".tranm", ".tracm", ".trpmcatalog", ".trabt"):
        return "FLATBUFFER_CANDIDATE", prefix, "CANDIDATE", "PENDING_SCHEMA"
    if ext == ".dat":
        return "MESSAGE_DAT_CANDIDATE" if "/message/dat/" in "/" + path.as_posix() else "BINARY_DAT", prefix, "CANDIDATE", "PENDING_DECODER"
    return ("UNKNOWN_BINARY" if ext in (".bin", "") else "BY_EXTENSION:" + ext.lstrip(".")), prefix, "UNKNOWN", "UNSUPPORTED"


def scan(root, conn, limit=0, verify=False):
    upsert = """
        INSERT INTO raw_files(source_version,virtual_path,hash64,size_bytes,sha256_recorded,
          sha256_verified,source_pack,pack_offset,extract_status,available,last_scanned_utc)
        VALUES(?,?,?,?,?,?,?,?,?,?,?)
        ON CONFLICT(source_version,virtual_path) DO UPDATE SET
          hash64=excluded.hash64,size_bytes=excluded.size_bytes,
          sha256_recorded=excluded.sha256_recorded,sha256_verified=excluded.sha256_verified,
          source_pack=excluded.source_pack,pack_offset=excluded.pack_offset,
          extract_status=excluded.extract_status,available=excluded.available,
          last_scanned_utc=excluded.last_scanned_utc
    """
    n = 0
    bad = 0
    duplicates = 0
    seen = set()
    for ix_path, line, row in source_records(root):
        h = str(row.get("Hash") or "").upper()
        name = row.get("Name") or (("_unknown/" + h + ".bin") if len(h) == 16 else None)
        try:
            name = safe_path(name)
        except (ValueError, TypeError):
            bad += 1
            continue
        if (name in seen):
            duplicates += 1
        seen.add(name)
        f = root / "virtual" / name
        exists = f.is_file()
        declared_bytes = row.get("Size")
        declared_sha = str(row.get("Sha256") or "").upper() or None
        status = str(row.get("Status") or "UNKNOWN").upper()
        verified = 0
        if exists and verify:
            ok = (declared_bytes is None or f.stat().st_size == int(declared_bytes))
            ok &= (not declared_sha or digest(f) == declared_sha)
            status = status if ok else "HASH_MISMATCH"
            verified = 1 if ok and declared_sha else 0
        ext = f.suffix.lower()
        fmt, magic, confidence, fmt_status = detect(f, ext)
        if not exists and status == "OK":
            status = "NOT_LOCAL"
        conn.execute(upsert, (VERSION, name, h or None, declared_bytes,
                    declared_sha, verified, row.get("PackName"), row.get("PackOffset"),
                    status, int(exists), utcnow()))
        rid = conn.execute("SELECT id FROM raw_files WHERE source_version=? AND virtual_path=?",
                           (VERSION, name)).fetchone()[0]
        conn.execute("""
            INSERT INTO file_formats(raw_file_id,extension,magic_hex,format_name,confidence,
                 parser_name,detector_version,parse_status)
            VALUES(?,?,?,?,?,?,?,?)
            ON CONFLICT(raw_file_id) DO UPDATE SET extension=excluded.extension,
              magic_hex=excluded.magic_hex,format_name=excluded.format_name,
              confidence=excluded.confidence,parser_name=excluded.parser_name,
              detector_version=excluded.detector_version,parse_status=excluded.parse_status
        """, (rid, ext, magic, fmt, confidence,
              "r1-ahtb" if fmt == "AHTB" else "r1-bntx" if fmt == "BNTX" else None,
              DETECTOR_VERSION, fmt_status))
        n += 1
        if n % 1000 == 0:
            conn.commit()
        if limit and n >= limit:
            break
    conn.commit()
    return {"records_scanned": n, "malformed_paths": bad,
            "duplicate_path_records": duplicates,
            "formats": dict(conn.execute("SELECT format_name,COUNT(*) FROM file_formats GROUP BY 1").fetchall())}


def parse_ahtb(data: bytes):
    if len(data) < 8 or data[:4] != b"AHTB":
        raise ValueError("AHTB magic missing")
    count = struct.unpack_from("<I", data, 4)[0]
    if count > 10_000_000 or count > len(data) // 11:
        raise ValueError("Unreasonable AHTB record count")
    out = []
    pos = 8
    for ordinal in range(count):
        if pos + 10 > len(data):
            raise ValueError("Truncated AHTB entry")
        hash64, length = struct.unpack_from("<QH", data, pos)
        pos += 10
        if length < 1 or pos + length > len(data):
            raise ValueError("Invalid AHTB label length")
        name = data[pos:pos + length]
        pos += length
        if name[-1] != 0:
            raise ValueError("AHTB label is not NUL-terminated")
        label = name[:-1].decode("utf-8", errors="strict")
        out.append({"ordinal": ordinal, "hash64": f"{hash64:016X}", "label": label,
                    "text": None, "text_status": "NOT_DECODED"})
    if pos != len(data):
        raise ValueError(f"AHTB trailing bytes: {len(data) - pos}")
    return out


def parse_bntx(data: bytes):
    if data[:4] != b"BNTX" or len(data) < 0x50:
        raise ValueError("Not a complete BNTX header")
    endian = struct.unpack_from("<H", data, 0xC)[0]
    if endian != 0xFEFF:
        raise ValueError("Unsupported BNTX endianness")
    declared_size = struct.unpack_from("<I", data, 0x1C)[0]
    if declared_size != len(data):
        raise ValueError(f"BNTX size mismatch: header={declared_size} actual={len(data)}")
    textures = []
    pos = 0
    while True:
        idx = data.find(b"BRTI", pos)
        if idx < 0:
            break
        if idx + 0x60 <= len(data):
            fmt = struct.unpack_from("<I", data, idx + 0x1c)[0]
            width, height = struct.unpack_from("<II", data, idx + 0x24)
            if 0 < width <= 32768 and 0 < height <= 32768:
                textures.append({"brti_offset": idx, "format_code": f"0x{fmt:08X}",
                                 "width": width, "height": height})
        pos = idx + 4
    if not textures:
        raise ValueError("No plausible BRTI texture records")
    return {"container": "BNTX", "size_bytes": len(data),
            "textures": textures, "png_status": "NOT_CONVERTED"}


def write_atomic(path: Path, content: bytes):
    path.parent.mkdir(parents=True, exist_ok=True)
    with tempfile.NamedTemporaryFile(dir=path.parent, prefix=".sv-r1-", delete=False) as f:
        temp = Path(f.name)
        f.write(content)
    os.replace(temp, path)


def store_json(path, data):
    write_atomic(path, (json.dumps(data, indent=2, ensure_ascii=False) + "\n").encode("utf-8"))


def relative_safe(root: Path, target: Path):
    return target.resolve().relative_to(root.resolve()).as_posix()


def job(conn, rid, fingerprint, stage, state, err=None):
    conn.execute("""INSERT INTO conversion_jobs(raw_file_id,stage,fingerprint,status,
      updated_utc,error_message) VALUES(?,?,?,?,?,?)
      ON CONFLICT(fingerprint) DO UPDATE SET status=excluded.status,
       updated_utc=excluded.updated_utc,error_message=excluded.error_message""",
       (rid, stage, fingerprint, state, utcnow(), err))


def add_asset(conn, rid, kind, output, root, data, state):
    sha = digest(output) if output.is_file() else None
    conn.execute("""INSERT INTO resource_assets(raw_file_id,asset_kind,output_path,
      sha256,status,updated_utc) VALUES(?,?,?,?,?,?)
      ON CONFLICT(raw_file_id,asset_kind,output_path) DO UPDATE SET
        sha256=excluded.sha256,status=excluded.status,updated_utc=excluded.updated_utc""",
        (rid, kind, relative_safe(root, output), sha, state, utcnow()))


def valid_png(path):
    if not path.is_file():
        return False
    with path.open("rb") as f:
        h = f.read(24)
    return len(h) == 24 and h[:8] == b"\x89PNG\r\n\x1a\n" and h[12:16] == b"IHDR" \
        and int.from_bytes(h[16:20], "big") > 0 and int.from_bytes(h[20:24], "big") > 0


def convert(root, conn, kind, limit, converter=None, force=False):
    query = """SELECT r.id,r.virtual_path,r.sha256_recorded,f.format_name
      FROM raw_files r JOIN file_formats f ON r.id=f.raw_file_id
      WHERE r.available=1 AND r.extract_status='OK' AND f.format_name IN """
    formats = ("'AHTB'",) if kind == "labels" else ("'BNTX'",)
    query += "(" + ",".join(formats) + ") ORDER BY r.virtual_path"
    ok = failed = skipped = blocked = 0
    handled = 0
    for rid, virtual, sha_recorded, fmt in conn.execute(query).fetchall():
        if kind == "bntx" and not (
            "/icon/" in virtual or virtual.startswith("appli/tex/")
            or "/pokedex_capture_thum/" in virtual):
            continue
        src = root / "virtual" / virtual
        digest_input = sha_recorded or digest(src)
        fingerprint = hashlib.sha256(
            f"{VERSION}|{virtual}|{digest_input}|{kind}|r1.1|{converter or ''}".encode()
        ).hexdigest()
        pre = conn.execute("SELECT status FROM conversion_jobs WHERE fingerprint=?",
                           (fingerprint,)).fetchone()
        if not force and pre and pre[0] == "OK":
            skipped += 1
            continue
        handled += 1
        if limit and handled > limit:
            handled -= 1
            break
        try:
            data = src.read_bytes()
            if sha_recorded and hashlib.sha256(data).hexdigest().upper() != sha_recorded.upper():
                raise ValueError("Source SHA-256 differs from native extraction manifest")
            if kind == "labels":
                records = parse_ahtb(data)
                rel = PurePosixPath(virtual)
                if len(rel.parts) < 5 or rel.parts[0:2] != ("message", "dat"):
                    raise ValueError("AHTB found outside expected message/dat language structure")
                # Only labels are proven. Never turn DAT payload into fabricated text.
                out = root / "parsed" / rel.parent / (rel.stem + ".labels.json")
                store_json(out, {"source": virtual, "language_raw": rel.parts[2],
                                "status": "LABELS_ONLY", "entries": records,
                                "paired_dat_candidate": str(rel.with_suffix(".dat"))})
                add_asset(conn, rid, "AHTB_LABELS_JSON", out, root, data, "CONFIRMED")
                csvout = root / "converted" / rel.parent / (rel.stem + ".labels.csv")
                import io
                s = io.StringIO()
                w = csv.writer(s, lineterminator="\n")
                w.writerow(["ordinal", "hash64", "label", "text_status"])
                for record in records:
                    w.writerow([record["ordinal"], record["hash64"], record["label"], "NOT_DECODED"])
                write_atomic(csvout, s.getvalue().encode("utf-8-sig"))
                add_asset(conn, rid, "AHTB_LABELS_CSV", csvout, root, data, "CONFIRMED")
                conn.executemany("""INSERT INTO parsed_records(raw_file_id,record_key,ordinal,
                        format_name,content_json) VALUES(?,?,?,?,?)
                   ON CONFLICT(raw_file_id,record_key) DO UPDATE SET
                     ordinal=excluded.ordinal,format_name=excluded.format_name,
                     content_json=excluded.content_json""",
                     ((rid, record["hash64"] + ":" + str(record["ordinal"]),
                       record["ordinal"], "AHTB_LABEL", json.dumps(record, ensure_ascii=False))
                      for record in records))
                job(conn, rid, fingerprint, kind, "OK")
                ok += 1
            else:
                metadata = parse_bntx(data)
                rel = PurePosixPath(virtual)
                out = root / "parsed" / rel.parent / (rel.name + ".json")
                store_json(out, {"source": virtual, **metadata})
                add_asset(conn, rid, "BNTX_METADATA", out, root, data, "CONFIRMED")
                if not converter:
                    job(conn, rid, fingerprint, kind, "BLOCKED",
                        "PNG decoder not configured; BNTX metadata was parsed.")
                    blocked += 1
                else:
                    png = root / "converted" / rel.parent / (rel.stem + ".png")
                    png.parent.mkdir(parents=True, exist_ok=True)
                    # The caller supplies a verified converter command, e.g. a local executable.
                    # Arguments are passed as a sequence: never invoke a shell.
                    import shlex
                    argv = [part.format(input=str(src), output=str(png))
                            for part in shlex.split(converter, posix=(os.name != "nt"))]
                    if not any("{input}" in token for token in shlex.split(converter, posix=(os.name != "nt"))) or \
                       not any("{output}" in token for token in shlex.split(converter, posix=(os.name != "nt"))):
                        raise ValueError("Converter template requires {input} and {output}")
                    result = subprocess.run(argv, capture_output=True, text=True, timeout=180)
                    if result.returncode or not valid_png(png):
                        raise RuntimeError("Converter exit or PNG validation failed: " +
                                           result.stderr[-500:])
                    add_asset(conn, rid, "PNG", png, root, data, "CONFIRMED")
                    job(conn, rid, fingerprint, kind, "OK")
                    ok += 1
            conn.commit()
        except Exception as exc:
            conn.rollback()
            job(conn, rid, fingerprint, kind, "FAILED", str(exc)[:2000])
            conn.commit()
            failed += 1
    return {"kind": kind, "processed": handled, "ok": ok, "blocked": blocked,
            "skipped": skipped, "failed": failed}


def export_tables(root, conn, directory, json_export=False):
    directory.mkdir(parents=True, exist_ok=True)
    tables = ["raw_files","file_formats","parsed_records","resource_assets",
              "semantic_entities","resource_links","localized_names",
              "conversion_jobs","evidence","resource_catalog"]
    outcomes = {}
    for table in tables:
        cur = conn.execute(f"SELECT * FROM {table}")
        names = [c[0] for c in cur.description]
        count = 0
        with (directory / (table + ".csv")).open("w", newline="", encoding="utf-8-sig") as f:
            w = csv.writer(f)
            w.writerow(names)
            for row in cur:
                w.writerow(row)
                count += 1
        outcomes[table] = count
        if json_export:
            with (directory / (table + ".json")).open("w", encoding="utf-8") as f:
                f.write("[\n")
                cur = conn.execute(f"SELECT * FROM {table}")
                for i, row in enumerate(cur):
                    if i:
                        f.write(",\n")
                    f.write(json.dumps(dict(zip(names, row)), ensure_ascii=False))
                f.write("\n]\n")
    store_json(directory / "summary.json", {"version": VERSION, "counts": outcomes,
                                             "generated_utc": utcnow()})
    return outcomes


def main(argv=None):
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--repo", type=Path)
    p.add_argument("--root", type=Path, help="Trinity data.trpfs directory")
    p.add_argument("--db", type=Path)
    sub = p.add_subparsers(dest="action", required=True)
    s = sub.add_parser("scan", help="R0: index native extraction JSONL")
    s.add_argument("--limit", type=int, default=0)
    s.add_argument("--verify-sha", action="store_true")
    c = sub.add_parser("convert-r1", help="R1: labels or BNTX")
    c.add_argument("--kind", choices=("labels", "bntx"), required=True)
    c.add_argument("--limit", type=int, default=0)
    c.add_argument("--converter", help="External PNG command with {input} and {output} placeholders")
    c.add_argument("--force", action="store_true")
    e = sub.add_parser("export", help="CSV index, optionally JSON")
    e.add_argument("--output", type=Path)
    e.add_argument("--json", action="store_true")
    args = p.parse_args(argv)
    _, root, db = resolve_paths(args)
    with connect(db) as conn:
        if args.action == "scan":
            result = scan(root, conn, args.limit, args.verify_sha)
        elif args.action == "convert-r1":
            result = convert(root, conn, args.kind, args.limit, args.converter, args.force)
        else:
            result = export_tables(root, conn, args.output or root / "_index" / "exports", args.json)
    print(json.dumps(result, indent=2, ensure_ascii=False))
    return 0 if not isinstance(result, dict) or result.get("failed", 0) == 0 else 2


if __name__ == "__main__":
    sys.exit(main())
