"""SLR R1 opcode/SETLIST, closure-upvalue and native C->F proof tests."""
from __future__ import annotations

import csv
from pathlib import Path
import sys
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.chunk import Chunk, Constant, Proto, parse
from sv_lua54.r1 import (
    OPNAMES, annotate_methods, decode, direct_cf_methods, fnv1a,
    read_symbols, setlist_records, syntactic_edges, upvalue_records, validate_extraarg,
)

HEADER = (bytes.fromhex("1b4c7561540019930d0a1a0a")
          + b"\x04\x08\x08" + (0x5678).to_bytes(8, "little")
          + __import__("struct").pack("<d", 370.5))


def abc(name: str, a=0, b=0, c=0, k=0) -> bytes:
    word = OPNAMES.index(name) | (a << 7) | (k << 15) | (b << 16) | (c << 24)
    return word.to_bytes(4, "little")


def abx(name: str, a=0, bx=0) -> bytes:
    word = OPNAMES.index(name) | (a << 7) | (bx << 15)
    return word.to_bytes(4, "little")


def extra(ax: int) -> bytes:
    word = OPNAMES.index("EXTRAARG") | (ax << 7)
    return word.to_bytes(4, "little")


def proto(pid=0, parent=None, code=b"", children=None, upvalues=b"", constants=None, stack=8):
    return Proto(id=pid, parent_id=parent, start=0, code_offset=0, end=0,
                 source=None, line_defined=0, last_line_defined=0,
                 num_params=0, is_vararg=0, max_stack_size=stack, code=code,
                 constants=constants or [], upvalues=upvalues,
                 children=children or [])


def chunk(root: Proto) -> Chunk:
    value = Chunk(HEADER, root.upvalue_count, root, "")
    return parse(value.encode())


