"""Tests for source-attested Gen9 wild pre-merge level analytics."""
from pathlib import Path
import importlib.util
import unittest
import json

file=Path(__file__).resolve().parents[1]/"scripts"/"Summarize-SV-Native-Level-Merge-Differences.py"
spec=importlib.util.spec_from_file_location("sv_level_merge",file)
m=importlib.util.module_from_spec(spec)
spec.loader.exec_module(m)

class Gen9LevelMergeAuditTests(unittest.TestCase):
    @staticmethod
    def sample(before=((52,55),(53,56)),after=((52,56),)):
        return {
            "location_id":"40","cross_from_id":"109","species_national":"673","form_raw":"0",
            "native_level_min":"52","native_level_max":"56",
            "pkhex_level_min":"52","pkhex_level_max":"55",
            "candidate_point_count":"2",
            "original_point_sources_json":json.dumps([
                ["world/data/encount/point_data/point_data/encount_data_100000.bin",51626,1412.7,108,-4345],
                ["world/data/encount/point_data/point_data/encount_data_100000.bin",53267,787,31,-4475]
            ]),
            "preconsolidation_level_ranges_json":json.dumps(before),
            "postconsolidation_level_ranges_json":json.dumps(after),
        }

    def test_real_case_reference_interval_in_original_premerge_list(self):
        item=m.classify(self.sample())
        self.assertEqual(item["reference_range_present_before"],1)
        self.assertEqual(item["native_range_present_after"],1)
        self.assertEqual(item["had_multiple_before_ranges"],1)
        self.assertEqual(item["consolidation_reduced_range_count"],1)
        self.assertEqual(item["original_point_count"],2)
        self.assertIn("encount_data_100000.bin",item["original_point_files"])

    def test_premerge_interval_not_matching_reference_is_distinguished(self):
        item=m.classify(self.sample(before=((52,53),(54,56))))
        self.assertEqual(item["reference_range_present_before"],0)
        self.assertEqual(item["native_range_present_after"],1)

    def test_never_claim_single_point_from_merged_output(self):
        row=self.sample()
        row["candidate_point_count"]="1"
        with self.assertRaises(ValueError):
            m.classify(row)

    def test_disallow_invalid_provenance_or_impossible_level(self):
        row=self.sample()
        row["original_point_sources_json"]=json.dumps([["not_a_real_native_file.json",1,2,3,4],["not_a_real_native_file.json",2,3,4,5]])
        with self.assertRaises(ValueError):m.classify(row)
        row=self.sample(before=((99,101),))
        with self.assertRaises(ValueError):m.classify(row)

if __name__=="__main__":
    unittest.main()
