#!/usr/bin/env python3
"""R6: audit Haxe-style __newindex and metatable alias evidence in original SV 4.0.0 Lua."""
from __future__ import annotations

import argparse
from hashlib import sha256
import json
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.chunk import parse
from sv_lua54.r6 import bootstrap_audit

INPUT = Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main_dynamic/main_dynamic.blua")
PIN = "ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572"


def run(root: Path) -> dict:
    raw = (root / INPUT).read_bytes()
    checksum = sha256(raw).hexdigest()
    if checksum != PIN:
        raise ValueError("Original main_dynamic 4.0.0 SHA-256 mismatch")
    chunk = parse(raw)
    report = bootstrap_audit(chunk.root)
    report["module"] = "main_dynamic"
    report["game_version"] = "4.0.0"
    report["source_sha256"] = checksum
    return report


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=ROOT)
    ap.add_argument("--report", type=Path, required=True)
    args = ap.parse_args()
    report = run(args.root.resolve())
    args.report.parent.mkdir(parents=True, exist_ok=True)
    args.report.write_text(json.dumps(report, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
    print("SLR_R6_META", json.dumps({
        "handler_shape": report["newindex_handler"]["strict_three_argument_handler_shape"],
        "handler_instructions": report["newindex_handler"]["instructions"],
        "handler_keys": report["newindex_handler"]["key_refs"],
        "r13_captures": report["root_r13_syntactic_captures_first_20"],
        "direct_fields": report["direct_r13_fields_before_capture"],
        "r13_capture_count": report["root_r13_syntactic_captures_before_mainbody_count"],
        "r13_later_write_count": report["root_r13_subsequent_register_writes_total"],
        "runtime": report["root_callinfo_and_upval_cell_identity"],
    }, ensure_ascii=False))


if __name__ == "__main__":
    main()
