"""Synthetic ELF64/AArch64 RELA dispatch-table tests, no game data."""
from __future__ import annotations
import importlib.util
from pathlib import Path
import struct
import unittest

PATH=Path(__file__).resolve().parents[1]/"scripts"/"Verify-SV400-Lua54-NativeDispatch.py"
SPEC=importlib.util.spec_from_file_location("sv400_vm_dispatch_native",PATH)
native=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(native)

OPCODES=("MOVE","LOADI","LOADF")


def synthetic_native_elf(*,bad_type=False,missing=False,wrong_word=False):
    blob=bytearray(0x3800)
    blob[:4]=b"\x7fELF"
    blob[4:6]=b"\x02\x01"
    struct.pack_into("<H",blob,18,183)
    struct.pack_into("<Q",blob,32,0x40)
    struct.pack_into("<H",blob,54,56)
    struct.pack_into("<H",blob,56,2)
    struct.pack_into("<IIQQQQQQ",blob,0x40,
                     1,5,0x100,0x1000,0,0x400,0x400,0x1000)
    struct.pack_into("<IIQQQQQQ",blob,0x40+56,
                     1,6,0x1000,0x2000,0,0x100,0x100,0x1000)
    struct.pack_into("<Q",blob,40,0x3000)
    struct.pack_into("<H",blob,58,64)
    struct.pack_into("<H",blob,60,2)
    size=(2 if missing else 3)*24
    struct.pack_into("<IIQQQQIIQQ",blob,0x3000+64,
                     0,4,0,0,0x2000,size,0,0,8,24)
    for i in range(3):
        struct.pack_into("<I",blob,0x100+i*4,
                         0xD503201F if (i!=0 or not wrong_word) else 0xFFFFFFFF)
        if missing and i==2:
            continue
        typ=999 if bad_type and i==1 else 1027
        struct.pack_into("<QQq",blob,0x2000+i*24,
                         0x2000+i*8,typ,0x1000+i*4)
    return bytes(blob)


class DispatchTests(unittest.TestCase):
    def test_three_synthetic_rela_slots_are_executable_entries(self):
        doc=native.verify_native_image(synthetic_native_elf(),expected_sha=None,
             base=0x2000,count=3,opcode_names=OPCODES,
             expected_instructions={0x1000:0xD503201F})
        self.assertEqual(doc["dispatch_table_slots"],3)
        self.assertEqual(doc["relative_relocation_count"],3)
        self.assertEqual(doc["unique_targets"],3)
        self.assertEqual([x["target_handler_rva"] for x in doc["opcode_handlers"]],
                         ["0x1000","0x1004","0x1008"])
        self.assertEqual(doc["runtime_state"],"NOT_OBSERVED")

    def test_missing_relocation_fail_closed(self):
        with self.assertRaisesRegex(ValueError,"exactly 3 relocations"):
            native.verify_native_image(synthetic_native_elf(missing=True),
              expected_sha=None,base=0x2000,count=3,opcode_names=OPCODES,
              expected_instructions={0x1000:0xD503201F})

    def test_nonrelative_relocation_fail_closed(self):
        with self.assertRaisesRegex(ValueError,"non-relative"):
            native.verify_native_image(synthetic_native_elf(bad_type=True),
              expected_sha=None,base=0x2000,count=3,opcode_names=OPCODES,
              expected_instructions={0x1000:0xD503201F})

    def test_wrong_instruction_word_fail_closed(self):
        with self.assertRaisesRegex(ValueError,"instruction mismatched"):
            native.verify_native_image(synthetic_native_elf(wrong_word=True),
              expected_sha=None,base=0x2000,count=3,opcode_names=OPCODES,
              expected_instructions={0x1000:0xD503201F})


if __name__=="__main__":
    unittest.main()
