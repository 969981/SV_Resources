#!/usr/bin/env python3
"""Exhaustive, evidence-labelled *inspection* of each extracted Trinity input.

One JSONL record per selected native file is written under parsed/<same folder>/
_inspection/. These records are real byte-level inspections, not claims that
an unknown proprietary format has been semantically decoded. The task manifest
is compact by design: 400k individual Git metadata files are not required.
"""
from __future__ import annotations

from collections import Counter
import csv
import hashlib
import io
import json
from pathlib import Path, PurePosixPath
import sqlite3
import struct
import xml.etree.ElementTree as ET
import zipfile

try:
    from . import cli
except ImportError:
    import cli

SCHEMA_VERSION = 1
TEXT_MAX_BYTES = 8 * 1024 * 1024
ZIP_MAX_MEMBERS = 100000


def _probe(path: Path):
    with path.open("rb") as handle:
        data = handle.read(64)
    return {
        "header_hex": data[:32].hex().upper(),
        "header_bytes": len(data),
        "u32le_0_4_8_12": [
            struct.unpack_from("<I", data, i)[0] for i in range(0, min(len(data) - 3, 16), 4)
        ],
    }


def _parse_known_common(path: Path, rel: str, root: Path):
    """Parse only formats with standard, independently testable signatures.

    Return a verified *.structure.json file or None. Never write speculative
    field names for proprietary Trinity formats.
    """
    size = path.stat().st_size
    with path.open("rb") as f:
        head = f.read(140)
    ext = PurePosixPath(rel).suffix.lower()
    info = None
    if head.startswith(b"\x89PNG\r\n\x1a\n") and len(head) >= 24 and head[12:16] == b"IHDR":
        width, height = struct.unpack_from(">II", head, 16)
        if 0 < width <= 65535 and 0 < height <= 65535:
            info = {"format": "PNG", "width": width, "height": height}
    elif head.startswith(b"DDS ") and len(head) >= 128 and struct.unpack_from("<I", head, 4)[0] == 124:
        h, w, pitch, depth, mip_count = struct.unpack_from("<IIIII", head, 12)
        if 0 < h <= 65535 and 0 < w <= 65535:
            info = {"format": "DDS", "width": w, "height": h, "mip_count_raw": mip_count,
                    "depth_raw": depth, "pitch_or_linear_size_raw": pitch}
    elif head.startswith(b"PK\x03\x04") and size <= 512 * 1024 * 1024:
        try:
            with zipfile.ZipFile(path) as zf:
                members = zf.infolist()
                if len(members) <= ZIP_MAX_MEMBERS and zf.testzip() is None:
                    info = {"format": "ZIP", "members": len(members),
                            "uncompressed_bytes": sum(x.file_size for x in members)}
        except (zipfile.BadZipFile, OSError, RuntimeError):
            pass
    elif size <= TEXT_MAX_BYTES and ext in {".json", ".xml", ".csv", ".tsv", ".txt"}:
        try:
            data = path.read_bytes().decode("utf-8-sig", errors="strict")
            if ext == ".json":
                value = json.loads(data)
                info = {"format": "JSON", "root_type": type(value).__name__}
                if isinstance(value, dict):
                    info["top_level_keys"] = list(value)[:128]
                    info["top_level_key_count"] = len(value)
                elif isinstance(value, list):
                    info["top_level_length"] = len(value)
            elif ext == ".xml":
                node = ET.fromstring(data)
                info = {"format": "XML", "root_tag": node.tag,
                        "root_attribute_keys": list(node.attrib)[:128]}
            elif ext in {".csv", ".tsv"}:
                reader = csv.reader(io.StringIO(data), delimiter="\t" if ext == ".tsv" else ",")
                header = next(reader, [])
                rows = sum(1 for _ in reader)
                info = {"format": "TSV" if ext == ".tsv" else "CSV",
                        "row_count_excluding_header": rows, "header": header[:128]}
            else:
                info = {"format": "UTF8_TEXT", "characters": len(data),
                        "lines": data.count("\n") + int(bool(data and not data.endswith("\n")))}
        except (UnicodeError, ValueError, csv.Error, ET.ParseError, TypeError, OverflowError):
            pass
    if info is None:
        return None
    dest = root / "parsed" / (rel + ".structure.json")
    cli.store_json(dest, {"source": rel, "status": "STRUCTURE_PARSED",
                          "parser": "standard-signature-v1", "structure": info})
    return dest.relative_to(root).as_posix()


