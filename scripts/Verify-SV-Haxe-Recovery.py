#!/usr/bin/env python3
"""Read-only validation of curated SV 4.0.0 Haxe symbols and Proto/PC metadata.

Hash matching and Haxe syntax are NOT proof of code/behavior parity. Entries
that claim SV400 native ownership must pass checks against original bytes.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
WORK = "tools/SV.Lua54/haxe/4.0.0"
FNV_OFFSET = 0xCBF29CE484222645
FNV_PRIME = 0x100000001B3
HASH_LINE = re.compile(r"^0x([0-9a-fA-F]{16})\s*(\S+)?\s*$")


def fnv1a64(name: str) -> str:
    h = FNV_OFFSET
    for b in name.encode("utf-8"):
        h = ((h ^ b) * FNV_PRIME) & 0xFFFFFFFFFFFFFFFF
    return f"{h:016X}"


def load_hashes(folder: Path) -> dict:
    tables = {}
    for kind in ("c", "f", "s"):
        table = {}
        for line in (folder / f"lua_{kind}_hashes.txt").read_text(encoding="utf-8-sig").splitlines():
            if not line.strip():
                continue
            m = HASH_LINE.fullmatch(line)
            if not m:
                raise ValueError(f"bad PokeDocs {kind} entry: {line!r}")
            if m.group(2):
                table[m.group(1).upper()] = m.group(2)
        tables[kind] = table
    return tables


def checked_path(root: Path, relative: str) -> Path:
    file = (root / relative).resolve()
    if not file.is_relative_to(root.resolve()) or not file.is_file():
        raise ValueError(f"missing/unsafe file: {relative}")
    return file


def verify(root: Path = ROOT) -> dict:
    native_manifest = json.loads(checked_path(
        root, "tools/SV.Lua54/fixtures/native_manifest.json").read_text(encoding="utf-8"))
    modules = {x["module"]: x for x in native_manifest["sources"]}
    hashes = load_hashes(root / "tools/PokeDocs/SV/Hashlists/Lua")
    lines = checked_path(root, WORK + "/methods.jsonl").read_text(encoding="utf-8").splitlines()
    records, keys, parsed = [], set(), {}
    for n, line in enumerate(lines, 1):
        if not line.strip():
            continue
        r = json.loads(line)
        required = {"schema_version","game_version","module","source_path","source_sha256",
                    "class_name","class_hash","method_name","method_hash","proto_id",
                    "parent_proto_id","pc_start","pc_end_exclusive","code_offset",
                    "haxe_source","naming_evidence","ownership_evidence","body_status",
                    "haxe_compile_status","lua_differential_status","runtime_status"}
        if required - r.keys():
            raise ValueError(f"line {n}: missing {sorted(required-r.keys())}")
        if r["schema_version"] != 1 or r["game_version"] != "SV Violet 4.0.0":
            raise ValueError(f"line {n}: wrong schema/version")
        mod = modules[r["module"]]
        if (r["source_path"] != mod["relative_source"]
                or r["source_sha256"] != mod["sha256"]):
            raise ValueError(f"line {n}: wrong native input provenance")
        cls, method = r["class_name"], r["method_name"]
        ch, mh = r["class_hash"], r["method_hash"]
        if ch != "C" + fnv1a64(cls) or mh not in (
                "F" + fnv1a64(method), "S" + fnv1a64(method)):
            raise ValueError(f"line {n}: wrong calculated ABI hash")
        if hashes["c"].get(ch[1:]) != cls or hashes[mh[0].lower()].get(mh[1:]) != method:
            raise ValueError(f"line {n}: symbol missing in pinned PokeDocs")
        hx = checked_path(root, r["haxe_source"]).read_text(encoding="utf-8")
        if ch not in hx or mh not in hx or not re.search(
                r"\bfunction\s+"+re.escape(method)+r"\s*\(", hx):
            raise ValueError(f"line {n}: missing Haxe class/member source")
        key = (r["module"], ch, mh)
        if key in keys:
            raise ValueError(f"line {n}: duplicate method")
        keys.add(key)
        coords = ["proto_id", "pc_start", "pc_end_exclusive", "code_offset"]
        if r["body_status"] == "SV400_NATIVE_MAPPED":
            import struct
            if any(type(r[k]) is not int for k in coords):
                raise ValueError(f"line {n}: native mapping requires Proto+PC+offset")
            for k in ("root_pc", "class_load_pc", "method_load_pc",
                      "closure_pc", "assignment_pc", "child_index"):
                if type(r.get(k)) is not int:
                    raise ValueError(f"line {n}: missing original root closure {k}")
            if r.get("native_binding_status") != "SV400_NATIVE_STATIC_CLOSURE_LINKED":
                raise ValueError(f"line {n}: missing proven native C-S binding status")
            if r.get("haxe_body_status") != "STATIC_OPCODE_EXPRESSION_MATCHED_UNCOMPILED":
                raise ValueError(f"line {n}: unreviewed Haxe expression status")
            if (r["haxe_compile_status"], r["lua_differential_status"],
                    r["runtime_status"]) != ("NOT_RUN", "NOT_RUN", "NOT_OBSERVED"):
                raise ValueError(f"line {n}: untested Haxe must not claim compilation/runtime parity")
            if r["ownership_evidence"] != "SV400_NATIVE_CLOSURE_ASSIGNMENT":
                raise ValueError(f"line {n}: native-mapped method lacks exact ownership evidence")
            src = checked_path(root, r["source_path"])
            raw = src.read_bytes()
            if hashlib.sha256(raw).hexdigest() != mod["sha256"]:
                raise ValueError(f"line {n}: original native bytes changed")
            if r["module"] not in parsed:
                sys.path.insert(0, str(root / "tools/SV.Lua54/src"))
                from sv_lua54.chunk import parse
                from sv_lua54.r1 import decode
                chunk = parse(raw)
                parsed[r["module"]] = (list(chunk.protos()), chunk.root, decode(chunk.root))
            protos, native_root, native_ops = parsed[r["module"]]
            if r["proto_id"] < 0 or r["proto_id"] >= len(protos):
                raise ValueError(f"line {n}: nonexistent Proto")
            p = protos[r["proto_id"]]
            if (p.parent_id != r["parent_proto_id"] or p.code_offset != r["code_offset"]
                    or not 0 <= r["pc_start"] < r["pc_end_exclusive"] <= p.instruction_count):
                raise ValueError(f"line {n}: impossible native Proto/PC interval")
            if r["pc_start"] != 0 or r["pc_end_exclusive"] != p.instruction_count:
                raise ValueError(f"line {n}: expected complete original child Proto range")
            site = r["root_pc"]
            if not 0 <= site < len(native_ops)-5:
                raise ValueError(f"line {n}: root binding PC out of range")
            orig = native_ops[site:site+6]
            if [x.name for x in orig] != [
                "GETUPVAL", "LOADK", "GETTABLE", "LOADK", "CLOSURE", "SETTABLE"
            ]:
                raise ValueError(f"line {n}: native root opcode pattern mismatch")
            a = orig[0].a
            if not (orig[0].b == 0
                    and orig[1].a == a+1
                    and (orig[2].a,orig[2].b,orig[2].c) == (a,a,a+1)
                    and orig[3].a == a+1 and orig[4].a == a+2
                    and (orig[5].a,orig[5].b,orig[5].c) == (a,a+1,a+2)):
                raise ValueError(f"line {n}: root C-S register binding mismatch")
            if (r["class_load_pc"],r["method_load_pc"],
                    r["closure_pc"],r["assignment_pc"]) != (
                    site+1,site+3,site+4,site+5):
                raise ValueError(f"line {n}: root PC registration offsets disagree")
            if (native_root.constants[orig[1].bx].payload != ch.encode("ascii")
                    or native_root.constants[orig[3].bx].payload != mh.encode("ascii")):
                raise ValueError(f"line {n}: original root class/member hash differs")
            if (orig[4].bx != r["child_index"]
                    or orig[4].bx >= len(native_root.children)
                    or native_root.children[orig[4].bx].id != p.id):
                raise ValueError(f"line {n}: exact CLOSURE child ownership mismatch")
            if [f"{x.word:08X}" for x in orig] != r.get("native_root_opcode_words"):
                raise ValueError(f"line {n}: root instruction byte witness mismatch")
            child_words = [f"{word:08X}" for (word,) in struct.iter_unpack("<I", p.code)]
            if child_words != r.get("native_child_opcode_words"):
                raise ValueError(f"line {n}: original method body raw instruction witness mismatch")
        else:
            if r["body_status"] != "OLDER_SV_REFERENCE":
                raise ValueError(f"line {n}: unsupported status")
            if any(r[k] is not None for k in coords + ["parent_proto_id"]):
                raise ValueError(f"line {n}: cannot invent old-reference Proto/PC")
            if (r["ownership_evidence"] != "OLDER_SV_REFERENCE_ONLY"
                    or r["haxe_compile_status"] != "NOT_RUN"
                    or r["lua_differential_status"] != "NOT_RUN"
                    or r["runtime_status"] != "NOT_OBSERVED"):
                raise ValueError(f"line {n}: unsupported old-reference evidence claim")
        records.append(r)
    if not records:
        raise ValueError("empty method manifest")
    return {"validated_records":len(records),
            "native_mapped":sum(r["body_status"]=="SV400_NATIVE_MAPPED" for r in records),
            "reference_only":sum(r["body_status"]=="OLDER_SV_REFERENCE" for r in records),
            "haxe_compilation":"NOT_RUN","runtime_parity":"NOT_OBSERVED"}


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=ROOT)
    args = parser.parse_args()
    print(json.dumps(verify(args.root.resolve()), indent=2))
