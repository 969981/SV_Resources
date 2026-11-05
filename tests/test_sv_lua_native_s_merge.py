"""Synthetic checks for additive SV Lua S recovery; no BLUA required."""
import importlib.util
import tempfile
import unittest
from pathlib import Path

SCRIPT = Path(__file__).resolve().parents[1] / "scripts/Merge-SV-Lua-Native-S-Fields.py"
spec = importlib.util.spec_from_file_location("sv_native_s", SCRIPT)
mod = importlib.util.module_from_spec(spec)
spec.loader.exec_module(mod)

class TestSVNativeSAdditiveMerge(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        self.addCleanup(self.tmp.cleanup)
        self.root = Path(self.tmp.name)
        self.source = self.root / "original.txt"
        self.source.write_text(
            "0x0000000000000001 \n"
            f"0x{mod.fnv64('GetBool')} GetBool\n", encoding="utf-8")
        self.closures = self.root / "native.tsv"
        self.native = [
            "source\tclass_hash\ts_field_hash\ts_field_name\troot_pc\tclosure_proto_id\n"
        ]
        for i in range(11):
            self.native.append(
                f"main\tCAAAAAAAAAAAAAAAA\tS{0x1000+i:016X}\t\t{i}\t{i+9}\n"
            )
        self.native.append(
            "main\tC7F881F5D9B6F6009\tSBB0DA3B1BEEB4D80\t\t125574\t9152\n"
        )
        self.closures.write_text("".join(self.native), encoding="utf-8")

    def test_exact_candidate_name_and_source_preservation(self):
        original = self.source.read_bytes()
        outputs, report = mod.build(self.source, self.closures)
        self.assertEqual(report["new_unlisted_native_s_hashes"], 12)
        self.assertEqual(report["new_exact_candidate_names"], 1)
        self.assertEqual(report["remaining_new_s_unmapped"], 11)
        self.assertEqual(report["merged_s_rows"], 14)
        self.assertIn(b"0xBB0DA3B1BEEB4D80 GetInt8",
                      outputs["lua_s_hashes.native-extended.txt"])
        self.assertEqual(self.source.read_bytes(), original)

    def test_duplicate_closure_fails(self):
        self.closures.write_text("".join(self.native + [self.native[-1]]), encoding="utf-8")
        with self.assertRaisesRegex(ValueError, "Duplicate"):
            mod.build(self.source, self.closures)

    def test_existing_original_hash_fails_without_overwriting(self):
        self.source.write_text("0xBB0DA3B1BEEB4D80 \n", encoding="utf-8")
        with self.assertRaisesRegex(ValueError, "already exists"):
            mod.build(self.source, self.closures)

    def test_wrong_known_name_hash_fails_closed(self):
        self.source.write_text("0x0000000000000001 GetInt8\n", encoding="utf-8")
        with self.assertRaisesRegex(ValueError, "invalid source"):
            mod.build(self.source, self.closures)

if __name__ == "__main__":
    unittest.main()
