"""Conservative R2 native table ownership tests (synthetic bytes only)."""
from pathlib import Path
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.chunk import Proto
from sv_lua54.ownership import trace_owner
from sv_lua54.r1 import OPNAMES


def abc(op, a=0, b=0, c=0, k=0):
    word = OPNAMES.index(op) | (a << 7) | (k << 15) | (b << 16) | (c << 24)
    return word.to_bytes(4, "little")


def ax(op, x=0):
    return (OPNAMES.index(op) | (x << 7)).to_bytes(4, "little")


def abx(op, a=0, bx=0):
    return (OPNAMES.index(op) | (a << 7) | (bx << 15)).to_bytes(4, "little")


def prototype(code, children=None):
    return Proto(id=0, parent_id=None, start=0, code_offset=400, end=0,
                 source=None, line_defined=0, last_line_defined=0,
                 num_params=0, is_vararg=0, max_stack_size=30,
                 code=code, constants=[], upvalues=b"", children=children or [])


HEAD = abc("NEWTABLE", 14) + ax("EXTRAARG")
VALUES = abc("LOADI", 15) + abc("LOADI", 16) + abc("LOADI", 17)
END = abc("SETLIST", 14, 3) + abc("RETURN0")


class OwnershipTests(unittest.TestCase):
    def test_private_candidate_is_not_approved_as_ast(self):
        r = trace_owner(prototype(HEAD + VALUES + END), 5)
        self.assertEqual(r["producer_pc"], 0)
        self.assertEqual(r["native_byte_offset"], 420)
        self.assertEqual(r["native_precheck"], "POTENTIAL_PRIVATE_TABLE")
        self.assertEqual(r["events"], [])
        self.assertFalse(r["proof_complete"])
        self.assertFalse(r["ast_lowering_approved"])

    def test_preexisting_alias_blocks_folding(self):
        r = trace_owner(prototype(HEAD + abc("MOVE", 1, 14)
                                  + VALUES + END), 6)
        self.assertEqual(r["native_precheck"], "PROOF_BLOCKED")
        self.assertEqual(r["events"][0]["read_kind"], "MOVE_ALIAS")

    def test_target_register_overwrite_blocks(self):
        r = trace_owner(prototype(HEAD + abc("LOADI", 14)
                                  + VALUES + END), 6)
        self.assertEqual(r["native_precheck"], "PROOF_BLOCKED")
        self.assertEqual(r["events"][0]["write_kind"], "WRITE")

    def test_call_may_escape_table(self):
        code = HEAD + abc("CALL", 13, 2, 1) + VALUES + END
        r = trace_owner(prototype(code), 6)
        self.assertEqual(r["native_precheck"], "PROOF_BLOCKED")
        self.assertEqual(r["events"][0]["read_kind"], "CALL_ESCAPE")

    def test_metamethod_fallback_edge_requires_more_proof(self):
        code = HEAD + abc("MMBIN", 1) + VALUES + END
        r = trace_owner(prototype(code), 6)
        self.assertEqual(r["native_precheck"], "PROOF_BLOCKED")
        self.assertEqual(r["control_flow_barriers"]["implicit_metamethod_skip_pcs"], [2])

    def test_child_closure_capture_requires_analysis(self):
        child = prototype(abc("RETURN0"))
        child.id = 1
        child.parent_id = 0
        child.upvalues = b"\x01\x0E\x00"
        code = HEAD + abx("CLOSURE", 4, 0) + VALUES + END
        r = trace_owner(prototype(code, [child]), 6)
        self.assertEqual(r["native_precheck"], "PROOF_BLOCKED")
        self.assertEqual(r["control_flow_barriers"]["closure_capture_of_table_pcs"], [2])

    def test_no_producer_is_not_a_certificate(self):
        r = trace_owner(prototype(VALUES + END), 3)
        self.assertEqual(r["status"], "NO_LOCAL_NEWTABLE_IN_WINDOW")
        self.assertFalse(r["proof_complete"])

    def test_wrong_pc_rejected(self):
        with self.assertRaisesRegex(ValueError, "not a native SETLIST"):
            trace_owner(prototype(HEAD + VALUES + END), 2)


if __name__ == "__main__":
    unittest.main()
