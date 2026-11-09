"""Synthetic native opcode-to-Lua-PC mapping tests (not actual GDB events)."""
from __future__ import annotations
import importlib.util
from pathlib import Path
import sys
import unittest

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tests"))
sys.path.insert(0,str(ROOT/"tools"/"SV.Lua54"/"src"))
from test_sv_lua54_trace import sample, C, F
from sv_lua54.trace import OPNAMES

SCRIPT=ROOT/"scripts"/"Map-SV400-Lua54-NativeTraceTargets.py"
SPEC=importlib.util.spec_from_file_location("sv400_static_hook_plan",SCRIPT)
plan_module=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(plan_module)


def dispatch():
    return {
        "static_identity":"LUA54_83_WAY_NATIVE_OPCODE_DISPATCH_VERIFIED",
        "dispatch_native_entry_rva":"0x41150",
        "elf_sha256":"a"*64,
        "opcode_handlers":[
            {"opcode":i,"lua54_name":name,"target_handler_rva":hex(0x40000+i*16)}
            for i,name in enumerate(OPNAMES)
        ],
    }


class TracePlanTests(unittest.TestCase):
    def test_exact_synthetic_opcode_mapping_with_no_runtime_claim(self):
        chunk=sample()
        target=[
            ("root",6,"CLOSURE","before_create"),
            ("root",7,"SETTABLE","after_create"),
            ("setup",2,"CALL","call_pre"),
            ("setup",4,"CALL","call_pre"),
        ]
        doc=plan_module.plan(chunk,dispatch(),target,C,F)
        self.assertEqual(doc["setup_proto_id"],1)
        self.assertEqual(doc["root_closure_creation_pc"],6)
        self.assertEqual(doc["native_handler_count"],3)
        self.assertEqual(doc["probe_rows"][0]["native_opcode_index"],OPNAMES.index("CLOSURE"))
        self.assertEqual(doc["probe_rows"][2]["expected_lua_opcode"],"CALL")
        self.assertFalse(doc["runtime_vm_attached"])
        self.assertFalse(doc["runtime_objects_observed"])
        self.assertEqual(doc["status"],"PINNED_LUA_PC_TO_NATIVE_HANDLER_PLAN_ONLY")

    def test_wrong_proto_pc_or_opcode_is_not_silently_reassigned(self):
        with self.assertRaisesRegex(ValueError,"not exact opcode"):
            plan_module.plan(sample(),dispatch(),
              [("setup",2,"SETI","bad")],C,F)

    def test_missing_native_handler_or_version_is_rejected(self):
        d=dispatch()
        d["opcode_handlers"].pop()
        with self.assertRaisesRegex(ValueError,"incomplete native opcode table"):
            plan_module.plan(sample(),d,[("setup",2,"CALL","call")],C,F)
        d=dispatch()
        d["dispatch_native_entry_rva"]="0x458a4"
        with self.assertRaisesRegex(ValueError,"unknown interpreter"):
            plan_module.plan(sample(),d,[("setup",2,"CALL","call")],C,F)


if __name__=="__main__":
    unittest.main()
