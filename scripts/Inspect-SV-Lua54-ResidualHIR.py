#!/usr/bin/env python3
"""Inspect unluac-rs HIR for the remaining SV Lua 5.4 strict failure.

Never publish the lifted game chunk or full decompiled game source.
Only error classifications, bounded HIR table-set-list diagnostics, and
pinned source identity are serialized as JSON.
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

REL = Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main_dynamic/main_dynamic.blua")
OUT = Path("tools/SV.Lua54/fixtures/r1_residual_hir_752.json")
PIN = "ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572"


def summarize_dump(stdout: str, pattern: str = "table-set-list", window: int = 3, cap: int = 25):
    lines = stdout.splitlines()
    hits = [i for i, line in enumerate(lines) if pattern in line.lower()]
    contexts = []
    for i in hits[:cap]:
        excerpt = []
        for j in range(max(0, i-window), min(len(lines), i+window+1)):
            # Bounded *diagnostic* fragments, no complete source files.
            excerpt.append({"line": j+1, "text": lines[j][:260]})
        contexts.append({"match_line": i+1, "excerpt": excerpt})
    return {
        "line_count": len(lines),
        "hit_count": len(hits),
        "hit_limit": cap,
        "contexts": contexts,
    }


def capture(cmd: list[str], timeout=60):
    try:
        run = subprocess.run(cmd, capture_output=True, text=True,
                             errors="replace", timeout=timeout)
        return run.returncode, run.stdout, run.stderr
    except (subprocess.TimeoutExpired, OSError) as e:
        return -1, "", str(e)


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=ROOT)
    ap.add_argument("--backend", required=True, type=Path)
    ap.add_argument("--output", type=Path, default=OUT)
    args = ap.parse_args()
    path = args.root.resolve() / REL
    source = path.read_bytes()
    sha = hashlib.sha256(source).hexdigest()
    if sha != PIN:
        raise ValueError("main_dynamic original SHA differs from pinned SV 4.0.0")
    chunk = parse(source)
    nodes = {p.id: p for p in chunk.protos()}
    target = nodes[752]
    derived = Chunk(chunk.header, target.upvalue_count, target, "").encode()
    if parse(derived).encode() != derived:
        raise ValueError("derived test chunk did not round-trip")
    with tempfile.TemporaryDirectory(prefix="sv-lua54-hir-") as temp:
        native = Path(temp) / "proto752.luac"
        native.write_bytes(derived)
        base = [str(args.backend.resolve()), "-i", str(native), "-D", "lua5.4"]
        # Snapshot the HIR *before* AST lowering.  For this backend's 1.4.5
        # debugging interface, stopping after hir is a supported command.
        rc, out, err = capture(base + ["--dump", "hir", "--detail", "verbose",
                                       "--stop-after", "hir"], timeout=120)
        hir = {
            "exit_code": rc, "stderr_excerpt": err[-1500:],
            "table_set_list_summary": summarize_dump(out),
        }
        strict_rc, _, strict_err = capture(base + ["--generate-mode", "strict"])
        permissive_rc, permissive, permissive_err = capture(
            base + ["--generate-mode", "permissive"])
    result = {
        "schema_version": 1,
        "source_version": "SV Violet 4.0.0",
        "source_sha256": sha,
        "module": "main_dynamic",
        "proto_id": 752,
        "original_code_offset": target.code_offset,
        "original_instructions": target.instruction_count,
        "backend": "unluac-rs v1.4.5",
        "hir_dump": hir,
        "strict_exit_code": strict_rc,
        "strict_error_excerpt": strict_err[-1500:],
        "permissive_exit_code": permissive_rc,
        "permissive_error_excerpt": permissive_err[-1500:],
        "permissive_contains_unluac_diagnostic": "unluac error" in permissive.lower()
            or "table-set-list" in permissive.lower(),
        "permissive_not_equivalent": True,
        "not_a_decompilation_success": True,
        "warning": "This report contains diagnostic excerpts only; recovered source/HIR are not published or runtime verified.",
    }
    target_path = args.output if args.output.is_absolute() else args.root.resolve() / args.output
    target_path.parent.mkdir(parents=True, exist_ok=True)
    target_path.write_text(json.dumps(result, ensure_ascii=False, sort_keys=True, indent=2)+"\n", "utf-8")
    print("HIR lines:", hir["table_set_list_summary"]["line_count"],
          "remaining set-list hits:", hir["table_set_list_summary"]["hit_count"],
          "strict exit:", strict_rc,
          "permissive (diagnostic only):", permissive_rc,
          flush=True)


if __name__ == "__main__":
    main()
