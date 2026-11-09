#!/usr/bin/env python3
"""SLR R1 evidence: SETLIST PC diagnostics, conservative CFG, Upvalue capture
structure and exact C->F native ownership matched to Proto IDs.

Read-only source inputs. Produces deterministic metadata JSON and optional
full C->F/upvalue JSONL under caller-provided artifact paths.
"""
from __future__ import annotations

import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.chunk import parse
from sv_lua54.r1 import (
    annotate_methods, decode, direct_cf_methods, fnv1a, op_record,
    read_symbols, setlist_records, syntactic_edges, upvalue_records,
)

BASE = Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release")
NATIVE = Path("tools/SV.Lua54/fixtures/native_manifest.json")
COHORT = Path("tools/SV.Lua54/fixtures/benchmark_cohort.json")
REPORT = Path("tools/SV.Lua54/fixtures/r1_native_report.json")
HASHES = Path("tools/PokeDocs/SV/Hashlists/Lua")
RECOVERED = Path("tools/PokeDocs-Supplement/SV/Hashlists/Lua/recovered.tsv")
TARGETS = {"main": [2406, 3769], "main_dynamic": [752]}


def canonical_json(value) -> bytes:
    return (json.dumps(value, ensure_ascii=False, sort_keys=True, indent=2) + "\n").encode("utf-8")


def emit_jsonl(path: Path, rows) -> str:
    path.parent.mkdir(parents=True, exist_ok=True)
    hashobj = hashlib.sha256()
    with path.open("wb") as fd:
        for row in rows:
            line = (json.dumps(row, sort_keys=True, separators=(",", ":"),
                               ensure_ascii=False) + "\n").encode("utf-8")
            fd.write(line)
            hashobj.update(line)
    return hashobj.hexdigest()


