"""R16: provenance-first native ELF/cppbindings evidence and memory effect chain.

Read-only static evidence. A string's presence in ELF or compiler bindings
does NOT resolve a Lua SELF callable to a native C++ entry. No guessed RVA,
call ABI, object layout or runtime equivalence is emitted.
"""
from __future__ import annotations

from dataclasses import dataclass
from hashlib import sha256
from pathlib import Path
import re
import struct

EXPECTED_ELF = {
    "scarlet_main": "53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f",
    "violet_main": "84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30",
}
LUA_K = ("F22C7B81A049FA20D", "component", "f558733FC", "updateInterval")
R15_PCS = (0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14)
R15_METHODS = {
    "main.field.action.base.IAction.Setup": {"proto": 12930, "root_pc": 160285, "owner_slot": 10, "child_slot": 12},
    "main.field.action.base.IAutoAction.Setup": {"proto": 13197, "root_pc": 163143, "owner_slot": 2, "child_slot": 4},
}
BRIDGE_FIELDS = {
    0: ("SELF_GET_FUNCTION_AND_RECEIVER", "F22C7B81A049FA20D", "MAY_INVOKE_INDEX"),
    1: ("CALL_ONSETUP", "F22C7B81A049FA20D", "UNKNOWN_EXTERNAL_HEAP_EFFECTS"),
    2: ("TEST_LUA_TRUTHINESS", None, "NO_DIRECT_HEAP_WRITE"),
    3: ("JMP_ELSE", None, "NO_DIRECT_HEAP_WRITE"),
    4: ("GETI_OWNER", None, "MAY_INVOKE_INDEX"),
    5: ("GETI_CHILD", None, "MAY_INVOKE_INDEX"),
    6: ("SETFIELD_OWNER_COMPONENT", "component", "MAY_INVOKE_NEWINDEX"),
    7: ("SELF_CHILD_METHOD", "f558733FC", "MAY_INVOKE_INDEX"),
    8: ("GETFIELD_UPDATE_INTERVAL", "updateInterval", "MAY_INVOKE_INDEX"),
    9: ("CALL_CHILD_WITH_INTERVAL", "f558733FC", "UNKNOWN_EXTERNAL_HEAP_EFFECTS"),
    10: ("LOADTRUE", None, "NO_DIRECT_HEAP_WRITE"),
    11: ("RETURN_TRUE", None, "NO_DIRECT_HEAP_WRITE"),
    12: ("LOADFALSE", None, "NO_DIRECT_HEAP_WRITE"),
    13: ("RETURN_FALSE", None, "NO_DIRECT_HEAP_WRITE"),
    14: ("UNREACHABLE_RETURN0", None, "NO_DIRECT_HEAP_WRITE"),
}
EFFECTFUL = {"MAY_INVOKE_INDEX", "UNKNOWN_EXTERNAL_HEAP_EFFECTS",
             "MAY_INVOKE_NEWINDEX"}
SOURCE_PIN = "c7bc243ac4d28356dff9f06b6723330ea92247d5"


def static_memory_effects(proto, qualified_name: str) -> dict:
    """Record exact PC-by-PC effect order; no speculative heap SSA elimination."""
    from .r15_calls_ssa import lift_setup
    from ..r1 import decode

    ast = lift_setup(proto, qualified_name)
    ins = decode(proto)
    if tuple(x.pc for x in ins) != R15_PCS:
        raise ValueError("not original fifteen-PC R15 function")
    meta = R15_METHODS[qualified_name]
    if ast.first_slot != meta["owner_slot"] or ast.second_slot != meta["child_slot"]:
        raise ValueError("original self slots have changed")

    clock = 0
    events = []
    for i,op in enumerate(ins):
        meaning, key, category = BRIDGE_FIELDS[i]
        before = f"M?{clock}"
        if category in EFFECTFUL:
            clock += 1
        events.append({
            "pc": i, "opcode": op.name, "word": f"{op.word:08X}",
            "meaning": meaning, "key": key,
            "heap_before": before, "heap_after": f"M?{clock}",
            "effect": category,
            "effect_state": "POTENTIAL_HEAP_MUTATION" if category in EFFECTFUL
                            else "NO_DIRECT_HEAP_WRITE",
            "instruction_not_execution_proof": True,
        })
    return {
        "method": qualified_name, "original_proto": proto.id,
        "original_root_pc": meta["root_pc"],
        "original_opcode_sha256": sha256(proto.code).hexdigest(),
        "first_callable": {
            "pc": 0, "call_pc": 1, "method_key": LUA_K[0],
            "receiver_source": "SELF R0",
            "argument_registers": ["R2@0"],
            "source_proven_class_method": "onSetup",
            "callee_entry_address": None,
            "cplusplus_binding_status": "NOT_RESOLVED_FROM_VM_CALL_SITE",
        },
        "second_callable": {
            "pc": 7, "call_pc": 9, "method_key": LUA_K[2],
            "receiver_source": "GETI R0[child_slot]",
            "argument_registers": ["R4@7", "R5@8"],
            "source_proven_method_name": None,
            "callee_entry_address": None,
            "cplusplus_binding_status": "UNKNOWN_SCRIPT_OR_NATIVE_METHOD",
        },
        "field_transfer": {
            "pc": 6, "owner_source": f"self[{meta['owner_slot']}]",
            "child_source": f"self[{meta['child_slot']}]",
            "key": LUA_K[1],
            "may_invoke_newindex": True,
            "proven_alias_after_write": False,
            "reason": "SETFIELD can invoke __newindex and may be intercepted",
        },
        "pc_events": events,
        "true_return_heap_candidate": "M?8",
        "false_return_heap_candidate": "M?2",
        "exit_merge": {
            "kind": "SYNTHETIC_RETURN_JOIN_NOT_A_BYTECODE_JOIN",
            "memory_versions": ["M?2", "M?8"],
            "status": "CONSERVATIVE_EFFECT_SEQUENCING_NOT_FULL_MEMORY_SSA",
        },
        "memory_ssa_status": "CONSERVATIVE_MAY_WRITE_ONLY",
        "live_native_object_identity": "NOT_OBSERVED",
        "game_runtime_status": "NOT_OBSERVED",
    }


