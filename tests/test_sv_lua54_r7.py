"""R7 synthetic evidence gates: no live SV runtime or pointer attestations."""
import copy
from pathlib import Path
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.r7 import ELF_SHA, BUILD_ID, BLUA_SHA, verify, address

STATIC = {
    48: {"proto": 18, "source_reg": 13, "instruction_word": "0001004F"},
    49: {"proto": 19, "source_reg": 13, "instruction_word": "0002004F"},
    50: {"proto": 20, "source_reg": 13, "instruction_word": "0003004F"},
    12242: {"proto": 752, "source_reg": 16, "instruction_word": "0004004F"},
}


def fixture():
    events = []
    for seq, pc in enumerate((48, 49, 50, 12242), 1):
        uv = "0x6000" if pc != 12242 else "0x6010"
        val = "0x7000" if pc != 12242 else "0x5030"
        events.append({
            "seq": seq, "kind": "closure", "pc": pc, "parent_proto": 0,
            "proto": STATIC[pc]["proto"], "source_reg": STATIC[pc]["source_reg"],
            "instruction_word": STATIC[pc]["instruction_word"], "upvalue_slot": 1,
            "closure": f"0x{0x5000 + seq * 0x10:x}", "upvalue": uv, "value": val,
            "value_type": "table" if pc != 12242 else "lua_closure",
            "upvalue_state": "open", "lua_state": "0x1000",
            "root_frame": "0x2000", "root_activation_id": "activation-001",
        })
    # Fix fourth event value to actual PC50 closure.
    events[3]["value"] = events[2]["closure"]
    events += [
        {"seq": 5, "kind": "enter", "proto": 752, "closure": events[3]["closure"],
         "lua_state": "0x1000", "root_frame": "0x2000",
         "root_activation_id": "activation-001"},
        {"seq": 6, "kind": "return", "proto": 752, "closure": events[3]["closure"],
         "lua_state": "0x1000", "root_frame": "0x2000",
         "root_activation_id": "activation-001"},
    ]
    return {
        "schema_version": 1, "source": "gdb-readonly",
        "elf_sha256": ELF_SHA, "build_id": BUILD_ID,
        "main_dynamic_sha256": BLUA_SHA, "session_id": "synthetic-do-not-trust",
        "capture_mode": "READ_ONLY", "main_base": "0x7100000000",
        "vm_dispatch_pc": "0x7103456780", "pc_mapping": "savedpc-next",
        "events": events,
    }


class R7Tests(unittest.TestCase):
    def test_synthetic_consistent_never_attested(self):
        r = verify(fixture(), STATIC)
        self.assertEqual(r["status"], "TRACE_SELF_REPORTED_CONSISTENT_NOT_INDEPENDENTLY_ATTESTED")
        self.assertEqual(r["errors"], [])
        self.assertTrue(r["gates"]["same_R13_UpVal"])
        self.assertTrue(r["gates"]["same_R13_Table"])
        self.assertTrue(r["gates"]["mainBody_entered"])
        self.assertTrue(r["gates"]["mainBody_returned"])
        self.assertFalse(r["gates"]["independently_attested_live_execution"])
        self.assertEqual(r["runtime_mainBody_semantic_parity"], "NOT_VERIFIED")

    def test_equal_table_but_different_upval_is_not_shared_cell(self):
        x = fixture()
        x["events"][1]["upvalue"] = "0x6008"
        r = verify(x, STATIC)
        self.assertFalse(r["gates"]["same_R13_UpVal"])
        self.assertTrue(r["gates"]["same_R13_Table"])
        self.assertTrue(any("UpVal addresses differ" in e for e in r["errors"]))
        self.assertEqual(r["status"], "TRACE_INCOMPLETE_OR_CONTRADICTORY")

    def test_different_table_objects_rejected(self):
        x = fixture()
        x["events"][2]["value"] = "0x7010"
        r = verify(x, STATIC)
        self.assertFalse(r["gates"]["same_R13_Table"])

    def test_unrelated_proto20_instance_rejected(self):
        x = fixture()
        x["events"][3]["value"] = "0xdead"
        r = verify(x, STATIC)
        self.assertFalse(r["gates"]["mainBody_captures_Proto20"])

    def test_same_stack_address_across_activations_rejected(self):
        x = fixture()
        x["events"][1]["root_activation_id"] = "another-invocation"
        r = verify(x, STATIC)
        self.assertEqual(r["status"], "TRACE_INCOMPLETE_OR_CONTRADICTORY")
        self.assertTrue(any("different lua_State" in e for e in r["errors"]))

    def test_bad_codeword_rejected(self):
        x = fixture()
        x["events"][2]["instruction_word"] = "FFFFFFFF"
        self.assertFalse(verify(x, STATIC)["gates"]["pc_proto_fingerprints"])

    def test_no_live_data_not_observed(self):
        x = fixture()
        x["events"] = []
        r = verify(x, STATIC)
        self.assertEqual(r["status"], "NOT_OBSERVED")
        self.assertFalse(r["gates"]["independently_attested_live_execution"])

    def test_no_mainbody_enter_not_proven(self):
        x = fixture()
        x["events"] = x["events"][:4]
        r = verify(x, STATIC)
        self.assertFalse(r["gates"]["mainBody_entered"])
        self.assertEqual(r["status"], "TRACE_INCOMPLETE_OR_CONTRADICTORY")

    def test_version_rejected(self):
        x = fixture()
        x["build_id"] = "1234"
        self.assertFalse(verify(x, STATIC)["gates"]["exact_version"])

    def test_return_before_enter_rejected(self):
        x = fixture()
        x["events"][-2]["kind"], x["events"][-1]["kind"] = "return", "enter"
        r = verify(x, STATIC)
        self.assertFalse(r["gates"]["mainBody_returned"])

    def test_nonzero_hex_pointer(self):
        with self.assertRaises(ValueError):
            address("0x0")
        with self.assertRaises(ValueError):
            address("0xDEADBEEFjunk")


if __name__ == "__main__":
    unittest.main()