def run(root: Path, method_index: Path | None = None, capture_index: Path | None = None) -> dict:
    manifest = json.loads((root / NATIVE).read_text("utf-8"))
    cohort = json.loads((root / COHORT).read_text("utf-8"))
    symbols = read_symbols(root / HASHES, root / RECOVERED)
    recorded = {x["module"]: x for x in manifest["sources"]}
    samples = {}
    for row in cohort["samples"]:
        samples.setdefault(row["module"], set()).add(row["proto_id"])
    module_data = []
    failure_cases = []
    all_edges = []
    all_captures = []
    class_count = Counter()
    method_count = Counter()
    types = Counter()
    cf_counts = {}
    for name in sorted(recorded):
        src = root / BASE / name / f"{name}.blua"
        data = src.read_bytes()
        sha = hashlib.sha256(data).hexdigest()
        if sha != recorded[name]["sha256"]:
            raise ValueError(f"{name} SHA differs from pinned native manifest")
        chunk = parse(data)
        protos = list(chunk.protos())
        if chunk.summary()["prototype_count"] != recorded[name]["prototype_count"]:
            raise ValueError(f"{name} prototype count differs from pinned manifest")
        cap, cap_errors = upvalue_records(chunk)
        all_captures.extend({"module": name, **x} for x in cap)
        edge, rejected = direct_cf_methods(chunk, name)
        cf_counts[name] = len(edge)
        annotated = annotate_methods(edge, symbols)
        all_edges.extend(annotated)
        for x in annotated:
            class_count[x["class_name_evidence"]] += 1
            method_count[x["function_name_evidence"]] += 1
        p_by_id = {p.id: p for p in protos}
        targeted = []
        for pid in TARGETS.get(name, ()):
            if pid not in p_by_id:
                raise ValueError(f"missing pinned failure case: {name}:{pid}")
            p = p_by_id[pid]
            setlists = setlist_records(p, radius=8)
            local_edges, local_defects = syntactic_edges(p)
            targeted.append({
                "proto_id": pid, "parent_proto_id": p.parent_id,
                "code_offset": p.code_offset, "instructions": p.instruction_count,
                "original_backend_error": "HIR proto#0 still contains residual table-set-list during AST lowering",
                "setlist_count": len(setlists),
                "setlists": setlists,
                "syntactic_cfg_edge_count": len(local_edges),
                "syntactic_cfg_defects": local_defects,
                "upvalues": [x for x in cap if x["proto_id"] == pid],
                "semantic_equivalence": "NOT_VERIFIED",
            })
        failure_cases.extend({"module": name, **x} for x in targeted)
        cohort_count = 0
        cohort_defects = Counter()
        cohort_edge_count = 0
        cohort_setlist_count = 0
        for pid in sorted(samples.get(name, ())):
            if pid not in p_by_id:
                raise ValueError(f"missing cohort proto {name}:{pid}")
            sample = p_by_id[pid]
            cg, problems = syntactic_edges(sample)
            cohort_count += 1
            cohort_edge_count += len(cg)
            cohort_setlist_count += len(setlist_records(sample, radius=0))
            cohort_defects.update(x["code"] for x in problems)
        seen_ops = Counter()
        for p in protos:
            for op in decode(p):
                if op.name in ("SETLIST", "CLOSURE", "GETUPVAL", "SETUPVAL",
                               "TBC", "CLOSE", "LOADKX", "NEWTABLE"):
                    seen_ops[op.name] += 1
        types.update(seen_ops)
        module_data.append({
            "module": name, "native_sha256": sha, "proto_count": len(protos),
            "capture_entries": len(cap), "capture_errors": cap_errors,
            "capture_classification": dict(sorted(Counter(x["binding"] for x in cap).items())),
            "closure_sites": sum(len(x["closure_sites"]) for x in cap),
            "direct_native_cf_methods": len(edge),
            "native_cf_register_rejections": dict(sorted(rejected.items())),
            "cohort_proto_count": cohort_count,
            "cohort_syntactic_edges": cohort_edge_count,
            "cohort_setlist_count": cohort_setlist_count,
            "cohort_cfg_problems": dict(sorted(cohort_defects.items())),
            "opcode_counts": dict(sorted(seen_ops.items())),
        })
        print(f"{name}: {len(protos)} proto, {len(cap)} captures, {len(edge)} native C/F, "
              f"{seen_ops['SETLIST']} SETLIST", flush=True)
    if cf_counts["main"] != 18991 or cf_counts["main_dynamic"] != 4736:
        raise ValueError(f"native C->F mapping failed established strict baseline: {cf_counts}")
    if len(all_edges) != 23727:
        raise ValueError(f"expected 23727 strict C/F assignments, found {len(all_edges)}")
    if sum(x["cohort_proto_count"] for x in module_data) != 100:
        raise ValueError("100-sample cohort coverage changed")
    cf_digest = None
    if method_index is not None:
        cf_digest = emit_jsonl(method_index, all_edges)
    capture_digest = None
    if capture_index is not None:
        capture_digest = emit_jsonl(capture_index, all_captures)
    return {
        "schema_version": 1,
        "game_version": "SV Violet 4.0.0",
        "status": "R1_NATIVE_PC_AND_CAPTURE_EVIDENCE_ONLY",
        "basis": "Real original Lua 5.4 code; not a gameplay execution or AST reconstruction",
        "source_manifest": NATIVE.as_posix(),
        "cohort_manifest": COHORT.as_posix(),
        "module_count": len(module_data),
        "method_edges_total": len(all_edges),
        "method_edges_by_module": dict(sorted(cf_counts.items())),
        "method_class_naming_counts": dict(sorted(class_count.items())),
        "method_function_naming_counts": dict(sorted(method_count.items())),
        "method_index_sha256": cf_digest,
        "capture_entries_total": len(all_captures),
        "capture_index_sha256": capture_digest,
        "selected_opcode_counts": dict(sorted(types.items())),
        "failures_in_original_strict_backend": failure_cases,
        "module_metrics": module_data,
        "caveats": [
            "SETLIST array indices and source register spans are native bytecode semantics, not a recovered table constructor AST.",
            "B=0 SETLIST uses runtime top and cannot be assigned a static item count.",
            "Upvalue capture maps lexical locations, not real runtime values or original variable names.",
            "C->F links are native eight-opcode assignments; recovered Hash names retain separate provenance.",
            "CFG records conservative opcode successor candidates, not SSA/behavior proof.",
        ],
    }


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=ROOT)
    ap.add_argument("--output", type=Path, default=REPORT)
    ap.add_argument("--method-index", type=Path, help="Optional derived C/F JSONL artifact path")
    ap.add_argument("--capture-index", type=Path, help="Optional Upvalue JSONL artifact path")
    ap.add_argument("--verify-only", action="store_true")
    args = ap.parse_args()
    root = args.root.resolve()
    def target(p):
        return p if p.is_absolute() else root / p
    report = run(root, target(args.method_index) if args.method_index else None,
                 target(args.capture_index) if args.capture_index else None)
    output = target(args.output)
    encoded = canonical_json(report)
    if args.verify_only:
        if not output.exists() or output.read_bytes() != encoded:
            raise SystemExit(f"stale R1 evidence report: {output}")
    else:
        output.parent.mkdir(parents=True, exist_ok=True)
        output.write_bytes(encoded)
    print("R1 summary:", report["method_edges_total"], "C/F edges,",
          report["capture_entries_total"], "capture descriptors,",
          len(report["failures_in_original_strict_backend"]), "focused failures")


if __name__ == "__main__":
    main()
