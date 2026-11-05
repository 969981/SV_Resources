"""Regression tests for ZA unresolved-symbol evidence and raw hash literal scan."""
import hashlib
import importlib.util
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location(
    "za_unresolved", ROOT / "scripts" / "Audit-ZA-Lua-Unresolved.py")
mod = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(mod)

class ZANativeLiteralScannerTest(unittest.TestCase):
    def test_eight_byte_match_and_offsets(self):
        value = 0x007A70B0AFF2E6D0
        with tempfile.TemporaryDirectory() as temp:
            f = Path(temp) / "sample.blua"
            raw = b"\x00" * 17 + value.to_bytes(8, "little") + b"\xff" * 7
            raw += value.to_bytes(8, "big") + b"\x00" * 11
            f.write_bytes(raw)
            result = mod.scan_binary(f, {("s", f"0x{value:016X}"): (1, "sha", False)},
                                     block_size=13)
            hits = result["matches"]
            self.assertEqual(len(hits), 2)
            self.assertEqual([h["offset_decimal"] for h in hits], [17, 32])
            self.assertEqual([h["byte_order"] for h in hits], ["little", "big"])
            self.assertEqual(result["sha256"], hashlib.sha256(raw).hexdigest())
            self.assertTrue(all(h["evidence"] == "RAW_HASH_LITERAL_ONLY" for h in hits))

    def test_no_false_hits_in_empty(self):
        with tempfile.TemporaryDirectory() as temp:
            f = Path(temp) / "empty.bin"
            f.write_bytes(b"")
            res = mod.scan_binary(f, {("f", "0x005F73ADAA24DD75"): (1, "", False)})
            self.assertEqual(res["matches"], [])

    def test_reject_duplicate_or_stale_index(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            src, merged = root / "source", root / "overlay"
            src.mkdir()
            merged.mkdir()
            for kind in ("s", "f", "e"):
                line = "0x007A70B0AFF2E6D0\n" if kind == "s" else ""
                (src / f"lua_{kind}_hashes.txt").write_text(line, encoding="utf-8")
                (merged / f"lua_{kind}_hashes.merged.txt").write_text(line, encoding="utf-8")
            (merged / "unresolved-symbol-index.tsv").write_text(
                "\t".join(mod.INDEX_HEADER) + "\n", encoding="utf-8")
            (merged / "unresolved-s-references.tsv").write_text(
                "\t".join(mod.REF_HEADER) + "\n", encoding="utf-8")
            with self.assertRaises(ValueError):
                mod.validate(merged, src)

if __name__ == "__main__":
    unittest.main()
