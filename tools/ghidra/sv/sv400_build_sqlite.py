#!/usr/bin/env python3
"""Stream a Ghidra SV400Export NDJSON(.gz) into a searchable SQLite database.

Never claims runtime/UI behavior. All tables are direct Ghidra analysis output.
A status record is inserted only when Ghidra wrote a successful final summary.
"""
from __future__ import annotations
import argparse
import gzip
import hashlib
import json
import sqlite3
from collections import Counter
from pathlib import Path

EXPECTED_ELF_SHA256 = {
    "scarlet_main.elf": "53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f",
    "violet_main.elf": "84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30",
}
SCHEMA = """
PRAGMA journal_mode=WAL;
PRAGMA synchronous=NORMAL;
PRAGMA temp_store=MEMORY;
CREATE TABLE IF NOT EXISTS metadata(key TEXT PRIMARY KEY, value TEXT NOT NULL);
CREATE TABLE IF NOT EXISTS memory_blocks(
    id INTEGER PRIMARY KEY, name TEXT, start_addr TEXT, end_addr TEXT,
    byte_length INTEGER, executable INTEGER, readable INTEGER, writable INTEGER, initialized INTEGER);
CREATE TABLE IF NOT EXISTS functions(
    entry TEXT PRIMARY KEY, name TEXT, namespace TEXT, min_addr TEXT, max_addr TEXT,
    body_bytes INTEGER, signature TEXT, is_thunk INTEGER, is_external INTEGER, source TEXT);
CREATE TABLE IF NOT EXISTS instructions(
    addr TEXT PRIMARY KEY, byte_length INTEGER, bytes_hex TEXT, mnemonic TEXT,
    display_text TEXT, flow_type TEXT, fallthrough TEXT);
CREATE TABLE IF NOT EXISTS references_full(
    id INTEGER PRIMARY KEY, from_addr TEXT, to_addr TEXT, ref_type TEXT,
    op_index INTEGER, is_call INTEGER, is_jump INTEGER, is_data INTEGER,
    is_read INTEGER, is_write INTEGER, is_primary INTEGER);
CREATE TABLE IF NOT EXISTS symbols(
    id INTEGER PRIMARY KEY, addr TEXT, name TEXT, namespace TEXT,
    symbol_type TEXT, source TEXT, is_primary INTEGER);
CREATE TABLE IF NOT EXISTS defined_data(
    addr TEXT PRIMARY KEY, byte_length INTEGER, datatype TEXT, preview TEXT, is_string INTEGER);
CREATE TABLE IF NOT EXISTS decompilation(
    entry TEXT PRIMARY KEY, status TEXT, c TEXT, error TEXT);
CREATE TABLE IF NOT EXISTS report_counts(kind TEXT PRIMARY KEY, count INTEGER NOT NULL);
CREATE INDEX IF NOT EXISTS idx_functions_name ON functions(name);
CREATE INDEX IF NOT EXISTS idx_symbols_name ON symbols(name);
CREATE INDEX IF NOT EXISTS idx_symbols_addr ON symbols(addr);
CREATE INDEX IF NOT EXISTS idx_refs_from ON references_full(from_addr);
CREATE INDEX IF NOT EXISTS idx_refs_to ON references_full(to_addr);
CREATE INDEX IF NOT EXISTS idx_refs_calls ON references_full(is_call,from_addr);
CREATE INDEX IF NOT EXISTS idx_instruction_mnemonic ON instructions(mnemonic);
CREATE INDEX IF NOT EXISTS idx_data_type ON defined_data(datatype);
CREATE INDEX IF NOT EXISTS idx_data_value ON defined_data(is_string);
CREATE INDEX IF NOT EXISTS idx_decompilation_status ON decompilation(status);
CREATE VIEW IF NOT EXISTS call_edges AS
    SELECT from_addr, to_addr, ref_type
    FROM references_full WHERE is_call = 1;
CREATE VIEW IF NOT EXISTS string_items AS
    SELECT addr, preview, byte_length
    FROM defined_data WHERE is_string = 1;
"""


