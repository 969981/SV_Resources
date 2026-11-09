"""Read-only live SV Lua VM frame *identity* probe, pinned to original code bytes.

Checks the candidate ARM64 chain CallInfo.func -> TValue.gc -> LClosure.p
-> Proto.code; this is a version-specific *hypothesis* until a real guest
memory snapshot matches the exact full original Proto code SHA-256.

Never infers UpVal contents, return values, receiver types, or C functions.
No use of guest memory writes, no unbounded scans, no host pointers exported.
"""
from __future__ import annotations

import hashlib
import json
import struct

FRAME_LIMIT = 1_100_000
MAX_ADDRESS = (1 << 64) - 1


def _read_u64(reader, address):
    if not isinstance(address, int) or address < 0x10000 or address > MAX_ADDRESS-8 or address & 7:
        raise ValueError("invalid guest pointer")
    data = bytes(reader(address, 8))
    if len(data) != 8:
        raise ValueError("short guest pointer read")
    return struct.unpack("<Q", data)[0]


def expected_proto_manifest(chunk, setup_proto):
    """Original BLUA parser output only; do not accept a guessed game layout."""
    return {
        "root": {
            "proto_id":chunk.root.id,
            "code_sha256":hashlib.sha256(chunk.root.code).hexdigest(),
            "code_length_bytes":len(chunk.root.code),
            "target_pcs":[215522, 215523],
        },
        "setup": {
            "proto_id":setup_proto.id,
            "code_sha256":hashlib.sha256(setup_proto.code).hexdigest(),
            "code_length_bytes":len(setup_proto.code),
            "target_pcs":[7, 8, 11, 32, 47, 48, 83],
        },
    }


def validate_expected(manifest):
    if set(manifest) != {"root","setup"}:
        raise ValueError("manifest must have precisely root and setup")
    for name, row in manifest.items():
        length = row["code_length_bytes"]
        if not isinstance(length,int) or length < 4 or length > FRAME_LIMIT or length % 4:
            raise ValueError(f"{name}: code length not bounded")
        if (not isinstance(row["code_sha256"],str)
            or len(row["code_sha256"]) != 64
            or any(c not in "0123456789abcdef" for c in row["code_sha256"])):
            raise ValueError(f"{name}: invalid code SHA-256")
        if not all(isinstance(pc,int) and not isinstance(pc,bool)
                   and 0 <= pc < length//4 for pc in row["target_pcs"]):
            raise ValueError(f"{name}: target PC outside original code")


def inspect_frame(reader, ci_ptr, expected, *,
                  candidate_proto_code_offset=0x40, redact_pointers=True):
    """Conservative, finite CI/LClosure/Proto read with exact full-code validation.

    ATTENTION: offsets 0x20,0x18,0x40 are candidate ABI fields. A matching
    code SHA is required to accept a target Proto identity. savedpc must be
    inside that full image on a 4-byte boundary. PC semantics can be either
    current or next instruction, and are reported only as candidates.
    """
    validate_expected(expected)
    evidence = {
        "status":"UNVERIFIED_NATIVE_FRAME",
        "identity_basis":"UNVERIFIED_OFFSET_HYPOTHESIS",
        "proto_scope":None, "proto_id":None,
        "observed_code_sha256":None,
        "savedpc_index_candidate":None,
        "candidate_executing_pcs":[],
        "target_pc_overlap":[],
        "upvalue_cells":None, "call_receivers":None, "call_return_values":None,
        "runtime_behavior_verified":False,
        "pointer_values_redacted":bool(redact_pointers),
        "diagnostic":None,
    }
    try:
        func_slot = _read_u64(reader, ci_ptr)
        savedpc = _read_u64(reader, ci_ptr+0x20)
        closure = _read_u64(reader, func_slot)
        proto = _read_u64(reader, closure+0x18)
        if candidate_proto_code_offset != 0x40:
            raise ValueError("not allowed to scan alternative Proto.code offsets")
        code_ptr = _read_u64(reader, proto+candidate_proto_code_offset)
        if not redact_pointers:
            evidence["candidate_addresses"] = {
                "ci":hex(ci_ptr),"func_slot":hex(func_slot),
                "closure":hex(closure),"proto":hex(proto),
                "code_ptr":hex(code_ptr),"savedpc":hex(savedpc),
            }
        for scope, record in expected.items():
            length = record["code_length_bytes"]
            # Reject impossible saved PC before attempting large guest reads.
            if savedpc < code_ptr or savedpc > code_ptr+length or (savedpc-code_ptr)%4:
                continue
            original = bytes(reader(code_ptr,length))
            if len(original) != length:
                raise ValueError("short guest Proto.code read")
            digest = hashlib.sha256(original).hexdigest()
            if digest != record["code_sha256"]:
                continue
            candidate=(savedpc-code_ptr)//4
            evidence.update({
                "status":"ORIGINAL_PROTO_FULL_CODE_BYTES_MATCH",
                "identity_basis":"FULL_SHA256_OF_GUEST_PROTO_CODE_CANDIDATE",
                "proto_scope":scope, "proto_id":record["proto_id"],
                "observed_code_sha256":digest,
                "savedpc_index_candidate":candidate,
                "candidate_executing_pcs": [
                    pc for pc in (candidate-1,candidate)
                    if 0 <= pc < length//4
                ],
                "target_pc_overlap":[pc for pc in record["target_pcs"]
                   if pc in (candidate-1,candidate)],
            })
            break
        return evidence
    except Exception as exc:
        evidence["diagnostic"]=f"{type(exc).__name__}: {str(exc)[:150]}"
        return evidence


def main():
    import argparse
    from pathlib import Path
    import sys
    root=Path(__file__).resolve().parents[1]
    sys.path.insert(0,str(root/"tools"/"SV.Lua54"/"src"))
    from sv_lua54.chunk import parse
    from sv_lua54.trace import native_methods

    ap=argparse.ArgumentParser(description="Emit pinned original Proto code identity manifest; not a runtime trace")
    ap.add_argument("blua",type=Path)
    ap.add_argument("--expected-sha256",required=True)
    ap.add_argument("--output",type=Path,required=True)
    args=ap.parse_args()
    data=args.blua.read_bytes()
    if hashlib.sha256(data).hexdigest()!=args.expected_sha256:
        ap.error("BLUA input SHA-256 mismatch")
    chunk=parse(data)
    matches=[x for x in native_methods(chunk) if
             x["class_hash"]=="C850E69B34478276C" and
             x["function_hash"]=="F7C68FEDB79AB6396"]
    if len(matches)!=1:
        ap.error("Setup native root C/F definition ambiguous")
    proto=next(x for x in chunk.protos() if x.id==matches[0]["proto_id"])
    manifest=expected_proto_manifest(chunk,proto)
    validate_expected(manifest)
    args.output.parent.mkdir(parents=True,exist_ok=True)
    args.output.write_text(json.dumps({
        "original_blua_sha256":args.expected_sha256,
        "proto_code_identities":manifest,
        "runtime_status":"NOT_OBSERVED",
        "native_layout_offsets_verified_in_game":False,
    },sort_keys=True,indent=2)+"\n",encoding="utf-8")
    print("PINNED_ROOT_AND_SETUP_PROTO",[(key, row["proto_id"],
          row["code_length_bytes"],row["code_sha256"]) for key,row in manifest.items()])

if __name__=="__main__":
    main()
