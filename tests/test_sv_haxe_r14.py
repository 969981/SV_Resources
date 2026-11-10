"""R14 no-ROM tests: exact original dynamic SETFIELD, two SETI, two EQI AST."""
import sys
import unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools/SV.Lua54/src"))
from sv_lua54.chunk import Proto,Constant
from sv_lua54.emit_haxe.restricted import LiftFailure
from sv_lua54.emit_haxe.r14_patterns import lift,emit


def child(words,num_params,constants=(),upvalues=b""):
    return Proto(
       id=42,parent_id=0,start=0,code_offset=100,end=0,
       source=None,line_defined=0,last_line_defined=0,
       num_params=num_params,is_vararg=0,max_stack_size=5,
       code=b"".join(int(x,16).to_bytes(4,"little") for x in words),
       constants=list(constants),upvalues=upvalues,children=[])

CALL=["1600010D","01000112","000200C8","00010147"]
DISABLE=["1600010D","01000112","1600010D","0002010E","00020148","00010147"]
DOUBLE=["01240011","02250011","000101C7"]
ENEMY=["008080BD","800000B8","008200BD","800000B8",
       "00000107","00020148","00000105","00020148","00010147"]


class TestNativeR14(unittest.TestCase):
    def test_dynamic_setfield_returns_argument(self):
        ast=lift(child(CALL,2,[Constant(4,b"callFromReserve")]))
        self.assertEqual((ast.kind,ast.write_count),
                         ("write_field_return_argument",1))
        self.assertEqual(ast.signature,"(value:Dynamic):Dynamic")
        self.assertEqual(ast.statements,(
            'untyped this[22]["callFromReserve"] = value;',
            "return value;",
        ))
        hx=emit("set_CallFromReserve","FA44A9D9B3415C01C",ast)
        self.assertIn("@:hashAbi",hx)
        self.assertIn("Child Proto 42",hx)

    def test_setfield_then_readback_and_meta_index(self):
        ast=lift(child(DISABLE,2,[Constant(4,b"disableFieldCamera")]))
        self.assertEqual(ast.kind,"write_field_readback")
        self.assertEqual(ast.statements,(
            'untyped this[22]["disableFieldCamera"] = value;',
            'return untyped this[22]["disableFieldCamera"];'
        ))
        self.assertEqual(len(ast.hir),5)

    def test_two_ordered_seti_in_original_slot_order(self):
        ast=lift(child(DOUBLE,3))
        self.assertEqual((ast.kind,ast.write_count),
                         ("two_ordered_self_writes",2))
        self.assertEqual(ast.statements,(
           "untyped this[36] = first;","untyped this[37] = second;"))
        self.assertEqual(ast.signature,
                         "(first:Dynamic,second:Dynamic):Void")

    def test_exact_two_equality_branches(self):
        ast=lift(child(ENEMY,2))
        self.assertEqual(ast.kind,"integer_or_two_branches")
        self.assertEqual(ast.write_count,0)
        self.assertEqual(ast.statements,("return value == 1 || value == 3;",))
        self.assertIn((1,4,"JMP"),ast.cfg_edges)
        self.assertIn((3,6,"JMP"),ast.cfg_edges)

    def test_refuse_different_branch_immediate(self):
        words=ENEMY[:]
        words[0]="008180BD"
        with self.assertRaises(LiftFailure):
            lift(child(words,2))

    def test_refuse_incorrect_jump(self):
        words=ENEMY[:]
        words[1]="80000038"
        with self.assertRaises(LiftFailure):
            lift(child(words,2))

    def test_refuse_invalid_setfield_rhs_register(self):
        words=CALL[:]
        words[1]="02000112"
        with self.assertRaisesRegex(LiftFailure,"register"):
            lift(child(words,2,[Constant(4,b"callFromReserve")]))

    def test_refuse_invalid_key(self):
        with self.assertRaisesRegex(LiftFailure,"field"):
            lift(child(CALL,2,[Constant(4,b"unrelated")]))

    def test_refuse_no_numeric_source(self):
        with self.assertRaises(LiftFailure):
            lift(child(DOUBLE,2))

    def test_refuse_captures(self):
        with self.assertRaisesRegex(LiftFailure,"captures"):
            lift(child(CALL,2,[Constant(4,b"callFromReserve")],b"\x00\x00\x00"))

    def test_reject_unverified_call_side_effects(self):
        with self.assertRaisesRegex(LiftFailure,"unsupported"):
            lift(child(["020201C4","000101C7"],2))

    def test_bad_abi_hash_rejected(self):
        ast=lift(child(DOUBLE,3))
        with self.assertRaisesRegex(LiftFailure,"invalid native F"):
            emit("SetShowBattleMessageState","S"+"0"*16,ast)


if __name__=="__main__":
    unittest.main()
