from pathlib import Path
import importlib.util
import unittest
from collections import Counter

PATH=Path(__file__).resolve().parents[1]/"scripts"/"Compare-SV-Terarium-176-194-Native-AB.py"
SPEC=importlib.util.spec_from_file_location("sv_176194_native_compare",PATH)
M=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(M)

class TerariumNativeMatchRetentionTests(unittest.TestCase):
    def test_replacement_cannot_hide_lost_baseline_match(self):
        old=(176,0,50,0,0,59,69,0,15)
        new=(176,0,50,0,0,59,70,0,15)
        ref=Counter({old:1,new:1})
        base=Counter({old:1})
        variant=Counter({new:1})
        before=M.mode_count(base,ref)
        after=M.mode_count(variant,ref)
        self.assertEqual(before["matched_occurrences"],after["matched_occurrences"])
        retained=M.match_retention(base,variant,ref)
        self.assertEqual(retained["baseline_reference_matches_retained"],0)
        self.assertEqual(retained["baseline_reference_matches_lost"],1)
        self.assertEqual(retained["new_reference_matches_recovered"],1)

    def test_multiset_retention_preserves_duplicate_occurrences(self):
        old=(186,176,335,0,0,58,68,0,15)
        new=(186,176,335,0,0,58,69,0,15)
        ref=Counter({old:2,new:2})
        base=Counter({old:2})
        variant=Counter({old:1,new:1})
        d=M.match_retention(base,variant,ref)
        self.assertEqual(d["baseline_reference_matches_retained"],1)
        self.assertEqual(d["baseline_reference_matches_lost"],1)
        self.assertEqual(d["new_reference_matches_recovered"],1)

    def test_target_focus_includes_cross_from_176_into_location_186(self):
        row=(186,176,335,0,0,58,68,0,15)
        self.assertTrue(M.is_focal(row))
        self.assertTrue(M.is_focal((194,176,50,0,0,59,70,0,15)))
        self.assertFalse(M.is_focal((182,0,1,0,0,58,68,0,15)))

if __name__=="__main__":
    unittest.main()
