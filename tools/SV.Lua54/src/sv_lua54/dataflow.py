"""SLR R2: bounded *must* dataflow and structural closure provenance for Lua 5.4.

Only an actual CLOSURE reaching CALL is a definite local Proto target.
C/F matches and inferred self class are candidates, never runtime proof.
Unknown instructions invalidate state rather than inventing a callee.
"""
from __future__ import annotations

import argparse
from collections import Counter, deque
from dataclasses import dataclass
import json
from pathlib import Path

from .chunk import Chunk, Proto, parse
from .trace import field_hash_at, instructions, native_methods, string_at, successors


@dataclass(frozen=True)
class Value:
    kind: str
    name: str = ""
    class_hash: str = ""
    proto_id: int = -1

    def json(self):
        return {"kind": self.kind, "name": self.name or None,
                "class_hash": self.class_hash or None,
                "proto_id": self.proto_id if self.proto_id >= 0 else None}


def upvalue_lineage(chunk: Chunk, proto_id: int, index: int):
    """Read Lua 5.4 instack/index/kind descriptors without guessing contents."""
    by_id = {p.id: p for p in chunk.protos()}
    result = []
    pid, slot = proto_id, index
    for _ in range(160):
        p = by_id[pid]
        if slot < 0 or slot >= p.upvalue_count:
            result.append({"status": "INVALID_UPVALUE_INDEX", "proto_id": pid, "index": slot})
            return result
        if p.parent_id is None:
            result.append({
                "proto_id": pid, "index": slot, "status": "EXTERNAL_ROOT_UPVALUE",
                "env_convention_candidate": bool(slot == 0 and chunk.main_upvalues >= 1),
                "runtime_value_known": False,
            })
            return result
        instack, idx, kind = p.upvalues[3*slot:3*slot+3]
        item = {"proto_id": pid, "index": slot, "instack": instack,
                "captured_index": idx, "kind": kind, "parent_proto_id": p.parent_id}
        if instack == 1:
            item["status"] = "PARENT_REGISTER_CAPTURE_AT_CLOSURE"
            item["runtime_value_known"] = False
            result.append(item)
            return result
        if instack != 0:
            item["status"] = "INVALID_INSTACK_FLAG"
            result.append(item)
            return result
        item["status"] = "PARENT_UPVALUE_REFERENCE"
        result.append(item)
        pid, slot = p.parent_id, idx
    raise ValueError("upvalue ancestry exceeded bound")


def environment_slots(chunk: Chunk, proto: Proto):
    """Root upvalue 0 may be _ENV by Lua convention; not game-runtime proof."""
    slots = set()
    for index in range(proto.upvalue_count):
        lineage = upvalue_lineage(chunk, proto.id, index)
        if lineage and lineage[-1].get("env_convention_candidate"):
            slots.add(index)
    return slots


def native_owners(chunk: Chunk):
    result = {}
    for definition in native_methods(chunk):
        key = (definition["class_hash"], definition["function_hash"])
        result.setdefault(key, set()).add(definition["proto_id"])
    return {key: sorted(pids) for key, pids in result.items()}


def read_field(proto: Proto, index: int):
    if index < 0:
        return None
    return field_hash_at(proto, index)


