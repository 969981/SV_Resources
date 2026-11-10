#!/usr/bin/env python3
"""Extract every successfully decompiled Ghidra C function from SV400 NDJSON.

Input is the *actual* Ghidra 12.2 SV400Export.java output, not an LLVM
disassembly or a synthetic code reconstruction. Failures are preserved in CSV.
Uses a streaming parser; writes directly to a compressed ZIP (no 30k loose files).
"""
from __future__ import annotations

import argparse
import csv
import gzip
import hashlib
import io
import json
import re
import sys
import zipfile
from collections import Counter
from pathlib import Path


def records(path: Path):
    opener = gzip.open if path.suffix == ".gz" else open
    with opener(path, "rt", encoding="utf-8") as reader:
        for line_no, line in enumerate(reader, 1):
            if line.strip():
                try:
                    item = json.loads(line)
                except (ValueError, UnicodeError) as exc:
                    raise ValueError(f"Invalid Ghidra NDJSON at line {line_no}: {exc}") from exc
                yield item


def safe_addr(addr: str) -> str:
    if not addr or not re.fullmatch(r"[A-Za-z0-9_:.-]+", addr):
        raise ValueError(f"Unsafe/empty Ghidra address: {addr!r}")
    return addr.replace(":", "_").replace(".", "_")


def sha256(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as source:
        for block in iter(lambda: source.read(4 << 20), b""):
            h.update(block)
    return h.hexdigest()


def run(source: Path, out_zip: Path, out_csv: Path, out_report: Path, expected_elf_sha: str):
    out_zip.parent.mkdir(parents=True, exist_ok=True)
    out_csv.parent.mkdir(parents=True, exist_ok=True)
    out_report.parent.mkdir(parents=True, exist_ok=True)
    counts = Counter()
    names = {}
    results = []
    seen_entry = set()
    metadata = None
    final = None
    entries_with_c = 0
    bytes_of_c = 0

    with zipfile.ZipFile(out_zip, "w", compression=zipfile.ZIP_DEFLATED,
                         compresslevel=4, allowZip64=True) as zf:
        for row in records(source):
            kind = row.get("type")
            if kind == "meta":
                if metadata is not None:
                    raise ValueError("Multiple Ghidra metadata records")
                metadata = row
            elif kind == "function":
                entry = row["entry"]
                if entry in names:
                    raise ValueError(f"Duplicate Ghidra function {entry}")
                names[entry] = row.get("name") or "anonymous"
                counts["functions"] += 1
            elif kind == "decompile":
                entry = row["entry"]
                if entry in seen_entry:
                    raise ValueError(f"Duplicate Ghidra decompile entry {entry}")
                seen_entry.add(entry)
                status = row.get("status", "MISSING_STATUS")
                c = row.get("c")
                err = row.get("error") or ""
                size = 0
                member = ""
                if status == "OK" and isinstance(c, str) and c.strip():
                    member = "decompiled/" + safe_addr(entry) + ".c"
                    preface = (
                        "/* Recovered by Ghidra 12.2, not original Nintendo source.\n"
                        f" * SV 4.0.0 original ELF SHA256: {expected_elf_sha}\n"
                        f" * Ghidra function entry: {entry}; name: {names.get(entry, 'unknown')}\n"
                        " */\n\n"
                    )
                    body = (preface + c + "\n").encode("utf-8")
                    zf.writestr(member, body)
                    size = len(body)
                    bytes_of_c += size
                    entries_with_c += 1
                elif status == "OK":
                    status, err = "EMPTY_C", "Ghidra reported success but produced empty C"
                counts[status] += 1
                results.append((entry, names.get(entry, ""), status, size, member, err))
            elif kind == "summary":
                if final is not None:
                    raise ValueError("Duplicate summary record")
                final = row
        if not metadata or not final or not final.get("complete"):
            raise ValueError("Ghidra NDJSON has no complete summary")
        if not bool(metadata.get("decompile_requested")):
            raise ValueError("Ghidra run did not request ALL C decompilation")
        if int(final.get("functions", -1)) != counts["functions"]:
            raise ValueError("Ghidra function count mismatch")
        if len(results) != counts["functions"]:
            raise ValueError(f"Not all {counts['functions']} functions have a decompile status; got {len(results)}")
        if int(final.get("decompiled_ok", -1)) != counts["OK"]:
            raise ValueError(f"Success count mismatch: {final.get('decompiled_ok')} vs {counts['OK']}")
        if int(final.get("decompiled_failed", -1)) != len(results)-counts["OK"]:
            raise ValueError("Decompiler failure count mismatch")
        # No selective omission: every attempted function appears in the CSV.
        output = io.StringIO(newline="")
        writer = csv.writer(output)
        writer.writerow(["entry", "research_name", "status", "c_bytes", "zip_member", "error"])
        writer.writerows(results)
        zf.writestr("decompiled_index.csv", output.getvalue().encode("utf-8"))
        report = {
            "status": "COMPLETE_GHIDRA_EXPORT_WITH_PER_FUNCTION_STATUSES",
            "ghidra_program": metadata.get("program"),
            "image_base": metadata.get("image_base"),
            "original_elf_sha256_expected": expected_elf_sha,
            "ndjson_sha256": sha256(source),
            "functions": counts["functions"],
            "decompiler_attempted": len(results),
            "c_success": counts["OK"],
            "c_fail_or_empty": len(results)-counts["OK"],
            "c_uncompressed_bytes": bytes_of_c,
            "failure_statuses": {k:v for k,v in counts.items() if k not in ("functions","OK")},
            "archive": out_zip.name,
            "note": "Ghidra generated C pseudocode, not original source. Failed functions are in decompiled_index.csv.",
        }
        zf.writestr("decompiled_manifest.json",
                    (json.dumps(report, ensure_ascii=False, indent=2)+"\n").encode("utf-8"))
    out_csv.write_text(output.getvalue(), encoding="utf-8")
    out_report.write_text(json.dumps(report, ensure_ascii=False, indent=2)+"\n",
                          encoding="utf-8")
    if entries_with_c < 1:
        raise ValueError("No Ghidra C functions extracted")
    print(json.dumps(report, ensure_ascii=False, indent=2))
    return report


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--input", type=Path, required=True)
    p.add_argument("--zip", type=Path, required=True)
    p.add_argument("--index", type=Path, required=True)
    p.add_argument("--report", type=Path, required=True)
    p.add_argument("--elf-sha", required=True)
    x = p.parse_args()
    try:
        run(x.input, x.zip, x.index, x.report, x.elf_sha)
    except Exception as exc:
        print(f"ERROR: {exc}", file=sys.stderr)
        raise


if __name__ == "__main__":
    main()
