"""Pure bounded native GDB filter tests without original emulator process."""
from __future__ import annotations
import importlib.util
from pathlib import Path
import unittest

P=Path(__file__).resolve().parents[1]/"scripts"/"Filter-SV400-Lua54-HandlerHits-GDB.py"
S=importlib.util.spec_from_file_location("sv400_r5_filter",P)
m=importlib.util.module_from_spec(S)
S.loader.exec_module(m)


def plan():
    return {
        "status":"FULL_CODE_SHA_PINNED_READ_WATCHPOINT_PLAN_ONLY",
        "vm_execution_observed":False,
        "target_word_address":0x7000040000+215522*4,
        "word_u32":79+(70<<7),
        "native_handler_rva":"0x453fc",
        "target_lua_pc":215522,
        "proto_scope":"root",
    }


class BoundedFilterTests(unittest.TestCase):
    def test_exact_x27_raw_word_is_required(self):
        item=m.filter_plan(plan(),250)
        self.assertTrue(m.matches_handler_registers(
            item,plan()["target_word_address"]+4,79+(70<<7),0x453fc))
        self.assertFalse(m.matches_handler_registers(
            item,plan()["target_word_address"],79+(70<<7),0x453fc))
        self.assertFalse(m.matches_handler_registers(
            item,plan()["target_word_address"]+4,79,0x453fc))
        self.assertFalse(m.matches_handler_registers(
            item,plan()["target_word_address"]+4,79+(70<<7),0x4487c))
        self.assertFalse(item["runtime_verified"])

    def test_no_raw_target_memory_addresses_in_logs(self):
        item=m.filter_plan(plan(),250)
        safe=m.safe_plan(item)
        self.assertNotIn("target_nextpc",safe)
        self.assertNotIn("target_raw_word",safe)
        self.assertEqual(safe["target_lua_pc"],215522)

    def test_reject_unbounded_filter_and_bad_source(self):
        for limit in (-1,0,50001,True):
            with self.assertRaisesRegex(ValueError,"bounded"):
                m.filter_plan(plan(),limit)
        data=plan()
        data["vm_execution_observed"]=True
        with self.assertRaisesRegex(ValueError,"pinned"):
            m.filter_plan(data,500)

    def test_no_gdb_stub_without_real_connection(self):
        self.assertIsNone(m.gdb)
        self.assertEqual(m.DEFAULT_HITS,250)
        self.assertEqual(m.MAX_FILTER_HITS,50000)

if __name__=="__main__":
    unittest.main()
