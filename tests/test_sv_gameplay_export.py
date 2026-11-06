"""Synthetic, ROM-free tests for the conservative SV gameplay data exporter."""
import csv
import hashlib
import importlib.util
import json
import shutil
import tempfile
import unittest
from pathlib import Path

SCRIPT = Path(__file__).resolve().parents[1] / "scripts/Export-SV-Gameplay-Data.py"
SPEC = importlib.util.spec_from_file_location("sv_gameplay_export", SCRIPT)
sv = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(sv)


class GameplayExportTests(unittest.TestCase):
    def test_classifies_real_documented_source_families(self):
        self.assertEqual(sv.domain_for("world/data/encount/pokedata/pokedata/pokedata_array.bin"),
                         "encounters")
        self.assertEqual(sv.domain_for("world/data/field/fixed_symbol/fixed_symbol_table/a.bin"),
                         "encounters")
        self.assertEqual(sv.domain_for("world/data/raid/raid_enemy_array.bin"),
                         "encounters")
        self.assertEqual(sv.domain_for("pokemon/data/personal/personal.bin"), "pokedex")
        self.assertEqual(sv.domain_for("world/data/waza/waza_array.bin"), "moves")
        self.assertEqual(sv.domain_for("world/data/item/item_array.bin"), "items")
        self.assertEqual(sv.domain_for("world/data/map/map.bin"), "locations")
        self.assertIsNone(sv.domain_for("pokemon/data/pm0128/model.trmdl"))

    def test_raw_field_values_preserved_not_converted_into_guesses(self):
        data = {"Table":[{"DevID":1000,"Area":2,"Version":3,"Notes":[{"raw":"x"}]},
                         {"DevID":42,"Rare":0}]}
        rows = list(sv.records_from(data))
        self.assertTrue(any(x.get("DevID") == 1000 for _, x in rows))
        self.assertTrue(any(x.get("Rare") == 0 for _, x in rows))
        self.assertFalse(any("species_name" in x for _, x in rows))

    def test_path_rejection(self):
        for bad in ("/escape", "../escape", "a/../../escape", ""):
            with self.assertRaises(ValueError):
                sv.safe_rel(bad)

    def test_actual_native_hash_and_schema_wrapper(self):
        with tempfile.TemporaryDirectory() as folder:
            root = Path(folder) / "repo"
            base = root / sv.ROOT
            rawrel = "world/data/encount/pokedata/pokedata/pokedata_array.bin"
            native = base / "virtual" / rawrel
            native.parent.mkdir(parents=True)
            native.write_bytes(b"synthetic-game-record")
            wrapped = base / "parsed" / (rawrel + ".flatbuffer.json")
            wrapped.parent.mkdir(parents=True)
            wrapped.write_text(json.dumps({
                "source": rawrel, "status": "STRUCTURE_PARSED",
                "schema": "example/validated.fbs",
                "schema_sha256": "A" * 64,
                "native_sha256": hashlib.sha256(native.read_bytes()).hexdigest(),
                "flatc_json":{"Table":[{"DevID":25,"AreaID":7}]}
            }), encoding="utf-8")
            parser = root / "scripts/resource_pipeline/r1_text.py"
            parser.parent.mkdir(parents=True)
            shutil.copyfile(Path(__file__).resolve().parents[1] /
                            "scripts/resource_pipeline/r1_text.py", parser)
            summary = sv.run(root, base / "semantic_exports", ("Simp_Chinese",))
            self.assertEqual(summary["native_sources"], 1)
            self.assertEqual(summary["structured_records"], 1)
            with (base / "semantic_exports/encounters.csv").open(
                    encoding="utf-8-sig", newline="") as handle:
                rows = list(csv.DictReader(handle))
            self.assertEqual(rows[0]["verification"], "NATIVE_SHA256_VERIFIED_SCHEMA_JSON")
            self.assertEqual(json.loads(rows[0]["raw_json"])["DevID"], 25)
            self.assertEqual(rows[0]["source"], rawrel)

    def test_wrong_hash_does_not_create_trusted_record(self):
        with tempfile.TemporaryDirectory() as tmp:
            repo = Path(tmp)
            raw = repo / sv.ROOT / "virtual/world/data/raid/data.bin"
            raw.parent.mkdir(parents=True)
            raw.write_bytes(b"not the same bytes")
            derivative = repo / sv.ROOT / "parsed/world/data/raid/data.bin.flatbuffer.json"
            derivative.parent.mkdir(parents=True)
            derivative.write_text(json.dumps({
                "source": "world/data/raid/data.bin", "status": "STRUCTURE_PARSED",
                "schema":"example.fbs", "native_sha256":"F"*64,
                "flatc_json":{"Rows":[{"Species":1}]}
            }), "utf-8")
            import sqlite3
            db = sqlite3.connect(":memory:")
            sv.init_db(db)
            counters = __import__("collections").Counter()
            sv.add_wrapper(db, repo / sv.ROOT, derivative, counters)
            self.assertEqual(db.execute("SELECT COUNT(*) FROM decoded_records").fetchone()[0], 0)
            self.assertEqual(db.execute("SELECT COUNT(*) FROM blockers").fetchone()[0], 1)
            db.close()


if __name__ == "__main__":
    unittest.main()
