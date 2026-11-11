#!/usr/bin/env python3
"""R18 offline GDB guest trace checker. Never confers independent attestation.

Reads R18_EVENT JSON lines or GDB text containing those lines.
Reports only boolean evidence and counts; no raw guest pointers are reprinted.
"""
import argparse
import json
from pathlib import Path

HASHES = {
    "scarlet_main": "53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f",
    "violet_main": "84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30",
}
WRAPPER = 0x1959E40
CPP_TARGET = 0xEF4890
SLOT = 0x46DDF30
DIRECT_BLR = 0x1959EF8
SLOW_BLR = 0x195A050
RET = 0x1959F0C
STEP_KINDS = (
    "CALL_HANDLER", "NATIVE_ENTRY", "HELPER1_BEFORE", "HELPER1_RETURN",
    "HELPER2_BEFORE", "HELPER2_RETURN", "GLOBAL_SLOT_BEFORE_LOAD",
    "GLOBAL_POINTER_LOADED", "INDIRECT_CALL", "TARGET_CPP_ENTRY",
    "INDIRECT_RETURN", "WRAPPER_RETURN"
)

def num(value):
    if isinstance(value, bool) or value is None:
        raise ValueError("expected integer, got bool or None")
    return int(value, 0) if isinstance(value, str) else int(value)

def load_events(path):
    events = []
    for line_no, line in enumerate(Path(path).read_text(encoding="utf-8").splitlines(), 1):
        if "R18_EVENT " in line:
            line = line.split("R18_EVENT ", 1)[1]
        elif not line.lstrip().startswith("{"):
            continue
        try:
            obj = json.loads(line)
        except (TypeError, ValueError) as exc:
            raise ValueError("invalid JSON at line %d: %s" % (line_no, exc)) from exc
        if not isinstance(obj, dict):
            raise ValueError("non-object event at line %d" % line_no)
        events.append(obj)
    return events

def _one(related, kind):
    hits = [e for e in related if e.get("kind") == kind]
    if len(hits) != 1:
        raise ValueError("%s_count_%d" % (kind, len(hits)))
    return hits[0]

def _check(evidence, key, value):
    if not value:
        raise ValueError(key)
    evidence.append(key)

def _validate_invocation(events, call, base):
    checks = []
    cid, tid = call["seq"], call["thread_id"]
    related = [call] + [
        e for e in events if e.get("invocation_id") == cid and e.get("thread_id") == tid
    ]
    entry = _one(related, "NATIVE_ENTRY")
    path = "INDIRECT_SLOW_CALL" if any(
        e.get("kind") == "INDIRECT_SLOW_CALL" for e in related
    ) else "INDIRECT_CALL"
    return_kind = "INDIRECT_SLOW_RETURN" if path == "INDIRECT_SLOW_CALL" else "INDIRECT_RETURN"
    expected_sequence = list(STEP_KINDS)
    expected_sequence[8] = path
    expected_sequence[10] = return_kind
    found = [_one(related, kind) for kind in expected_sequence]
    seqs = [e["seq"] for e in found]
    _check(checks, "stage_order", seqs == sorted(seqs) and len(set(seqs)) == len(seqs))
    _check(checks, "same_session", len({e.get("session") for e in found}) == 1)
    _check(checks, "call_opcode", (
        num(call.get("A")) == 3 and num(call.get("B")) == 3
        and num(call.get("C")) == 1
    ))
    _check(checks, "vm_resolved_wrapper",
           num(call.get("resolved_cfunction")) == base + WRAPPER
           and call.get("cfunction_matches_wrapper") is True
           and call.get("function_slot_matches_A") is True)
    _check(checks, "wrapper_entry",
           num(entry.get("pc")) == base + WRAPPER
           and entry.get("matched_call_and_thread") is True
           and num(entry.get("lua_state")) == num(call.get("lua_state")))
    first = found[2]
    second = found[4]
    _check(checks, "lua_index1_index2",
           num(first.get("x1")) == 1 and num(second.get("x1")) == 2)
    _check(checks, "lua_receiver_payload_matches_helper",
           found[3].get("helper1_matches_lua_receiver") is True)
    _check(checks, "global_slot",
           found[6].get("slot_matches_expected") is True
           and num(found[6].get("computed_slot")) == base + SLOT)
    loaded = found[7]
    blr = found[8]
    _check(checks, "slot_loaded_target",
           num(loaded.get("x8_target_candidate")) == base + CPP_TARGET
           and loaded.get("target_matches_static_candidate") is True)
    blr_addr = SLOW_BLR if path == "INDIRECT_SLOW_CALL" else DIRECT_BLR
    _check(checks, "blr_dynamic_x8",
           num(blr.get("pc")) == base + blr_addr
           and num(blr.get("x8_target_candidate")) == base + CPP_TARGET
           and blr.get("target_matches_static_candidate") is True
           and blr.get("x8_matches_loaded_slot") is True)
    _check(checks, "x0_holder_provenance",
           blr.get("x0_matches_holder_path") is True)
    mode = num(blr.get("w1_unsigned"))
    _check(checks, "numeric_argument_continuity",
           mode == num(found[5].get("result_w0_unsigned"))
           and mode == num(found[9].get("w1_unsigned")))
    target = found[9]
    _check(checks, "cpu_executed_target",
           num(target.get("pc")) == base + CPP_TARGET
           and target.get("matched_pending_blr") is True
           and num(target.get("x0_object")) == num(blr.get("x0_arg")))
    _check(checks, "blr_return",
           found[10].get("matched_pending_blr") is True
           and found[10].get("target_entry_seen") is True
           and num(found[10].get("call_target")) == base + CPP_TARGET)
    tail = found[11]
    _check(checks, "wrapper_zero_results",
           num(tail.get("pc")) == base + RET
           and tail.get("matched_call") is True
           and tail.get("returns_zero_lua_results") is True
           and num(tail.get("lua_cfunction_w0")) == 0)
    return {"complete": True, "kind": path, "checks_passed": checks,
            "object_field_snapshots_present":
                isinstance(blr.get("sampled_object_before"), dict)
                and isinstance(found[10].get("sampled_object_after"), dict),
            "memory_ssa_complete": False}

