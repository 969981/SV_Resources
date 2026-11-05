"""Synthetic non-ROM fixtures for non-Trinity extraction."""
import importlib.util
import struct
import tempfile
import unittest
from pathlib import Path

MODULE = Path(__file__).resolve().parents[1] / "scripts" / "Unpack-SV-Remaining.py"
spec = importlib.util.spec_from_file_location("svremaining", MODULE)
sv = importlib.util.module_from_spec(spec)
spec.loader.exec_module(sv)


class ExtractionTests(unittest.TestCase):
    def test_bnk_embedded_wem_and_hirc(self):
        def chunk(tag, body):
            return tag + struct.pack("<I", len(body)) + body
        wem = b"RIFF" + b"\0" * 12
        hirc = struct.pack("<I", 1) + struct.pack("<BI", 3, 4) + struct.pack("<I", 55)
        binary = (chunk(b"BKHD", struct.pack("<IIII", 154, 77, 0, 0))
                  + chunk(b"DIDX", struct.pack("<III", 1234, 0, len(wem)))
                  + chunk(b"DATA", wem)
                  + chunk(b"HIRC", hirc))
        with tempfile.TemporaryDirectory() as d:
            result = sv.bnk(binary, Path(d), 1000)
            self.assertEqual(result["bankId"], 77)
            self.assertEqual(result["hircObjects"][0]["id"], 55)
            self.assertEqual((Path(d)/"extracted/1234.wem").read_bytes(), wem)

    def test_bnk_invalid_offset_is_rejected(self):
        binary = (b"BKHD" + struct.pack("<I", 16) + b"\0"*16
                  + b"DIDX" + struct.pack("<I", 12) + struct.pack("<III", 1, 100, 80)
                  + b"DATA" + struct.pack("<I", 4) + b"1234")
        with tempfile.TemporaryDirectory() as d:
            with self.assertRaises(ValueError):
                sv.bnk(binary, Path(d), 1000)

    def test_akpk_extract_and_size_limit(self):
        payload = b"RIFFabcdefgh"
        header = b"AKPK" + struct.pack("<IIIII", 16, 1, 4, 4, 24)
        start = len(header) + 4 + 4 + 24
        table = struct.pack("<I", 1) + struct.pack("<IIIII", 44, 1, len(payload), start, 0)
        binary = header + struct.pack("<I", 0) + struct.pack("<I", 0) + table + payload
        with tempfile.TemporaryDirectory() as d:
            result = sv.pck(binary, Path(d), 100)
            self.assertEqual((Path(d)/"extracted/44.wem").read_bytes(), payload)
            self.assertEqual(result["exports"][0]["status"], "EXTRACTED")
        with tempfile.TemporaryDirectory() as d:
            result = sv.pck(binary, Path(d), 2)
            self.assertEqual(result["exports"][0]["status"], "SKIPPED_LARGE")
            self.assertFalse((Path(d)/"extracted/44.wem").exists())

    def test_nso_uncompressed_segments(self):
        try:
            import lz4.block
        except ImportError:
            self.skipTest("lz4 not installed")
        raw = bytearray(256 + 12)
        raw[:4] = b"NSO0"
        for i, name in enumerate(("text", "rodata", "data")):
            struct.pack_into("<III", raw, 0x10 + i*16, 256+i*4, i*0x1000, 4)
            raw[256+i*4:260+i*4] = bytes([i+1])*4
        with tempfile.TemporaryDirectory() as d:
            result = sv.nso(raw, Path(d), 100)
            self.assertEqual(len(result["segments"]), 3)
            self.assertEqual((Path(d)/"extracted/rodata.bin").read_bytes(), b"\x02"*4)


if __name__ == "__main__":
    unittest.main()
