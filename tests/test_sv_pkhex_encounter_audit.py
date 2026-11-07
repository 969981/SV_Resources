"""Synthetic, no-ROM test for PKHeX Gen9 encounter reference decoding."""
import importlib.util
import json
from pathlib import Path
import struct
import tempfile
import unittest

SCRIPT = Path(__file__).resolve().parents[1] / "scripts/Audit-SV-PKHeX-Encounters.py"
spec = importlib.util.spec_from_file_location("pkhex_gen9_audit", SCRIPT)
mod = importlib.util.module_from_spec(spec)
spec.loader.exec_module(mod)


def make_wild():
    a0 = struct.pack("<HH", 6, 0) + struct.pack("<HBBBBBB", 25, 0, 255, 5, 8, 0, 3)
    a1 = struct.pack("<HH", 18, 12) + struct.pack("<HBBBBBB", 133, 31, 0, 10, 14, 5, 1)
    offset = 4 + 3 * 4
    return b"sv" + struct.pack("<HIII", 2, offset, offset+len(a0),
                               offset+len(a0)+len(a1)) + a0+a1


class PKHeXEncounterAuditTests(unittest.TestCase):
    def test_wild_layout_exact(self):
        records = mod.read_wild(make_wild())
        self.assertEqual(len(records), 2)
        self.assertEqual(records[0]["species_national"], 25)
        self.assertEqual(records[0]["location_id"], 6)
        self.assertEqual(records[0]["gender_raw"], 255)
        self.assertEqual(records[0]["weather_allowed_mask"], 3)
        self.assertEqual(records[1]["cross_from_id"], 12)
        self.assertEqual(records[1]["form_raw"], 31)
        self.assertEqual(records[1]["time_forbidden_mask"], 5)

    def test_wild_invalid_data_fails_closed(self):
        raw = bytearray(make_wild())
        raw[0] = 0
        with self.assertRaises(ValueError):
            mod.read_wild(raw)
        raw = bytearray(make_wild())
        struct.pack_into("<I", raw, 4, 999999)
        with self.assertRaises(ValueError):
            mod.read_wild(raw)
        raw = bytearray(make_wild() + b"\x00")
        with self.assertRaises(ValueError):
            mod.read_wild(raw)

    def test_fixed_layout(self):
        sample = struct.pack("<HBBBBBBHHHHBBBB",
                             1001, 2, 60, 3, 15, 255, 1, 33, 45, 0, 0, 6, 8, 0, 0)
        self.assertEqual(len(sample), 20)
        record = mod.read_fixed(sample)[0]
        self.assertEqual(record["species_national"], 1001)
        self.assertEqual(record["flawless_iv_count"], 3)
        self.assertEqual(record["location1"], 8)
        self.assertEqual(record["move1"], 33)
        with self.assertRaises(ValueError):
            mod.read_fixed(sample[:-1])

    def test_raid_layout(self):
        sample = struct.pack("<HBBBBBBHHHHBBBBhh", 150, 1, 1, 2, 5, 1,
                             75, 33, 45, 85, 99, 12, 7, 6, 10, -99, 101)
        self.assertEqual(len(sample), 24)
        record = mod.read_raid(sample, "paldea")[0]
        self.assertEqual(record["species_national"], 150)
        self.assertEqual(record["gender_raw"], 0)
        self.assertEqual(record["rand_min_scarlet"], -99)
        self.assertEqual(record["rand_min_violet"], 101)
        self.assertEqual(record["stars"], 6)

    def test_outbreak_layout_and_mask(self):
        sample = struct.pack("<HBBBBBBBBBB", 1025, 1, 255, 4, 30, 5,
                             0x13, 1, 0, 255, 1) + bytes(range(16))
        self.assertEqual(len(sample), 28)
        result = mod.read_outbreak(sample)[0]
        self.assertEqual(result["species_national"], 1025)
        self.assertEqual(result["is_shiny_forced"], 1)
        self.assertEqual(result["met_base"], 0)
        self.assertEqual(int(result["met_flags_hex"], 16),
                         int.from_bytes(bytes(range(16)), "little") >> 8)

    def test_reference_audit_and_exact_binary_comparison(self):
        with tempfile.TemporaryDirectory() as folder:
            base = Path(folder)
            pkhex = base / "PKHeX"
            assets = pkhex / mod.RESOURCE
            assets.mkdir(parents=True)
            generated = base / "pkNX"
            generated.mkdir()
            wild = make_wild()
            (assets / mod.NAMES["wild"]).write_bytes(wild)
            (generated / mod.NAMES["wild"]).write_bytes(wild)
            report = mod.audit(pkhex, base / "report", generated)
            self.assertEqual(report["sources"]["wild"]["records"], 2)
            self.assertEqual(report["sources"]["wild"]["area_count"], 2)
            self.assertEqual(report["sources"]["wild"]["distinct_area_locations"], 2)
            self.assertEqual(report["sources"]["wild"]["distinct_met_locations"], 2)
            self.assertEqual(report["sources"]["wild"]["empty_area_count"], 0)
            self.assertTrue(report["diffs"]["wild"]["exact_binary_match"])
            self.assertEqual(report["sources"]["fixed"]["status"],
                             "NOT_IN_PKHEX_CHECKOUT")
            self.assertTrue((base / "report/pkhex_wild.csv").exists())
            self.assertEqual(json.loads((base / "report/summary.json")
                                        .read_text("utf-8"))["sources"]["wild"]["records"], 2)

    def test_multiset_comparison_detects_mutation(self):
        original = mod.read_wild(make_wild())
        changed = [dict(r) for r in original]
        changed[1]["level_max"] += 1
        delta = mod.compare_rows(original, changed)
        self.assertEqual(delta["only_pkhex"], 1)
        self.assertEqual(delta["only_generated"], 1)


if __name__ == "__main__":
    unittest.main()
