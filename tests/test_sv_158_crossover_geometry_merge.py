"""Synthetic, ROM-free regression tests for original-source SV 158 diagnostics."""
import csv
import importlib.util
import json
from pathlib import Path
import tempfile
import unittest

PATH = Path(__file__).resolve().parents[1] / "scripts" / "Audit-SV400-Cross158-Geometry-Merges.py"
spec = importlib.util.spec_from_file_location("sv_cross158_geometry", PATH)
mod = importlib.util.module_from_spec(spec)
spec.loader.exec_module(mod)

ORIGIN = {
    "TrscnPath": "world/scene/area_0.trscn",
    "CollisionKind": "HAVOK_TRCOL",
    "TrcolPath": "field_graphic/terrain_model/collider.trcol",
    "TrcolSha256": "A" * 64,
    "BoxPosition": None,
    "BoxSize": None,
}


def good_events():
    return [
        {"stage": "trace_start", "source": "SV_4_0_0_original_game_pkNX", "fixedOnly": False},
        {"stage": "wild_cross158_area_pair", "fieldIndex": "Kitakami",
         "sourceLocation": 158, "targetLocation": 164,
         "targetAreaName": "su1_target", "sourceLookupAreaName": "su1_158",
         "strictHits": 1, "tolerantHits": 2, "sourceLocalCount": 3,
         "toleranceOnlyHits": 1,
         "acceptedSourceCollisionAreas": {"source_area1": 2},
         "sampleAcceptedPoints": [], "sourceLookupCollider": ORIGIN, "targetCollider": ORIGIN},
        {"stage": "wild_six_group_absorb", "location": 140, "crossFrom": 158,
         "species": 163, "leftMin": 13, "leftMax": 16,
         "rightMin": 17, "rightMax": 21, "resultMin": 13, "resultMax": 21,
         "actualOverlap": False, "strict": False},
        {"stage": "trace_finished",
         "status": "REAL_NATIVE_POINT_PROVENANCE_RECORDED_NOT_GAME_RUNTIME_PROVED"}
    ]


class GeometryAuditTests(unittest.TestCase):
    def setUp(self):
        self.t = tempfile.TemporaryDirectory()
        self.addCleanup(self.t.cleanup)
        self.base = Path(self.t.name)

    def events(self, rows=None):
        f = self.base / "trace.jsonl"
        f.write_text("\n".join(json.dumps(v) for v in (rows if rows is not None else good_events()))+"\n",
                     encoding="utf-8")
        return f

    def test_original_pair_and_exact_merge_witness(self):
        pairs, merges, steps = mod.audit_events(self.events())
        self.assertEqual(len(pairs), 1)
        self.assertEqual(merges[(140, 158, 163)], 1)
        self.assertEqual(steps[0]["actualOverlap"], False)

    def test_reject_incorrect_strict_count(self):
        data = good_events()
        data[1]["strictHits"] = 4
        with self.assertRaisesRegex(ValueError, "counts inconsistent"):
            mod.audit_events(self.events(data))

    def test_reject_unverifiable_havok_source(self):
        data = good_events()
        data[1]["targetCollider"] = {**ORIGIN, "TrcolSha256": ""}
        with self.assertRaisesRegex(ValueError, "SHA attribution"):
            mod.audit_events(self.events(data))

    def test_reject_incorrect_merge_witness(self):
        data = good_events()
        data[2]["resultMax"] = 22
        with self.assertRaisesRegex(ValueError, "cannot be reproduced"):
            mod.audit_events(self.events(data))

    def test_incomplete_source_replay_refused(self):
        with self.assertRaisesRegex(ValueError, "incomplete"):
            mod.audit_events(self.events(good_events()[:-1]))

    def test_wrong_target_rejected(self):
        data = good_events()
        data[2]["species"] = 999
        with self.assertRaisesRegex(ValueError, "Unexpected wild merge"):
            mod.audit_events(self.events(data))

    def test_native_csv_grouping_and_report(self):
        native = self.base / "native.csv"
        with native.open("w", newline="", encoding="utf-8") as fp:
            writer = csv.DictWriter(fp, fieldnames=["source_table", "location_id",
                                                   "cross_from_id", "reference_match"])
            writer.writeheader()
            for loc, status in [(164, "ONLY_IN_NATIVE_GENERATION"),
                                (164, "SAME_AS_PINNED_PKHEX"),
                                (144, "ONLY_IN_NATIVE_GENERATION")]:
                writer.writerow({"source_table": "wild", "location_id": loc,
                                 "cross_from_id": 158, "reference_match": status})
            writer.writerow({"source_table": "wild", "location_id": 164,
                             "cross_from_id": 0, "reference_match": "ONLY_IN_NATIVE_GENERATION"})
        counts = mod.source_counts(native, strict=False)
        self.assertEqual(counts[164]["SAME_AS_PINNED_PKHEX"], 1)
        self.assertEqual(counts[144]["ONLY_IN_NATIVE_GENERATION"], 1)
        pairs, merges, steps = mod.audit_events(self.events())
        output = self.base / "report"
        report = mod.write_report(counts, pairs, merges, steps, output, "FAKE_SHA")
        self.assertEqual(report["native_only_cross158"], 2)
        self.assertEqual(report["already_reference_matching_cross158"], 1)
        self.assertEqual(report["collider_area_pair_probe_count"], 1)
        self.assertEqual(report["six_interval_group_absorb_observation_count"], 1)
        parsed = list(csv.DictReader((output/"SV400_Cross158_Original_AreaPair_30f_vs_Strict.csv").open(encoding="utf-8-sig")))
        self.assertEqual(len(parsed), 2)
        self.assertEqual(parsed[1]["30f_only_point_area_pair_hits"], "1")


if __name__ == "__main__":
    unittest.main()
