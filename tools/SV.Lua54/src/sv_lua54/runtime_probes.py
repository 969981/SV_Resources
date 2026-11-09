"""SV 4.0.0 R3: exact Lua VM probe contract and conservative telemetry audit.

No game runtime instrumentation is supplied or claimed. The output manifest is
derived from a pinned read-only chunk. Untrusted synthetic events are *only*
schema-consistency checked, never promoted to game behavior verification.
"""
from __future__ import annotations

import argparse
from collections import Counter
from hashlib import sha256
import json
from pathlib import Path

from .chunk import Chunk, parse
from .dataflow import analyze_method
from .trace import instructions, native_methods, string_at

TARGET_CALL_PCS = (11, 32, 83)
TARGET_ROOT_CLOSURE_PC = 215522


def _instruction_view(proto, code, pc):
    op, a, b, c, k, bx, sj = code[pc]
    out = {"pc": pc, "opcode": op, "a": a, "b": b, "c": c,
           "k": k, "bx": bx, "sj": sj,
           "file_offset": proto.code_offset + 4 * pc}
    if op in {"LOADK", "GETFIELD", "GETTABUP", "SETFIELD",
              "SETTABUP", "SELF"}:
        idx = bx if op == "LOADK" else (c if op in {"GETFIELD", "GETTABUP", "SELF"} else b)
        # Only expose hash symbols / known structural literals, not arbitrary
        # proprietary text from the original bytecode.
        value = string_at(proto, idx)
        if value is not None and (
            (len(value) == 17 and value[0] in "CFS" and
             all(d in "0123456789ABCDEF" for d in value[1:])) or
            value == "prototype"
        ):
            out["symbolic_constant"] = value
    return out


def build_manifest(chunk: Chunk, class_hash: str, function_hash: str,
                   target_pcs=TARGET_CALL_PCS):
    definitions = [m for m in native_methods(chunk)
                   if m["class_hash"] == class_hash and
                      m["function_hash"] == function_hash]
    if len(definitions) != 1:
        raise ValueError(f"expected 1 canonical method assignment, got {len(definitions)}")
    method = definitions[0]
    nodes = {p.id: p for p in chunk.protos()}
    proto = nodes[method["proto_id"]]
    if method["closure_pc"] != TARGET_ROOT_CLOSURE_PC and class_hash == "C850E69B34478276C":
        raise ValueError("pinned root closure PC changed")
    data = analyze_method(chunk, class_hash, function_hash)["matches"][0]["analysis"]
    by_pc = {c["pc"]: c for c in data["calls"]}
    code = instructions(proto)
    targets = []
    for pc in target_pcs:
        call = by_pc.get(pc)
        if call is None or not call["field_hash"]:
            raise ValueError(f"call PC {pc} not supported by original field-hash evidence")
        if code[pc][0] not in ("CALL", "TAILCALL"):
            raise ValueError(f"PC {pc} is not a call in native method")
        targets.append({
            "call_pc": pc,
            "call_register": call["callee_register"],
            "field_hash": call["field_hash"],
            "owner_class_candidate": call["owner_class_candidate"],
            "code_offset": proto.code_offset + 4 * pc,
            "opcode_window": [_instruction_view(proto, code, i) for i in
                              range(max(0, pc - 5), min(len(code), pc + 3))],
            "symbolic_status": call["status"],
            "runtime_receiver_status": "NOT_OBSERVED",
            "runtime_callee_status": "NOT_OBSERVED",
        })
    captures = []
    for slot in range(proto.upvalue_count):
        instack, idx, kind = proto.upvalues[3*slot:3*slot+3]
        captures.append({
            "slot": slot, "instack": instack, "index": idx, "kind": kind,
            "parent_register": idx if instack else None,
            "parent_upvalue_slot": idx if not instack else None,
            "runtime_cell_status": "NOT_OBSERVED",
        })
    return {
        "schema": "sv-lua-vm-observation/v1",
        "source_sha256": chunk.input_sha256,
        "module": "main", "class_hash": class_hash,
        "function_hash": function_hash, "method_proto_id": proto.id,
        "method_code_sha256": sha256(proto.code).hexdigest(),
        "root_closure_pc": method["closure_pc"],
        "root_closure_file_offset": chunk.root.code_offset + 4*method["closure_pc"],
        "root_proto_code_sha256": sha256(chunk.root.code).hexdigest(),
        "upvalue_captures": captures,
        "call_probes": targets,
        "vm_hook_scope": {
            "instruction_clock": "LUA_5_4_OPCODE_PC_ZERO_BASED_PER_PROTO",
            "never_use_as_cpu_pc": True,
            "requires_runtime_proto_fingerprint": True,
            "requires_root_activation_identity": True,
            "at_root_closure_pc": [
                "snapshot root register values before OP_CLOSURE",
                "snapshot created Closure instance and all three UpVal cell identities after OP_CLOSURE",
                "record immutable root activation identity, not only Proto ID",
            ],
            "at_call_pc": [
                "read R[A] actual callable before OP_CALL",
                "record target Lua Closure/C function identity and Lua Proto code hash or C module+RVA",
                "capture object/table receiver identity from the actual operand, not Hash inferred class",
                "record raw field key and its receiver/metatable lookup evidence",
                "snapshot shared UpVal identities and value types without publishing pointer addresses",
            ],
            "not_a_github_actions_emulator": True,
        },
        "runtime_evidence_status": "NOT_COLLECTED",
        "copyright": "Raw BLUA, decompiled game source and live heap pointers are not exported.",
    }


