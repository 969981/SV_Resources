"""R6 synthetic Lua 5.4 tests; no copyrighted game bytecode."""
from pathlib import Path
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.chunk import Constant, Proto
from sv_lua54.r1 import OPNAMES
from sv_lua54.r6 import ascii_key, newindex_handler, root_capture_sites


def op(name, a=0, b=0, c=0, k=0, bx=None):
    if bx is None:
        word = OPNAMES.index(name) | a << 7 | k << 15 | b << 16 | c << 24
    else:
        word = OPNAMES.index(name) | a << 7 | bx << 15
    return word.to_bytes(4, "little")


def proto(words, *, ident=0, params=0, const=None, captures=b"", children=None):
    return Proto(id=ident, parent_id=None, start=0, code_offset=0,
                 end=0, source=None, line_defined=0, last_line_defined=0,
                 num_params=params, is_vararg=0, max_stack_size=20,
                 code=b"".join(words), constants=const or [],
                 upvalues=captures, children=children or [])


def handler_words():
    return [
        op("GETFIELD", 3, 0, 0), op("SETTABLE", 3, 1, 1, 1),
        op("GETTABUP", 3, 0, 2), op("MOVE", 4, 0),
        op("MOVE", 5, 1), op("MOVE", 6, 2),
        op("CALL", 3, 4, 1), op("RETURN0"),
    ]


class R6Tests(unittest.TestCase):
    def handler(self, words=None, keys=None):
        return proto(words or handler_words(), ident=17, params=3,
                     const=keys or [Constant(4, b"__fields__"), Constant(17),
                                    Constant(4, b"rawset")])

    def test_strict_three_arg_handler_shape(self):
        result = newindex_handler(self.handler())
        self.assertTrue(result["strict_three_argument_handler_shape"])
        self.assertEqual(result["key_refs"], ["__fields__", "rawset"])
        self.assertIn("rawset(self,key,value)", result["semantic_shape_if_executed"])
        self.assertEqual(result["settable_rhs_constant_tag"],17)

    def test_wrong_rawset_argument_not_classified(self):
        words = handler_words()
        words[5] = op("MOVE", 6, 1)
        result = newindex_handler(self.handler(words=words))
        self.assertFalse(result["strict_three_argument_handler_shape"])
        self.assertEqual(result["semantic_shape_if_executed"], "UNCLASSIFIED")

    def test_wrong_rawset_constant_not_classified(self):
        result = newindex_handler(self.handler(
            keys=[Constant(4, b"__fields__"), Constant(17),
                  Constant(4, b"setmetatable")]
        ))
        self.assertFalse(result["strict_three_argument_handler_shape"])

    def test_wrong_field_marker_not_classified(self):
        result = newindex_handler(self.handler(keys=[
            Constant(4, b"__fields__"), Constant(1), Constant(4, b"rawset")]))
        self.assertFalse(result["strict_three_argument_handler_shape"])

    def test_bad_ascii_key(self):
        self.assertIsNone(ascii_key(self.handler(), 50))
        self.assertIsNone(ascii_key(proto([], const=[Constant(4, b"\xff")]), 0))

    def test_syntactic_capture_not_called_runtime_identity(self):
        c = proto([op("RETURN0")], ident=20, captures=bytes((0, 0, 0, 1, 13, 0)))
        p = proto([op("CLOSURE", 16, bx=0), op("RETURN0")], children=[c])
        sites = root_capture_sites(p, 13, 0, 2)
        self.assertEqual(sites, [{
            "root_pc": 0, "child_proto_id": 20,
            "upvalue_slot": 1, "descriptor": [1, 13, 0]
        }])
        self.assertEqual(root_capture_sites(p, 16, 0, 2), [])


if __name__ == "__main__":
    unittest.main()