def transfer(proto: Proto, pc: int, code, before: dict[int, Value],
             env_slots: set[int]):
    """Conservative register writes, no persistent path-specific guesses."""
    registers = before.copy()
    op, a, b, c, k, bx, sj = code[pc]
    def assign(reg: int, fact: Value | None):
        registers.pop(reg, None)
        if fact is not None:
            registers[reg] = fact

    if op == "MOVE":
        assign(a, before.get(b))
    elif op == "CLOSURE":
        if bx >= len(proto.children):
            raise ValueError(f"proto {proto.id} PC {pc}: invalid CLOSURE child {bx}")
        assign(a, Value("local_closure", proto_id=proto.children[bx].id))
    elif op in {"LOADK", "LOADKX"}:
        index = bx
        if op == "LOADKX":
            if pc+1 >= len(code) or code[pc+1][0] != "EXTRAARG":
                raise ValueError(f"proto {proto.id} PC {pc}: missing EXTRAARG")
            index = code[pc+1][6] + 16777215
        key = read_field(proto, index)
        assign(a, Value("hash_key", name=key) if key else None)
        if op == "LOADK" and string_at(proto, index) == "prototype":
            assign(a, Value("prototype_literal"))
        if op == "LOADK" and string_at(proto, index, "C"):
            assign(a, Value("class_hash_key", name=string_at(proto, index, "C")))
    elif op == "GETUPVAL":
        # This is an external environment *candidate*, not the value of _ENV.
        assign(a, Value("environment_candidate") if b in env_slots else None)
    elif op == "GETTABUP":
        key = string_at(proto, c, "C")
        if b in env_slots and key:
            assign(a, Value("class_table_candidate", class_hash=key))
        else:
            field = read_field(proto, c)
            assign(a, Value("field_value", name=field) if field else None)
    elif op in {"GETTABLE", "GETFIELD"}:
        owner = before.get(b)
        key_reg = before.get(c) if op == "GETTABLE" else None
        key = (key_reg.name if key_reg and key_reg.kind in {"hash_key", "class_hash_key"} else None) if op == "GETTABLE" else read_field(proto, c)
        if op == "GETTABLE" and key_reg and key_reg.kind == "prototype_literal":
            key = "prototype"
        if op == "GETFIELD" and string_at(proto, c) == "prototype":
            key = "prototype"
        if owner and owner.kind == "environment_candidate" and key and key.startswith("C"):
            value = Value("class_table_candidate", class_hash=key)
        elif owner and owner.kind == "class_table_candidate" and key == "prototype":
            value = Value("class_prototype_candidate", class_hash=owner.class_hash)
        elif key and key[0:1] in {"F", "S"}:
            value = Value("field_value", name=key,
                          class_hash=(owner.class_hash if owner else ""))
        else:
            value = None
        assign(a, value)
    elif op == "SELF":
        owner = before.get(b)
        if k:
            key = read_field(proto, c)
        else:
            ref = before.get(c)
            key = ref.name if ref and ref.kind == "hash_key" else None
        assign(a+1, owner)
        assign(a, Value("method_value", name=key,
                        class_hash=owner.class_hash if owner else "")
               if key else None)
    elif op == "LOADNIL":
        for reg in range(a, a+b+1):
            assign(reg, None)
    elif op in {"CALL", "TAILCALL"}:
        # C=0: open result count; must invalidate all. C=1: no results but
        # CALL mutates the stack/register used for the callee, so kill it.
        if c == 0:
            registers.clear()
        else:
            for reg in range(a, a+max(1, c-1)):
                assign(reg, None)
    elif op in {"LOADI", "LOADF", "LOADFALSE", "LFALSESKIP",
                "LOADTRUE", "NEWTABLE", "GETI", "ADDI", "ADDK",
                "SUBK", "MULK", "MODK", "POWK", "DIVK", "IDIVK",
                "BANDK", "BORK", "BXORK", "SHRI", "SHLI",
                "ADD", "SUB", "MUL", "MOD", "POW", "DIV", "IDIV",
                "BAND", "BOR", "BXOR", "SHL", "SHR",
                "UNM", "BNOT", "NOT", "LEN", "CONCAT"}:
        assign(a, None)
    elif op in {"SETUPVAL", "SETTABUP", "SETTABLE", "SETI", "SETFIELD",
                "SETLIST", "JMP", "EQ", "LT", "LE", "EQK", "EQI",
                "LTI", "LEI", "GTI", "GEI", "TEST", "RETURN",
                "RETURN0", "RETURN1", "CLOSE", "TBC", "EXTRAARG"}:
        pass
    else:
        # Complex stack operations (TESTSET/TFOR/FOR/VARARG) or metamethod
        # fallback: no assertion survives an unknown write set.
        registers.clear()
    return registers


def meet(old: dict[int, Value], new: dict[int, Value]):
    """Keep a fact only if identical on EVERY incoming path seen so far."""
    return {r: value for r, value in old.items() if new.get(r) == value}


