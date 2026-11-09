"""GDB Python stub exercise for the *one-shot* VM entry callback.

Synthetic only: verifies stopped CPU register collection, pointer failure
handling, and non-escalation into a real LUA VM runtime result. No game process.
"""
from __future__ import annotations

import importlib.util
import json
import os
from pathlib import Path
import sys
import types
import unittest


class DummyBreakpoint:
    def __init__(self, spec, type=None):
        self.spec=spec
        self.type=type
        self.enabled=True
        self.deleted=False
    def is_valid(self):
        return not self.deleted
    def delete(self):
        self.deleted=True


class DummyCommand:
    def __init__(self,*a,**k):
        pass


class StubGDBTest(unittest.TestCase):
    def test_one_shot_guest_cpu_hit_is_not_lua_pc_verified(self):
        lines=[]
        ci=0x7200001000
        fake=types.ModuleType("gdb")
        fake.Breakpoint=DummyBreakpoint
        fake.Command=DummyCommand
        fake.BP_HARDWARE_BREAKPOINT=42
        fake.COMMAND_USER=1
        fake.write=lambda s:lines.append(s)
        fake.parse_and_eval=lambda name:ci if name=="$x1" else 0
        def read_memory(addr,count):
            if addr==ci and count==8:
                return int(0x7200002000).to_bytes(8,"little")
            if addr==ci+0x20 and count==8:
                return int(0x7200003000).to_bytes(8,"little")
            raise OSError("synthetic-unmapped")
        fake.selected_inferior=lambda:types.SimpleNamespace(read_memory=read_memory)
        old=sys.modules.get("gdb")
        sys.modules["gdb"]=fake
        try:
            path=Path(__file__).resolve().parents[1]/"scripts"/"Probe-SV400-LuaVM-GDB.py"
            spec=importlib.util.spec_from_file_location("sv400_fake_gdb_loaded",path)
            module=importlib.util.module_from_spec(spec)
            spec.loader.exec_module(module)
        finally:
            if old is None:
                sys.modules.pop("gdb",None)
            else:
                sys.modules["gdb"]=old
        owner=types.SimpleNamespace(base=0x7100000000,hits=0)
        bp=module.ProbeSession.NativeBreakpoint(owner.base+0x41150,0x41150,owner)
        self.assertEqual(bp.type,42)
        self.assertTrue(bp.stop())
        self.assertEqual(owner.hits,1)
        self.assertFalse(bp.enabled)
        captures=[json.loads(s.removeprefix("SV400_CPU_HIT "))
                  for s in lines if s.startswith("SV400_CPU_HIT ")]
        self.assertEqual(len(captures),1)
        event=captures[0]
        self.assertEqual(event["main_rva"],"0x41150")
        self.assertEqual(event["vm_function_static_identity"],
                         "LUA54_83_WAY_NATIVE_OPCODE_DISPATCH_VERIFIED")
        self.assertIsNone(event["runtime_lua_proto_pc"])
        self.assertIsNone(event["runtime_upvalue_cells"])
        self.assertFalse(event["runtime_behavior_equivalence"])
        self.assertFalse(event["static_lua_dispatch_candidate"]["runtime_lua_pc_verified"])
        self.assertIn("synthetic-unmapped",
                      event["static_lua_dispatch_candidate"]["diagnostic"])


if __name__=="__main__":
    unittest.main()
