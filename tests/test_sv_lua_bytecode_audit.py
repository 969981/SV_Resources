"""Synthetic test of SV native Lua bytecode audit."""
import importlib.util
import json
from pathlib import Path
import tempfile
import unittest

SCRIPT = Path(__file__).resolve().parents[1] / "scripts/Audit-SV-Lua-Bytecode.py"
spec = importlib.util.spec_from_file_location("sv_blua_audit", SCRIPT)
mod = importlib.util.module_from_spec(spec)
spec.loader.exec_module(mod)


class TestBytecodeAudit(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name)
        self.virtual = self.root / "virtual"
        self.hashlists = self.root / "Hashlists"
        self.hashlists.mkdir()
        (self.hashlists / "lua_c_hashes.txt").write_text(
            "0xAAAAAAAAAAAAAAAA \n0xBBBBBBBBBBBBBBBB main.ui.Known\n", encoding="utf-8"
        )
        (self.hashlists / "lua_f_hashes.txt").write_text(
            "0xCCCCCCCCCCCCCCCC \n0xDDDDDDDDDDDDDDDD KnownMethod\n", encoding="utf-8"
        )
        self.recovered = self.root / "recovered.tsv"
        self.recovered.write_text(
            "kind\thash\tcandidate_name\nf\t0xCCCCCCCCCCCCCCCC\tCandidateMethod\n",
            encoding="utf-8"
        )
        self.locator = self.root / "locator.json"
        targets = {
            "main": "script/lua/bin/release/main/main.blua",
            "main_dynamic": "script/lua/bin/release/main_dynamic/main_dynamic.blua",
        }
        self.locator.write_text(json.dumps({
            "all_unique": True,
            "descriptor_files_scanned": 408641,
            "targets": {k: {"matches": [{
                "hash": "0000000000000001", "pack_index": 21977 + i,
                "pack_name": f"arc/{k}.trpak", "virtual_path": v
            }]} for i, (k,v) in enumerate(targets.items())}
        }), encoding="utf-8")
        for k,rel in targets.items():
            path = self.virtual / rel
            path.parent.mkdir(parents=True, exist_ok=True)
            content = (b"\x1bLua\x54" + b"\x00" * 20 +
                       b" CAAAAAAAAAAAAAAAA FCCCCCCCCCCCCCCCC " +
                       b" CBBBBBBBBBBBBBBBB FDDDDDDDDDDDDDDDD ")
            path.write_bytes(content)

    def test_native_hex_token_presence(self):
        report = mod.build(self.virtual, self.locator, self.hashlists, self.recovered)
        self.assertEqual(report["unknown_seen_in_either_file"], {"c":1,"f":1})
        self.assertEqual(report["unknown_not_seen_in_either_file"], {"c":0,"f":0})
        self.assertTrue(report["files"]["main"]["lua54_signature_at_offset_zero"])
        self.assertEqual(report["files"]["main"]["native_pack_index"], 21977)
        self.assertEqual(len(report["files"]["main"]["sha256"]), 64)
        self.assertEqual(len(report["files"]["main"]["encoded_tokens"]["f"]["original_unknown_hits"]), 1)
        self.assertTrue(report["files"]["main"]["encoded_tokens"]["f"]["original_unknown_hits"][0]["from_previous_48"])
        self.assertFalse(report["source_modified"])

    def test_missing_raw_file_fails_closed(self):
        (self.virtual / "script/lua/bin/release/main/main.blua").unlink()
        with self.assertRaises(FileNotFoundError):
            mod.build(self.virtual, self.locator, self.hashlists, self.recovered)

    def test_ambiguous_native_locator_fails_closed(self):
        j = json.loads(self.locator.read_text())
        j["all_unique"] = False
        self.locator.write_text(json.dumps(j))
        with self.assertRaises(ValueError):
            mod.build(self.virtual, self.locator, self.hashlists, self.recovered)


if __name__ == "__main__":
    unittest.main()