def analyze_proto(chunk: Chunk, proto: Proto, *,
                  owner_class: str = "", owner_map=None):
    """Instruction-level monotone must-analysis, bounded by actual PC count."""
    code = instructions(proto)
    successors_by_pc = successors(code)
    if not code:
        return {"calls": [], "reachable_pcs": 0, "dataflow_updates": 0,
                "upvalues": [], "unresolved_branches": 0}
    env_slots = environment_slots(chunk, proto)
    entry = {}
    if owner_class and proto.num_params:
        entry[0] = Value("self_parameter_candidate", class_hash=owner_class)
    incoming: dict[int, dict[int, Value]] = {0: entry}
    outgoing: dict[int, dict[int, Value]] = {}
    queue = deque([0])
    queued = {0}
    updates = 0
    bound = max(10_000, len(code)*1024)
    while queue:
        pc = queue.popleft()
        queued.remove(pc)
        before = incoming[pc]
        after = transfer(proto, pc, code, before, env_slots)
        if outgoing.get(pc) == after:
            continue
        outgoing[pc] = after
        updates += 1
        if updates > bound:
            raise ValueError(f"proto {proto.id}: dataflow did not converge at PC {pc}")
        for nxt in successors_by_pc[pc]:
            if nxt not in incoming:
                incoming[nxt] = after.copy()
                changed = True
            else:
                merged = meet(incoming[nxt], after)
                changed = merged != incoming[nxt]
                if changed:
                    incoming[nxt] = merged
            if changed and nxt not in queued:
                queued.add(nxt)
                queue.append(nxt)
    owners = owner_map if owner_map is not None else native_owners(chunk)
    calls = []
    for pc, (op, a, b, c, k, bx, sj) in enumerate(code):
        if op not in {"CALL", "TAILCALL"}:
            continue
        fact = incoming.get(pc, {}).get(a)
        call = {
            "pc": pc, "file_offset": proto.code_offset + pc*4,
            "opcode": op,
            "callee_register": a, "callee_origin": fact.json() if fact else None,
            "status": "UNRESOLVED_DYNAMIC_CALL", "target_proto_id": None,
            "field_hash": None, "owner_class_candidate": None,
            "owner_proto_candidates": [],
            "confidence": "NO_RUNTIME_IDENTITY",
        }
        if pc not in incoming:
            call["status"] = "UNREACHABLE_BY_STATIC_CFG"
        elif fact and fact.kind == "local_closure":
            call["status"] = "DIRECT_LOCAL_CLOSURE"
            call["target_proto_id"] = fact.proto_id
            call["confidence"] = "REGISTER_DEF_USE_PROVEN"
        elif fact and fact.kind in {"field_value", "method_value"}:
            call["field_hash"] = fact.name
            call["owner_class_candidate"] = fact.class_hash or None
            matches = owners.get((fact.class_hash, fact.name), []) if fact.class_hash else []
            call["owner_proto_candidates"] = matches
            call["status"] = "OWNER_CANDIDATE" if matches else "HASH_FIELD_UNRESOLVED"
            call["confidence"] = "SYMBOLIC_CANDIDATE_ONLY"
        calls.append(call)
    upvalues = []
    for i in range(proto.upvalue_count):
        upvalues.append({"slot": i, "lineage": upvalue_lineage(chunk, proto.id, i),
                         "inferred_env_by_convention": i in env_slots})
    return {
        "proto_id": proto.id, "code_offset": proto.code_offset,
        "instruction_count": len(code), "reachable_pcs": len(incoming),
        "dataflow_updates": updates, "entry_self_is_candidate": bool(entry),
        "upvalues": upvalues, "calls": calls,
        "call_status_counts": dict(Counter(c["status"] for c in calls)),
        "limitations": [
            "Must-propagation merges only identical register facts across all static paths",
            "Owner mapping on class prototype is not runtime object identity",
            "External _ENV convention does not reveal game runtime values",
            "Parent stack upvalue capture requires creation-site register analysis",
            "Unmodeled instructions invalidate facts; no arbitrary target guesses",
            "No behavioral or native engine execution validation",
        ],
    }


def analyze_method(chunk: Chunk, class_hash: str, function_hash: str):
    definitions = [x for x in native_methods(chunk)
                   if x["class_hash"] == class_hash
                   and x["function_hash"] == function_hash]
    if not definitions:
        raise ValueError("No canonical method definition; absence not established")
    by_id = {p.id: p for p in chunk.protos()}
    owners = native_owners(chunk)
    data = []
    for method in definitions:
        p = by_id[method["proto_id"]]
        data.append({"method": method,
                     "analysis": analyze_proto(chunk, p, owner_class=class_hash,
                                               owner_map=owners)})
    return {"source_sha256": chunk.input_sha256, "class_hash": class_hash,
            "function_hash": function_hash, "matches": data,
            "runtime_status": "NOT_TESTED"}


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
        ap.error("Unexpected BLUA SHA-256; refusing cross-version comparison")
    result = analyze_method(chunk, args.class_hash.upper(), args.function_hash.upper())
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(result, sort_keys=True, indent=2) + "\n",
                           encoding="utf-8")
    for item in result["matches"]:
        a = item["analysis"]
        print(f"proto={a['proto_id']} reachable={a['reachable_pcs']}/"
              f"{a['instruction_count']} "
              f"call_status_counts={a['call_status_counts']} "
              f"upvalue_slots={len(a['upvalues'])}")


if __name__ == "__main__":
    main()
