"""No-ROM R12 exact Lua5.4 GETI/SETI/LT-MOVE AST and effect guards."""
import sys
import unittest
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools/SV.Lua54/src"))
from sv_lua54.chunk import Proto, Constant
from sv_lua54.emit_haxe import LiftFailure
from sv_lua54.emit_haxe.side_effects import lift_instance,haxe_method


def fixture(words,params,upvalues=b"",constants=None):
    code=b"".join(int(w,16).to_bytes(4,"little") for w in words)
    return Proto(id=42,parent_id=0,start=0,code_offset=100,end=0,
                 source=None,line_defined=0,last_line_defined=0,
                 num_params=params,is_vararg=0,max_stack_size=5,
                 code=code,constants=constants or [],upvalues=upvalues,children=[])


class TestNativeSlotAndBranchLowering(unittest.TestCase):
    def test_exact_geti_r0_index86(self):
        p=fixture(["5600008D","000200C8","000100C7"],1)
        ast=lift_instance(p)
        self.assertEqual((ast.kind,ast.slot,ast.signature),
                         ("self_slot_get",86,"():Dynamic"))
        self.assertEqual(ast.statements,("return untyped this[86];",))
        self.assertFalse(ast.has_table_effect)

    def test_exact_seti_r0_index86_r1(self):
        p=fixture(["01560011","00010147"],2)
        ast=lift_instance(p)
        self.assertEqual((ast.kind,ast.slot),
                         ("self_slot_set",86))
        self.assertTrue(ast.has_table_effect)
        self.assertIn("untyped this[86] = value;",ast.statements)
        hx=haxe_method("SetGemEnableCount","FC38443D88FBF1318",ast)
        self.assertIn('public function SetGemEnableCount(value:Dynamic):Void',hx)

    def test_branch_and_move_clamp(self):
        p=fixture(["000200BA","80000038","00020080","000101BA",
                   "80000038","00030080","000200C8","00010247"],4)
        ast=lift_instance(p)
        self.assertEqual(ast.kind,"min_max_clamp")
        self.assertEqual(ast.signature,"(value:Dynamic,min:Dynamic,max:Dynamic):Dynamic")
        self.assertEqual(ast.statements,(
            "if (value < min) value = min;",
            "if (max < value) value = max;",
            "return value;",
        ))
        self.assertFalse(ast.has_table_effect)

    def test_reject_wrong_register_write(self):
        with self.assertRaisesRegex(LiftFailure,"SETI"):
            lift_instance(fixture(["02560011","00010147"],2))

    def test_reject_wrong_get_register(self):
        with self.assertRaisesRegex(LiftFailure,"GETI"):
            lift_instance(fixture(["5600010D","000200C8","000100C7"],1))

    def test_reject_captured_upvalues(self):
        with self.assertRaisesRegex(LiftFailure,"upvalue"):
            lift_instance(fixture(["01560011","00010147"],2,b"\x00\x00\x00"))

    def test_getfield_pinned_utf8_field_name(self):
        p=fixture(["1600008D","0001008E","000200C8","000100C7"],1,
                  constants=[Constant(4,b"callFromReserve")])
        ast=lift_instance(p)
        self.assertEqual((ast.kind,ast.slot),("self_field_get",22))
        self.assertEqual(ast.statements,
                         ('return untyped this[22]["callFromReserve"];',))
        self.assertFalse(ast.has_table_effect)

    def test_setfield_true_requires_table_state_and_metatable_parity(self):
        p=fixture(["1600008D","01008092","000100C7"],1,
                  constants=[Constant(4,b"skipPlayerStuckCheck"),
                             Constant(17,None)])
        ast=lift_instance(p)
        self.assertEqual((ast.kind,ast.slot),("self_field_set_true",22))
        self.assertEqual(ast.statements,
                         ('untyped this[22]["skipPlayerStuckCheck"] = true;',))
        self.assertTrue(ast.has_table_effect)

    def test_refuse_unsupported_named_field_rhs(self):
        p=fixture(["1600008D","01008092","000100C7"],1,
                  constants=[Constant(4,b"skipPlayerStuckCheck"),
                             Constant(1,None)])
        with self.assertRaisesRegex(LiftFailure,"literal true RHS"):
            lift_instance(p)

    def test_reject_unrecognized_side_effect(self):
        with self.assertRaisesRegex(LiftFailure,"unsupported"):
            lift_instance(fixture(["01010092","00010147"],2))


if __name__=="__main__":
    unittest.main()
