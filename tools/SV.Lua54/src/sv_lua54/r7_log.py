"""Convert GDB R7_SESSION / R7_EVENT lines into a non-attested trace.

No new runtime facts are inferred.  Conflicting sessions or activations are
rejected rather than merged. The caller must separately keep source logs.
"""
from __future__ import annotations

import json


def parse_gdb_log(raw: str, activation_id: str | None = None) -> dict:
    sessions = []
    events = []
    for line in raw.splitlines():
        if "R7_SESSION " in line:
            value = line.split("R7_SESSION ", 1)[1].strip()
            try:
                sessions.append(json.loads(value))
            except json.JSONDecodeError as e:
                raise ValueError("malformed R7_SESSION line") from e
        elif "R7_EVENT " in line:
            value = line.split("R7_EVENT ", 1)[1].strip()
            try:
                events.append(json.loads(value))
            except json.JSONDecodeError as e:
                raise ValueError("malformed R7_EVENT line") from e
    if len(sessions) != 1:
        raise ValueError(f"expected exactly one R7_SESSION, got {len(sessions)}")
    header = sessions[0]
    if not isinstance(header, dict):
        raise ValueError("R7_SESSION must be a JSON object")
    groups = {}
    for e in events:
        if not isinstance(e, dict):
            raise ValueError("R7_EVENT must be an object")
        ident = e.get("root_activation_id")
        if not isinstance(ident, str) or not ident.strip():
            raise ValueError("R7_EVENT missing root_activation_id")
        if not ident.startswith(header.get("session_id", "\x00") + "-root-"):
            raise ValueError("event belongs to different GDB session")
        groups.setdefault(ident, []).append(e)
    if activation_id is None and len(groups) > 1:
        raise ValueError("multiple root activations; specify --activation-id")
    if activation_id is None and len(groups) == 1:
        activation_id = next(iter(groups))
    if activation_id is not None and activation_id not in groups:
        raise ValueError("requested root activation not present in actual log")
    filtered = groups.get(activation_id, [])
    ordered = sorted(filtered, key=lambda e: e.get("seq", -1))
    if filtered != ordered:
        raise ValueError("event lines out of chronological sequence")
    if len({e.get("seq") for e in filtered}) != len(filtered):
        raise ValueError("duplicate event sequence numbers")
    report = {
        k: header.get(k) for k in (
            "schema_version", "source", "capture_mode", "session_id",
            "elf_sha256", "build_id", "main_dynamic_sha256",
            "main_base", "vm_dispatch_pc", "pc_mapping"
        )
    }
    report["events"] = filtered
    report["root_activation_selected"] = activation_id
    report["runtime_evidence_status"] = (
        "GDB_TEXT_LOG_SELF_REPORTED_NOT_INDEPENDENTLY_ATTESTED"
    )
    report["source_log_event_count"] = len(events)
    return report
