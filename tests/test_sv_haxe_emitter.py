"""No-ROM CFG/HIR/AST->Haxe unit tests with synthetic Lua 5.4 Proto."""
import sys
import unittest
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools/SV.Lua54/src"))
from sv_lua54.chunk import Proto
from sv_lua54.r1 import OPNAMES
from sv_lua54.emit_haxe import LiftFailure, lift_constant_return, render_class


def opcode(name,a=0,b=0,c=0):
    return (OPNAMES.index(name) | (a << 7) | (b << 16) | (c << 24)).to_bytes(4,"little")


def numeric_literal(name,value):
    # Signed 17-bit sBx is centered at 65535 in original Lua 5.4.
    v=value+65535
    assert 0 <= v < 131072
    return (OPNAMES.index(name)|(1<<7)|(v<<15)).to_bytes(4,"little")


def synthetic(code,params=1,upvalues=b""):
    return Proto(id=42,parent_id=0,start=0,code_offset=100,end=0,
                 source=None,line_defined=0,last_line_defined=0,
                 num_params=params,is_vararg=0,max_stack_size=4,
                 code=code,constants=[],upvalues=upvalues,children=[])


RETURN=opcode("RETURN1",a=1,b=2)+opcode("RETURN0",a=1,b=1)


class TestRestrictedEmitter(unittest.TestCase):
    def test_loadi_cfg_hir_ast(self):
        p=synthetic(numeric_literal("LOADI",300)+RETURN)
        v=lift_constant_return(p)
        self.assertEqual(v.haxe_expression,"300")
        self.assertEqual(v.return_type,"Int")
        self.assertEqual(v.ast.value.value,300)
        self.assertEqual(v.cfg_edges,((0,1,"SEQUENTIAL"),))
        self.assertEqual(v.hir[0]["register"],1)
        self.assertEqual(v.hir[-1]["operation"],"unreachable_return0")

    def test_negative_integer(self):
        v=lift_constant_return(synthetic(numeric_literal("LOADI",-7)+RETURN))
        self.assertEqual(v.haxe_expression,"-7")

    def test_float_int_encoded_as_float(self):
        v=lift_constant_return(synthetic(numeric_literal("LOADF",2)+RETURN))
        self.assertEqual((v.return_type,v.haxe_expression),("Float","2.0"))

    def test_true_false_and_nil(self):
        cases=[("LOADTRUE","true","Bool",True),
               ("LOADFALSE","false","Bool",False),
               ("LOADNIL","null","Dynamic",None)]
        for name,expr,kind,value in cases:
            with self.subTest(name=name):
                v=lift_constant_return(synthetic(opcode(name,a=1)+RETURN))
                self.assertEqual((v.haxe_expression,v.return_type),(expr,kind))
                self.assertIs(type(v.ast.value.value),type(value))
                self.assertEqual(v.ast.value.value,value)

    def test_reject_upvalue_capture(self):
        p=synthetic(numeric_literal("LOADI",3)+RETURN,upvalues=b"\x00\x00\x00")
        with self.assertRaisesRegex(LiftFailure,"upvalue"):
            lift_constant_return(p)

    def test_reject_extra_parameters(self):
        with self.assertRaisesRegex(LiftFailure,"self only"):
            lift_constant_return(synthetic(numeric_literal("LOADI",3)+RETURN,params=2))

    def test_reject_nonliteral_call(self):
        p=synthetic(opcode("CALL",a=1,b=1,c=2)+RETURN)
        with self.assertRaisesRegex(LiftFailure,"non-literal"):
            lift_constant_return(p)

    def test_reject_bad_return_register(self):
        p=synthetic(numeric_literal("LOADI",3)+opcode("RETURN1",a=0,b=2)+opcode("RETURN0",a=1,b=1))
        with self.assertRaisesRegex(LiftFailure,"R1"):
            lift_constant_return(p)

    def test_verified_hash_emission(self):
        p=synthetic(numeric_literal("LOADI",300)+RETURN)
        v=lift_constant_return(p)
        hx=render_class("main.battle.BattleView","CA5A5606298DDCB29",
                        [("GetIntervalAddPopup","F1E76EA24E515CC0D",v)],"c"*64)
        self.assertIn('    public function GetIntervalAddPopup():Int {\n        return 300;',hx)
        self.assertIn('@:chunk("main")',hx)
        self.assertIn('@:hashAbi("F1E76EA24E515CC0D")',hx)
        self.assertIn("Original Child Proto 42",hx)

    def test_reject_unsafe_haxe_identifiers(self):
        p=synthetic(numeric_literal("LOADI",3)+RETURN)
        with self.assertRaises(LiftFailure):
            render_class("main.bad-name.Bad","C"+"A"*16,
                         [("run","F"+"B"*16,lift_constant_return(p))],"c"*64)


if __name__=="__main__":
    unittest.main()
