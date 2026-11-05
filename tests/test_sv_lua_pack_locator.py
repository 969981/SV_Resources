"""Synthetic TRPFD Lua locator test. Does not need actual game files."""
import gzip
import importlib.util
import json
import tempfile
import unittest
from pathlib import Path

SCRIPT = Path(__file__).resolve().parents[1] / "scripts/Locate-SV-Lua-Packs.py"
spec = importlib.util.spec_from_file_location("sv_lua_locator", SCRIPT)
mod = importlib.util.module_from_spec(spec)
spec.loader.exec_module(mod)


class TestLuaPackLocator(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name)
        (self.root / "pack_index.tsv").write_text(
            "pack_index\tpack_name\treferenced_files\tpacked_bytes\treported_file_count\n"
            "4\tarc/one.trpak\t2\t12000\t2\n"
            "7\tarc/two.trpak\t1\t3000\t1\n",
            encoding="utf-8"
        )
        self.lines = [
            "hash\tpack_index\tpack_name\tvirtual_path\n",
            "AAAABBBB00000001\t4\tarc/one.trpak\tscript/lua/bin/release/main/main.blua\n",
            "AAAABBBB00000002\t4\tarc/one.trpak\tscript/lua/bin/release/main_dynamic/main_dynamic.blua\n",
            "AAAABBBB00000003\t7\tarc/two.trpak\tworld/something.bin\n",
        ]
        with gzip.open(self.root / "file_index.tsv.gz", "wt", encoding="utf-8") as f:
            f.writelines(self.lines)
        (self.root / "descriptor_summary.json").write_text(
            json.dumps({"descriptorFiles": 3, "packCount": 8}), encoding="utf-8"
        )

    def test_native_pack_links_and_hashes(self):
        report = mod.build(self.root)
        self.assertTrue(report["all_unique"])
        self.assertFalse(report["bytecode_extracted"])
        a = report["targets"]["main"]["matches"][0]
        self.assertEqual(a["pack_index"], 4)
        self.assertEqual(a["packed_bytes"], 12000)
        self.assertEqual(a["hash"], "AAAABBBB00000001")
        self.assertEqual(report["targets"]["main_dynamic"]["matches"][0]["pack_index"], 4)
        self.assertEqual(len(report["file_index_sha256"]), 64)

    def test_missing_native_path_not_fabricated(self):
        self.lines[2] = "AAAABBBB00000002\t4\tarc/one.trpak\tother_name.bin\n"
        with gzip.open(self.root / "file_index.tsv.gz", "wt", encoding="utf-8") as f:
            f.writelines(self.lines)
        report = mod.build(self.root)
        self.assertTrue(report["targets"]["main"]["unique_match"])
        self.assertFalse(report["targets"]["main_dynamic"]["located"])
        self.assertFalse(report["all_unique"])

    def test_descriptor_count_must_match(self):
        (self.root / "descriptor_summary.json").write_text(
            json.dumps({"descriptorFiles": 4, "packCount": 8}), encoding="utf-8"
        )
        with self.assertRaises(ValueError):
            mod.build(self.root)


if __name__ == "__main__":
    unittest.main()
