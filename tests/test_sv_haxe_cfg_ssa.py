"""R15 conservative PC-level reaching definitions, real join PHIs and opaque heap effects."""
import sys
import unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools/SV.Lua54/src"))
from sv_lua54.chunk import Proto
from sv_lua54.emit_haxe.restricted import LiftFailure
from sv_lua54.emit_haxe.cfg_ssa_diagnostic import inspect

def example(words,params=2,stack=5):
    return Proto(id=88,parent_id=0,start=0,code_offset=100,end=0,
                 source=None,line_defined=0,last_line_defined=0,
                 num_params=params,is_vararg=0,max_stack_size=stack,
                 code=b"".join(int(w,16).to_bytes(4,"little") for w in words))

# PC0 TEST R1; PC1 JMP -> PC4; PC2 LOADTRUE R1;
# PC3 JMP -> PC5; PC4 LOADFALSE R1; PC5 RETURN1 R1.
DIAMOND=("000000C2","800000B8","00000087",
         "80000038","00000085","000200C8","000100C7")

class TestCfgSsaDiagnostic(unittest.TestCase):
    def test_reaching_definitions_on_actual_diamond_join(self):
        r=inspect(example(DIAMOND))
        candidates=[v for v in r["phi_candidates"] if v["join_pc"]==5 and v["register"]==1]
        self.assertEqual(len(candidates),1)
        self.assertEqual(candidates[0]["reaching_versions"],["R1@2","R1@4"])
        self.assertEqual(candidates[0]["incoming_predecessor_pcs"],[3,4])
        self.assertNotIn(6,[pc for b in r["basic_blocks"] for pc in b["pcs"]])
        self.assertEqual(r["unreachable_pcs"],[6])
        self.assertFalse(r["haxe_source_generated"])

    def test_opaque_call_and_two_self_registers_are_preserved(self):
        p=example(("00008094","020200C4","000000C2",
                   "80000038","00000085","000200C8","000100C7"),
                  params=1)
        r=inspect(p)
        self.assertTrue(any(x["effect"]=="OPAQUE_CALL_HEAP_BARRIER" for x in r["call_or_unhandled_effect_barriers"]))
        self.assertEqual([(x["op"],x["pc"]) for x in r["call_sites"][:2]],
                         [("SELF",0),("CALL",1)])
        self.assertIn("NOT_PROVEN",r["memory_ssa_status"])

    def test_metatable_write_order_is_unknown_memory_ssa(self):
        r=inspect(example(("01240011","02250011","000101C7"),params=3))
        barriers=[x for x in r["call_or_unhandled_effect_barriers"]
                  if x["effect"]=="WRITE_MAY_INVOKE_NEWINDEX_METAMETHOD"]
        self.assertEqual([x["pc"] for x in barriers],[0,1])
        self.assertEqual(r["phi_candidates"],[])

    def test_reject_invalid_stack_and_synthetic_cap(self):
        with self.assertRaises(LiftFailure):
            inspect(example(DIAMOND,params=6,stack=5))
        with self.assertRaises(LiftFailure):
            inspect(example(DIAMOND),max_instructions=4)

if __name__=="__main__":
    unittest.main()
