#!/usr/bin/env python3
"""R5 evidence: static parent-R16 reaching definitions and mainBody closure sites.

Read-only analysis of pinned original main_dynamic.blua. Output is a bounded
metadata-only report. No actual game process, TValue, UpVal*, _ENV value,
or C API calls are observed by this script.
"""
from __future__ import annotations

import argparse
from collections import Counter
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
    definite = [
        x for x in analyses["candidate_write_sites_tail"]
        if x.get("pc") is not None and x["op"] == "CLOSURE"
    ]
    if (analyses["candidate_write_count"], analyses["entry_is_candidate"],
        len(definite)) != (1, False, 1):
        raise ValueError("R16 closure provenance is not uniquely established")
    producer_pc = definite[0]["pc"]
    producer_op = instructions[producer_pc]
    if producer_op.a != 16 or producer_op.name != "CLOSURE":
        raise ValueError("R16 unique source is no longer CLOSURE")
    if producer_op.bx >= len(root_proto.children):
        raise ValueError("R16 closure child index out of original range")
    producer_child = root_proto.children[producer_op.bx]
    producer_captures = [
        {"slot":slot,
         "instack":producer_child.upvalues[3*slot],
         "source_index":producer_child.upvalues[3*slot+1],
         "kind":producer_child.upvalues[3*slot+2]}
        for slot in range(producer_child.upvalue_count)
    ]
    between = instructions[producer_pc+1:12242]
    possible_closures = [
        {"pc":op.pc,"opcode":op.name,"a":op.a,
         "affected_r16":op.a <= 16}
        for op in between if op.name in ("CLOSE","TBC")
        and op.a <= 16
    ]
    helper_opcodes = decode(producer_child)
    source_r13 = reaching_register_writes(root_proto, producer_pc, 13)
    root_window = []
    for op in instructions[35:55]:
        entry={"pc":op.pc,"op":op.name,"a":op.a,"b":op.b,
               "c":op.c,"k":op.k,"bx":op.bx}
        index=None
        if op.name in ("GETTABUP","GETFIELD","SETFIELD"):
            index=op.c if op.name != "SETFIELD" else op.b
        elif op.name=="LOADK":
            index=op.bx
        if index is not None and index < len(root_proto.constants):
            constant=root_proto.constants[index]
            payload=constant.payload
            entry["constant_tag"]=constant.tag
            entry["constant"]=(payload.decode("ascii") if isinstance(payload,bytes)
                and len(payload)<=48 and all(32<=c<127 for c in payload)
                else "NON_ASCII_OR_NUMERIC")
        root_window.append(entry)
    # Only compact six-word helper opcode records are emitted, not recovered Lua.
    helper_records = []
    for op in helper_opcodes:
        entry = {"pc":op.pc, "op":op.name, "a":op.a,"b":op.b,"c":op.c,"k":op.k}
        if op.name in ("GETTABUP", "GETFIELD") and op.c < len(producer_child.constants):
            constant=producer_child.constants[op.c]
            raw_constant=constant.payload
            entry["key_tag"]=constant.tag
            entry["key_text"]=(
                raw_constant.decode("ascii") if isinstance(raw_constant,bytes)
                and len(raw_constant)<=40 and all(32<=v<127 for v in raw_constant)
                else "UNPRINTABLE_OR_NOT_A_STRING"
            )
        helper_records.append(entry)
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
        "r16_producer_closure": {
            "producer_root_pc":producer_pc,
            "producer_byte_offset":root_proto.code_offset+producer_pc*4,
            "register":16,"opcode":"CLOSURE",
            "child_index":producer_op.bx,"child_proto_id":producer_child.id,
            "num_params":producer_child.num_params,
            "max_stack":producer_child.max_stack_size,
            "is_vararg":bool(producer_child.is_vararg),
            "upvalues":producer_captures,
            "instruction_count":producer_child.instruction_count,
            "direct_children":len(producer_child.children),
            "opcode_histogram":dict(sorted(Counter(op.name for op in helper_opcodes).items())),
            "opcode_sequence":helper_records,
            "captured_parent_r13_reaching_definitions":source_r13,
            "value_kind_if_executed":"LUA_CLOSURE",
            "runtime_closure_pointer":"NOT_OBSERVED",
        },
        "capture_lifetime_opcodes_r16_from_producer":possible_closures,
        "lifetime_limit":"STATIC_CLOSE_TBC_ONLY_NOT_REAL_CALLINFO",
        "r16_other_closure_captures": siblings,
        "root_pc35_54_native_opcodes":root_window,
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
        "r16_producer_closure":report["r16_producer_closure"],
        "capture_lifetime_opcodes_r16":report["capture_lifetime_opcodes_r16_from_producer"],
        "root_pc35_54_native_opcodes":report["root_pc35_54_native_opcodes"],
        "cfg_defects":r["cfg_defect_count"],
        "graph_iterations":r["graph_iterations"],
        "root_upvalue_descriptors":report["root_upvalue_descriptors"],
        "runtime_identity":"NOT_OBSERVED",
    },ensure_ascii=False))
if __name__=="__main__":
    main()
