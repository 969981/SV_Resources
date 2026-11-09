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
from .trace import basic_blocks, instructions, native_methods, string_at

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
            value in {"prototype", "new", "_new", "Create", "New"}
        ):
            out["symbolic_constant"] = value
    return out


def receiver_origin(proto, code, call_pc):
    """Short *structural* source slice; no proof of runtime self/object type."""
    call_op, a, b, c, k, bx, sj = code[call_pc]
    unknown = {"kind": "DYNAMIC_OR_INDIRECT_RECEIVER", "runtime_verified": False}
    if call_op not in ("CALL", "TAILCALL") or call_pc < 2:
        return unknown
    previous = code[call_pc - 1]
    before = code[call_pc - 2]
    if previous[0] == "SELF" and previous[1] == a:
        base = previous[2]
        if before[0] == "GETI" and before[1] == base and before[2] == 0:
            slot = before[3]
            blocks, _, _ = basic_blocks(proto)
            start = next(z["start_pc"] for z in blocks
                         if z["start_pc"] <= call_pc < z["end_pc_exclusive"])
            writers = []
            for pc in range(start, call_pc-1):
                op, aa, bb, cc, kk, *_ = code[pc]
                if op == "SETI" and aa == 0 and bb == slot:
                    writer = {"pc": pc, "value_register": cc if kk == 0 else None,
                              "constant_rhs": bool(kk),
                              "value_origin": "UNRESOLVED"}
                    if pc > 0 and kk == 0:
                        prev = code[pc-1]
                        if (prev[0] == "CALL" and prev[1] == cc
                            and prev[3] == 2):
                            writer["value_origin"] = "PRECEDING_CALL_SINGLE_RESULT"
                            writer["producer_call_pc"] = pc-1
                    writers.append(writer)
            return {
                "kind": "SELF_INDEXED_SLOT", "self_parameter_register": 0,
                "slot_index": slot, "geti_pc": call_pc-2, "self_pc": call_pc-1,
                "same_block_seti_writers": writers,
                "runtime_verified": False,
                "warning": "Function calls/metamethods may mutate the self slot after a static write",
            }
    if (previous[0] == "GETFIELD" and previous[1] == a
        and previous[2] == a and before[0] == "GETTABUP"
        and before[1] == a and before[2] == 0):
        klass = string_at(proto, before[3], "C")
        key = string_at(proto, previous[3], "S") or string_at(proto, previous[3], "F")
        return {"kind": "ENV_CLASS_STATIC_FIELD", "class_hash": klass,
                "field_hash": key, "gettabup_pc": call_pc-2,
                "getfield_pc": call_pc-1, "runtime_verified": False,
                "warning": "Global table field or metatable may be replaced at runtime"}
    return unknown


