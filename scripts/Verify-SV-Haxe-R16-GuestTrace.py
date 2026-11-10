#!/usr/bin/env python3
"""Evaluate optional read-only R16 guest Lua CALL trace.

An empty trace is missing live evidence, not success. Even matching guest
events are SELF_REPORTED, never independently attested as original game ABI.
No game memory reads/writes are made by this offline verifier.
"""
import argparse,json,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools/SV.Lua54/src"))
from sv_lua54.emit_haxe.r16_guest_trace import verify_report

def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--trace",type=Path,required=True)
    ap.add_argument("--report",type=Path,required=True)
    args=ap.parse_args()
    result=verify_report(json.loads(args.trace.read_text("utf-8")))
    args.report.parent.mkdir(parents=True,exist_ok=True)
    args.report.write_text(json.dumps(result,ensure_ascii=False,indent=2)+"\n","utf-8")
    print(json.dumps(result,ensure_ascii=False,indent=2))
    if result["status"]=="NO_RUNTIME_CALL_EVENTS":
        print("NO_LIVE_CALL_PROOF: zero events; runtime status NOT_OBSERVED",file=sys.stderr)
        return 2
    print("Trace is SELF-REPORTED internally consistent, NOT independent game ABI attestation")
    return 0

if __name__=="__main__":
    sys.exit(main())
