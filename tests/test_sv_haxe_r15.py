"""Synthetic original Lua54 SELF/CALL/TEST R15 CFG/SSA negative gates.

These tests do NOT replace original 4.0.0 Child-vs-Haxe Lua A/B.
"""
import sys
import unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools/SV.Lua54/src"))
from sv_lua54.chunk import Proto,Constant
from sv_lua54.emit_haxe.restricted import LiftFailure
from sv_lua54.emit_haxe.r15_calls_ssa import lift_setup, emit_setup, RETURN_PHI

COMMON=("00008094","020200C4","000000C2","800003B8",
 "02010092","02028194","0301028E","010301C4","00000187",
 "000201C8","00000085","000200C8","000100C7")
K=("F22C7B81A049FA20D","component","f558733FC","updateInterval")
TARGETS={
 "main.field.action.base.IAction.Setup":(12930,"0A00008D","0C00010D",10,12),
 "main.field.action.base.IAutoAction.Setup":(13197,"0200008D","0400010D",2,4),
}

def fixture(cls,words=None,constants=None,num_params=1,upvalues=b""):
    pid,w4,w5,_,_=TARGETS[cls]
    seq=COMMON[:4]+(w4,w5)+COMMON[4:] if words is None else words
    return Proto(
      id=pid,parent_id=0,start=0,code_offset=100,end=0,
      source=None,line_defined=0,last_line_defined=0,
      num_params=num_params,is_vararg=0,max_stack_size=6,
      code=b"".join(int(x,16).to_bytes(4,"little") for x in seq),
      constants=[Constant(4,k.encode()) for k in
        (constants if constants is not None else K)],
      upvalues=upvalues,children=[],
    )

class R15NativeSelfCallSSA(unittest.TestCase):
    def test_exact_class_a_register_dataflow_and_exit_phi(self):
        cls="main.field.action.base.IAction.Setup"
        ast=lift_setup(fixture(cls),cls)
        self.assertEqual((ast.first_slot,ast.second_slot),(10,12))
        self.assertEqual(ast.kind,"SELF_CALL_TEST_CFG_SSA_RETURN_PHI")
        self.assertIn((2,3,"TEST_NEXT"),ast.edges)
        self.assertIn((2,4,"TEST_SKIP"),ast.edges)
        self.assertIn((3,12,"JMP"),ast.edges)
        self.assertEqual(ast.blocks[-1]["name"],"RETURN_PHI")
        self.assertEqual(RETURN_PHI["inputs"][0]["from_pc"],11)
        self.assertEqual(RETURN_PHI["inputs"][1]["from_pc"],13)
        self.assertEqual(len(ast.ssa),13)
        self.assertIn("OPAQUE_CALL",{x["effect"] for x in ast.ssa})
        body=emit_setup("Setup","F7C68FEDB79AB6396",ast)
        self.assertIn('r15Method(this);',body)
        self.assertIn('r15Invoke(r15Child, r15Interval);',body)

    def test_exact_auto_action_and_different_self_slots(self):
        cls="main.field.action.base.IAutoAction.Setup"
        ast=lift_setup(fixture(cls),cls)
        self.assertEqual((ast.first_slot,ast.second_slot),(2,4))
        self.assertIn('untyped this[2]',ast.lines)
        self.assertIn('untyped this[4]',ast.lines)

    def test_reject_unregistered_class(self):
        cls="main.field.action.base.IAction.Setup"
        with self.assertRaisesRegex(LiftFailure,"ownership"):
            lift_setup(fixture(cls),"main.field.action.base.Other.Setup")

    def test_reject_drifted_source_k(self):
        cls="main.field.action.base.IAction.Setup"
        with self.assertRaisesRegex(LiftFailure,"K changed"):
            lift_setup(fixture(cls,constants=(K[0],"component","bad",K[3])),cls)

    def test_reject_upvalue_capture(self):
        cls="main.field.action.base.IAction.Setup"
        with self.assertRaisesRegex(LiftFailure,"upvalues"):
            lift_setup(fixture(cls,upvalues=b"\x01\x00\x00"),cls)

    def test_reject_wrong_self_register_slot(self):
        cls="main.field.action.base.IAction.Setup"
        p=fixture(cls)
        words=tuple(f"{int.from_bytes(p.code[i:i+4],'little'):08X}"
                    for i in range(0,len(p.code),4))
        w=list(words)
        w[4]="0B00008D"
        with self.assertRaises(LiftFailure):
            lift_setup(fixture(cls,words=w),cls)

    def test_reject_wrong_true_false_jump(self):
        cls="main.field.action.base.IAction.Setup"
        p=fixture(cls)
        words=[f"{int.from_bytes(p.code[i:i+4],'little'):08X}"
               for i in range(0,len(p.code),4)]
        words[3]="800002B8"
        with self.assertRaises(LiftFailure):
            lift_setup(fixture(cls,words=words),cls)

    def test_refuse_extra_parameters(self):
        cls="main.field.action.base.IAction.Setup"
        with self.assertRaises(LiftFailure):
            lift_setup(fixture(cls,num_params=2),cls)

    def test_refuse_bad_haxe_hash(self):
        cls="main.field.action.base.IAction.Setup"
        ast=lift_setup(fixture(cls),cls)
        with self.assertRaisesRegex(LiftFailure,"invalid native F"):
            emit_setup("Setup","S7C68FEDB79AB6396",ast)

    def test_no_engine_runtime_proven_by_static_analysis(self):
        cls="main.field.action.base.IAction.Setup"
        ast=lift_setup(fixture(cls),cls)
        self.assertEqual(ast.kind,"SELF_CALL_TEST_CFG_SSA_RETURN_PHI")
        self.assertIn("OPAQUE_CALL",{x["effect"] for x in ast.ssa})
        self.assertNotIn("RUNTIME_VERIFIED",repr(ast))

if __name__=="__main__":
    unittest.main()
