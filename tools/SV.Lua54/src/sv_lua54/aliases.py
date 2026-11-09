"""Evidence-only shared Upvalue-cell alias audit for pinned Lua 5.4 chunks.

A parent stack register captured by child closures becomes a shared UpVal
cell in that parent activation. SETUPVAL is a possible producer, not an
observed runtime write. No raw game code is published.
"""
from __future__ import annotations

import argparse
from collections import Counter
import json
from pathlib import Path

from .chunk import Chunk, parse
from .trace import instructions, native_methods


def ancestor_register(nodes, proto_id: int, slot: int, root_id: int = 0):
    """Find root-stack capture through zero or more instack=0 parent links."""
    path = []
    current = proto_id
    for _ in range(160):
        p = nodes[current]
        if p.parent_id is None or not 0 <= slot < p.upvalue_count:
            return None, path
        instack, index, kind = p.upvalues[3*slot:3*slot+3]
        path.append({"proto_id": current, "upvalue_slot": slot,
                     "instack": instack, "index": index, "kind": kind})
        if instack == 1:
            return (index if p.parent_id == root_id else None), path
        if instack != 0:
            return None, path
        current, slot = p.parent_id, index
    raise ValueError("possible cyclic Upvalue lineage")


def alias_groups(chunk: Chunk, registers=(55, 58), max_details=48):
    by_id = {p.id:p for p in chunk.protos()}
    labels = {}
    for defn in native_methods(chunk):
        labels.setdefault(defn["proto_id"], []).append({
            "class_hash": defn["class_hash"],
            "function_hash": defn["function_hash"]})
    selected = set(registers)
    groups = {reg: {"root_register": reg, "holder_count": 0,
                    "potential_setupval_count": 0, "potential_settabup_count": 0,
                    "direct_root_child_count": 0, "sample_holders": [],
                    "setupval_sites": [], "settabup_sites": []}
              for reg in sorted(selected)}
    for p in chunk.protos():
        if p.id == 0 or p.upvalue_count == 0:
            continue
        decoded = None
        for slot in range(p.upvalue_count):
            reg, chain = ancestor_register(by_id, p.id, slot)
            if reg not in selected:
                continue
            g = groups[reg]
            g["holder_count"] += 1
            if p.parent_id == 0:
                g["direct_root_child_count"] += 1
            if decoded is None:
                decoded = instructions(p)
            setup = [pc for pc, (op,a,b,c,k,bx,sj) in enumerate(decoded)
                     if op == "SETUPVAL" and b == slot]
            settab = [pc for pc, (op,a,b,c,k,bx,sj) in enumerate(decoded)
                      if op == "SETTABUP" and a == slot]
            g["potential_setupval_count"] += len(setup)
            g["potential_settabup_count"] += len(settab)
            evidence = {
                "proto_id": p.id, "slot": slot, "lineage": chain,
                "method_hash_owners": labels.get(p.id, []),
                "setupval_count": len(setup),
                "settabup_count": len(settab),
            }
            if len(g["sample_holders"]) < max_details:
                g["sample_holders"].append(evidence)
            for pc in setup:
                if len(g["setupval_sites"]) < max_details:
                    g["setupval_sites"].append({
                        "proto_id": p.id, "upvalue_slot": slot,
                        "pc":pc, "file_offset": p.code_offset+4*pc,
                        "method_hash_owners": labels.get(p.id, [])})
            for pc in settab:
                if len(g["settabup_sites"]) < max_details:
                    g["settabup_sites"].append({
                        "proto_id": p.id, "upvalue_slot": slot,
                        "pc":pc, "file_offset": p.code_offset+4*pc})
    return {
        "source_sha256": chunk.input_sha256,
        "groups": groups,
        "interpretation": [
            "Only Lua Proto Upvalue descriptors are used to identify same-parent-cell alias candidates",
            "SETUPVAL sites are statically capable of writing the cell; they may never execute",
            "SETTABUP changes an indexed field, not the Upvalue cell's binding",
            "Proto identity is not a Closure instance; separate root activations have separate cells",
            "Runtime contents, object metatables and execution order remain unverified",
        ],
    }


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("blua",type=Path)
    ap.add_argument("--expected-sha256",required=True)
    ap.add_argument("--registers", default="55,58")
    ap.add_argument("--output",type=Path,required=True)
    args=ap.parse_args()
    chunk=parse(args.blua.read_bytes())
    if chunk.input_sha256 != args.expected_sha256:
        ap.error("source hash mismatch")
    reg=[int(x) for x in args.registers.split(",") if x.strip()]
    data=alias_groups(chunk,reg)
    args.output.write_text(json.dumps(data,indent=2,sort_keys=True)+"\n",encoding="utf-8")
    for reg,grp in data["groups"].items():
        print("UPVALUE_ALIAS",reg,"holders",grp["holder_count"],
              "SETUPVAL",grp["potential_setupval_count"],
              "SETTABUP",grp["potential_settabup_count"])


if __name__=="__main__":
    main()
