"""GDB native preflight pure-function unit tests; never connect to a game."""
from __future__ import annotations
import importlib.util
from pathlib import Path
import struct
import unittest

SOURCE=Path(__file__).resolve().parents[1]/"scripts"/"Probe-SV400-LuaVM-GDB.py"
SPEC=importlib.util.spec_from_file_location("sv400_native_gdb_probe",SOURCE)
probe=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(probe)


def synthetic_elf():
    data=bytearray(b"\0"*0x280)
    data[:4]=b"\x7fELF"
    data[4:6]=b"\x02\x01"
    struct.pack_into("<H",data,18,183)
    struct.pack_into("<Q",data,32,0x40)
    struct.pack_into("<H",data,54,56)
    struct.pack_into("<H",data,56,1)
    struct.pack_into("<IIQQQQQQ",data,0x40,1,5,0x100,0,0,0x180,0x180,0x1000)
    data[0x110:0x120]=bytes(range(16))
    data[0x130:0x140]=bytes(range(16,32))
    return bytes(data)


class GuestMemoryPreflight(unittest.TestCase):
    def test_version_pinned_prototype_does_not_arm_without_gdb(self):
        # In standard CI, importing must not connect or arm live breakpoints.
        self.assertTrue(probe.gdb is None)
        self.assertEqual(probe.PROBE_MARKER,
                         "NATIVE_CPU_BREAKPOINT_ONLY_NO_LUA_PROTO_IDENTITY")

    def test_elf_to_guest_code_byte_mapping(self):
        binary=synthetic_elf()
        self.assertEqual(probe.code_bytes_at_rva(binary,0x10),bytes(range(16)))
        self.assertEqual(probe.code_bytes_at_rva(binary,0x30),
                         bytes(range(16,32)))
        with self.assertRaisesRegex(ValueError,"outside executable"):
            probe.code_bytes_at_rva(binary,0x500)

    def test_actual_guest_read_compare_gate(self):
        binary=synthetic_elf()
        base=0x7100000000
        def read(address,length):
            return probe.code_bytes_at_rva(binary,address-base,length)
        result=probe.verify_live_bytes(binary,base,read,rvas=(0x10,0x30))
        self.assertEqual(len(result),2)
        self.assertTrue(all(x["verified"] for x in result))

    def test_wrong_base_build_or_mapping_blocks(self):
        binary=synthetic_elf()
        base=0x7100000000
        with self.assertRaisesRegex(ValueError,"page-aligned"):
            probe.verify_live_bytes(binary,base+1,
                                    lambda a,b:bytes(b),rvas=(0x10,))
        with self.assertRaisesRegex(ValueError,"guest code mismatch"):
            probe.verify_live_bytes(binary,base,
                                    lambda a,b:bytes(b),rvas=(0x10,))


if __name__=="__main__":
    unittest.main()
