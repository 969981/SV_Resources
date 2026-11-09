#!/usr/bin/env python3
"""R7: validate a read-only SV 4.0.0 VM capture; no process attachment.

Without a supplied trace outputs NOT_OBSERVED; even a consistent user-supplied
trace cannot claim independently verified live execution.
"""
from __future__ import annotations

import argparse
from hashlib import sha256
import json
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.chunk import parse
from sv_lua54.r7 import BLUA_SHA, expected_static, verify

BLUA = Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main_dynamic/main_dynamic.blua")


def run(root: Path, path: Path | None):
    raw = (root / BLUA).read_bytes()
    digest = sha256(raw).hexdigest()
    if digest != BLUA_SHA:
        raise ValueError("SV original main_dynamic 4.0.0 SHA-256 mismatch")
    static = expected_static(parse(raw).root)
    if path is None:
        return {
            "status": "NOT_OBSERVED",
            "version": "Violet/Scarlet main_dynamic 4.0.0 (SV-specific runtime ELF is Violet)",
            "blua_sha256": digest,
            "expected_native_pcs": {str(k): v for k, v in static.items()},
            "runtime_mainBody_semantic_parity": "NOT_VERIFIED",
            "next": "collect read-only events in a real matching Violet 4.0.0 VM; no data in repository currently",
        }
    trace = json.loads(path.read_text(encoding="utf-8"))
    report = verify(trace, static)
    report["blua_sha256"] = digest
    report["trace_source"] = trace.get("source") if isinstance(trace, dict) else None
    return report


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=ROOT)
    parser.add_argument("--trace", type=Path, help="read-only JSON trace collected in actual VM")
    parser.add_argument("--report", type=Path, required=True)
    args = parser.parse_args()
    report = run(args.root.resolve(), args.trace)
    args.report.parent.mkdir(parents=True, exist_ok=True)
    args.report.write_text(json.dumps(report, ensure_ascii=False, indent=2, sort_keys=True) + "\n", encoding="utf-8")
    print("SLR_R7_EVIDENCE", json.dumps({
        "status": report["status"],
        "runtime_semantic_parity": report["runtime_mainBody_semantic_parity"],
        "errors": len(report.get("errors", [])),
    }))
    if report["status"] in ("TRACE_INCOMPLETE_OR_CONTRADICTORY", "TRACE_INVALID"):
        raise SystemExit(2)


if __name__ == "__main__":
    main()
