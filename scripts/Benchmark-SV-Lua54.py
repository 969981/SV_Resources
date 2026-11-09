#!/usr/bin/env python3
"""Build a pinned 100-prototype SV Lua54 benchmark cohort, then optionally
test strict decompilation and Lua 5.4 syntax. No derived game Lua is published.

Each isolated sample is a lift of a nested native Prototype to a standalone
Lua 5.4 chunk; it retains its bytecode and children but cannot preserve
external runtime _ENV/Upvalue bindings. Successful syntax != semantic parity.
"""
from __future__ import annotations

import argparse
from collections import Counter, defaultdict
import hashlib
import json
from pathlib import Path
import struct
import subprocess
import sys
import tempfile

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.chunk import Chunk, parse

VIRTUAL = Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release")
COHORT = Path("tools/SV.Lua54/fixtures/benchmark_cohort.json")
REPORT = Path("tools/SV.Lua54/fixtures/benchmark_backend_report.json")
QUOTAS = {
    "main": 60, "main_dynamic": 25, "dll_danbattle": 5,
    "dll_picnic": 3, "dll_stadium": 5, "dll_util": 2
}
OPNAMES = """MOVE LOADI LOADF LOADK LOADKX LOADFALSE LFALSESKIP LOADTRUE LOADNIL GETUPVAL SETUPVAL GETTABUP GETTABLE GETI GETFIELD SETTABUP SETTABLE SETI SETFIELD NEWTABLE SELF ADDI ADDK SUBK MULK MODK POWK DIVK IDIVK BANDK BORK BXORK SHRI SHLI ADD SUB MUL MOD POW DIV IDIV BAND BOR BXOR SHL SHR MMBIN MMBINI MMBINK UNM BNOT NOT LEN CONCAT CLOSE TBC JMP EQ LT LE EQK EQI LTI LEI GTI GEI TEST TESTSET CALL TAILCALL RETURN RETURN0 RETURN1 FORLOOP FORPREP TFORPREP TFORCALL TFORLOOP SETLIST CLOSURE VARARG VARARGPREP EXTRAARG""".split()
LOOPS = {"FORLOOP", "FORPREP", "TFORPREP", "TFORCALL", "TFORLOOP"}
BRANCHES = {"JMP", "EQ", "LT", "LE", "EQK", "EQI", "LTI", "LEI", "GTI", "GEI", "TEST", "TESTSET", "LFALSESKIP"}


def features(proto) -> dict:
    opids = (word[0] & 127 for word in struct.iter_unpack("<I", proto.code))
    opcodes = {OPNAMES[i] if i < len(OPNAMES) else f"UNSUPPORTED_{i}" for i in opids}
    return {
        "loop": bool(opcodes & LOOPS),
        "branch": bool(opcodes & BRANCHES),
        "closure": bool(proto.children) or "CLOSURE" in opcodes,
        "close": bool(opcodes & {"TBC", "CLOSE"}),
        "vararg": "VARARG" in opcodes or "VARARGPREP" in opcodes,
        "call": bool(opcodes & {"CALL", "TAILCALL"}),
        "numeric": any(c.tag in (3, 19) for c in proto.constants),
        "has_upvalues": bool(proto.upvalues),
        "large": proto.instruction_count >= 150,
    }


def category(p, flags: dict) -> str:
    if flags["close"]:
        return "close"
    if flags["loop"]:
        return "loop"
    if flags["branch"]:
        return "branch"
    if flags["closure"]:
        return "closure"
    if flags["vararg"]:
        return "vararg"
    if p.instruction_count >= 150:
        return "large"
    if p.instruction_count >= 40:
        return "medium"
    if p.instruction_count <= 10:
        return "tiny"
    return "simple"


def select(module: str, chunk: Chunk, quota: int):
    candidates = defaultdict(list)
    for p in chunk.protos():
        if p.id == 0 or p.instruction_count > 10_000:
            continue  # root is the full parent module; avoid giant derived chunks
        f = features(p)
        candidates[category(p, f)].append((p, f))
    if sum(map(len, candidates.values())) < quota:
        raise ValueError(f"{module} has too few candidate prototypes")
    for group in candidates.values():
        group.sort(key=lambda item: hashlib.sha256(f"{module}:{item[0].id}".encode()).hexdigest())
    groups = ["tiny", "simple", "medium", "large", "branch", "loop", "closure", "vararg", "close"]
    selected = []
    while len(selected) < quota:
        changed = False
        for bucket in groups:
            if candidates[bucket] and len(selected) < quota:
                selected.append((bucket, *candidates[bucket].pop(0)))
                changed = True
        if not changed:
            raise RuntimeError("unexpected empty cohort buckets")
    return selected


