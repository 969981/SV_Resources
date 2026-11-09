#!/usr/bin/env python3
"""Decompile one trace-proven native C->F Proto and syntax-check Lua 5.4.

A lifted Proto loses its original parent closure's Upvalue bindings. This
tool verifies only standalone source syntax; never publishes game Lua source.
"""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys
import tempfile

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.chunk import Chunk, parse
from sv_lua54.trace import native_methods


def verify(raw: bytes, class_hash: str, function_hash: str,
           decompiler: Path, luac: str, timeout: int = 30) -> dict:
    chunk = parse(raw)
    methods = [m for m in native_methods(chunk)
               if m["class_hash"] == class_hash and m["function_hash"] == function_hash]
    if len(methods) != 1:
        raise ValueError(f"Expected one canonical C->F assignment, got {len(methods)}")
    method = methods[0]
    proto_by_id = {p.id: p for p in chunk.protos()}
    proto = proto_by_id[method["proto_id"]]
    lifted = Chunk(chunk.header, proto.upvalue_count, proto, "").encode()
    if parse(lifted).encode() != lifted:
        raise ValueError("standalone Proto failed parser roundtrip")
    result = {
        "input_sha256": chunk.input_sha256,
        "class_hash": class_hash, "function_hash": function_hash,
        "proto_id": proto.id, "original_code_offset": proto.code_offset,
        "instruction_count": proto.instruction_count,
        "derived_chunk_sha256": hashlib.sha256(lifted).hexdigest(),
        "derived_chunk_roundtrip": True,
        "decompile_status": "NOT_ATTEMPTED",
        "luac_5_4_syntax": "NOT_TESTED",
        "semantic_equivalence": "NOT_TESTED",
        "parent_upvalues_preserved": False,
        "diagnostic": "",
    }
    with tempfile.TemporaryDirectory(prefix="sv-cf-lua54-") as tmp:
        binary = Path(tmp) / "target.luac"
        source = Path(tmp) / "target.lua"
        binary.write_bytes(lifted)
        try:
            command = [str(decompiler), "-i", str(binary), "-D", "lua5.4",
                       "--generate-mode", "strict"]
            run = subprocess.run(command, capture_output=True, text=True,
                                 errors="replace", timeout=timeout)
            if run.returncode:
                result["decompile_status"] = "FAILED"
                result["diagnostic"] = (run.stderr or run.stdout)[-800:]
                return result
            if not run.stdout.strip():
                result["decompile_status"] = "EMPTY"
                return result
            result["decompile_status"] = "SOURCE_GENERATED"
            source.write_text(run.stdout, encoding="utf-8")
            compiled = subprocess.run([luac, "-p", str(source)],
                                      capture_output=True, text=True,
                                      errors="replace", timeout=timeout)
            result["luac_5_4_syntax"] = "PASS" if compiled.returncode == 0 else "FAIL"
            result["diagnostic"] = "" if compiled.returncode == 0 else compiled.stderr[-800:]
        except (OSError, subprocess.TimeoutExpired) as exc:
            result["diagnostic"] = str(exc)[-800:]
            if result["decompile_status"] == "NOT_ATTEMPTED":
                result["decompile_status"] = "TOOL_ERROR"
            else:
                result["luac_5_4_syntax"] = "TOOL_ERROR"
    return result


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("blua", type=Path)
    ap.add_argument("--class-hash", required=True)
    ap.add_argument("--function-hash", required=True)
    ap.add_argument("--expected-sha256", required=True)
    ap.add_argument("--decompiler", type=Path, required=True)
    ap.add_argument("--luac", default="luac5.4")
    ap.add_argument("--output", type=Path, required=True)
    args = ap.parse_args()
    raw = args.blua.read_bytes()
    actual = hashlib.sha256(raw).hexdigest()
    if actual != args.expected_sha256:
        ap.error(f"BLUA SHA-256 mismatch: {actual}")
    result = verify(raw, args.class_hash.upper(), args.function_hash.upper(),
                    args.decompiler, args.luac)
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(result, sort_keys=True, indent=2) + "\n",
                           encoding="utf-8")
    print(f"Proto {result['proto_id']} decompile={result['decompile_status']} "
          f"syntax={result['luac_5_4_syntax']} "
          f"diagnostic={result['diagnostic'][:160]!r}")


if __name__ == "__main__":
    main()