class NativeR1Tests(unittest.TestCase):
    def test_setlist_fixed_and_extraarg(self):
        p = proto(code=abc("SETLIST", a=3, b=2, c=4, k=1) + extra(1) + abc("RETURN0"))
        records = setlist_records(p, radius=1)
        self.assertEqual(len(records), 1)
        r = records[0]
        self.assertEqual((r["array_index_first"], r["array_index_last"]), (261, 262))
        self.assertEqual((r["source_register_first"], r["source_register_last"]), (4, 5))
        self.assertEqual(r["status"], "DECODED_SEMANTICS_ONLY")
        self.assertEqual(validate_extraarg(p), [])
        edges, errors = syntactic_edges(p)
        self.assertEqual(errors, [])
        self.assertIn((0, 2, "CONSUME_EXTRAARG"), edges)

    def test_setlist_open_top_no_static_count(self):
        p = proto(code=abc("SETLIST", a=2, b=0, c=0) + abc("RETURN0"))
        rec = setlist_records(p)[0]
        self.assertTrue(rec["dynamic_top"])
        self.assertIsNone(rec["count"])
        self.assertEqual(rec["array_index_first"], 1)
        self.assertIsNone(rec["array_index_last"])
        self.assertIsNone(rec["source_register_last"])

    def test_setlist_malformed_extraarg_is_explicit(self):
        p = proto(code=abc("SETLIST", a=0, b=3, c=2, k=1) + abc("RETURN0"))
        r = setlist_records(p)[0]
        self.assertEqual(r["status"], "MISSING_EXTRAARG")
        self.assertIsNone(r["array_index_first"])
        self.assertTrue(any(x["code"] == "MISSING_EXTRAARG" for x in validate_extraarg(p)))

    def test_neweable_extraarg_and_raw_offsets(self):
        p = proto(code=abc("NEWTABLE", a=0, b=0, c=1) + extra(0) + abc("RETURN0"))
        self.assertEqual(validate_extraarg(p), [])
        edges, failures = syntactic_edges(p)
        self.assertEqual(failures, [])
        self.assertIn((0, 2, "CONSUME_EXTRAARG"), edges)

    def test_closure_capture_register_and_parent_upvalue(self):
        child = proto(pid=1, parent=0, code=abc("GETUPVAL", a=0, b=0) + abc("RETURN1"),
                      upvalues=b"\x01\x02\x00" + b"\x00\x00\x00")
        root = proto(code=abx("CLOSURE", a=0, bx=0) + abc("RETURN0"),
                     upvalues=b"\x01\x00\x00", children=[child])
        result = chunk(root)
        captures, errors = upvalue_records(result)
        self.assertEqual(errors, [])
        self.assertEqual(len(captures), 3)
        reg, inherited = captures[1:]
        self.assertEqual(reg["binding"], "PARENT_REGISTER_AT_CLOSURE")
        self.assertEqual(reg["source_index"], 2)
        self.assertEqual(inherited["binding"], "PARENT_UPVALUE_CELL")
        self.assertEqual(inherited["source_index"], 0)
        self.assertEqual(reg["closure_sites"][0]["pc"], 0)
        self.assertEqual(captures[0]["binding"], "ROOT_UPVALUE_HOST_DEPENDENT")
        self.assertEqual(inherited["lexical_origin"]["kind"], "ROOT_HOST_UPVALUE")

    def test_transitive_upvalue_origin_to_ancestor_register(self):
        grand = proto(pid=2, parent=1, code=abc("RETURN0"),
                      upvalues=b"\x00\x00\x00")
        middle = proto(pid=1, parent=0,
                       code=abx("CLOSURE", a=0, bx=0) + abc("RETURN0"),
                       children=[grand], upvalues=b"\x01\x02\x00")
        root = proto(code=abx("CLOSURE", a=0, bx=0) + abc("RETURN0"),
                     children=[middle], upvalues=b"\x01\x00\x00")
        records, errors = upvalue_records(chunk(root))
        self.assertEqual(errors, [])
        leaf = next(x for x in records if x["proto_id"] == 2)
        self.assertEqual(leaf["lexical_origin"], {
            "kind": "ANCESTOR_REGISTER_AT_CLOSURE",
            "proto_id": 0, "register": 2, "hops": 1,
        })

    def test_invalid_capture_not_silently_accepted(self):
        child = proto(pid=1, parent=0, code=abc("RETURN0"), upvalues=b"\x01\xff\x00")
        root = proto(code=abx("CLOSURE", bx=0) + abc("RETURN0"),
                     upvalues=b"\x01\x00\x00", children=[child])
        _, errors = upvalue_records(chunk(root))
        self.assertEqual(errors[0]["code"], "PARENT_REGISTER_OOB")

    def test_real_eight_opcode_cf_assignment(self):
        c = b"C850E69B34478276C"
        f = b"F123456789ABCDEF0"
        body = proto(pid=1, parent=0, code=abc("RETURN0"))
        ops = (abc("GETUPVAL", a=0, b=0)
               + abx("LOADK", a=1, bx=0)
               + abc("GETTABLE", a=0, b=0, c=1)
               + abx("LOADK", a=1, bx=1)
               + abc("GETTABLE", a=0, b=0, c=1)
               + abx("LOADK", a=1, bx=2)
               + abx("CLOSURE", a=2, bx=0)
               + abc("SETTABLE", a=0, b=1, c=2)
               + abc("RETURN0"))
        root = proto(code=ops, children=[body], upvalues=b"\x01\x00\x00",
                     constants=[Constant(4,c), Constant(4,b"prototype"), Constant(4,f)])
        links, rejected = direct_cf_methods(chunk(root), "test")
        self.assertEqual(len(links), 1)
        self.assertFalse(rejected)
        self.assertEqual(links[0]["child_proto_id"], 1)
        self.assertEqual(links[0]["assignment_pc"], 7)
        self.assertEqual(links[0]["class_hash"], c.decode())
        self.assertEqual(links[0]["method_hash"], f.decode())

    def test_reject_hashed_string_nearby_without_closure(self):
        c = b"C850E69B34478276C"
        root = proto(code=abc("LOADK") + abc("RETURN0"), constants=[Constant(4,c)])
        links, _ = direct_cf_methods(chunk(root), "test")
        self.assertEqual(links, [])

    def test_names_and_provenance_without_key_rewriting(self):
        with tempfile.TemporaryDirectory() as d:
            folder = Path(d)
            for k in "cefs":
                (folder / f"lua_{k}_hashes.txt").write_text("", encoding="utf-8")
            known = f"{fnv1a('main.gem.setting_tool.GemSettingManager'):016X}"
            (folder / "lua_c_hashes.txt").write_text(
                f"0x{known} main.gem.setting_tool.GemSettingManager\n", encoding="utf-8")
            unknown = f"{fnv1a('onOffsetPosValueChanged'):016X}"
            (folder / "lua_f_hashes.txt").write_text(f"0x{unknown}\n", encoding="utf-8")
            supplement = folder / "recovered.tsv"
            with supplement.open("w", encoding="utf-8", newline="") as f:
                w = csv.DictWriter(f, fieldnames=["kind", "hash", "candidate_name"], delimiter="\t")
                w.writeheader()
                w.writerow({"kind": "f", "hash": f"0x{unknown}",
                            "candidate_name": "onOffsetPosValueChanged"})
            mapping = read_symbols(folder, supplement)
            edges = [{"class_hash": "C"+known, "method_hash": "F"+unknown}]
            a = annotate_methods(edges, mapping)[0]
            self.assertEqual(a["class_name_evidence"], "POKEDOCS_NAMED")
            self.assertEqual(a["class_namespace_candidate"], "main.gem.setting_tool")
            self.assertEqual(a["function_name_evidence"], "HASH_EXACT_CANDIDATE")
            self.assertEqual(a["method_hash"], "F"+unknown)
            self.assertTrue(a["runtime_key_preserved"])


if __name__ == "__main__":
    unittest.main()