def build(root: Path):
    corpus = []
    raw_samples = []
    for module, quota in QUOTAS.items():
        filename = VIRTUAL / module / f"{module}.blua"
        chunk = parse((root / filename).read_bytes())
        for bucket, p, f in select(module, chunk, quota):
            lift = Chunk(chunk.header, p.upvalue_count, p, "").encode()
            if parse(lift).encode() != lift:
                raise RuntimeError(f"derived prototype {module}:{p.id} failed IR roundtrip")
            entry = {
                "module": module,
                "proto_id": p.id,
                "parent_proto_id": p.parent_id,
                "original_code_offset": p.code_offset,
                "instruction_count": p.instruction_count,
                "constant_count": len(p.constants),
                "child_proto_count": len(p.children),
                "upvalue_count": p.upvalue_count,
                "bucket": bucket,
                "features": f,
                "derived_chunk_sha256": hashlib.sha256(lift).hexdigest(),
                "lifted_proto_not_runtime_equivalent": True,
            }
            corpus.append(entry)
            raw_samples.append(lift)
        print(f"Selected {quota} native prototypes from {module}", flush=True)
    return {
        "schema_version": 1,
        "game_version": "SV Violet 4.0.0",
        "selection": "deterministic SHA256-ranked stratification; excludes entire roots and prototypes >10000 instructions",
        "caution": "Lifted proto chunks are structurally valid but may lack parent runtime Upvalue context.",
        "status": "COHORT_ONLY_NOT_DECOMPILED",
        "count": len(corpus),
        "per_module": dict(QUOTAS),
        "bucket_counts": dict(sorted(Counter(x["bucket"] for x in corpus).items())),
        "samples": corpus,
    }, raw_samples


def encode_json(data) -> bytes:
    return (json.dumps(data, sort_keys=True, ensure_ascii=False, indent=2) + "\n").encode()


def bench(cohort: dict, samples: list[bytes], decompiler: Path, luac: str, timeout: int):
    if not decompiler.is_file():
        raise FileNotFoundError(decompiler)
    cases = []
    with tempfile.TemporaryDirectory(prefix="sv-lua54-r0-") as temp:
        tmp = Path(temp)
        for index, (meta, raw) in enumerate(zip(cohort["samples"], samples)):
            tag = f"{meta['module']}-{meta['proto_id']}"
            raw_path = tmp / f"{tag}.luac"
            raw_path.write_bytes(raw)
            run = None
            try:
                run = subprocess.run(
                    [str(decompiler), "-i", str(raw_path), "-D", "lua5.4",
                     "--generate-mode", "strict"],
                    capture_output=True, text=True, errors="replace", timeout=timeout,
                )
                text = run.stdout
                if run.returncode != 0:
                    state = "DECOMPILE_FAILED"
                    diagnostic = run.stderr[-500:] or text[-500:]
                elif not text.strip():
                    state = "EMPTY_OUTPUT"
                    diagnostic = "CLI returned empty Lua output"
                else:
                    recovered = tmp / f"{tag}.lua"
                    recovered.write_text(text, encoding="utf-8")
                    syntax = subprocess.run(
                        [luac, "-p", str(recovered)],
                        capture_output=True, text=True, errors="replace", timeout=timeout,
                    )
                    state = "LUA_SYNTAX_OK" if syntax.returncode == 0 else "LUA_SYNTAX_ERROR"
                    diagnostic = "" if syntax.returncode == 0 else syntax.stderr[-500:]
            except subprocess.TimeoutExpired:
                state, diagnostic = "TIMEOUT", f"exceeded {timeout}s"
            except OSError as exc:
                state, diagnostic = "EXEC_ERROR", str(exc)[:500]
            cases.append({
                "module": meta["module"], "proto_id": meta["proto_id"],
                "bucket": meta["bucket"], "state": state,
                "diagnostic": diagnostic,
                "semantic_equivalence": "NOT_TESTED",
            })
            if index % 10 == 9:
                print(f"Decompiled benchmark {index + 1}/{len(samples)}", flush=True)
    return {
        "schema_version": 1, "tool": "unluac-rs v1.4.4 strict Lua 5.4 mode",
        "status": "STATIC_DECOMPILER_BENCHMARK_ONLY",
        "cohort_count": len(cases),
        "states": dict(sorted(Counter(x["state"] for x in cases).items())),
        "cases": cases,
        "warning": "Strict decompile or luac -p success is not behavioral/runtime equivalence.",
    }


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=ROOT)
    ap.add_argument("--output", type=Path, default=COHORT)
    ap.add_argument("--verify-only", action="store_true")
    ap.add_argument("--decompiler", type=Path)
    ap.add_argument("--luac", default="luac5.4")
    ap.add_argument("--timeout", type=int, default=15)
    ap.add_argument("--report", type=Path, default=REPORT)
    args = ap.parse_args()
    cohort, samples = build(args.root.resolve())
    output = args.output if args.output.is_absolute() else args.root / args.output
    binary = encode_json(cohort)
    if args.verify_only:
        if not output.is_file() or output.read_bytes() != binary:
            raise SystemExit(f"missing/stale cohort {output}")
    else:
        output.parent.mkdir(parents=True, exist_ok=True)
        output.write_bytes(binary)
    if args.decompiler:
        report = bench(cohort, samples, args.decompiler.resolve(), args.luac, args.timeout)
        dst = args.report if args.report.is_absolute() else args.root / args.report
        dst.parent.mkdir(parents=True, exist_ok=True)
        dst.write_bytes(encode_json(report))
        print("Strict backend statuses:", report["states"], flush=True)
    print(f"Cohort ready: {cohort['count']} prototypes, strata: {cohort['bucket_counts']}", flush=True)


if __name__ == "__main__":
    main()
