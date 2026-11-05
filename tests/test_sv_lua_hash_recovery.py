"""Synthetic tests for SV Lua FNV-1a hash recovery; no real game data required."""
import importlib.util
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SCRIPT = ROOT / "scripts" / "Recover-SV-Lua-Hashes.py"
spec = importlib.util.spec_from_file_location("sv_lua_recovery", SCRIPT)
module = importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)


class TestRecoverSVLuaHashes(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        self.addCleanup(self.tmp.cleanup)
        self.base = Path(self.tmp.name)
        self.source = self.base / "source"
        self.source.mkdir()
        self.output = self.base / "output"
        known = {
            "c": "main.event.general.area_script.AreaEnter_a_sch_room02",
            "e": "main.ajito.data.enums.AjitoTypeEnum",
            "f": "GetCursorHoming",
            "s": "OBJECT_NAME_1020",
        }
        targets = {
            "c": "main.event.general.area_script.AreaEnter_a_sch_room01",
            "e": None, "f": None,
            "s": "OBJECT_NAME_1010",
        }
        self.raw = {}
        for kind, value in known.items():
            h = module.fnv1a64(value)
            rows = [f"0x{h:016X} {value}\n"]
            if targets[kind]:
                t = module.fnv1a64(targets[kind])
                rows.append(f"0x{t:016X} \n")
            elif kind == "e":
                rows.append("0x0000000000000001 \n")
            self.raw[kind] = "".join(rows).encode("utf-8")
            (self.source / f"lua_{kind}_hashes.txt").write_bytes(self.raw[kind])

    def test_fitted_hashes(self):
        self.assertEqual(module.fnv1a64("OBJECT_NAME_1020"), 0x004AD397019085CA)
        self.assertEqual(module.fnv1a64("GetCursorHoming"), 0x004AE29F555A1639)

    def test_two_exact_matches_and_merged_overlay(self):
        files, report = module.build_outputs(self.source)
        self.assertEqual(report["total_original_unknown"], 3)
        self.assertEqual(report["total_recovered"], 2)
        self.assertEqual(report["total_still_unknown"], 1)
        self.assertIn(b"OBJECT_NAME_1010", files["lua_s_hashes.merged.txt"])
        self.assertIn(b"AreaEnter_a_sch_room01", files["lua_c_hashes.merged.txt"])
        self.assertIn(b"0x0000000000000001 ", files["lua_e_hashes.merged.txt"])
        self.assertIn(b"HASH_EXACT_CANDIDATE", files["recovered.tsv"])
        self.assertEqual(files["lua_f_hashes.merged.txt"], self.raw["f"])
        for kind in module.KINDS:
            self.assertEqual((self.source / f"lua_{kind}_hashes.txt").read_bytes(), self.raw[kind])

    def test_verify_only_detects_mutation(self):
        files, _ = module.build_outputs(self.source)
        self.output.mkdir()
        for name, data in files.items():
            (self.output / name).write_bytes(data)
        for name, data in module.build_outputs(self.source)[0].items():
            self.assertEqual((self.output / name).read_bytes(), data)
        (self.output / "recovered.tsv").write_bytes(b"corrupt")
        self.assertNotEqual(
            (self.output / "recovered.tsv").read_bytes(),
            module.build_outputs(self.source)[0]["recovered.tsv"]
        )

    def test_reject_wrong_known_mapping(self):
        (self.source / "lua_f_hashes.txt").write_text(
            "0x0000000000000001 GetCursorHoming\n", encoding="utf-8"
        )
        with self.assertRaises(ValueError):
            module.build_outputs(self.source)


if __name__ == "__main__":
    unittest.main()