def producer_call_origin(proto, code, pc):
    """Prove an ENV class-table callable reaches CALL R[A] in one basic block.

    Argument setup may intervene (e.g. GETI R[A+1], self[1]). Reject any
    intervening operation that may overwrite the callee register.
    """
    if pc < 2 or code[pc][0] not in ("CALL", "TAILCALL"):
        return {"kind": "INDIRECT_OR_UNKNOWN_PRODUCER", "runtime_verified": False}
    from .capture import writes_register
    a = code[pc][1]
    blocks, _, _ = basic_blocks(proto)
    start = next(z["start_pc"] for z in blocks
                 if z["start_pc"] <= pc < z["end_pc_exclusive"])
    for field_pc in range(pc-1, max(start, pc-16)-1, -1):
        op, ra, rb, rc, rk, *_ = code[field_pc]
        if (op == "GETFIELD" and ra == a and rb == a
            and field_pc > start):
            env = code[field_pc-1]
            if (env[0] == "GETTABUP" and env[1] == a and env[2] == 0):
                member = string_at(proto, rc)
                return {
                    "kind": "ENV_CLASS_FIELD_CALL",
                    "class_hash": string_at(proto, env[3], "C"),
                    "field_key": member if member in {"new", "_new", "Create", "New"} else None,
                    "gettabup_pc": field_pc-1, "getfield_pc": field_pc,
                    "arg_setup_pcs": list(range(field_pc+1,pc)),
                    "returned_object_type": "UNOBSERVED",
                    "runtime_verified": False,
                }
        # Any other writer to callee register invalidates older provenance.
        if writes_register(op, ra, rb, rc, a):
            break
        # Fall back on unknown complex ops; don't assume no register effects.
        if op in {"VARARGPREP", "TFORCALL", "MMBIN", "MMBINI",
                  "MMBINK", "FORLOOP", "FORPREP", "TESTSET"}:
            break
    return {"kind": "INDIRECT_OR_UNKNOWN_PRODUCER", "runtime_verified": False}



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
        receiver = receiver_origin(proto, code, pc)
        upstream_calls = []
        for writer in receiver.get("same_block_seti_writers", []):
            call_source = writer.get("producer_call_pc")
            if call_source is not None:
                upstream_calls.append({
                    "producer_call_pc": call_source,
                    "producer_static_origin": producer_call_origin(proto, code, call_source),
                    "opcode_window": [_instruction_view(proto, code, i) for i in
                                      range(max(0, call_source-7),
                                            min(len(code), call_source+2))],
                })
        targets.append({
            "call_pc": pc,
            "call_register": call["callee_register"],
            "field_hash": call["field_hash"],
            "owner_class_candidate": call["owner_class_candidate"],
            "code_offset": proto.code_offset + 4 * pc,
            "opcode_window": [_instruction_view(proto, code, i) for i in
                              range(max(0, pc - 5), min(len(code), pc + 3))],
            "symbolic_status": call["status"],
            "receiver_static_origin": receiver,
            "upstream_call_windows": upstream_calls,
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
    seen_closure_ids = set()
    errors = []
    seen_calls = []
    last_seq = {}
    for index, event in enumerate(records):
        typ = event.get("event")
        run = event.get("run_id")
        activation = event.get("root_activation_id")
        key = (run, activation)
        if not _nonempty(event, ("run_id", "root_activation_id")):
            errors.append(f"event {index}: missing stable run/root activation IDs")
            continue
        seq = event.get("event_seq")
        if not isinstance(seq, int) or isinstance(seq, bool) or seq < 0 or (
            key in last_seq and seq <= last_seq[key]
        ):
            errors.append(f"event {index}: missing or non-monotonic event_seq")
        else:
            last_seq[key] = seq
        if typ == "run_begin":
            if not _nonempty(event, ("observer_build",)):
                errors.append(f"event {index}: missing instrumented VM build identity")
            if event.get("schema") != manifest["schema"]:
                errors.append(f"event {index}: wrong VM trace schema")
            if event.get("source_sha256") != manifest["source_sha256"] or (
                event.get("root_proto_code_sha256") != manifest["root_proto_code_sha256"]
            ):
                errors.append(f"event {index}: wrong original source or root Proto hash")
            if key in sessions:
                errors.append(f"event {index}: duplicate run/root activation")
            else:
                sessions[key] = {"closure_id": None, "cells": {}, "calls": [],
                                 "snapshots": {}, "last_call_seq": -1}
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
            if event.get("closure_id") in seen_closure_ids:
                errors.append(f"event {index}: closure ID reused across runtime activations")
            seen_closure_ids.add(event.get("closure_id"))
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
            elif event["receiver_lookup_evidence"] not in {
                "observed_table_get", "observed_metatable_index",
                "observed_native_field_get", "direct_register_object"
            }:
                errors.append(f"event {index}: receiver evidence is not VM-observed")
            for slot in ("1", "2"):
                if state["snapshots"].get(slot, -1) <= state["last_call_seq"]:
                    errors.append(f"event {index}: missing fresh UpVal {slot} snapshot before call")
            if event.get("callee_kind") == "lua_closure":
                if not _nonempty(event, ("callee_proto_code_sha256",)):
                    errors.append(f"event {index}: no callee Lua Proto identity")
            elif event.get("callee_kind") == "c_function":
                if not _nonempty(event, ("callee_module", "callee_module_rva")):
                    errors.append(f"event {index}: no normalized native callee identity")
            else:
                errors.append(f"event {index}: unknown callable kind")
            state["calls"].append(pc)
            state["last_call_seq"] = seq if isinstance(seq, int) else index
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
            elif event["value_type"] != "nil" and not (
                event.get("value_id") or event.get("value_fingerprint")
            ):
                errors.append(f"event {index}: missing observed non-nil UpVal value identity")
            else:
                state["snapshots"][slot] = seq if isinstance(seq, int) else index
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
