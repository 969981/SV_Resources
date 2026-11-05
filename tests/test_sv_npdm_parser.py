"""Synthetic NPDM structure tests; no copyrighted program bytes."""
import importlib.util
import struct
import unittest
from pathlib import Path

PARSER = Path(__file__).resolve().parents[1] / "scripts" / "Parse-SV-NPDM.py"
spec = importlib.util.spec_from_file_location("sv_npdm", PARSER)
module = importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)


def valid_npdm():
    data = bytearray(0x680)
    data[:4] = b"META"
    data[0x20:0x2B] = b"Application"
    struct.pack_into("<4I", data, 0x70, 0x460, 0x220, 0x80, 0x3E0)
    data[0x460:0x464] = b"ACI0"
    data[0x280:0x284] = b"ACID"
    struct.pack_into("<Q", data, 0x470, 0x01008F6008C5E000)
    struct.pack_into("<Q", data, 0x290, 0x01008F6008C5E000)
    struct.pack_into("<Q", data, 0x298, 0x01008F6008C5E000)
    struct.pack_into("<6I", data, 0x480, 0x40, 0x20, 0x60, 0x10, 0x70, 0x8)
    struct.pack_into("<6I", data, 0x2A0, 0x240, 0x20, 0x260, 0x10, 0x270, 0x8)
    return data


class NpdmTests(unittest.TestCase):
    def test_blocks_and_program_id(self):
        m, a, d, raw = module.parse(bytes(valid_npdm()))
        self.assertEqual(m["name"], "Application")
        self.assertEqual(a["programIdHex"], "01008F6008C5E000")
        self.assertEqual(d["programIdMinHex"], a["programIdHex"])
        self.assertEqual(len(raw["META.bin"]), 128)
        self.assertEqual(len(raw["ACI0_KC.bin"]), 8)

    def test_reject_wrong_magic(self):
        data = valid_npdm()
        data[0] = 0
        with self.assertRaises(ValueError):
            module.parse(bytes(data))

    def test_reject_section_overflow(self):
        data = valid_npdm()
        struct.pack_into("<I", data, 0x480, 0x3000)
        with self.assertRaises(ValueError):
            module.parse(bytes(data))

    def test_reject_program_id_outside_range(self):
        data = valid_npdm()
        struct.pack_into("<Q", data, 0x470, 123)
        with self.assertRaises(ValueError):
            module.parse(bytes(data))


if __name__ == "__main__":
    unittest.main()