def inspect_all(root: Path, conn: sqlite3.Connection, files, prefix: str, batch_id: str):
    """Inspect all selected paths; fail closed on missing/corrupt index entries."""
    prefix = cli.safe_path(prefix)
    if not batch_id or any(ch not in "0123456789abcdef" for ch in batch_id):
        raise ValueError("Unsafe inspection batch id")
    root = root.resolve()
    source_root = (root / "virtual").resolve()
    inventory_path = root / "parsed" / prefix / "_inspection" / (batch_id + ".jsonl")
    inventory_path.parent.mkdir(parents=True, exist_ok=True)
    records = []
    counters = Counter()
    for rel, file in files:
        rel = cli.safe_path(rel)
        if file.is_symlink() or not file.is_file() or not file.resolve().is_relative_to(source_root):
            raise ValueError("Invalid or missing native input: " + rel)
        row = conn.execute("""
            SELECT r.id,r.size_bytes,r.sha256_recorded,r.sha256_verified,r.extract_status,
                   f.format_name,f.magic_hex,f.confidence,f.parse_status
            FROM raw_files r JOIN file_formats f ON f.raw_file_id=r.id
            WHERE r.source_version=? AND r.virtual_path=?
        """, (cli.VERSION, rel)).fetchone()
        if row is None:
            raise ValueError("Native input was not indexed: " + rel)
        rid, size, source_sha, verified, extraction, fmt, magic, confidence, detector_status = row
        # The SQLite row was built by byte-level scanning just before this pass.
        actual_size = file.stat().st_size
        if size != actual_size:
            raise ValueError("Native source size changed during inspection: " + rel)
        existing = conn.execute("""
            SELECT asset_kind,output_path FROM resource_assets
            WHERE raw_file_id=? AND status='CONFIRMED' AND output_path LIKE 'parsed/%'
            ORDER BY output_path
        """, (rid,)).fetchall()
        parsed_assets = [
            {"kind": kind, "path": output}
            for kind, output in existing
            if (root / cli.safe_path(output)).is_file()
        ]
        standard = _parse_known_common(file, rel, root) if extraction == "OK" else None
        if standard is not None:
            parsed_assets.append({"kind": "STANDARD_STRUCTURE", "path": standard})
        # A successful image/glTF conversion does NOT prove all model/animation
        # semantics, and an extension guess does NOT mean a format is decoded.
        if extraction == "HASH_MISMATCH":
            status = "SOURCE_HASH_MISMATCH"
        elif parsed_assets:
            status = "STRUCTURE_PARSED"
        else:
            status = "INSPECTED_UNPARSED"
        counters[status] += 1
        record = {
            "source": rel, "source_sha256": source_sha, "bytes": size,
            "sha256_evidence": "INDEPENDENT_MANIFEST" if verified else "LOCAL_DIGEST_ONLY",
            "format_candidate": fmt, "confidence": confidence,
            "detector_status": detector_status, "inspection": _probe(file),
            "parse_status": status, "parsed_assets": parsed_assets,
        }
        records.append(record)
    if len(records) != len(files) or len({r["source"] for r in records}) != len(files):
        raise ValueError("Incomplete or duplicate exhaustive inspection")
    payload = "".join(json.dumps(r, ensure_ascii=False, separators=(",", ":")) + "\n"
                      for r in records)
    cli.write_atomic(inventory_path, payload.encode("utf-8"))
    return {
        "schema_version": SCHEMA_VERSION,
        "manifest": inventory_path.relative_to(root).as_posix(),
        "source_files": len(files), "inspection_records": len(records),
        "by_status": dict(sorted(counters.items())),
        "manifest_sha256": cli.digest(inventory_path),
    }