def checked_sha(path: Path, expected: str) -> str:
    h = hashlib.sha256()
    with path.open("rb") as fp:
        for chunk in iter(lambda: fp.read(4 << 20), b""):
            h.update(chunk)
    actual = h.hexdigest()
    if actual != expected:
        raise ValueError(f"ELF SHA256 mismatch: {actual} != {expected}")
    return actual


def input_records(path: Path):
    opener = gzip.open if path.suffix == ".gz" else open
    with opener(path, "rt", encoding="utf-8") as fp:
        for number, line in enumerate(fp, 1):
            if line.strip():
                try:
                    yield number, json.loads(line)
                except Exception as error:
                    raise ValueError(f"Invalid JSON line {number}: {error}") from error


def bit(value):
    return 1 if value else 0


def build(elf: Path, source: Path, dest: Path, allow_partial=False, with_fts=True):
    sha = checked_sha(elf, EXPECTED_ELF_SHA256[elf.name])
    dest.parent.mkdir(parents=True, exist_ok=True)
    if dest.exists():
        dest.unlink()
    db = sqlite3.connect(str(dest))
    meta = None
    final = None
    counts = Counter()
    try:
        db.executescript(SCHEMA)
        db.execute("BEGIN")
        for lineno, row in input_records(source):
            kind = row.get("type")
            counts[kind] += 1
            if kind == "meta":
                if meta is not None:
                    raise ValueError(f"Second meta record at line {lineno}")
                meta = row
                for key, value in row.items():
                    if key != "type":
                        db.execute("INSERT INTO metadata VALUES(?,?)",
                                   (key, str(value)))
            elif kind == "memory":
                db.execute("INSERT INTO memory_blocks(name,start_addr,end_addr,byte_length,executable,readable,writable,initialized) VALUES(?,?,?,?,?,?,?,?)",
                           (row.get("name"), row.get("start"), row.get("end"),
                            row.get("length"), bit(row.get("execute")),
                            bit(row.get("read")), bit(row.get("write")),
                            bit(row.get("initialized"))))
            elif kind == "function":
                db.execute("INSERT INTO functions VALUES(?,?,?,?,?,?,?,?,?,?)",
                           (row["entry"], row.get("name"), row.get("namespace"),
                            row.get("body_min"), row.get("body_max"), row.get("body_bytes"),
                            row.get("signature"), bit(row.get("thunk")),
                            bit(row.get("external")), row.get("source")))
            elif kind == "instruction":
                db.execute("INSERT INTO instructions VALUES(?,?,?,?,?,?,?)",
                           (row["address"], row.get("length"), row.get("bytes_hex"),
                            row.get("mnemonic"), row.get("display"),
                            row.get("flow_type"), row.get("fallthrough")))
            elif kind == "reference":
                db.execute("INSERT INTO references_full(from_addr,to_addr,ref_type,op_index,is_call,is_jump,is_data,is_read,is_write,is_primary) VALUES(?,?,?,?,?,?,?,?,?,?)",
                           (row.get("from"), row.get("to"), row.get("kind"),
                            row.get("op_index"), bit(row.get("is_call")),
                            bit(row.get("is_jump")), bit(row.get("is_data")),
                            bit(row.get("is_read")), bit(row.get("is_write")),
                            bit(row.get("primary"))))
            elif kind == "symbol":
                db.execute("INSERT INTO symbols(addr,name,namespace,symbol_type,source,is_primary) VALUES(?,?,?,?,?,?)",
                           (row.get("address"), row.get("name"), row.get("namespace"),
                            row.get("symbol_type"), row.get("source"), bit(row.get("primary"))))
            elif kind == "data":
                db.execute("INSERT INTO defined_data VALUES(?,?,?,?,?)",
                           (row["address"], row.get("length"), row.get("datatype"),
                            row.get("value"), bit(row.get("is_string"))))
            elif kind == "decompile":
                db.execute("INSERT INTO decompilation VALUES(?,?,?,?)",
                           (row["entry"], row.get("status"),
                            row.get("c"), row.get("error")))
            elif kind == "summary":
                if final is not None:
                    raise ValueError("Repeated final summary record")
                final = row
            else:
                raise ValueError(f"Unknown event type at line {lineno}: {kind}")
            if lineno % 100000 == 0:
                print("Imported", lineno, "records")
        if not meta or not final or not final.get("complete"):
            if not allow_partial:
                raise ValueError("Ghidra exporter did not produce a completed summary")
        if not meta:
            raise ValueError("No original ELF program metadata")
        if counts["function"] < 1 or counts["instruction"] < 1:
            raise ValueError("Ghidra output has no functions or instructions")
        if final:
            for key, kind in [
                ("functions", "function"), ("instructions", "instruction"),
                ("references", "reference"), ("symbols", "symbol"),
                ("defined_data", "data"), ("decompiled_ok", "unused"),
            ]:
                if kind == "unused":
                    continue
                if int(final.get(key, -1)) != counts[kind]:
                    raise ValueError(f"Exporter summary mismatch {key}: {final.get(key)} vs {counts[kind]}")
        db.execute("INSERT INTO metadata VALUES(?,?)", ("original_elf_sha256", sha))
        db.execute("INSERT INTO metadata VALUES(?,?)", ("source_ndjson_sha256", checked_file_sha(source)))
        db.execute("INSERT INTO metadata VALUES(?,?)", ("analysis_completed", str(bool(final and final.get("complete")))))
        for k, v in counts.items():
            db.execute("INSERT INTO report_counts VALUES(?,?)", (k, v))
        if with_fts:
            try:
                db.execute("CREATE VIRTUAL TABLE symbol_fts USING fts5(name,namespace,content='symbols',content_rowid='id')")
                db.execute("INSERT INTO symbol_fts(symbol_fts) VALUES('rebuild')")
            except sqlite3.OperationalError:
                print("FTS5 not supported; normal indexed searches remain available")
        db.commit()
        # Keep SQLite portable in Actions artifacts; WAL should be fully checkpointed.
        db.execute("PRAGMA wal_checkpoint(TRUNCATE)")
        db.execute("PRAGMA journal_mode=DELETE")
        db.execute("PRAGMA integrity_check")
        db.execute("PRAGMA optimize")
        db.commit()
    except Exception:
        db.rollback()
        db.close()
        if dest.exists():
            dest.unlink()
        raise
    db.close()
    return {
        "status": "COMPLETE" if final and final.get("complete") else "PARTIAL",
        "elf_sha256": sha, "source": str(source),
        "database": str(dest), "counts": dict(counts),
        "decompile_requested": meta.get("decompile_requested") in (True, "True", "true", 1, "1"),
        "decompiled_ok": int(final.get("decompiled_ok", 0)) if final else 0,
        "decompiled_failed": int(final.get("decompiled_failed", 0)) if final else 0,
        "evidence": "STATIC_GHIDRA_ONLY_NO_RUNTIME_UI_PROOF",
    }


def checked_file_sha(path: Path):
    h = hashlib.sha256()
    with path.open("rb") as fp:
        for chunk in iter(lambda: fp.read(4 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--elf", type=Path, required=True)
    p.add_argument("--input", type=Path, required=True)
    p.add_argument("--out", type=Path, required=True)
    p.add_argument("--report", type=Path, required=True)
    p.add_argument("--allow-partial", action="store_true")
    p.add_argument("--no-fts", action="store_true")
    args = p.parse_args()
    report = build(args.elf, args.input, args.out, args.allow_partial, not args.no_fts)
    args.report.parent.mkdir(parents=True, exist_ok=True)
    args.report.write_text(json.dumps(report, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
    print(json.dumps(report, ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()
