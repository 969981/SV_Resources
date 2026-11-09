"""Pure synthetic roundtrip/field-preservation tests; no copyrighted game data."""
from __future__ import annotations

import importlib.util
from pathlib import Path
import struct
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.chunk import Chunk, Constant, Lua54FormatError, Proto, enc_vint, parse

HEADER = (bytes.fromhex("1b4c7561540019930d0a1a0a")
          + b"\x04\x08\x08" + (0x5678).to_bytes(8, "little")
          + struct.pack("<d", 370.5))


def fixture() -> bytes:
    # Includes both signed integer and a floating NaN payload: no lossy
    # float conversion permitted during reserialization.
    constants = [
        Constant(0), Constant(1), Constant(17),
        Constant(3, (-(2**63)).to_bytes(8, "little", signed=True)),
        Constant(19, bytes.fromhex("452301000000f87f")),
        Constant(4, b"can\x00ary"),
        Constant(20, b"\xff" * 300),
        Constant(4, b""), Constant(20, None),
    ]
    child = Proto(
        id=1, parent_id=0, start=0, code_offset=0, end=0,
        source=None, line_defined=100, last_line_defined=199,
        num_params=2, is_vararg=0, max_stack_size=4,
        code=struct.pack("<II", 0, 71),
        constants=[Constant(4, b"inner")],
        upvalues=b"\x01\x00\x00",
        lineinfo=b"\xff\x01",
        abslineinfo=[(0, 100), (1, 199)],
        locvars=[(b"local\x00name", 0, 2)],
        upvalue_names=[b"_ENV"],
    )
    root = Proto(
        id=0, parent_id=None, start=0, code_offset=0, end=0,
        source=b"@native\x00root",
        line_defined=0, last_line_defined=0,
        num_params=0, is_vararg=1, max_stack_size=6,
        code=struct.pack("<III", 0, 79, 71),
        constants=constants,
        upvalues=b"\x01\x00\x00",
        children=[child],
        lineinfo=b"\x00\x01\xff",
        abslineinfo=[(0, 1), (2, 9)],
        locvars=[(b"x", 0, 3)],
        upvalue_names=[b"_ENV"],
    )
    return Chunk(HEADER, 1, root, "").encode()


class Lua54ParserTests(unittest.TestCase):
    def test_canonical_header(self):
        self.assertEqual(len(HEADER), 31)
        self.assertTrue(fixture().startswith(HEADER))

    def test_roundtrip_all_fields(self):
        raw = fixture()
        ir = parse(raw)
        self.assertEqual(raw, ir.encode())
        nodes = list(ir.protos())
        self.assertEqual([p.id for p in nodes], [0, 1])
        self.assertEqual(nodes[1].parent_id, 0)
        self.assertGreater(nodes[1].start, nodes[0].code_offset)
        self.assertEqual(nodes[0].end, len(raw))
        self.assertEqual(nodes[0].constants[3].value_repr(), str(-(2**63)))
        self.assertEqual(nodes[0].constants[4].payload, bytes.fromhex("452301000000f87f"))
        self.assertEqual(nodes[0].constants[5].payload, b"can\x00ary")
        self.assertEqual(nodes[1].locvars, [(b"local\x00name", 0, 2)])
        self.assertEqual(nodes[1].upvalue_names, [b"_ENV"])
        self.assertEqual(nodes[1].abslineinfo, [(0, 100), (1, 199)])

    def test_stats_and_preorder(self):
        stats = parse(fixture()).summary()
        self.assertEqual(stats["prototype_count"], 2)
        self.assertEqual(stats["top_level_prototype_count"], 1)
        self.assertEqual(stats["instruction_count"], 5)
        self.assertEqual(stats["constant_count"], 10)
        self.assertEqual(stats["max_depth"], 1)
        self.assertEqual(stats["debug"]["prototypes_with_any_debug"], 2)

    def test_vint(self):
        for value in [0, 1, 127, 128, 16383, 16384, 2**32, 2**63]:
            chunk = fixture().replace(b"can\x00ary", b"can\x00ary")
            self.assertTrue(enc_vint(value)[-1] & 128)
            self.assertEqual(parse(chunk).encode(), chunk)

    def test_reject_trailing(self):
        with self.assertRaisesRegex(Lua54FormatError, "trailing"):
            parse(fixture() + b"\x00")

    def test_reject_truncated(self):
        with self.assertRaisesRegex(Lua54FormatError, "truncated"):
            parse(fixture()[:-1])

    def test_reject_unknown_tag(self):
        sample = fixture()
        # Search for compact known nil tag after instruction sequence,
        # then replace it with a new unsupported tag.
        needle = enc_vint(9) + bytes((0, 1, 17, 3))
        self.assertIn(needle, sample)
        broken = sample.replace(needle, enc_vint(9) + bytes((127, 1, 17, 3)), 1)
        with self.assertRaisesRegex(Lua54FormatError, "bad constant tag"):
            parse(broken)

    def test_bad_root_upvalue_count(self):
        raw = bytearray(fixture())
        raw[31] = 2
        with self.assertRaisesRegex(Lua54FormatError, "root upvalue count mismatch"):
            parse(bytes(raw))

    def test_no_mutation_of_input(self):
        src = fixture()
        parse(src)
        self.assertEqual(src, fixture())


if __name__ == "__main__":
    unittest.main()
