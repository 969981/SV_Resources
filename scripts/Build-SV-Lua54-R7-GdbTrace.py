#!/usr/bin/env python3
"""Build a read-only R7 JSON evidence file from a genuine captured GDB log.

This does not authenticate the log as coming from a live game.
"""
from __future__ import annotations

import argparse
import json
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.r7_log import parse_gdb_log


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--log",type=Path,required=True)
    p.add_argument("--report",type=Path,required=True)
    p.add_argument("--activation-id",help="Required when log contains multiple root activations")
    a=p.parse_args()
    result=parse_gdb_log(a.log.read_text(encoding="utf-8",errors="replace"), a.activation_id)
    a.report.parent.mkdir(parents=True,exist_ok=True)
    a.report.write_text(json.dumps(result,ensure_ascii=False,indent=2,sort_keys=True)+"\n",encoding="utf-8")
    print("R7_GDB_LOG_EXPORTED_NOT_INDEPENDENTLY_ATTESTED",len(result["events"]))


if __name__=="__main__":
    main()
