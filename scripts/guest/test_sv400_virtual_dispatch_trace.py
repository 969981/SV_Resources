"""Offline unit smoke test for the GDB-only SV400 4.0.0 guest tracer."""
import importlib.util
import json
import os
from pathlib import Path
import sys
import tempfile
import types
import unittest


class FakeBreak:
    instances = []

    def __init__(self, spec, internal=False, temporary=False):
        self.spec = spec
        self.enabled = True
        self.temporary = temporary
        self.valid = True
        self.__class__.instances.append(self)

    def delete(self):
        self.valid = False

    def is_valid(self):
        return self.valid


class FakeCommand:
    def __init__(self, *args, **kwargs):
        pass


class FakeInferior:
    def __init__(self, data):
        self.data = data

    def read_memory(self, address, size):
        if any(address + i not in self.data for i in range(size)):
            raise RuntimeError("unmapped")
        return memoryview(bytes(self.data[address + i] for i in range(size)))


class FakeGdb(types.ModuleType):
    BP_BREAKPOINT = 0
    COMMAND_USER = 0
    STDERR = 0
    GdbError = RuntimeError
    error = RuntimeError
    Breakpoint = FakeBreak
    Command = FakeCommand

    def __init__(self):
        super().__init__("gdb")
        self.data = {}
        self.regs = {}
        self.output = []

    def selected_inferior(self):
        return FakeInferior(self.data)

    def selected_frame(self):
        return types.SimpleNamespace(architecture=lambda: types.SimpleNamespace(name=lambda: "aarch64"))

    def parse_and_eval(self, name):
        return self.regs.get(name[1:], 0)

    def string_to_argv(self, arg):
        return arg.split()

    def write(self, *args):
        self.output.append(args[0])

    def put(self, address, value, length):
        for i, b in enumerate(value.to_bytes(length, "little")):
            self.data[address + i] = b


GDB = FakeGdb()
sys.modules["gdb"] = GDB
MODULE_PATH = Path(__file__).with_name("sv400_virtual_dispatch_trace.py")
spec = importlib.util.spec_from_file_location("sv400_trace_test", MODULE_PATH)
sv = importlib.util.module_from_spec(spec)
spec.loader.exec_module(sv)


class GuestTracerTests(unittest.TestCase):
    def setUp(self):
        GDB.data.clear()
        GDB.regs.clear()
        self.tmp = tempfile.TemporaryDirectory()
        self.path = os.path.join(self.tmp.name, "trace.jsonl")
        self.entry = 0x720000000
        GDB.put(self.entry, int.from_bytes(sv.PREFIX, "little"), len(sv.PREFIX))
        GDB.put(self.entry + 0x5C, int.from_bytes(bytes.fromhex("e1031f2a"), "little"), 4)
        GDB.put(self.entry + 0x68, int.from_bytes(bytes.fromhex("40068052"), "little"), 4)
        GDB.put(self.entry + 0xB8, int.from_bytes(bytes.fromhex("00a900b9c0035fd6"), "little"), 8)
        GDB.regs.update(pc=self.entry, x30=0x720100004, x0=0, x1=0, x8=0, sp=0x700000000)

    def tearDown(self):
        if sv._active:
            sv._active.close()
            sv._active = None
        self.tmp.cleanup()

    def start(self):
        session = sv.Session(self.entry, self.path, 2)
        return session

    def events(self):
        with open(self.path, encoding="utf-8") as reader:
            return [json.loads(s) for s in reader if s.strip()]

    def test_verified_preflight_and_blr(self):
        sess = self.start()
        self.assertEqual(sess.game, "scarlet")
        lr = GDB.regs["x30"]
        # BLR X8.
        GDB.put(lr - 4, 0xD63F0100, 4)
        GDB.regs["x8"] = self.entry
        obj = 0x730000000
        vptr = sess.abs(sv.GH_VTABLE)
        GDB.regs["x0"] = obj
        GDB.put(obj, vptr, 8)
        GDB.put(vptr + 0x88, self.entry, 8)
        sess.record("target_entry")
        records = self.events()
        self.assertEqual(records[0]["event"], "preflight")
        hit = records[1]
        self.assertEqual(hit["caller"]["type"], "BLR")
        self.assertTrue(hit["caller"]["matches_target"])
        self.assertTrue(hit["vtable_slot_matches_target"])
        self.assertFalse(hit["x0_constructor_return_vtable_verified"])
        sess.close()

    def test_data_singleton_guard_and_postwrite(self):
        sess = self.start()
        slide = sess.slide
        a, b = 0x730000000, 0x740000000
        GDB.put(slide + sv.GH_A_ROOT, slide + sv.GH_A_SLOT, 8)
        GDB.put(slide + sv.GH_B_ROOT, slide + sv.GH_B_SLOT, 8)
        GDB.put(slide + sv.GH_A_SLOT, a, 8)
        GDB.put(slide + sv.GH_B_SLOT, b, 8)
        GDB.put(a + 0x28, 1, 1)
        GDB.put(a + 0x2C, 0, 4)
        GDB.put(b + 0xB0B8, 1, 1)
        GDB.put(b + 0xB0BC, 0, 4)
        GDB.put(slide + sv.GH_GLOBAL_VERSION, 50, 4)
        sess.record("post_global_write")
        state = self.events()[-1]["state_after_write"]
        self.assertTrue(state["A"]["relocation_matches_expected_slot"])
        self.assertTrue(state["B"]["relocation_matches_expected_slot"])
        self.assertEqual(state["B"]["edition_field"], 0)
        self.assertEqual(state["global_game_version"], 50)
        sess.close()

    def test_constructor_return_provenance(self):
        sess = self.start()
        obj = 0x730000000
        vptr = sess.abs(sv.GH_VTABLE)
        GDB.put(obj, vptr, 8)
        GDB.put(vptr + 0x88, self.entry, 8)
        GDB.regs["x0"] = obj
        sess.record("class_constructor_entry")
        self.assertTrue(sess.constructor_return_breakpoints)
        sess.constructor_return_breakpoints[-1].stop()
        self.assertIn(obj, sess.known_constructed_complete)
        self.assertTrue(self.events()[-1]["vtable_and_slot_verified"])
        sess.close()

    def test_rejects_other_build(self):
        GDB.put(self.entry + 0x5C, 0, 4)
        with self.assertRaises(RuntimeError):
            sv.Session(self.entry, self.path, 2)


if __name__ == "__main__":
    unittest.main()
