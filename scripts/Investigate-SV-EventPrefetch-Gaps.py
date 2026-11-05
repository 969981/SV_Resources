#!/usr/bin/env python3
"""Investigate unresolved SV 4.0.0 prefetch hashes and native callsite code.

Output is evidence, not a decompiler: disassembly windows are NOT proven
function boundaries; exact TRPFD matches are NOT established runtime loads.
Depends on capstone>=5 for the optional native callsite listing.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import importlib.util
import io
import json
import sys
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path("Unpack/4.0.0/romfs")
PREFETCH = ROOT / "system/prefetch/data"
EVENT = ROOT / "event/trevt/bin/event.trevt"
SCRIPT = Path(__file__).with_name("Analyze-SV-EventPrefetch-Links.py")


def import_parser():
    spec = importlib.util.spec_from_file_location("sv_native_links", SCRIPT)
    mod = importlib.util.module_from_spec(spec)
    sys.modules[spec.name] = mod
    spec.loader.exec_module(mod)
    return mod


def json_text(data):
    return json.dumps(data, indent=2, ensure_ascii=False) + "\n"


def csv_text(head, values):
    out = io.StringIO(newline="")
    w = csv.writer(out, lineterminator="\n")
    w.writerow(head)
    w.writerows(values)
    return out.getvalue()


def write(repo, path, content):
    target = repo / path
    target.parent.mkdir(parents=True, exist_ok=True)
    target.write_text(content, encoding="utf-8", newline="\n")
    print("WROTE", path, flush=True)


def prefetch_gaps(repo, mod):
    arr0, arr1 = mod.load_hash_csv(repo, 0), mod.load_hash_csv(repo, 1)
    map0, map1 = {h: i for i, h in enumerate(arr0)}, {h: i for i, h in enumerate(arr1)}
    known = set()
    matched = []
    with (repo / PREFETCH / "_index/prefetch_trpfd_exact_matches.csv").open(
        encoding="utf-8", newline=""
    ) as f:
        for row in csv.DictReader(f):
            known.add(row["hash64_hex"][2:].lower())
            matched.append(row)
    missing = (set(arr0) | set(arr1)) - known
    rows = []
    for h in sorted(missing):
        rows.append([
            "0x" + h, map0.get(h, ""), map1.get(h, ""),
            int(h in map0) + 2 * int(h in map1),
            "NOT_PRESENT_IN_4_0_0_TRPFD",
            "DO_NOT_INFER_RESOURCE_NAME",
        ])
    if len(missing) != 82:
        raise ValueError(f"Expected 82 unresolved hashes, found {len(missing)}")
    write(repo, PREFETCH / "_index/prefetch_trpfd_unmatched.csv",
          csv_text(["hash64_hex", "prefetch0_index", "prefetch1_index",
                    "membership_mask", "index_evidence", "mapping_status"], rows))

    ext = Counter()
    directory = Counter()
    membership = Counter()
    no_path = 0
    for row in matched:
        path = row["trpfd_virtual_path"].replace("\\", "/")
        if not path:
            no_path += 1
            continue
        filename = path.rsplit("/", 1)[-1]
        suffix = ("." + filename.rsplit(".", 1)[-1]).lower() if "." in filename else "[none]"
        ext[suffix] += 1
        directory[path.split("/")[0].lower()] += 1
        membership[row["prefetch_membership_mask"]] += 1
    stats = {
        "schemaVersion": 1, "matchingRows": len(matched),
        "unmatchedDistinct": len(missing), "matchedNoPath": no_path,
        "unmatchedBoth": sum(h in map0 and h in map1 for h in missing),
        "unmatchedOnly0": sum(h in map0 and h not in map1 for h in missing),
        "unmatchedOnly1": sum(h in map1 and h not in map0 for h in missing),
        "topExtensions": ext.most_common(40),
        "topDirectories": directory.most_common(40),
        "membershipMaskCounts": dict(sorted(membership.items())),
        "note": "Classification is only of exact-matching resource names; an extension does not prove a runtime load.",
    }
    write(repo, PREFETCH / "_index/prefetch_match_categories.json", json_text(stats))
    return stats


def callsite_windows(repo, mod):
    from capstone import Cs, CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN

    expected_main_sha = "F05BD7FEDAF6F0BA1481005CB48B1E43067966AA12C28E6932EAB9E7BC5750A4"
    metadata, seg = mod.nsos(repo / mod.MAIN)
    if metadata["sourceSha256"] != expected_main_sha:
        raise ValueError("NSO source changed; refuse hardcoded native RVA interpretation")
    text = seg["text"]
    b = text["data"]
    base = text["memoryOffset"]
    points = [
        {
            "label": "TREVT_FILE_PATH", "anchor": "event/trevt/bin/event.trevt",
            "adrpRva": 0x11BE130, "addRva": 0x11BE134,
            "stringRva": 0x3B584D8
        },
        {
            "label": "TRPRE_FORMAT_STRING", "anchor": "data:/%s.trpre",
            "adrpRva": 0x1701C90, "addRva": 0x1701C94,
            "stringRva": 0x3B51D0B
        },
    ]
    md = Cs(CS_ARCH_ARM64, CS_MODE_LITTLE_ENDIAN)
    md.detail = False
    windows = []
    for point in points:
        off = point["adrpRva"] - base
        if not 0 <= off < len(b) - 4:
            raise ValueError("Callsite outside .text")
        start = max(0, (off - 0x160) & ~3)
        end = min(len(b), (off + 0x200) & ~3)
        ins = []
        for i in md.disasm(b[start:end], base + start):
            op = i.op_str
            target = None
            if i.mnemonic in ("bl", "b") and op.startswith("#0x"):
                target = op.replace("#", "")
            ins.append({
                "rva": f"0x{i.address:X}",
                "bytesHex": i.bytes.hex(),
                "mnemonic": i.mnemonic,
                "operands": op,
                **({"branchTarget": target} if target else {}),
            })
        confirmed = [
            i for i in ins if i["rva"] in
            (f"0x{point['adrpRva']:X}", f"0x{point['addRva']:X}")
        ]
        if len(confirmed) != 2 or confirmed[0]["mnemonic"] != "adrp" or confirmed[1]["mnemonic"] != "add":
            raise ValueError("Expected instruction pair not present: " + point["label"])
        windows.append({
            **point,
            "segment": "text",
            "windowStartRva": f"0x{base+start:X}",
            "windowEndRvaExclusive": f"0x{base+end:X}",
            "instructions": ins,
            "nearbyBL": [i for i in ins if i["mnemonic"] == "bl"],
            "status": "ASSEMBLY_WINDOW_NOT_FUNCTION_BOUNDARY",
        })

    report = {
        "source": mod.MAIN.as_posix(), "sourceSha256": metadata["sourceSha256"],
        "buildId": metadata["buildId"], "method": "capstone AArch64 disassembly",
        "callSites": windows,
        "warning": (
            "BL targets listed are adjacent calls, not a proven direct consumer. "
            "Identify function boundaries and register dataflow before assigning "
            "TRPRE/TREVT loader or execution semantics."
        ),
    }
    write(repo, EVENT / "_index/native_callsite_disassembly.json", json_text(report))
    print("CALLSITE_SUMMARY " + json.dumps([
        {
            "label": w["label"], "pair": f"main+0x{w['adrpRva']:X}",
            "instructionCount": len(w["instructions"]),
            "nearbyCalls": w["nearbyBL"][:25],
            "pairInstructions": [i for i in w["instructions"] if int(i["rva"], 16) in
                                 (w["adrpRva"], w["addRva"])]
        } for w in windows
    ], ensure_ascii=False), flush=True)


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--repo", type=Path, default=Path(__file__).resolve().parent.parent)
    ap.add_argument("--skip-native-disassembly", action="store_true")
    args = ap.parse_args()
    repo = args.repo.resolve()
    mod = import_parser()
    stats = prefetch_gaps(repo, mod)
    print("GAP_SUMMARY " + json.dumps({
        k: stats[k] for k in ("unmatchedDistinct", "unmatchedBoth", "unmatchedOnly0",
                              "unmatchedOnly1", "topExtensions", "topDirectories")
    }, ensure_ascii=False), flush=True)
    if not args.skip_native_disassembly:
        callsite_windows(repo, mod)


if __name__ == "__main__":
    main()
