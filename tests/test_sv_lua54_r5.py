"""R5 synthetic tests: conservative Lua54 register provenance, no game binary."""
from pathlib import Path
import sys
import unittest

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools"/"SV.Lua54"/"src"))
from sv_lua54.chunk import Proto
from sv_lua54.r1 import OPNAMES, Ins
from sv_lua54.r5 import (
    reaching_register_writes, sibling_closure_capture_sites, write_kind
)

def abc(op,a=0,b=0,c=0,k=0):
    return (OPNAMES.index(op)|(a<<7)|(k<<15)|(b<<16)|(c<<24)).to_bytes(4,"little")

def abx(op,a=0,bx=0):
    return (OPNAMES.index(op)|(a<<7)|(bx<<15)).to_bytes(4,"little")

def proto(words,children=None):
    return Proto(id=0,parent_id=None,start=0,code_offset=400,end=0,
                 source=None,line_defined=0,last_line_defined=0,
                 num_params=0,is_vararg=0,max_stack_size=80,
                 code=b"".join(words),children=children or [])


class R5Tests(unittest.TestCase):
    def test_basic_last_def(self):
        p=proto([abc("LOADI",16),abc("LOADI",15),abc("RETURN0")])
        r=reaching_register_writes(p,2,16)
        self.assertTrue(r["reachable_capture"])
        self.assertEqual(r["candidate_write_count"],1)
        self.assertEqual(r["candidate_write_sites_tail"][-1]["pc"],0)
        self.assertFalse(r["entry_is_candidate"])
        self.assertEqual(r["analysis"],"SYNTACTIC_MAY_REACHING_WRITES_NOT_SSA_NOT_RUNTIME")

    def test_call_unknown_return_arity_is_maybe(self):
        p=proto([abc("LOADI",16),abc("CALL",15,2,0),abc("RETURN0")])
        r=reaching_register_writes(p,2,16)
        self.assertEqual(r["candidate_write_count"],2)
        self.assertEqual(r["candidate_write_sites_tail"][-1]["write_status"],"MAYBE")

    def test_vararg_arity_is_b_not_c(self):
        self.assertEqual(write_kind(Ins(0,"VARARG",15,2,0,0,0,0,0),16),"NO")
        self.assertEqual(write_kind(Ins(0,"VARARG",15,3,1,0,0,0,0),16),"DEFINITE")
        self.assertEqual(write_kind(Ins(0,"VARARG",15,0,1,0,0,0,0),16),"MAYBE")

    def test_testset_is_conditional(self):
        p=proto([abc("LOADI",16),abc("TESTSET",16,15,0),abc("RETURN0")])
        r=reaching_register_writes(p,2,16)
        self.assertEqual(r["candidate_write_count"],2)

    def test_arithmetic_fallback_extra_skip_is_recorded(self):
        p=proto([abc("MULK",16,11,117),abc("MMBINK",11,117),
                 abc("RETURN0")])
        r=reaching_register_writes(p,2,16)
        self.assertEqual(r["arith_fallback_skip_edges"],1)
        self.assertEqual(r["candidate_write_count"],1)

    def test_root_entry_can_still_be_possible(self):
        p=proto([abc("LOADI",15),abc("RETURN0")])
        r=reaching_register_writes(p,1,16)
        self.assertTrue(r["entry_is_candidate"])

    def test_sibling_captures_same_cell_source(self):
        child=proto([abc("RETURN0")]);child.id=1
        child.parent_id=0
        child.upvalues=bytes((1,16,0))
        p=proto([abx("CLOSURE",56,0),abc("RETURN0")],[child])
        s=sibling_closure_capture_sites(p,16,0)
        self.assertEqual(s["count"],1)
        self.assertEqual(s["site_near_target"][0]["child_proto_id"],1)
        self.assertEqual(s["site_near_target"][0]["upvalue_slot"],0)

    def test_unknown_opcode_fails_conservative(self):
        x=Ins(0,"FUTURE_UNSUPPORTED",22,0,0,0,0,0,0)
        self.assertEqual(write_kind(x,16),"MAYBE")


if __name__=="__main__":
    unittest.main()
