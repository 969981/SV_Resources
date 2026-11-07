"""ROM-free native TRPFD encounter pack locator tests (synthetic TSV+gzip)."""
import csv
import gzip
import importlib.util
import json
from pathlib import Path
import tempfile
import unittest

SCRIPT = Path(__file__).resolve().parents[1] / "scripts/Locate-SV-PKHeX-Native-Packs.py"
spec = importlib.util.spec_from_file_location("sv_native_enc_locate", SCRIPT)
mod = importlib.util.module_from_spec(spec)
spec.loader.exec_module(mod)


class NativeEncounterLocatorTests(unittest.TestCase):
    def create_index(self, root: Path, rows: list[dict]):
        (root / "descriptor_summary.json").write_text(
            json.dumps({"packCount": 3, "descriptorFiles": len(rows)}), "utf-8")
        with (root / "pack_index.tsv").open("w", newline="", encoding="utf-8") as out:
            w=csv.DictWriter(out, delimiter="\t",
                fieldnames=("pack_index", "pack_name", "referenced_files",
                            "packed_bytes", "reported_file_count"))
            w.writeheader()
            for i in range(3):
                w.writerow({"pack_index":i,"pack_name":f"pack{i}","referenced_files":1,
                            "packed_bytes":123+i,"reported_file_count":1})
        with gzip.open(root / "file_index.tsv.gz", "wt", encoding="utf-8", newline="") as out:
            w=csv.DictWriter(out, fieldnames=("hash","pack_index","pack_name","virtual_path"),
                             delimiter="\t")
            w.writeheader()
            for row in rows:
                w.writerow(row)

    def sample(self, index, virtual_path, n):
        return {"hash":f"{n:016X}","pack_index":index, "pack_name":f"pack{index}",
                "virtual_path":virtual_path}

    def test_sources_are_explicit_and_cover_all_3_regions(self):
        paths=mod.canonical_sources()
        self.assertEqual(len(paths),61)
        self.assertIn("world/data/encount/point_data/point_data/encount_data_atlantis.bin",paths)
        self.assertIn("world/data/raid/su2_raid_enemy_06/su2_raid_enemy_06_array.bin",paths)
        self.assertIn("world/scene/parts/field/main/field_2/field_main/resident_event/resident_area_collision_/resident_area_collision_0.trscn", paths)
        self.assertIn("message/dat/Trad_Chinese/common/place_name.tbl", paths)

    def test_locates_exact_native_path_and_bfbs_alias(self):
        with tempfile.TemporaryDirectory() as folder:
            path=Path(folder)
            rows=[
                self.sample(1,"world/data/encount/pokedata/pokedata/pokedata_array.bfbs",1),
                self.sample(2,"world/data/encount/point_data/point_data/encount_data_su2.bin",2),
                self.sample(0,"world/scene/parts/field/collisions/a.trcol",3),
                self.sample(0,"message/dat/English/common/place_name.tbl",4),
            ]
            self.create_index(path,rows)
            report=mod.build(path)
            self.assertEqual(report["summary"]["targets"], 61)
            self.assertEqual(report["summary"]["located"], 3)
            self.assertEqual(report["summary"]["missing"], 58)
            self.assertEqual(report["summary"]["selected_packs"], 3)
            self.assertEqual(report["summary"]["scene_trcol_candidates_capped"], 1)
            self.assertEqual(report["summary"]["scene_trcol_candidate_packs"], 1)
            entries={e["expected"]:e for e in report["targets"]}
            entry=entries["world/data/encount/pokedata/pokedata/pokedata_array.bin"]
            self.assertEqual(entry["status"],"LOCATED_NATIVE_INDEX")
            self.assertTrue(entry["hits"][0]["source_virtual_path"].endswith(".bfbs"))
            self.assertEqual(entry["hits"][0]["pack_index"],1)
            self.assertEqual(report["status"],"LOCATED_ONLY_NO_EXTRACTION_PERFORMED")

    def test_duplicates_are_flagged_ambiguous_not_counted(self):
        with tempfile.TemporaryDirectory() as folder:
            path=Path(folder)
            rows=[
                self.sample(0,"world/data/encount/pokedata/pokedata/pokedata_array.bin",1),
                self.sample(1,"world/data/encount/pokedata/pokedata/pokedata_array.bfbs",2),
            ]
            self.create_index(path,rows)
            report=mod.build(path)
            self.assertEqual(report["summary"]["located"],0)
            self.assertEqual(report["summary"]["ambiguous"],1)
            self.assertEqual(report["summary"]["selected_packs"],2)

    def test_missing_index_and_metadata_mismatch_fail_closed(self):
        with tempfile.TemporaryDirectory() as folder:
            path=Path(folder)
            with self.assertRaises(FileNotFoundError):
                mod.build(path)
            self.create_index(path,[self.sample(0,"world/data/field/x.bin",1)])
            (path/"descriptor_summary.json").write_text(
                json.dumps({"packCount":3,"descriptorFiles":408641}),"utf-8")
            with self.assertRaises(ValueError):
                mod.build(path)


if __name__ == "__main__":
    unittest.main()
