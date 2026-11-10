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
            for k in ("root_pc", "class_load_pc",
                      "closure_pc", "assignment_pc", "child_index"):
                if type(r.get(k)) is not int:
                    raise ValueError(f"line {n}: missing original root closure {k}")
            expected_link_status = ("SV400_NATIVE_INSTANCE_CLOSURE_LINKED" if mh.startswith("F")
                                    else "SV400_NATIVE_DLL_STATIC_CLOSURE_LINKED" if r["module"] == "dll_util"
                                    else "SV400_NATIVE_STATIC_CLOSURE_LINKED")
            if r.get("native_binding_status") != expected_link_status:
                raise ValueError(f"line {n}: missing proven native C-S binding status")
            if r.get("haxe_body_status") not in ("STATIC_OPCODE_EXPRESSION_MATCHED", "EXTERN_ONLY_UNRECONSTRUCTED", "NATIVE_RETURN0_NOOP_IMPLEMENTED", "CFG_HIR_AST_LITERAL_LIFTED"):
                raise ValueError(f"line {n}: unreviewed Haxe expression status")
            if r["runtime_status"] != "NOT_OBSERVED":
                raise ValueError(f"line {n}: game runtime remains unobserved")
            upstream=json.loads(checked_path(root, WORK+"/zascripts.lock.json").read_text("utf-8"))
            if (r.get("za_toolchain_pin") != upstream["upstream_commit"]
                    or upstream["upstream_commit"] != "c7bc243ac4d28356dff9f06b6723330ea92247d5"):
                raise ValueError(f"line {n}: unreviewed upstream Haxe toolchain pin")
            if r["haxe_body_status"] == "EXTERN_ONLY_UNRECONSTRUCTED":
                if (r["lua_differential_status"] != "NOT_RUN"
                        or r.get("za_haxe_compile_status") != "NOT_TESTED_EXTERN_ONLY"
                        or r.get("za_differential_cases") is not None
                        or r.get("za_differential_passed") is not None
                        or r.get("za_differential_run_id") is not None):
                    raise ValueError(f"line {n}: extern without method body must not claim Lua parity")
            elif r["haxe_body_status"] == "CFG_HIR_AST_LITERAL_LIFTED":
                if r["module"] != "main" or mh[0] != "F":
                    raise ValueError(f"line {n}: CFG/HIR/AST literal target must be main C/F instance method")
                proof_run = (r.get("za_differential_run_id")
                             if r.get("promotion_batch") == "R11_59"
                             else 42758094283)
                if r.get("promotion_batch") == "R11_59" and (
                        type(proof_run) is not int or proof_run <= 42758827830):
                    raise ValueError(f"line {n}: R11 batch evidence run must be a new Actions run")
                if (r.get("za_haxe_compile_status") != "PINNED_ZASCRIPTS_HAXE_4_3_1_LUA_5_4_3_BUILT"
                        or r.get("za_haxe_build_evidence_run_id") != proof_run
                        or r["lua_differential_status"] != "SV400_ORIGINAL_CHILD_VS_ZASCRIPTS_LUA54_PASS"
                        or r.get("za_differential_passed") != 3
                        or r.get("za_differential_cases") != 3
                        or r.get("za_differential_run_id") != proof_run
                        or r.get("za_differential_evidence_url") !=
                           f"https://github.com/969981/SV_Resources/actions/runs/{proof_run}"):
                    raise ValueError(f"line {n}: missing matching R10/R11 AST compilation/differential evidence")
                if (r.get("hir_status") != "RESTRICTED_SINGLE_BLOCK_LITERAL_LIFTED"
                        or r.get("ast_status") != "RETURN_LITERAL"
                        or r.get("cfg_edges") != [[0,1,"SEQUENTIAL"]]):
                    raise ValueError(f"line {n}: CFG/HIR/AST evidence missing")
            elif r["haxe_body_status"] == "NATIVE_RETURN0_NOOP_IMPLEMENTED":
                if (mh[0] != "F" or r["module"] != "main"):
                    raise ValueError(f"line {n}: no-op method must be original main instance F")
                if (r.get("za_haxe_compile_status") != "PINNED_ZASCRIPTS_HAXE_4_3_1_LUA_5_4_3_BUILT"
                        or r.get("za_haxe_build_evidence_run_id") != 42754153383):
                    raise ValueError(f"line {n}: missing pinned Haxe F-prototype compilation evidence")
                if r["lua_differential_status"] == "NOT_RUN":
                    if any(r.get(k) is not None for k in (
                        "za_differential_cases","za_differential_passed","za_differential_run_id")):
                        raise ValueError(f"line {n}: pending F differential must have no claimed result")
                elif r["lua_differential_status"] == "SV400_ORIGINAL_CHILD_VS_ZASCRIPTS_LUA54_PASS":
                    if (r.get("za_differential_cases") != 3
                            or r.get("za_differential_passed") != 3
                            or type(r.get("za_differential_run_id")) is not int
                            or r.get("za_differential_evidence_url") !=
                                f"https://github.com/969981/SV_Resources/actions/runs/{r['za_differential_run_id']}"):
                        raise ValueError(f"line {n}: F-method A/B results missing pinned case evidence")
                else:
                    raise ValueError(f"line {n}: unverified instance-method differential status")
            else:
                expected={"CalcXFov":13,"Format":8,"Clamp":11}.get(r["method_name"])
                if (expected is None
                        or r.get("za_haxe_compile_status") != "PINNED_ZASCRIPTS_HAXE_4_3_1_LUA_5_4_3_BUILT"
                        or r["lua_differential_status"] != "SV400_ORIGINAL_CHILD_VS_ZASCRIPTS_LUA54_PASS"
                        or r.get("za_differential_cases") != expected
                        or r.get("za_differential_passed") != expected
                        or r.get("za_differential_run_id") != 42752782758
                        or r.get("za_differential_evidence_url") !=
                            "https://github.com/969981/SV_Resources/actions/runs/42752782758"):
                    raise ValueError(f"line {n}: static native differential mismatch pinned CI record")
            compile_status = r["haxe_compile_status"]
            smoke_status = r.get("stock_lua_smoke_status")
            if compile_status == "NOT_RUN":
                if r["haxe_body_status"] == "EXTERN_ONLY_UNRECONSTRUCTED":
                    if smoke_status != "NOT_APPLICABLE_EXTERN_ONLY":
                        raise ValueError(f"line {n}: extern must not claim standalone execution")
                elif smoke_status not in ("NOT_RUN", None):
                    raise ValueError(f"line {n}: uncompiled method has invalid smoke status")
            elif compile_status == "STOCK_HAXE_4_3_7_LUA_COMPILED":
                if (r["haxe_body_status"] != "STATIC_OPCODE_EXPRESSION_MATCHED"
                        or smoke_status != "PASS_WITH_LUA_UTF8_AND_ATAN2_SHIMS"
                        or type(r.get("stock_haxe_evidence_run_id")) is not int
                        or r.get("stock_haxe_evidence_url") !=
                           f"https://github.com/969981/SV_Resources/actions/runs/{r['stock_haxe_evidence_run_id']}"):
                    raise ValueError(f"line {n}: missing coherent stock Haxe compiler evidence")
            else:
                raise ValueError(f"line {n}: unsupported Haxe compilation status")
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
            if r["module"] == "dll_util":
                if not 0 <= site < len(native_ops)-2:
                    raise ValueError(f"line {n}: dll root binding PC out of range")
                orig = native_ops[site:site+3]
                if [x.name for x in orig] != ["GETTABUP", "CLOSURE", "SETFIELD"]:
                    raise ValueError(f"line {n}: dll root binding opcode pattern mismatch")
                a=orig[0].a
                if not (orig[0].b==0 and orig[1].a==a+1
                        and orig[2].a==a and orig[2].c==a+1):
                    raise ValueError(f"line {n}: dll C-S register binding mismatch")
                if (r["class_load_pc"],r["method_load_pc"],
                        r["closure_pc"],r["assignment_pc"]) != (
                        site,None,site+1,site+2):
                    raise ValueError(f"line {n}: dll root PC registration offsets disagree")
                if (native_root.constants[orig[0].c].payload != ch.encode("ascii")
                        or native_root.constants[orig[2].b].payload != mh.encode("ascii")):
                    raise ValueError(f"line {n}: original dll class/member hash differs")
                closure=orig[1]
            elif r["module"] == "main" and mh.startswith("F"):
                if not 0 <= site < len(native_ops)-7:
                    raise ValueError(f"line {n}: instance root binding PC out of range")
                orig = native_ops[site:site+8]
                if [x.name for x in orig] != [
                    "GETUPVAL","LOADK","GETTABLE","LOADK",
                    "GETTABLE","LOADK","CLOSURE","SETTABLE"]:
                    raise ValueError(f"line {n}: instance root opcode pattern mismatch")
                a=orig[0].a
                if not (orig[0].b==0 and orig[1].a==a+1
                        and (orig[2].a,orig[2].b,orig[2].c)==(a,a,a+1)
                        and orig[3].a==a+1
                        and (orig[4].a,orig[4].b,orig[4].c)==(a,a,a+1)
                        and orig[5].a==a+1 and orig[6].a==a+2
                        and (orig[7].a,orig[7].b,orig[7].c)==(a,a+1,a+2)):
                    raise ValueError(f"line {n}: instance root register constraints mismatch")
                if (r["class_load_pc"],r["method_load_pc"],
                        r["closure_pc"],r["assignment_pc"]) != (
                        site+1,site+5,site+6,site+7):
                    raise ValueError(f"line {n}: instance method registration PC mismatch")
                if (native_root.constants[orig[1].bx].payload != ch.encode("ascii")
                        or native_root.constants[orig[3].bx].payload != b"prototype"
                        or native_root.constants[orig[5].bx].payload != mh.encode("ascii")):
                    raise ValueError(f"line {n}: wrong instance class/prototype/method hash constants")
                closure=orig[6]
            elif r["module"] == "main":
                if not 0 <= site < len(native_ops)-5:
                    raise ValueError(f"line {n}: main root binding PC out of range")
                orig = native_ops[site:site+6]
                if [x.name for x in orig] != [
                    "GETUPVAL", "LOADK", "GETTABLE", "LOADK", "CLOSURE", "SETTABLE"
                ]:
                    raise ValueError(f"line {n}: main native opcode pattern mismatch")
                a=orig[0].a
                if not (orig[0].b==0 and orig[1].a==a+1
                        and (orig[2].a,orig[2].b,orig[2].c)==(a,a,a+1)
                        and orig[3].a==a+1 and orig[4].a==a+2
                        and (orig[5].a,orig[5].b,orig[5].c)==(a,a+1,a+2)):
                    raise ValueError(f"line {n}: main root C-S register binding mismatch")
                if (r["class_load_pc"],r["method_load_pc"],
                        r["closure_pc"],r["assignment_pc"]) != (
                        site+1,site+3,site+4,site+5):
                    raise ValueError(f"line {n}: main root PC registration offsets disagree")
                if (native_root.constants[orig[1].bx].payload != ch.encode("ascii")
                        or native_root.constants[orig[3].bx].payload != mh.encode("ascii")):
                    raise ValueError(f"line {n}: original main class/member hash differs")
                closure=orig[4]
            else:
                raise ValueError(f"line {n}: no native binder for {r['module']}")
            if (closure.bx != r["child_index"]
                    or closure.bx >= len(native_root.children)
                    or native_root.children[closure.bx].id != p.id):
                raise ValueError(f"line {n}: exact CLOSURE child ownership mismatch")
            if r["haxe_body_status"] == "CFG_HIR_AST_LITERAL_LIFTED":
                from sv_lua54.emit_haxe import lift_constant_return
                lifted=lift_constant_return(p)
                if (r.get("native_child_code_sha256") != lifted.code_sha256
                        or r.get("native_child_opcode_words") != list(lifted.source_words)
                        or type(r.get("ast_return_value")) is not type(lifted.ast.value.value)
                        or r.get("ast_return_value") != lifted.ast.value.value
                        or r.get("ast_return_type") != lifted.return_type
                        or r.get("cfg_edges") != [list(x) for x in lifted.cfg_edges]):
                    raise ValueError(f"line {n}: original source CFG/HIR/AST witness changed")
                pattern=(r"\bpublic\s+function\s+"+re.escape(method)+
                         r"\s*\(\s*\)\s*:\s*"+re.escape(lifted.return_type)+
                         r"\s*\{\s*return\s+"+re.escape(lifted.haxe_expression)+r";\s*\}")
                if not re.search(pattern,hx):
                    raise ValueError(f"line {n}: committed Haxe body differs from strict AST emission")
            if r["haxe_body_status"] == "NATIVE_RETURN0_NOOP_IMPLEMENTED":
                if (p.instruction_count != 1 or p.code != bytes.fromhex("c7000100")
                        or p.num_params != 1 or p.upvalue_count != 0):
                    raise ValueError(f"line {n}: claimed 4.0.0 empty instance body differs from RETURN0")
                if not re.search(r"\bfunction\s+"+re.escape(method)+r"\s*\(\s*\)\s*:\s*Void\s*\{\s*\}",hx):
                    raise ValueError(f"line {n}: Haxe no-op method has unverified extra code")
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
            "stock_haxe_compiled":sum(r["haxe_compile_status"]=="STOCK_HAXE_4_3_7_LUA_COMPILED" for r in records),
            "extern_only":sum(r.get("haxe_body_status")=="EXTERN_ONLY_UNRECONSTRUCTED" for r in records),
            "pinned_za_haxe_compiled":sum(r.get("za_haxe_compile_status")=="PINNED_ZASCRIPTS_HAXE_4_3_1_LUA_5_4_3_BUILT" for r in records),
            "native_lua_differential_passed_methods":sum(r["lua_differential_status"]=="SV400_ORIGINAL_CHILD_VS_ZASCRIPTS_LUA54_PASS" for r in records),
            "native_lua_differential_total_cases":sum(r.get("za_differential_passed") or 0 for r in records),
            "cfg_hir_ast_lifted":sum(r.get("haxe_body_status")=="CFG_HIR_AST_LITERAL_LIFTED" for r in records),
            "game_runtime":"NOT_OBSERVED"}


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=ROOT)
    args = parser.parse_args()
    print(json.dumps(verify(args.root.resolve()), indent=2))
