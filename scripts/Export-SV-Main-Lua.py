#!/usr/bin/env python3
"""Best-effort *actual* Lua 5.4 decompilation of the pinned SV 4.0.0 main.blua.

- Does not touch the original BLUA.
- A recovered main.lua is emitted ONLY when strict mode and Lua syntax both pass.
- A syntax pass is NOT bytecode/semantic/game runtime equivalence.
- On failure, logs/manifest and separately named sampled prototypes are emitted.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile
from time import monotonic

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.chunk import Chunk, parse

REL = Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main/main.blua")
EXPECTED_SHA = "c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815"
EXPECTED_SIZE = 12912264
EXPECTED_PROTOS = 37743


def run_decompiler(cli: Path, source: Path, dest: Path, mode: str, limit: int):
    dest.parent.mkdir(parents=True, exist_ok=True)
    diag = dest.with_suffix(".stderr.txt")
    start = monotonic()
    with dest.open("wb") as out, diag.open("wb") as err:
        try:
            p = subprocess.run(
                [str(cli), "-i", str(source), "-D", "lua5.4",
                 "--generate-mode", mode],
                stdout=out, stderr=err, timeout=limit,
                check=False,
            )
            rc = p.returncode
            state = "EXITED"
        except subprocess.TimeoutExpired:
            rc = None
            state = "TIMEOUT"
        except OSError as exc:
            rc = None
            state = "EXEC_ERROR"
            err.write(str(exc).encode())
    return {
        "mode": mode, "state": state, "returncode": rc,
        "elapsed_seconds": round(monotonic() - start, 2),
        "output_bytes": dest.stat().st_size if dest.exists() else 0,
        "stderr_tail": diag.read_bytes()[-3000:].decode("utf-8", errors="replace"),
        "output": dest.name,
    }


def syntax_check(luac: str, path: Path):
    try:
        r = subprocess.run([luac, "-p", str(path)], capture_output=True,
                           text=True, timeout=90, check=False)
        return {"ok": r.returncode == 0, "returncode": r.returncode,
                "diagnostic": (r.stderr or r.stdout)[-1000:]}
    except Exception as exc:
        return {"ok": False, "diagnostic": str(exc)}


def export_samples(chunk, cli: Path, luac: str, out: Path, count: int):
    samples = out / "proto_samples"
    samples.mkdir(exist_ok=True)
    direct = chunk.root.children
    # Evenly distribute samples along original initialization order.
    positions = sorted(set(range(min(count // 4, len(direct)))) |
                       {int(i * (len(direct) - 1) / max(1, count - 1))
                        for i in range(count)})
    results = []
    with tempfile.TemporaryDirectory(prefix="sv400-protos-") as temp:
        for pos in positions[:count]:
            proto = direct[pos]
            raw = Chunk(chunk.header, proto.upvalue_count, proto, "").encode()
            if parse(raw).encode() != raw:
                raise RuntimeError(f"lift roundtrip failed: proto {proto.id}")
            src = Path(temp) / f"proto_{proto.id}.luac"
            src.write_bytes(raw)
            dest = samples / f"proto_{proto.id}.lua"
            try:
                entry = run_decompiler(cli, src, dest, "strict", 30)
                syntax = (syntax_check(luac, dest)
                          if entry["returncode"] == 0 and entry["output_bytes"] else {"ok": False})
                if not syntax["ok"]:
                    dest.unlink(missing_ok=True)
                results.append({"proto_id": proto.id, "direct_child_index": pos,
                                "original_instruction_count": proto.instruction_count,
                                "lifted_upvalues_require_parent_context": bool(proto.upvalue_count),
                                "state": "LUA_SYNTAX_OK" if syntax["ok"] else entry["state"],
                                "diagnostic": syntax.get("diagnostic", "") or entry["stderr_tail"][-500:]})
            except Exception as exc:
                results.append({"proto_id": proto.id, "state": "FAILED", "error": str(exc)})
            if len(results) % 20 == 0:
                print(f"sampled {len(results)}/{len(positions[:count])}", flush=True)
    return results


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--input", type=Path, default=ROOT / REL)
    ap.add_argument("--backend", type=Path, required=True)
    ap.add_argument("--luac", default="luac5.4")
    ap.add_argument("--out", type=Path, required=True)
    ap.add_argument("--strict-timeout", type=int, default=1100)
    ap.add_argument("--permissive-timeout", type=int, default=480)
    ap.add_argument("--fallback-samples", type=int, default=120)
    args = ap.parse_args()

    out = args.out.resolve()
    out.mkdir(parents=True, exist_ok=True)
    raw = args.input.read_bytes()
    sha = hashlib.sha256(raw).hexdigest()
    if (sha, len(raw)) != (EXPECTED_SHA, EXPECTED_SIZE):
        raise RuntimeError(f"Refusing unexpected main.blua: sha256={sha}, size={len(raw)}")
    chunk = parse(raw)
    protos = list(chunk.protos())
    if len(protos) != EXPECTED_PROTOS or chunk.encode() != raw:
        raise RuntimeError("Prototype count/byte-exact parser roundtrip failed")
    manifest = {
        "input_relative_path": REL.as_posix(),
        "input_sha256": sha,
        "input_bytes": len(raw),
        "prototypes": len(protos),
        "instructions": sum(p.instruction_count for p in protos),
        "root_instructions": chunk.root.instruction_count,
        "root_direct_children": len(chunk.root.children),
        "backend": str(args.backend),
        "status": "NOT_DECOMPILED",
        "strict": None, "permissive": None,
        "warning": "Recovered source is not the original Haxe/Lua source. Syntax alone never proves game/runtime equivalence.",
    }
    try:
        strict_dest = out / "main.strict.candidate.lua"
        strict = run_decompiler(args.backend, args.input, strict_dest, "strict", args.strict_timeout)
        strict["syntax"] = (syntax_check(args.luac, strict_dest)
                            if strict["returncode"] == 0 and strict["output_bytes"] else {"ok": False})
        manifest["strict"] = strict
        if strict["syntax"]["ok"]:
            shutil.copyfile(strict_dest, out / "main.lua")
            manifest["status"] = "STRICT_LUA_SYNTAX_OK_RUNTIME_UNVERIFIED"
        else:
            strict_dest.unlink(missing_ok=True)
            permissive_dest = out / "main.permissive.candidate.lua"
            permissive = run_decompiler(args.backend, args.input, permissive_dest,
                                        "permissive", args.permissive_timeout)
            permissive["syntax"] = (syntax_check(args.luac, permissive_dest)
                                   if permissive["returncode"] == 0 and permissive["output_bytes"] else {"ok": False})
            manifest["permissive"] = permissive
            if permissive["syntax"]["ok"]:
                manifest["status"] = "PERMISSIVE_ONLY_LUA_SYNTAX_OK_NOT_STRICT"
            else:
                permissive_dest.unlink(missing_ok=True)
                manifest["status"] = "FULL_FILE_DECOMPILATION_FAILED"
                if args.fallback_samples:
                    manifest["fallback_samples"] = export_samples(
                        chunk, args.backend, args.luac, out, args.fallback_samples)
                    manifest["fallback_valid"] = sum(
                        x["state"] == "LUA_SYNTAX_OK" for x in manifest["fallback_samples"])
    finally:
        (out / "manifest.json").write_text(
            json.dumps(manifest, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
        print("FINAL_STATUS", manifest["status"], flush=True)
        print("OUTPUT_DIR", out, flush=True)
    return 0 if manifest["status"] == "STRICT_LUA_SYNTAX_OK_RUNTIME_UNVERIFIED" else 2


if __name__ == "__main__":
    raise SystemExit(main())
