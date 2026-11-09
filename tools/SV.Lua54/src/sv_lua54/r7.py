"""R7: conservative checks for independently collected SV Lua VM evidence.

Never reads game process memory.  A syntactically consistent JSON trace is NOT
independent attestation that a real emulator/Switch executed it.
"""
from __future__ import annotations

from collections import Counter
import re

ELF_SHA = "d17403eaa9d844db82f647fd2f1518806b10c0518d53602fc0ac1766298fdba0"
BUILD_ID = "709bfd66115298640155fcc4979dba151c7cc79a"
BLUA_SHA = "ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572"
CLOSURES = {48: (18, 13), 49: (19, 13), 50: (20, 13), 12242: (752, 16)}
HEX = re.compile(r"^0x[0-9a-fA-F]+$")


def address(value):
    if not isinstance(value, str) or not HEX.fullmatch(value):
        raise ValueError("pointer must be a nonzero 0x-prefixed hex string")
    n = int(value, 16)
    if not 0 < n < (1 << 64):
        raise ValueError("pointer outside valid unsigned 64-bit nonzero range")
    return n


def expected_static(root):
    """Bind source PC/Proto/UpVal mapping to original bytecode."""
    from .r1 import decode
    if root.id != 0:
        raise ValueError("root Proto 0 required")
    ops = decode(root)
    if len(ops) <= 12242:
        raise ValueError("root missing mainBody PC")
    result = {}
    for pc, (proto_id, source_reg) in CLOSURES.items():
        ins = ops[pc]
        if ins.name != "CLOSURE" or ins.bx >= len(root.children):
            raise ValueError(f"PC{pc} is not a valid root CLOSURE")
        child = root.children[ins.bx]
        if child.id != proto_id or child.upvalue_count <= 1:
            raise ValueError(f"PC{pc} child Proto mismatch")
        desc = child.upvalues[3:6]
        if desc != bytes((1, source_reg, 0)):
            raise ValueError(f"PC{pc} UpVal1 source mismatch")
        result[pc] = {"proto": proto_id, "source_reg": source_reg,
                      "instruction_word": f"{ins.word:08X}",
                      "child_index": ins.bx}
    return result


def _check_event(e, static):
    if not isinstance(e, dict):
        raise ValueError("event must be an object")
    if e.get("kind") == "closure":
        pc = e.get("pc")
        if type(pc) is not int or pc not in CLOSURES:
            raise ValueError("unknown root closure PC")
        spec = static[pc]
        if (e.get("parent_proto") != 0 or e.get("proto") != spec["proto"]
                or e.get("source_reg") != spec["source_reg"]
                or e.get("upvalue_slot") != 1
                or str(e.get("instruction_word", "")).upper() != spec["instruction_word"]):
            raise ValueError(f"PC{pc} static fingerprint mismatch")
        for k in ("closure", "upvalue", "value", "lua_state", "root_frame"):
            address(e.get(k))
        expected_type = "table" if pc in (48, 49, 50) else "lua_closure"
        if e.get("value_type") != expected_type:
            raise ValueError(f"PC{pc} captured TValue type mismatch")
        if e.get("upvalue_state") not in ("open", "closed"):
            raise ValueError(f"PC{pc} upvalue state missing")
        return
    if e.get("kind") in ("enter", "return"):
        if e.get("proto") != 752:
            raise ValueError("only Proto752 call evidence in R7")
        for k in ("closure", "lua_state", "root_frame"):
            address(e.get(k))
        return
    raise ValueError("unsupported event kind")


