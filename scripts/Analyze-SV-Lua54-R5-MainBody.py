#!/usr/bin/env python3
"""R5 evidence: static parent-R16 reaching definitions and mainBody closure sites.

Read-only analysis of pinned original main_dynamic.blua. Output is a bounded
metadata-only report. No actual game process, TValue, UpVal*, _ENV value,
or C API calls are observed by this script.
"""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.chunk import parse
from sv_lua54.r1 import decode, direct_cf_methods
from sv_lua54.r5 import reaching_register_writes, sibling_closure_capture_sites

PATH = Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main_dynamic/main_dynamic.blua")
PIN = "ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572"
EXPECTED_CLASS = "CC0F71836C3BD9A89"
EXPECTED_METHOD = "FD8D5F3745B4B5174"
REPORT = Path("tools/SV.Lua54/fixtures/r5_mainbody_r16_evidence.json")

def run(root: Path) -> dict:
    raw = (root / PATH).read_bytes()
    sha = hashlib.sha256(raw).hexdigest()
    if sha != PIN:
        raise ValueError("original main_dynamic 4.0.0 SHA changed")
    chunk = parse(raw)
    root_proto = chunk.root
    byid = {p.id: p for p in chunk.protos()}
    child = byid[752]
    if child.parent_id != root_proto.id or root_proto.children[708].id != 752:
        raise ValueError("original parent-child Proto mapping changed")
    assert child.instruction_count == 2071
    instructions = decode(root_proto)
    closure = instructions[12242]
    if (closure.name, closure.a, closure.bx) != ("CLOSURE", 56, 708):
        raise ValueError("original CLOSURE instruction changed")
    if (instructions[12243].name, instructions[12243].a,
        instructions[12243].b, instructions[12243].c) != ("SETTABLE", 54, 55, 56):
        # Do not rely on guessed SETTABLE shape; strict C-F method evidence below
        # is authoritative for registration ownership.
        if instructions[12243].name != "SETTABLE":
            raise ValueError("method registration assignment opcode changed")
    edges, rejects = direct_cf_methods(chunk, "main_dynamic")
    matching = [e for e in edges if e["child_proto_id"] == 752]
    if len(matching) != 1:
        raise ValueError(f"expected one registration of child752, got {len(matching)}")
    edge = matching[0]
    if (edge["class_hash"], edge["method_hash"],
        edge["root_pc"], edge["assignment_pc"]) != (
        EXPECTED_CLASS, EXPECTED_METHOD, 12236, 12243
    ):
        raise ValueError("C-F ownership fingerprint changed")
    if child.upvalues != bytes((0,0,0,1,16,0)):
        raise ValueError("Proto752 Upvalue capture descriptor changed")
    analyses = reaching_register_writes(root_proto, 12242, 16)
    siblings = sibling_closure_capture_sites(root_proto, 16, 12242)
    return {
        "schema_version": 1,
        "status": "STATIC_PC_GRAPH_ONLY",
        "module": "main_dynamic",
        "game_version": "4.0.0",
        "source_sha256": sha,
        "class_hash": EXPECTED_CLASS,
        "method_hash": EXPECTED_METHOD,
        "method_name": "mainBody",
        "method_name_provenance": "POKEDOCS_NAMED_PREVIOUSLY_VERIFIED_R4",
        "class_name_status": "UNKNOWN",
        "registration_root_pc": edge["root_pc"],
        "closure_create_root_pc": 12242,
        "closure_target_register": closure.a,
        "closure_byte_offset": root_proto.code_offset + 12242 * 4,
        "assignment_root_pc": edge["assignment_pc"],
        "child_index": 708,
        "proto_id": 752,
        "child_upvalue_descriptors": [
            {"slot":0,"parent_upvalue":0,"instack":False,"runtime_value":"NOT_OBSERVED"},
            {"slot":1,"parent_register":16,"instack":True,"runtime_value":"NOT_OBSERVED"},
        ],
        "root_upvalue_descriptors": [
            {"slot":i,"instack":root_proto.upvalues[3*i],
             "source_index":root_proto.upvalues[3*i+1],
             "kind":root_proto.upvalues[3*i+2],
             "runtime_value":"NOT_OBSERVED"}
            for i in range(root_proto.upvalue_count)
        ],
        "root_upvalue_names_present": [
            bool(name) for name in root_proto.upvalue_names
        ],
        "r16_reaching_definitions": analyses,
        "r16_other_closure_captures": siblings,
        "runtime_register_identity": "NOT_OBSERVED",
        "runtime_parent_upvalue0": "NOT_OBSERVED",
        "runtime_mainbody_calls": "NOT_OBSERVED",
        "full_function_runtime_equivalence": "NOT_VERIFIED",
        "next_evidence_needed": [
            "native Lua VM dispatch fingerprint, actual active Proto0 PC12242",
            "root CallInfo base, register R16 TValue and root UpVal0 cell at closure creation",
            "new LClosure UpVal[0]/UpVal[1] pointer identity and values",
            "same LClosure invocation arguments, C API call/side effect/return trace",
            "equivalent regenerated function tested with identical controlled host context",
        ],
    }

def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root",type=Path,default=ROOT)
    ap.add_argument("--report",type=Path,default=REPORT)
    ap.add_argument("--verify-only",action="store_true")
    args=ap.parse_args()
    root=args.root.resolve()
    report=run(root)
    target = args.report if args.report.is_absolute() else root / args.report
    encoded=(json.dumps(report,sort_keys=True,ensure_ascii=False,indent=2)+"\n").encode()
    if args.verify_only:
        if not target.is_file() or target.read_bytes()!=encoded:
            raise SystemExit("R5 evidence fixture missing or stale")
    else:
        target.parent.mkdir(parents=True,exist_ok=True)
        target.write_bytes(encoded)
    r=report["r16_reaching_definitions"]
    print("SLR_R5_NATIVE",json.dumps({
        "parent_pc":report["closure_create_root_pc"],
        "offset":report["closure_byte_offset"],
        "parent_r16_candidate_count":r["candidate_write_count"],
        "parent_r16_writes_near_capture":r["near_capture_writes_last_200"],
        "parent_r16_reaching_defs_tail":r["candidate_write_sites_tail"][-12:],
        "other_r16_closure_capture_count":report["r16_other_closure_captures"]["count"],
        "cfg_defects":r["cfg_defect_count"],
        "graph_iterations":r["graph_iterations"],
        "root_upvalue_descriptors":report["root_upvalue_descriptors"],
        "runtime_identity":"NOT_OBSERVED",
    },ensure_ascii=False))
if __name__=="__main__":
    main()