def _elf_segments(raw: bytes):
    if raw[:4] != b"\x7fELF" or raw[4:6] != b"\x02\x01":
        raise ValueError("expected little-endian ELF64")
    if struct.unpack_from("<H", raw, 18)[0] != 183:
        raise ValueError("expected AArch64 e_machine")
    phoff = struct.unpack_from("<Q", raw, 32)[0]
    entsize = struct.unpack_from("<H", raw, 54)[0]
    num = struct.unpack_from("<H", raw, 56)[0]
    if entsize < 56 or num > 512 or phoff + entsize*num > len(raw):
        raise ValueError("invalid ELF program header bounds")
    segs = []
    for i in range(num):
        pos = phoff + i * entsize
        t, flags, off, virt, phys, sz, mem, align = struct.unpack_from("<IIQQQQQQ", raw, pos)
        if t == 1:
            if off + sz > len(raw):
                raise ValueError("ELF PT_LOAD file extends beyond original image")
            segs.append((off,off+sz,virt,flags))
    if not segs:
        raise ValueError("ELF has no PT_LOAD segments")
    return segs


def inspect_elf(path: Path, game: str, keys=LUA_K):
    """Only detect literal bytes and map PT_LOAD offsets. Never claim function RVA."""
    if game not in EXPECTED_ELF:
        raise ValueError("unknown main ELF edition")
    data = path.read_bytes()
    digest = sha256(data).hexdigest()
    if digest != EXPECTED_ELF[game]:
        raise ValueError(f"unverified {game} ELF SHA-256")
    segments = _elf_segments(data)
    matches = []
    for key in keys:
        raw_key = key.encode("ascii")
        found = []
        start = 0
        while len(found) < 16:
            i = data.find(raw_key, start)
            if i < 0: break
            start = i + len(raw_key)
            mapping = [
                {"rva": f"0x{vaddr+i-offset:x}", "segment_flags": flags}
                for offset,end,vaddr,flags in segments if offset <= i < end
            ]
            found.append({"file_offset": i, "mapped_segments": mapping})
        matches.append({
            "literal": key, "exact_ascii_matches_first_16": found,
            "at_least_16": len(found) == 16,
            "status": "LITERAL_OCCURRENCE_ONLY_NO_LUA_TO_CPP_CALL_RESOLUTION",
        })
    return {
        "game": game, "elf_sha256": digest, "architecture": "AArch64 ELF64 LE",
        "literal_occurrences": matches,
        "symbol_to_cpp_entry": None,
        "native_cpp_signature": None,
        "abi_status": "NOT_RESOLVED",
        "live_object_identity": "NOT_OBSERVED",
    }


def inspect_cppbindings(directory: Path, keys=LUA_K, max_matches=30):
    """Pinned ZAScripts source is an external version reference, NOT 4.0.0 proof."""
    if not directory.is_dir():
        raise ValueError("missing pinned upstream cppbindings directory")
    files = sorted(directory.rglob("*.hx"))
    if not files:
        raise ValueError("cppbindings checkout is empty")
    observations = {k: [] for k in keys}
    file_hits = 0
    for path in files:
        data = path.read_bytes()
        text = data.decode("utf-8")
        hits_here = False
        for n,line in enumerate(text.splitlines(),1):
            for key in keys:
                if key in line and len(observations[key]) < max_matches:
                    observations[key].append({
                        "file": str(path.relative_to(directory)), "line": n,
                        "sha256": sha256(data).hexdigest(),
                        "snippet": line.strip()[:220],
                        "match_type": "EXACT_CASE_SOURCE_LITERAL",
                    })
                    hits_here = True
        if hits_here:file_hits += 1
    return {
        "upstream_commit": SOURCE_PIN,
        "source_root": "tools/haxe-4.3.1/std/cppbindings",
        "files_scanned": len(files), "files_with_selected_key_occurrence": file_hits,
        "matches": observations,
        "cppbindings_are_from_ZAScripts_not_SV400_binary": True,
        "original_game_native_entry_mapping": "NOT_RESOLVED",
        "runtime_status": "NOT_OBSERVED",
    }
