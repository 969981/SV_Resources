"""No-ROM guards for provenance-backed original SV DLC / WorldEnd diagnostic."""
from pathlib import Path
import importlib.util
import unittest
import tempfile
import csv
import json

FILE=Path(__file__).resolve().parents[1]/"scripts"/"Triage-SV-Remaining-115-Wild-and-Worldend-158.py"
spec=importlib.util.spec_from_file_location("remaining_sv",FILE)
M=importlib.util.module_from_spec(spec)
spec.loader.exec_module(M)


class RemainingSVTests(unittest.TestCase):
    def test_reference_and_native_level_ranges_must_be_distinguished(self):
        self.assertEqual(M.interval_relation(21,29,24,29),"REFERENCE_INSIDE_NATIVE")
        self.assertEqual(M.interval_relation(58,68,58,70),"NATIVE_INSIDE_REFERENCE")
        self.assertEqual(M.interval_relation(65,72,60,62),"REFERENCE_COMPLETELY_BELOW_NATIVE")
        self.assertEqual(M.interval_relation(20,24,28,30),"REFERENCE_COMPLETELY_ABOVE_NATIVE")
        self.assertEqual(M.interval_relation(20,25,24,30),"PARTIAL_OVERLAP")
        with self.assertRaises(ValueError):
            M.interval_relation(80,73,70,75)

    def test_real_source_fixed_tablekey_namespaces(self):
        self.assertEqual(M.parse_original_fixed_area("su1_area03_07"),("area03","NORMAL"))
        self.assertEqual(M.parse_original_fixed_area("t_su1_area03_18"),("area03","T_PREFIX"))
        self.assertEqual(M.parse_original_fixed_area("t_su1_area11_14"),("area11","T_PREFIX"))
        with self.assertRaises(ValueError):
            M.parse_original_fixed_area("other_area03_07")

    def test_source_case_identity_preserves_duplicate_occurrences(self):
        record=dict(location_id="176",cross_from_id="194",species_national="774",
                    form_raw="31",native_level_min="58",native_level_max="68",
                    pkhex_level_min="58",pkhex_level_max="70")
        from collections import Counter
        self.assertEqual(Counter((M.key(record),M.key(record)))[M.key(record)],2)
        changed=dict(record,pkhex_level_max="69")
        self.assertNotEqual(M.key(record),M.key(changed))

    def test_original_source_wild_invalid_provenance_rejected(self):
        # No fabricated dataset can be passed off as one of the 115 original
        # unverified DLC cases merely because a CSV contains 115 rows.
        with tempfile.TemporaryDirectory() as root:
            r=Path(root)
            for name in ("w115.csv","w666.csv","f236.csv"):
                (r/name).write_text("location_id,cross_from_id,species_national\n",encoding="utf-8")
            (r/"wild.json").write_text(json.dumps(dict(status="UNVERIFIED")))
            (r/"fixed.json").write_text(json.dumps(dict(status="FAKE")))
            with self.assertRaises(ValueError):
                M.analyze(r/"w115.csv",r/"w666.csv",r/"wild.json",
                    r/"f236.csv",r/"fixed.json",r/"output")
            self.assertFalse((r/"output").exists())

if __name__=="__main__":
    unittest.main()
