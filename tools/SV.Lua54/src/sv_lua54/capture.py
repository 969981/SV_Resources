"""Inspect real CLOSURE creation-site register capture with CFG block bounds.

A block-local value is a static symbol candidate; no runtime Upvalue cell
or object identity is recovered by the original Lua 5.4 binary chunk alone.
"""
from __future__ import annotations

import argparse
import json
from pathlib import Path

from .chunk import Chunk, parse
from .trace import basic_blocks, instructions, native_methods
from .dataflow import environment_slots, transfer, upvalue_lineage


def capture_context(chunk: Chunk, method: dict):
    protos = {p.id: p for p in chunk.protos()}
    body = protos[method["proto_id"]]
    parent = protos[body.parent_id]
    closure_pc = method["closure_pc"]
    code = instructions(parent)
    op, a, b, c, k, bx, sj = code[closure_pc]
    if op != "CLOSURE" or bx != method["child_index"] or parent.children[bx].id != body.id:
        raise ValueError("method definition does not point to original parent CLOSURE")
    blocks, _, _ = basic_blocks(parent)
    block = next((z for z in blocks
                  if z["start_pc"] <= closure_pc < z["end_pc_exclusive"]), None)
    if block is None:
        raise ValueError("CLOSURE PC not found in parent CFG")
    reg_state = {}
    env = environment_slots(chunk, parent)
    source_pc = {}
    for pc in range(block["start_pc"], closure_pc):
        state = transfer(parent, pc, code, reg_state, env)
        for reg in list(set(reg_state) | set(state)):
            if reg_state.get(reg) != state.get(reg):
                source_pc[reg] = pc if reg in state else None
        reg_state = state

    rows = []
    for slot in range(body.upvalue_count):
        chain = upvalue_lineage(chunk, body.id, slot)
        leaf = chain[0]
        row = {"slot": slot, "upvalue_lineage": chain,
               "captured_register": None, "same_block_fact": None,
               "same_block_source_pc": None,
               "capture_status": "NO_PARENT_REGISTER_CAPTURE"}
        if leaf.get("status") == "PARENT_REGISTER_CAPTURE_AT_CLOSURE":
            reg = leaf["captured_index"]
            fact = reg_state.get(reg)
            row.update({
                "captured_register": reg,
                "same_block_fact": fact.json() if fact else None,
                "same_block_source_pc": source_pc.get(reg),
                "capture_status": "STATIC_SAME_BLOCK_SYMBOL_CANDIDATE" if fact
                                  else "UNRESOLVED_CAPTURE_CONTENTS",
            })
        rows.append(row)
    return {
        "source_sha256": chunk.input_sha256,
        "parent_proto_id": parent.id, "body_proto_id": body.id,
        "definition_pc": method["definition_pc"],
        "creation_pc": closure_pc,
        "creation_file_offset": parent.code_offset + 4*closure_pc,
        "parent_cfg_blocks": len(blocks),
        "creation_basic_block_start_pc": block["start_pc"],
        "creation_basic_block_end_pc_exclusive": block["end_pc_exclusive"],
        "capture_slots": rows,
        "runtime_upvalues_recovered": False,
        "notes": [
            "Same-block facts use only instructions after the block entry; entry registers are unknown",
            "Parent upvalue capture means the same Upvalue cell, not a copy of its original value",
            "Parent stack registers require runtime cell values for executable module reconstruction",
            "Class/function symbolic origin never proves metatable dispatch or actual C API target",
        ],
    }


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("blua", type=Path)
    ap.add_argument("--class-hash", required=True)
    ap.add_argument("--function-hash", required=True)
    ap.add_argument("--expected-sha256", required=True)
    ap.add_argument("--output", type=Path, required=True)
    args = ap.parse_args()
    chunk = parse(args.blua.read_bytes())
    if chunk.input_sha256 != args.expected_sha256:
        ap.error("unexpected BLUA SHA; refusing cross-version provenance")
    chosen = [x for x in native_methods(chunk)
              if x["class_hash"] == args.class_hash.upper()
              and x["function_hash"] == args.function_hash.upper()]
    if len(chosen) != 1:
        ap.error(f"expected exactly one root method definition, got {len(chosen)}")
    result = capture_context(chunk, chosen[0])
    args.output.write_text(json.dumps(result, indent=2, sort_keys=True)+"\n", encoding="utf-8")
    print("CLOSURE_CAPTURE_CONTEXT", "method_proto", result["body_proto_id"],
          "root_block", result["creation_basic_block_start_pc"],
          "creation_pc", result["creation_pc"],
          "captures", [(x["slot"], x["captured_register"], x["capture_status"],
                       x["same_block_fact"]) for x in result["capture_slots"]])


if __name__ == "__main__":
    main()
