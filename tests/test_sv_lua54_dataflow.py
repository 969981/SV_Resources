"""Synthetic cross-block Lua 5.4 must-flow and Upvalue provenance tests."""
from __future__ import annotations

import sys
from pathlib import Path
import struct
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.chunk import Chunk, Constant, Proto, parse
from sv_lua54 import dataflow, trace

HEADER = (bytes.fromhex("1b4c7561540019930d0a1a0a")
          + b"\x04\x08\x08" + (0x5678).to_bytes(8, "little")
          + struct.pack("<d", 370.5))
C = "C850E69B34478276C"
F = "F7C68FEDB79AB6396"
F2 = "F1DE5A53079D877CE"


def abc(name, a=0, b=0, c=0, k=0):
    return trace.OPNAMES.index(name) | (a << 7) | (k << 15) | (b << 16) | (c << 24)


def abx(name, a, bx):
    return trace.OPNAMES.index(name) | (a << 7) | (bx << 15)


def sj(name, offset):
    return trace.OPNAMES.index(name) | ((offset + 16777215) << 7)


def proto(pid, parent, words, *, children=(), constants=(), upvalues=b"", params=0):
    return Proto(id=pid, parent_id=parent, start=0, code_offset=0, end=0,
                 source=None, line_defined=0, last_line_defined=0,
                 num_params=params, is_vararg=0, max_stack_size=8,
                 code=struct.pack("<"+"I"*len(words), *words),
                 children=list(children), constants=list(constants),
                 upvalues=upvalues)


def chunk_with_child(body):
    root = proto(0, None, [abc("RETURN0")], children=[body],
                 upvalues=b"\x01\x00\x00")
    return parse(Chunk(HEADER, 1, root, "").encode())


class DataflowTests(unittest.TestCase):
    def test_diamond_same_hash_keeps_fact(self):
        p = proto(1, 0, [
            abx("LOADK", 2, 0), abc("TEST", 0, 0), sj("JMP", 1),
            abx("LOADK", 2, 0), abc("GETTABLE", 1, 0, 2),
            abc("CALL", 1, 1, 1), abc("RETURN0")],
            constants=[Constant(4, F.encode())], params=1)
        result = dataflow.analyze_proto(chunk_with_child(p), p,
                     owner_class=C, owner_map={(C,F):[99]})
        self.assertEqual(len(result["calls"]), 1)
        self.assertEqual(result["calls"][0]["status"], "OWNER_CANDIDATE")
        self.assertEqual(result["calls"][0]["owner_proto_candidates"], [99])
        self.assertEqual(result["calls"][0]["confidence"], "SYMBOLIC_CANDIDATE_ONLY")

    def test_diamond_mixed_hash_becomes_unknown(self):
        p = proto(1, 0, [
            abc("TEST", 0, 0), sj("JMP", 2),
            abx("LOADK", 2, 0), sj("JMP", 1),
            abx("LOADK", 2, 1), abc("GETTABLE", 1, 0, 2),
            abc("CALL", 1, 1, 1), abc("RETURN0")],
            constants=[Constant(4, F.encode()), Constant(4, F2.encode())],
            params=1)
        result = dataflow.analyze_proto(chunk_with_child(p), p,
                                        owner_class=C, owner_map={(C,F):[7]})
        self.assertEqual(result["calls"][0]["status"], "UNRESOLVED_DYNAMIC_CALL")

    def test_local_closure_cross_jump_remains_exact(self):
        leaf = proto(2, 1, [abc("RETURN0")])
        p = proto(1, 0, [
            abx("CLOSURE", 1, 0), sj("JMP", 1),
            abx("LOADK", 1, 0), abc("CALL", 1, 1, 1),
            abc("RETURN0")],
            children=[leaf], constants=[Constant(4, F.encode())])
        result = dataflow.analyze_proto(chunk_with_child(p), p, owner_map={})
        self.assertEqual(result["calls"][0]["status"], "DIRECT_LOCAL_CLOSURE")
        self.assertEqual(result["calls"][0]["target_proto_id"], 2)

    def test_self_owner_is_candidate_not_verified_target(self):
        p = proto(1, 0, [
            abc("SELF", 1, 0, 0, 1), abc("CALL", 1, 2, 1),
            abc("RETURN0")],
            constants=[Constant(4, F.encode())], params=1)
        result = dataflow.analyze_proto(chunk_with_child(p), p,
                                        owner_class=C, owner_map={(C,F):[125]})
        call = result["calls"][0]
        self.assertEqual(call["status"], "OWNER_CANDIDATE")
        self.assertEqual(call["target_proto_id"], None)
        self.assertEqual(call["owner_proto_candidates"], [125])
        self.assertEqual(result["runtime_status"] if "runtime_status" in result else None, None)

    def test_environment_class_prototype_table_hash_method(self):
        p = proto(1, 0, [
            abc("GETTABUP", 1, 0, 0), abx("LOADK", 2, 1),
            abc("GETTABLE", 1, 1, 2), abx("LOADK", 2, 2),
            abc("GETTABLE", 1, 1, 2), abc("CALL", 1, 1, 1),
            abc("RETURN0")],
            constants=[Constant(4,C.encode()), Constant(4,b"prototype"),
                       Constant(4,F.encode())], upvalues=b"\x00\x00\x00")
        chunk = chunk_with_child(p)
        node = next(x for x in chunk.protos() if x.id == 1)
        result = dataflow.analyze_proto(chunk, node, owner_map={(C,F):[9]})
        self.assertEqual(result["calls"][0]["status"], "OWNER_CANDIDATE")
        self.assertEqual(result["calls"][0]["owner_class_candidate"], C)
        self.assertEqual(result["calls"][0]["owner_proto_candidates"], [9])

    def test_upvalue_chain_exact_flags_not_runtime_value(self):
        grand = proto(2, 1, [abc("RETURN0")], upvalues=b"\x01\x02\x01")
        child = proto(1, 0, [abc("RETURN0")], children=[grand],
                      upvalues=b"\x00\x00\x00")
        chunk = chunk_with_child(child)
        parent = next(x for x in chunk.protos() if x.id == 1)
        descendant = next(x for x in chunk.protos() if x.id == 2)
        chain = dataflow.upvalue_lineage(chunk, 1, 0)
        self.assertEqual(chain[0]["status"], "PARENT_UPVALUE_REFERENCE")
        self.assertEqual(chain[-1]["status"], "EXTERNAL_ROOT_UPVALUE")
        self.assertFalse(chain[-1]["runtime_value_known"])
        self.assertEqual(dataflow.environment_slots(chunk, parent), {0})
        stack_capture = dataflow.upvalue_lineage(chunk, descendant.id, 0)
        self.assertEqual(stack_capture[0]["status"], "PARENT_REGISTER_CAPTURE_AT_CLOSURE")
        self.assertEqual(stack_capture[0]["captured_index"], 2)
        self.assertEqual(dataflow.environment_slots(chunk, descendant), set())

    def test_empty_owner_mapping_never_fabricates_callee(self):
        p = proto(1, 0, [abc("SELF", 1, 0, 0, 1),
                        abc("CALL", 1, 2, 1), abc("RETURN0")],
                  constants=[Constant(4,F.encode())], params=1)
        result = dataflow.analyze_proto(chunk_with_child(p), p,
                                        owner_class=C, owner_map={})
        call = result["calls"][0]
        self.assertEqual(call["status"], "HASH_FIELD_UNRESOLVED")
        self.assertEqual(call["target_proto_id"], None)
        self.assertEqual(call["owner_proto_candidates"], [])


if __name__ == "__main__":
    unittest.main()
