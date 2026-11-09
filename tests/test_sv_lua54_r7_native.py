"""Synthetic R7 native dispatch and GDB log tests; no game memory."""
import importlib.util
import json
from pathlib import Path
import struct
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.r7_log import parse_gdb_log

spec = importlib.util.spec_from_file_location(
    "r7_native_dispatch", ROOT / "scripts" / "Verify-SV-Lua54-R7-NativeDispatch.py")
native = importlib.util.module_from_spec(spec)
spec.loader.exec_module(native)


def header():
    return {
        "schema_version": 1, "source": "gdb-readonly", "capture_mode": "READ_ONLY",
        "session_id": "s0001", "elf_sha256": native.PIN,
        "build_id": native.BUILD_ID.lower(), "main_dynamic_sha256": "ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572",
        "main_base": "0x7100000000", "vm_dispatch_pc": "0x71000411ec",
        "pc_mapping": "savedpc-next",
    }


def event(num=1, activation="s0001-root-1"):
    return {
        "seq": num, "kind": "closure", "pc": 48,
        "root_activation_id": activation
    }


class R7NativeTests(unittest.TestCase):
    def test_actual_known_native_bl_targets(self):
        self.assertEqual(native.branch_target(0x4543C, 0x97FF9081), 0x29640)
        self.assertEqual(native.branch_target(0x4548C, 0x97FF90B5), 0x29760)
        with self.assertRaises(ValueError):
            native.branch_target(0x4543C, 0xD503201F)

    def test_relocation_is_validated(self):
        target = native.JUMP_TABLE + 79 * 8
        data = struct.pack("<QQq", target, 0x403, 0x453FC)
        section = (0, 4, 0, 0, 0, len(data), 0, 0, 8, 24)
        item = native.relative_reloc(data, section, target)
        self.assertEqual(item["addend_target"], "0x453fc")
        with self.assertRaises(ValueError):
            native.relative_reloc(data, section, target + 8)

    def test_one_activation_retained(self):
        log = "R7_SESSION " + json.dumps(header()) + "\n"
        log += "R7_EVENT " + json.dumps(event()) + "\n"
        trace = parse_gdb_log(log)
        self.assertEqual(trace["session_id"], "s0001")
        self.assertEqual(len(trace["events"]), 1)
        self.assertEqual(trace["source_log_event_count"], 1)
        self.assertIn("NOT_INDEPENDENTLY_ATTESTED", trace["runtime_evidence_status"])

    def test_multiple_activations_do_not_merge(self):
        log = ("R7_SESSION " + json.dumps(header()) + "\n"
               + "R7_EVENT " + json.dumps(event(1)) + "\n"
               + "R7_EVENT " + json.dumps(event(2,"s0001-root-2")) + "\n")
        with self.assertRaisesRegex(ValueError,"multiple root activations"):
            parse_gdb_log(log)
        out=parse_gdb_log(log,"s0001-root-2")
        self.assertEqual([x["seq"] for x in out["events"]],[2])

    def test_foreign_session_rejected(self):
        log=("R7_SESSION "+json.dumps(header())+"\n"
             +"R7_EVENT "+json.dumps(event(1,"wrong-root-1"))+"\n")
        with self.assertRaisesRegex(ValueError,"different GDB session"):
            parse_gdb_log(log)

    def test_duplicate_sequence_rejected(self):
        log=("R7_SESSION "+json.dumps(header())+"\n"
             +"R7_EVENT "+json.dumps(event(1))+"\n"
             +"R7_EVENT "+json.dumps(event(1))+"\n")
        with self.assertRaisesRegex(ValueError,"duplicate"):
            parse_gdb_log(log)

    def test_no_session_not_accepted(self):
        with self.assertRaisesRegex(ValueError,"exactly one"):
            parse_gdb_log("R7_EVENT "+json.dumps(event()))

    def test_malformed_event_rejected(self):
        with self.assertRaises(ValueError):
            parse_gdb_log("R7_SESSION "+json.dumps(header())+"\nR7_EVENT invalid")


if __name__=="__main__":
    unittest.main()
