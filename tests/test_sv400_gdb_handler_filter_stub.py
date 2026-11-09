"""Mock GDB Z1 one-shot host filter callback; no live emulator or guest RAM."""
from __future__ import annotations
import importlib.util
from pathlib import Path
import sys
import types
import unittest


class DummyBreakpoint:
    def __init__(self,spec,type=None):
        self.spec=spec
        self.type=type
        self.enabled=True
        self.deleted=False
    def is_valid(self):return not self.deleted
    def delete(self):self.deleted=True


class DummyCommand:
    def __init__(self,*args,**kwargs):pass


class GDBHostFilterStubTests(unittest.TestCase):
    def setUp(self):
        self.old=sys.modules.get("gdb")
        self.lines=[]
        self.registers={"$x27":0,"$x20":0}
        fake=types.ModuleType("gdb")
        fake.Breakpoint=DummyBreakpoint
        fake.Command=DummyCommand
        fake.BP_HARDWARE_BREAKPOINT=42
        fake.COMMAND_USER=1
        fake.write=lambda s:self.lines.append(s)
        fake.parse_and_eval=lambda reg:self.registers[reg]
        fake.GdbError=RuntimeError
        sys.modules["gdb"]=fake
        p=Path(__file__).resolve().parents[1]/"scripts"/"Filter-SV400-Lua54-HandlerHits-GDB.py"
        spec=importlib.util.spec_from_file_location("sv400_filter_mock_native",p)
        self.m=importlib.util.module_from_spec(spec)
        spec.loader.exec_module(self.m)

    def tearDown(self):
        if self.old is None:
            sys.modules.pop("gdb",None)
        else:
            sys.modules["gdb"]=self.old

    def make_bp(self,maxhits=2):
        source={
          "status":"FULL_CODE_SHA_PINNED_READ_WATCHPOINT_PLAN_ONLY",
          "vm_execution_observed":False,
          "target_word_address":0x7000040000,
          "word_u32":79+(70<<7),
          "native_handler_rva":"0x453fc",
          "target_lua_pc":215522,"proto_scope":"root",
        }
        plan=self.m.filter_plan(source,maxhits)
        owner=types.SimpleNamespace(hits=0)
        bp=self.m.FilterSession.HandlerFilter(plan,owner,0x71000453fc)
        return bp,owner,plan

    def test_false_hit_auto_continues_then_hard_cap_stops(self):
        bp,owner,plan=self.make_bp(2)
        self.assertEqual(bp.type,42)
        self.assertFalse(bp.stop())
        self.assertEqual(owner.hits,1)
        self.assertTrue(bp.enabled)
        self.assertTrue(bp.stop())
        self.assertEqual(owner.hits,2)
        self.assertFalse(bp.enabled)
        self.assertTrue(any("BOUNDED_FILTER_EXHAUSTED_NOT_OBSERVED" in x for x in self.lines))

    def test_exact_handler_word_matches_once_and_redacts_raw_pc(self):
        bp,owner,plan=self.make_bp(5)
        self.registers["$x27"]=plan["target_nextpc"]
        self.registers["$x20"]=plan["target_raw_word"]
        self.assertTrue(bp.stop())
        self.assertFalse(bp.enabled)
        logs=[x for x in self.lines if "SV400_HANDLER_FILTER_CANDIDATE" in x]
        self.assertEqual(len(logs),1)
        self.assertNotIn("target_nextpc",logs[0])
        self.assertNotIn("target_raw_word",logs[0])
        self.assertIn("REQUIRES_FULL_PROTO_SHA",logs[0])

    def test_unreadable_register_rejects_match(self):
        bp,owner,plan=self.make_bp(2)
        del self.registers["$x27"]
        self.assertTrue(bp.stop())
        self.assertFalse(bp.enabled)
        self.assertTrue(any("UNREADABLE_REGISTER" in x for x in self.lines))

if __name__=="__main__":
    unittest.main()