def _nonempty(event, fields):
    return all(isinstance(event.get(key), str) and event[key].strip()
               for key in fields)


def audit_events(manifest, events):
    """Check event consistency, NOT authenticity or gameplay equivalence.

    Real VM observations must be produced by an independently audited hook.
    This check cannot distinguish fabricated events from real ones.
    """
    records = list(events)
    if not records:
        return {"status": "NO_RUNTIME_EVIDENCE", "events": 0,
                "observed_call_pcs": [], "runtime_verified": False,
                "reason": "No original VM event stream supplied"}
    root_pc = manifest["root_closure_pc"]
    expected = {x["call_pc"]: x for x in manifest["call_probes"]}
    sessions = {}
    errors = []
    seen_calls = []
    for index, event in enumerate(records):
        typ = event.get("event")
        run = event.get("run_id")
        activation = event.get("root_activation_id")
        key = (run, activation)
        if not _nonempty(event, ("run_id", "root_activation_id")):
            errors.append(f"event {index}: missing stable run/root activation IDs")
            continue
        if typ == "run_begin":
            if event.get("source_sha256") != manifest["source_sha256"] or (
                event.get("root_proto_code_sha256") != manifest["root_proto_code_sha256"]
            ):
                errors.append(f"event {index}: wrong original source or root Proto hash")
            if key in sessions:
                errors.append(f"event {index}: duplicate run/root activation")
            else:
                sessions[key] = {"closure_id": None, "cells": {}, "calls": []}
        elif typ == "closure_create":
            state = sessions.get(key)
            if state is None:
                errors.append(f"event {index}: closure without run_begin")
                continue
            if state["closure_id"] is not None:
                errors.append(f"event {index}: duplicate setup closure in activation")
            if event.get("pc") != root_pc or event.get("method_code_sha256") != manifest["method_code_sha256"]:
                errors.append(f"event {index}: wrong closure creation PC or code fingerprint")
            if not _nonempty(event, ("closure_id",)):
                errors.append(f"event {index}: missing runtime Closure identity")
            cells = event.get("upvalues")
            if not isinstance(cells, dict) or set(cells) != {"0", "1", "2"}:
                errors.append(f"event {index}: expected exactly 3 captured UpVal slots")
                continue
            ids = []
            for slot in ("0", "1", "2"):
                cell = cells[slot]
                if not isinstance(cell, dict) or not _nonempty(cell, ("cell_id", "value_type")):
                    errors.append(f"event {index}: missing UpVal cell ID or value type in slot {slot}")
                    continue
                ids.append(cell["cell_id"])
                # Table/function values must include an ephemeral identity/fingerprint.
                if cell["value_type"] != "nil" and not (
                    cell.get("value_id") or cell.get("value_fingerprint")
                ):
                    errors.append(f"event {index}: missing cell {slot} value identity")
            if len(ids) == 3 and len(set(ids)) < 3:
                errors.append(f"event {index}: three distinct UpVal slots reused one cell")
            state["closure_id"] = event.get("closure_id")
            state["cells"] = {s:cells[s].get("cell_id") for s in ("0", "1", "2")
                              if isinstance(cells[s], dict)}
        elif typ == "call_pre":
            state = sessions.get(key)
            pc = event.get("pc")
            if state is None or not state["closure_id"]:
                errors.append(f"event {index}: call before matching closure creation")
                continue
            if pc not in expected or event.get("field_hash") != expected[pc]["field_hash"]:
                errors.append(f"event {index}: unrecognized call PC or incorrect field key")
                continue
            if event.get("closure_id") != state["closure_id"]:
                errors.append(f"event {index}: call from wrong Closure instance")
            if not _nonempty(event, ("callee_id", "receiver_id", "receiver_lookup_evidence")):
                errors.append(f"event {index}: no real target/receiver/lookup evidence")
            if event.get("callee_kind") == "lua_closure":
                if not _nonempty(event, ("callee_proto_code_sha256",)):
                    errors.append(f"event {index}: no callee Lua Proto identity")
            elif event.get("callee_kind") == "c_function":
                if not _nonempty(event, ("callee_module", "callee_module_rva")):
                    errors.append(f"event {index}: no normalized native callee identity")
            else:
                errors.append(f"event {index}: unknown callable kind")
            state["calls"].append(pc)
            seen_calls.append(pc)
        elif typ == "upvalue_snapshot":
            state = sessions.get(key)
            slot = str(event.get("slot"))
            if not state or not state["closure_id"] or event.get("closure_id") != state["closure_id"]:
                errors.append(f"event {index}: snapshot without matching instance")
            elif state["cells"].get(slot) != event.get("cell_id"):
                errors.append(f"event {index}: incorrect UpVal cell identity for slot {slot}")
            elif not _nonempty(event, ("value_type",)):
                errors.append(f"event {index}: missing observed UpVal type")
        else:
            errors.append(f"event {index}: unknown event type")
    observed = sorted(set(seen_calls))
    complete = any(set(state["calls"]) >= set(expected) for state in sessions.values())
    if errors:
        status = "INVALID_EVENT_CONTRACT"
    elif not complete:
        status = "PARTIAL_TELEMETRY_ONLY"
    else:
        status = "SCHEMA_CONSISTENT_UNATTESTED_TELEMETRY"
    return {
        "status": status, "events": len(records),
        "observed_call_pcs": observed, "required_call_pcs": sorted(expected),
        "complete_single_activation": complete and not errors,
        "errors": errors, "runtime_verified": False,
        "caution": "Even fully consistent JSON cannot authenticate the VM observer or demonstrate behavior equivalence",
    }


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("blua", type=Path)
    ap.add_argument("--class-hash", default="C850E69B34478276C")
    ap.add_argument("--function-hash", default="F7C68FEDB79AB6396")
    ap.add_argument("--expected-sha256", required=True)
    ap.add_argument("--output", type=Path, required=True)
    ap.add_argument("--events", type=Path, help="Optional untrusted JSONL VM telemetry")
    args = ap.parse_args()
    chunk = parse(args.blua.read_bytes())
    if chunk.input_sha256 != args.expected_sha256:
        ap.error("source SHA-256 mismatch")
    manifest = build_manifest(chunk, args.class_hash.upper(), args.function_hash.upper())
    if args.events:
        events = [json.loads(line) for line in args.events.read_text(encoding="utf-8").splitlines()
                  if line.strip()]
    else:
        events = []
    result = {"manifest": manifest, "audit": audit_events(manifest, events)}
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(result, indent=2, ensure_ascii=False)+"\n",
                           encoding="utf-8")
    print("R3_PROBE_MANIFEST", "proto", manifest["method_proto_id"],
          "calls", [(c["call_pc"],c["field_hash"]) for c in manifest["call_probes"]],
          "runtime", result["audit"]["status"])


if __name__ == "__main__":
    main()