def analyze(events):
    if not events:
        return {"status": "NO_GUEST_EVENTS", "complete": False, "event_count": 0}
    try:
        seqs = [num(e["seq"]) for e in events]
        if seqs != sorted(seqs) or len(set(seqs)) != len(seqs):
            raise ValueError("non_monotonic_or_duplicate_sequence")
        if len({e.get("session") for e in events}) != 1:
            raise ValueError("mixed_sessions")
        if len({e.get("game") for e in events}) != 1:
            raise ValueError("mixed_games")
        game = events[0].get("game")
        if game not in HASHES:
            raise ValueError("unknown_game")
        if any(e.get("elf_sha256_claim") != HASHES[game] for e in events):
            raise ValueError("conflicting_hash_claim")
        session = _one(events, "SESSION")
        base = num(session["main_base"])
        if base <= 0 or base % 0x1000 != 0:
            raise ValueError("invalid_main_base")
        if session.get("exact_codeword_and_method_literal_checks") is not True:
            raise ValueError("instruction_checks_missing")
        if any(e.get("kind") == "DIAGNOSTIC" for e in events):
            raise ValueError("observer_diagnostic_present")
        calls = [e for e in events if e.get("kind") == "CALL_HANDLER"]
        if not calls:
            return {"status": "NO_TARGET_CALL", "complete": False,
                    "event_count": len(events), "independently_attested": False}
        evaluations = []
        for call in calls:
            try:
                evaluations.append(_validate_invocation(events, call, base))
            except (ValueError, KeyError, TypeError) as exc:
                evaluations.append({"complete": False, "reason": str(exc)[:120]})
        complete = [r for r in evaluations if r["complete"]]
        # A fixture must never be mistaken for a guest observation.
        synthetic = any(e.get("source") != "guest-gdb-readonly-self-reported" for e in events)
        status = ("SYNTHETIC_FIXTURE_ONLY" if synthetic else
                  "SELF_REPORTED_COMPLETE_NOT_INDEPENDENTLY_ATTESTED") if complete else "INCOMPLETE_OR_MISMATCH"
        return {"status": status, "complete": bool(complete),
                "event_count": len(events), "call_count": len(calls),
                "complete_invocation_count": len(complete),
                "evaluations": evaluations,
                "independently_attested": False,
                "cpp_object_type_verified": False,
                "memory_ssa_complete": False}
    except (ValueError, KeyError, TypeError) as exc:
        return {"status": "INVALID_TRACE", "complete": False,
                "event_count": len(events), "reason": str(exc)[:160],
                "independently_attested": False}

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--log", required=True, help="local GDB text log containing R18_EVENT lines")
    parser.add_argument("--out", help="JSON result path (without pointer material)")
    parser.add_argument("--require-complete", action="store_true")
    args = parser.parse_args()
    result = analyze(load_events(args.log))
    output = json.dumps(result, indent=2, sort_keys=True)
    if args.out:
        Path(args.out).write_text(output + "\n", encoding="utf-8")
    print(output)
    if args.require_complete and not result["complete"]:
        raise SystemExit(2)

if __name__ == "__main__":
    main()
