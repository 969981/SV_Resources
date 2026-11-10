#!/usr/bin/env python3
"""Lossless extraction and strict independently tested Lua5.4 source for ALL
root-level children of Pokémon SV 4.0.0 main.blua, sharded by original index.

This does not decompile the root initialization function. A successful shard is
not a complete/semantically equivalent main.lua.
"""
from __future__ import annotations
import argparse
from concurrent.futures import ThreadPoolExecutor, as_completed
from hashlib import sha256
import json
from pathlib import Path
import subprocess
import sys
from tempfile import TemporaryDirectory
from time import monotonic
from zipfile import ZipFile, ZIP_DEFLATED

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.chunk import Chunk, parse

REL = Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main/main.blua")
SHA = "c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815"


def one(pos, p, cli, luac, timeout, work):
    lifted = Chunk(work["header"], p.upvalue_count, p, "").encode()
    if parse(lifted).encode() != lifted:
        raise RuntimeError(f"round-trip invalid proto {p.id}")
    source = work["dir"] / f"native_{p.id}.luac"
    source.write_bytes(lifted)
    start = monotonic()
    try:
        proc = subprocess.run(
            [str(cli), "-i", str(source), "-D", "lua5.4", "--generate-mode", "strict"],
            capture_output=True, timeout=timeout, check=False,
        )
        if proc.returncode:
            return (pos, p.id, "DECOMPILER_REJECTED", len(lifted),
                    round(monotonic() - start, 3), proc.stderr.decode(errors="replace")[-350:], None)
        outfile = work["dir"] / f"proto_{p.id}.lua"
        outfile.write_bytes(proc.stdout)
        syntax = subprocess.run([luac, "-p", str(outfile)], capture_output=True,
                                timeout=20, check=False)
        if syntax.returncode:
            return (pos, p.id, "LUA_SYNTAX_REJECTED", len(lifted),
                    round(monotonic() - start, 3), syntax.stderr.decode(errors="replace")[-350:], None)
        return (pos, p.id, "STRICT_LUA_SYNTAX_OK", len(lifted),
                round(monotonic() - start, 3), "", outfile)
    except subprocess.TimeoutExpired:
        return (pos, p.id, "TIMEOUT", len(lifted),
                round(monotonic() - start, 3), "timeout", None)
    finally:
        source.unlink(missing_ok=True)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--backend", type=Path, required=True)
    ap.add_argument("--shard-index", type=int, required=True)
    ap.add_argument("--shard-count", type=int, default=8)
    ap.add_argument("--limit", type=int, default=0, help="0 for all children in shard")
    ap.add_argument("--timeout", type=int, default=15)
    ap.add_argument("--workers", type=int, default=2)
    ap.add_argument("--out", type=Path, required=True)
    ap.add_argument("--luac", default="luac5.4")
    args = ap.parse_args()
    if not 0 <= args.shard_index < args.shard_count:
        ap.error("invalid shard")
    args.out.parent.mkdir(parents=True, exist_ok=True)
    raw = (ROOT / REL).read_bytes()
    if sha256(raw).hexdigest() != SHA:
        raise RuntimeError("pinned original main.blua checksum differs")
    chunk = parse(raw)
    if len(list(chunk.protos())) != 37743 or chunk.encode() != raw:
        raise RuntimeError("original 37,743-proto parse/encode mismatch")
    selected = [(pos, p) for pos, p in enumerate(chunk.root.children)
                if pos % args.shard_count == args.shard_index]
    if args.limit:
        selected = selected[:args.limit]
    print(f"SLR_SHARD_START index={args.shard_index} total={len(selected)}", flush=True)

    with TemporaryDirectory(prefix=f"svmain-shard-{args.shard_index:02d}-") as tmp:
        work = {"dir": Path(tmp), "header": chunk.header}
        found = []
        with ThreadPoolExecutor(max_workers=args.workers) as pool:
            futures = {pool.submit(one, pos, p, args.backend, args.luac,
                                   args.timeout, work): (pos, p.id)
                       for pos, p in selected}
            for i, future in enumerate(as_completed(futures), 1):
                try:
                    found.append(future.result())
                except Exception as exc:
                    pos, pid = futures[future]
                    found.append((pos, pid, "CRASH", 0, 0, repr(exc), None))
                if i % 250 == 0:
                    ok = sum(row[2] == "STRICT_LUA_SYNTAX_OK" for row in found)
                    print(f"SLR_SHARD_PROGRESS {i}/{len(selected)} valid={ok}", flush=True)
        found.sort()
        manifest = {
            "source": str(REL), "sha256": SHA,
            "all_original_protos": 37743,
            "root_direct_children": len(chunk.root.children),
            "root_instructions": chunk.root.instruction_count,
            "scope": "direct root child function sources only; does not include root/entrypoint",
            "shard": args.shard_index, "shards": args.shard_count,
            "selected": len(found),
            "strict_valid": sum(row[2] == "STRICT_LUA_SYNTAX_OK" for row in found),
            "failures": [{
                "child_index": row[0], "proto_id": row[1], "state": row[2],
                "elapsed_seconds": row[4], "error": row[5],
            } for row in found if row[2] != "STRICT_LUA_SYNTAX_OK"],
            "sources": [{"child_index": row[0], "proto_id": row[1],
                         "native_lift_bytes": row[3]}
                        for row in found if row[2] == "STRICT_LUA_SYNTAX_OK"],
            "warning": "Syntax validation alone is not runtime equivalence; upvalues require original parent capture context.",
        }
        with ZipFile(args.out, "w", compression=ZIP_DEFLATED, compresslevel=5) as z:
            z.writestr("manifest.json", json.dumps(manifest, ensure_ascii=False, indent=2))
            z.writestr("README.txt", (
                "Strict standalone prototype sources recovered from pinned Pokémon SV 4.0.0 main.blua.\n"
                "This is NOT a full main.lua, not a complete runnable entrypoint, and not equivalent to the original game script.\n"
                "Each recovered function still needs its parent upvalue captures and root registration order.\n"))
            for row in found:
                if row[6] is not None:
                    z.write(row[6], f"isolated_protos/proto_{row[1]}.lua")
    print(f"SLR_SHARD_SUMMARY total={manifest['selected']} valid={manifest['strict_valid']} failed={len(manifest['failures'])} artifact={args.out}", flush=True)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
