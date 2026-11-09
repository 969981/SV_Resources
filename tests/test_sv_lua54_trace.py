"""Synthetic C->F, PC, CFG and resolved-vs-unresolved call tests. No game bytes."""
from __future__ import annotations

from pathlib import Path
import struct
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.chunk import Chunk, Constant, Proto, parse
from sv_lua54 import trace

HEADER = (bytes.fromhex("1b4c7561540019930d0a1a0a")
          + b"\x04\x08\x08" + (0x5678).to_bytes(8, "little")
          + struct.pack("<d", 370.5))
C = "C850E69B34478276C"
F = "F7C68FEDB79AB6396"
F_OTHER = "F1DE5A53079D877CE"


def abc(name, a=0, b=0, c=0, k=0):
    return (trace.OPNAMES.index(name) | a << 7 | k << 15 | b << 16 | c << 24)


def abx(name, a, bx):
    return trace.OPNAMES.index(name) | a << 7 | bx << 15


def sj(name, offset):
    return trace.OPNAMES.index(name) | (offset + 16777215) << 7


def proto(pid, parent, code, children=(), constants=(), upvalues=b""):
    return Proto(id=pid, parent_id=parent, start=0, code_offset=0, end=0,
                 source=None, line_defined=0, last_line_defined=0,
                 num_params=0, is_vararg=0, max_stack_size=8,
                 code=struct.pack("<" + "I"*len(code), *code),
                 constants=list(constants), upvalues=upvalues,
                 children=list(children))


def sample():
    leaf = proto(2, 1, [abc("RETURN0")])
    body = proto(1, 0, [
        abx("CLOSURE", 1, 0),
        abc("MOVE", 2, 1),
        abc("CALL", 2, 1, 1),
        abc("SELF", 1, 0, 0, 1),
        abc("CALL", 1, 2, 1),
        abc("EQ", 0, 0),
        sj("JMP", 1),
        abc("RETURN0"),
        abc("RETURN0"),
    ], [leaf], [Constant(4, F_OTHER.encode())])
    root = proto(0, None, [
        abc("GETUPVAL", 0, 0),
        abx("LOADK", 1, 0),
        abc("GETTABLE", 0, 0, 1),
        abx("LOADK", 1, 1),
        abc("GETTABLE", 0, 0, 1),
        abx("LOADK", 1, 2),
        abx("CLOSURE", 2, 0),
        abc("SETTABLE", 0, 1, 2),
        abc("RETURN0"),
    ], [body], [Constant(4, C.encode()), Constant(4, b"prototype"),
                Constant(4, F.encode())], upvalues=b"\x01\x00\x00")
    return parse(Chunk(HEADER, 1, root, "").encode())


class TestTrace(unittest.TestCase):
    def test_native_assignment_links_exact_proto(self):
        chunk = sample()
        methods = list(trace.native_methods(chunk))
        self.assertEqual(len(methods), 1)
        self.assertEqual(methods[0]["proto_id"], 1)
        self.assertEqual(methods[0]["closure_pc"], 6)
        self.assertEqual(methods[0]["assignment_pc"], 7)
        self.assertGreater(methods[0]["proto_code_offset"], 0)

    def test_direct_closure_vs_hashed_dynamic_call(self):
        result = trace.report(sample(), "test", C, F)
        self.assertEqual(result["matched_definitions"], 1)
        calls = result["items"][0]["calls"]
        self.assertEqual([c["pc"] for c in calls], [2, 4])
        self.assertEqual(calls[0]["resolution"], "DIRECT_LOCAL_CLOSURE")
        self.assertEqual(calls[0]["target_proto_id"], 2)
        self.assertEqual(calls[1]["resolution"], "HASH_FIELD_TARGET_UNRESOLVED")
        self.assertIsNone(calls[1]["target_proto_id"])
        self.assertEqual(calls[1]["target_function_hash"], F_OTHER)
        self.assertEqual(result["items"][0]["runtime_equivalence"], "NOT_TESTED")

    def test_cfg_test_skip_and_jump(self):
        chunk = sample()
        body = next(x for x in chunk.protos() if x.id == 1)
        blocks, succ, code = trace.basic_blocks(body)
        self.assertEqual(succ[5], [6, 7])
        self.assertEqual(succ[6], [8])
        self.assertEqual(succ[7], [])
        self.assertTrue(any(b["start_pc"] == 8 for b in blocks))

    def test_no_definition_from_hash_constants_alone(self):
        chunk = sample()
        root = chunk.root
        words = list(struct.unpack("<" + "I"*(len(root.code)//4), root.code))
        words[7] = abc("SETFIELD", 0, 1, 2)
        root.code = struct.pack("<" + "I"*len(words), *words)
        self.assertEqual(list(trace.native_methods(chunk)), [])

    def test_unresolvable_call_stays_unresolved(self):
        body = proto(0, None, [abc("GETUPVAL", 0, 0), abc("CALL", 0, 1, 1),
                               abc("RETURN0")])
        blocks, _, code = trace.basic_blocks(body)
        calls = trace.call_sites(body, blocks, code)
        self.assertEqual(calls[0]["resolution"], "UNRESOLVED_DYNAMIC_CALL")

    def test_jump_and_numeric_loop_pc(self):
        p = proto(0, None, [sj("JMP", 1), abc("RETURN0"), abc("RETURN0")])
        _, succ, _ = trace.basic_blocks(p)
        self.assertEqual(succ[0], [2])
        q = proto(0, None, [
            abx("FORPREP", 0, 1), abc("RETURN0"),
            abx("FORLOOP", 0, 2), abc("RETURN0")])
        _, succ2, _ = trace.basic_blocks(q)
        self.assertEqual(succ2[0], [1, 3])
        self.assertEqual(succ2[2], [1, 3])

    def test_extraarg_consumed_not_executable_target(self):
        p = proto(0, None, [abx("LOADKX", 0, 0), abx("EXTRAARG", 0, 0),
                            abc("RETURN0")])
        _, succ, _ = trace.basic_blocks(p)
        self.assertEqual(succ[0], [2])
        self.assertEqual(succ[1], [])
        bad = proto(0, None, [sj("JMP", 0), abx("EXTRAARG", 0, 0),
                              abc("RETURN0")])
        with self.assertRaisesRegex(ValueError, "EXTRAARG"):
            trace.basic_blocks(bad)


if __name__ == "__main__":
    unittest.main()
