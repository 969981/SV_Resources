"""CLOSURE creation-site provenance synthetic tests; no raw ROM content."""
from __future__ import annotations

import struct
import sys
from pathlib import Path
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.chunk import Chunk, Constant, Proto, parse
from sv_lua54 import capture, trace

HEADER = (bytes.fromhex("1b4c7561540019930d0a1a0a")
          + b"\x04\x08\x08" + (0x5678).to_bytes(8, "little")
          + struct.pack("<d", 370.5))
C = "C850E69B34478276C"
F = "F7C68FEDB79AB6396"
F2 = "F1DE5A53079D877CE"


def abc(name, a=0, b=0, c=0):
    return trace.OPNAMES.index(name) | a << 7 | b << 16 | c << 24


def abx(name, a, bx):
    return trace.OPNAMES.index(name) | a << 7 | bx << 15


def sj(offset):
    return trace.OPNAMES.index("JMP") | (offset + 16777215) << 7


def sample(prefix):
    body = Proto(id=1, parent_id=0, start=0, code_offset=0, end=0,
                 source=None, line_defined=0, last_line_defined=0,
                 num_params=1, is_vararg=0, max_stack_size=4,
                 code=struct.pack("<I", abc("RETURN0")),
                 upvalues=b"\x01\x03\x00")
    words = list(prefix) + [
        abc("GETUPVAL",0,0), abx("LOADK",1,0),
        abc("GETTABLE",0,0,1), abx("LOADK",1,1),
        abc("GETTABLE",0,0,1), abx("LOADK",1,2),
        abx("CLOSURE",2,0), abc("SETTABLE",0,1,2), abc("RETURN0")]
    root = Proto(id=0, parent_id=None, start=0, code_offset=0, end=0,
                 source=None, line_defined=0, last_line_defined=0,
                 num_params=0, is_vararg=0, max_stack_size=8,
                 code=struct.pack("<"+"I"*len(words), *words),
                 constants=[Constant(4,C.encode()), Constant(4,b"prototype"),
                            Constant(4,F.encode()), Constant(4,F2.encode())],
                 children=[body], upvalues=b"\x01\x00\x00")
    chunk = parse(Chunk(HEADER, 1, root, "").encode())
    methods = list(trace.native_methods(chunk))
    assert len(methods)==1
    return chunk, methods[0]


class CaptureTests(unittest.TestCase):
    def test_same_block_register_capture_symbol_candidate(self):
        chunk, method = sample([abx("LOADK",3,3)])
        out = capture.capture_context(chunk, method)
        slot = out["capture_slots"][0]
        self.assertEqual(out["creation_pc"], 7)
        self.assertEqual(slot["captured_register"],3)
        self.assertEqual(slot["capture_status"],"STATIC_SAME_BLOCK_SYMBOL_CANDIDATE")
        self.assertEqual(slot["same_block_fact"]["name"], F2)
        self.assertEqual(slot["same_block_source_pc"], 0)
        self.assertFalse(out["runtime_upvalues_recovered"])

    def test_predecessor_move_chain_stays_candidate_not_runtime_proof(self):
        chunk, method = sample([
            abx("LOADK",4,3), abc("MOVE",3,4), sj(0)])
        out = capture.capture_context(chunk, method)
        cap = out["capture_slots"][0]
        self.assertIsNone(cap["same_block_fact"])
        backward = cap["backward_writers"]
        self.assertFalse(backward["incomplete"])
        self.assertEqual(backward["candidate_count"], 1)
        writer = backward["candidate_writers"][0]
        self.assertEqual(writer["pc"],0)
        self.assertEqual(writer["symbol"], F2)
        self.assertEqual(writer["moves_after"][0]["move_pc"],1)
        self.assertFalse(writer["value_verified"])

    def test_branch_does_not_inherit_linear_prior_register_guess(self):
        # PC0 jumps over the apparent writer; local creation block begins PC2.
        chunk, method = sample([sj(1),abx("LOADK",3,3)])
        out = capture.capture_context(chunk, method)
        slot = out["capture_slots"][0]
        self.assertEqual(out["creation_basic_block_start_pc"], 2)
        self.assertEqual(slot["capture_status"],"UNRESOLVED_CAPTURE_CONTENTS")
        self.assertIsNone(slot["same_block_fact"])


if __name__=="__main__":
    unittest.main()
