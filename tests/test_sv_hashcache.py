import importlib.util
import struct
import tempfile
import unittest
from pathlib import Path

SCRIPT = Path(__file__).resolve().parents[1] / "scripts" / "Build-SV-GFPAKHashCache.py"
spec = importlib.util.spec_from_file_location("sv_hashcache", SCRIPT)
module = importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)


class TestCache(unittest.TestCase):
    def test_dotnet_binarywriter_encoding(self):
        with tempfile.TemporaryDirectory() as tmp:
            p = Path(tmp) / "hashes.txt"
            p.write_text("0000000000000123 some/path\n0xFF00 ABC/def\n"
                         "0000000000000123 another/path\nbroken\n", encoding="utf-8")
            mapping, stats = module.read_hashlists([p])
            self.assertEqual(mapping[0x123], "some/path")
            self.assertEqual(mapping[0xFF00], "ABC/def")
            self.assertEqual(stats["conflicts"], 1)
            output = module.create_cache(Path(tmp) / "GFPAKHashCache.bin", mapping)
            raw = output.read_bytes()
            self.assertEqual(struct.unpack_from("<Q", raw)[0], 2)
            pos = 8
            for expected_hash, expected_name in [(0x123, "some/path"), (0xFF00, "ABC/def")]:
                hash_ = struct.unpack_from("<Q", raw, pos)[0]
                pos += 8
                self.assertEqual(hash_, expected_hash)
                length = raw[pos]
                pos += 1
                self.assertEqual(raw[pos:pos + length].decode("utf-8"), expected_name)
                pos += length
            self.assertEqual(pos, len(raw))

    def test_7bit_length(self):
        with tempfile.TemporaryDirectory() as tmp:
            output = module.create_cache(Path(tmp) / "cache.bin", {1: "ä" * 100})
            data = output.read_bytes()
            self.assertEqual(data[16:18], bytes([0xC8, 0x01]))
            self.assertEqual(len(data), 8 + 8 + 2 + 200)


if __name__ == "__main__":
    unittest.main()
