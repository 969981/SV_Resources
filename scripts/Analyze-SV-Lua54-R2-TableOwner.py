#!/usr/bin/env python3
"""Pin 4.0.0 main_dynamic Proto 752 SETLIST ownership evidence.

Exports metadata and bounded opcode neighborhoods only; no game Lua source
or original .blua is copied into generated outputs.
"""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.chunk import parse
from sv_lua54.ownership import trace_owner
from sv_lua54.r1 import decode, op_record, setlist_records

REL = Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main_dynamic/main_dynamic.blua")
PIN = "ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572"
DEFAULT = Path("tools/SV.Lua54/fixtures/r2_proto752_ownership.json")
HIR = Path("tools/SV.Lua54/fixtures/r1_residual_hir_752.json")


def build(root: Path):
    native = (root / REL).read_bytes()
    sha = hashlib.sha256(native).hexdigest()
    if sha != PIN:
        raise RuntimeError(f"original input hash changed: {sha}")
    module = parse(native)
    p = next((x for x in module.protos() if x.id == 752), None)
    if p is None:
        raise RuntimeError("missing pinned Proto 752")
    batches = setlist_records(p, radius=15)
    if [e["pc"] for e in batches] != [5, 370, 665, 898, 1592]:
        raise RuntimeError("original SETLIST sites have changed")
    claims = [trace_owner(p, s["pc"], window=500) for s in batches]
    detailed = next(x for x in claims if x["setlist_pc"] == 665)
    ops = decode(p)
    window = [op_record(p, x) for x in ops[max(0, 665-35):665+4]]
    old = json.loads((root / HIR).read_text(encoding="utf-8"))
    contexts = old["hir_dump"]["table_set_list_summary"]["contexts"]
    marker = "table-set-list l15 start=1 values=l16, l17, l18 initializer-scope=None"
    if len(contexts) != 1 or marker not in " ".join(
        row["text"] for row in contexts[0]["excerpt"]
    ):
        raise RuntimeError("pinned residual HIR does not match original R1 evidence")
    # There are two B=3 / start=1 batches: pc 5 is LOADF constant sequence,
    # and pc 665 is the only one whose preceding opcodes contain ADD/MMBIN.
    # This is a unique *structural fingerprint*, not a compiler source map.
    candidates = [s["pc"] for s in batches
                  if s["count"] == 3 and s["array_index_first"] == 1]
    arithmetic = []
    for pc in candidates:
        prefix = ops[max(0, pc - 16):pc]
        if any(x.name in {"ADD", "ADDK", "MULK", "MMBIN", "MMBINK"} for x in prefix):
            arithmetic.append(pc)
    if candidates != [5, 665] or arithmetic != [665]:
        raise RuntimeError("SETLIST/HIR source signature no longer unique")
    return {
        "schema_version": 1,
        "status": "SOURCE_SITE_CANDIDATE_NOT_AST_EQUIVALENCE",
        "game_version": "SV Violet 4.0.0",
        "source_sha256": sha,
        "module": "main_dynamic",
        "proto_id": 752,
        "code_offset": p.code_offset,
        "original_instructions": p.instruction_count,
        "all_setlists": claims,
        "hir_residual": marker,
        "hir_raw_pc_compatible_candidates": candidates,
        "hir_matching_arithmetic_fingerprint": arithmetic,
        "hir_mapping_evidence": "UNIQUE_SETLIST_FIXED3_ARITHMETIC_SIGNATURE_NO_EXPLICIT_SOURCE_MAP",
        "focused_pc": 665,
        "focused_native_byte_offset": p.code_offset + 665*4,
        "focused_owner_trace": detailed,
        "focused_opcode_neighborhood": window,
        "outstanding_proofs": [
            "SSA definition/phi and dominance, including implicit MMBIN skip edges",
            "full expression effect ordering and producer allocation event timing",
            "table identity alias/escape and metatable attachment",
            "unluac HIR source site to raw PC authoritative correspondence",
            "AST source regeneration then luac5.4 and behavioral A/B",
        ],
        "disclaimer": "The raw native SETLIST producer relationship is diagnostic; no game code is rewritten or claimed equivalent.",
    }


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=ROOT)
    ap.add_argument("--output", type=Path, default=DEFAULT)
    ap.add_argument("--verify-only", action="store_true")
    args = ap.parse_args()
    root = args.root.resolve()
    result = build(root)
    path = args.output if args.output.is_absolute() else root / args.output
    encoded = (json.dumps(result, ensure_ascii=False, sort_keys=True, indent=2) + "\n").encode()
    if args.verify_only:
        if not path.is_file() or path.read_bytes() != encoded:
            raise SystemExit(f"stale or missing R2 proof report: {path}")
    else:
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_bytes(encoded)
    print(f"proto {result['proto_id']} SETLIST sites:",
          [x["setlist_pc"] for x in result["all_setlists"]])
    print(f"HIR arithmetic fingerprint PC: {result['hir_matching_arithmetic_fingerprint']}")
    print(f"owner candidate PC: {result['focused_owner_trace']['producer_pc']}")
    print(f"owner precheck: {result['focused_owner_trace']['native_precheck']}")
    print(f"proof_complete: {result['focused_owner_trace']['proof_complete']}")


if __name__ == "__main__":
    main()