def verify(trace, static):
    """Return explicit gates and errors; never claim live attestation."""
    errors = []
    gates = {
        "exact_version": False,
        "pc_proto_fingerprints": False,
        "same_R13_UpVal": False,
        "same_R13_Table": False,
        "mainBody_captures_Proto20": False,
        "mainBody_entered": False,
        "mainBody_returned": False,
        "independently_attested_live_execution": False,
    }
    if not isinstance(trace, dict):
        return {"status": "TRACE_INVALID", "gates": gates, "errors": ["trace is not an object"]}
    expected = {
        "schema_version": 1, "elf_sha256": ELF_SHA,
        "build_id": BUILD_ID, "main_dynamic_sha256": BLUA_SHA,
        "source": "gdb-readonly",
    }
    for key, value in expected.items():
        actual = trace.get(key)
        if key in ("elf_sha256", "build_id", "main_dynamic_sha256") and isinstance(actual, str):
            actual = actual.lower()
        if actual != value:
            errors.append(f"{key}: missing or mismatched original-version fingerprint")
    ev = trace.get("events")
    if not isinstance(ev, list):
        ev = []
        errors.append("events array missing")
    if len(ev) > 10000:
        errors.append("too many trace events")
        ev = ev[:10000]
    if not isinstance(trace.get("session_id"), str) or not trace.get("session_id", "").strip():
        errors.append("session_id missing")
    if trace.get("capture_mode") != "READ_ONLY":
        errors.append("capture_mode must be READ_ONLY")
    for key in ("main_base", "vm_dispatch_pc"):
        try:
            address(trace.get(key))
        except ValueError:
            errors.append(f"{key} must be an explicit runtime address")
    if trace.get("pc_mapping") not in ("savedpc-next", "dispatch-current"):
        errors.append("PC mapping convention not calibrated")
    gates["exact_version"] = not any("fingerprint" in s for s in errors)
    seen = {}
    last_seq = -1
    scope = None
    for e in ev:
        try:
            _check_event(e, static)
            seq = e.get("seq")
            if type(seq) is not int or seq <= last_seq:
                raise ValueError("nonmonotonic sequence")
            last_seq = seq
            sample_scope = (address(e.get("lua_state")), address(e.get("root_frame")))
            if scope is None:
                scope = sample_scope
            elif sample_scope != scope:
                raise ValueError("different lua_State/root frame; do not splice instances")
            kind = e["kind"]
            pc = e.get("pc") if kind == "closure" else kind
            if pc in seen:
                raise ValueError(f"duplicate {pc} event for same root frame")
            seen[pc] = e
        except (ValueError, KeyError, TypeError) as ex:
            errors.append(f"event: {ex}")
    gates["pc_proto_fingerprints"] = not any(s.startswith("event:") for s in errors)
    if all(pc in seen for pc in CLOSURES) and gates["pc_proto_fingerprints"]:
        first = [seen[i] for i in (48, 49, 50)]
        uv = [address(x["upvalue"]) for x in first]
        tbl = [address(x["value"]) for x in first]
        closures = [address(x["closure"]) for x in first]
        gates["same_R13_UpVal"] = len(set(uv)) == 1
        gates["same_R13_Table"] = len(set(tbl)) == 1
        if len(set(closures)) != 3:
            errors.append("three CLOSURE sites must yield distinct closure identities")
        mainbody = seen[12242]
        # An identical table value alone is insufficient: both UpVal pointer
        # and table identity must match, same root frame and session.
        gates["mainBody_captures_Proto20"] = (
            address(mainbody["value"]) == address(seen[50]["closure"])
            and address(mainbody["upvalue"]) != address(seen[50]["upvalue"])
        )
    for k in ("enter", "return"):
        if k in seen and 12242 in seen:
            if (address(seen[k]["closure"]) == address(seen[12242]["closure"])
                    and seen[k]["seq"] > seen[12242]["seq"]):
                gates["mainBody_entered" if k == "enter" else "mainBody_returned"] = True
    if "return" in seen and "enter" in seen and seen["return"]["seq"] <= seen["enter"]["seq"]:
        gates["mainBody_returned"] = False
        errors.append("return precedes enter")
    missing = [str(x) for x in (48, 49, 50, 12242) if x not in seen]
    if missing:
        errors.append("missing closure events at PC: " + ", ".join(missing))
    # Unsupported source metadata and fabricated samples cannot ever be
    # promoted to independently witnessed real-game execution by this script.
    proof_gates = ("exact_version", "pc_proto_fingerprints",
                   "same_R13_UpVal", "same_R13_Table",
                   "mainBody_captures_Proto20", "mainBody_entered")
    consistent = not errors and all(gates[g] for g in proof_gates)
    if not ev:
        status = "NOT_OBSERVED"
    elif consistent:
        status = "TRACE_SELF_REPORTED_CONSISTENT_NOT_INDEPENDENTLY_ATTESTED"
    else:
        status = "TRACE_INCOMPLETE_OR_CONTRADICTORY"
    return {
        "status": status, "gates": gates, "errors": errors,
        "counts": dict(Counter(str(e.get("kind", "INVALID")) for e in ev if isinstance(e, dict))),
        "runtime_mainBody_semantic_parity": "NOT_VERIFIED",
        "caution": "Trace checks only structure. Live instrumentation, actual VM identity and C API effects are not independently attested.",
    }
