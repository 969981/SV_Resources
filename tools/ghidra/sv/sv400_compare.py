#!/usr/bin/env python3
"""Compare static Scarlet/Violet Ghidra function rows without inventing identity.

Same start address is a comparison candidate, NOT proof of semantic equivalence.
"""
import argparse
import csv
import hashlib
import json
import sqlite3
from pathlib import Path

def records(path):
    result = {}
    with sqlite3.connect(path) as db:
        if db.execute("PRAGMA integrity_check").fetchone()[0] != "ok":
            raise ValueError("Corrupt SQLite: " + str(path))
        for entry, name, signature, status, c in db.execute(
            "SELECT f.entry, f.name, f.signature, d.status, d.c "
            "FROM functions f LEFT JOIN decompilation d ON d.entry=f.entry"
        ):
            if entry in result:
                raise ValueError("Duplicate function entry: " + entry)
            digest = hashlib.sha256(c.encode("utf-8")).hexdigest() if status == "OK" and isinstance(c, str) else ""
            result[entry] = (name or "", signature or "", status or "", digest)
    return result

def run(scarlet, violet, out):
    a, b = records(scarlet), records(violet)
    out.mkdir(parents=True, exist_ok=True)
    counts = {}
    with (out / "scarlet_violet_function_diff.csv").open("w", newline="", encoding="utf-8") as stream:
        writer = csv.writer(stream)
        writer.writerow(["entry", "class", "scarlet_name", "violet_name",
                         "scarlet_signature", "violet_signature", "scarlet_status",
                         "violet_status", "scarlet_c_sha256", "violet_c_sha256"])
        def order(addr):
            try:
                return (0, int(addr, 16))
            except ValueError:
                return (1, addr)
        for entry in sorted(a.keys() | b.keys(), key=order):
            lhs, rhs = a.get(entry), b.get(entry)
            if lhs is None:
                label = "ONLY_VIOLET"
            elif rhs is None:
                label = "ONLY_SCARLET"
            elif lhs == rhs:
                label = "SAME_ADDRESS_SAME_EXPORTED_C_AND_METADATA"
            else:
                label = "SAME_ADDRESS_DIFFERENT_EXPORT"
            counts[label] = counts.get(label, 0) + 1
            l, r = lhs or ("", "", "", ""), rhs or ("", "", "", "")
            writer.writerow([entry, label, l[0], r[0], l[1], r[1], l[2], r[2], l[3], r[3]])
    summary = {"status": "STATIC_GHIDRA_ADDRESS_ALIGNMENT_ONLY",
               "scarlet_functions": len(a), "violet_functions": len(b),
               "classification": counts,
               "interpretation": "Matching ELF RVA only creates a candidate correspondence; inspect instructions, control flow and callers before inferring identity."}
    (out / "scarlet_violet_diff_report.json").write_text(json.dumps(summary, indent=2) + "\n", encoding="utf-8")
    print(json.dumps(summary))
    return summary

if __name__ == "__main__":
    p = argparse.ArgumentParser()
    p.add_argument("--scarlet", type=Path, required=True)
    p.add_argument("--violet", type=Path, required=True)
    p.add_argument("--out", type=Path, required=True)
    x = p.parse_args()
    run(x.scarlet, x.violet, x.out)
