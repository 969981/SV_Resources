"""No-ROM controls for SHA-bound source identity versus reference multiset labels."""
import importlib.util
import json
from pathlib import Path
import tempfile
import unittest

SRC = Path(__file__).resolve().parents[1] / "scripts" / "Audit-SV-176194-186-Fixed158-Identity.py"
spec = importlib.util.spec_from_file_location("sv_400_source_identity", SRC)
subject = importlib.util.module_from_spec(spec)
spec.loader.exec_module(subject)


def row(case, label, species=218, level=28, locations="144;158;168;0", key="su1_area05_02"):
    return {
        "case": str(case), "source_group": label,
        "species_national": str(species), "level": str(level),
        "original_locations": locations,
        "source_symbols_json": json.dumps([["sl",key,696],["vl",key,696]]),
    }


class OriginalSVIdentityTests(unittest.TestCase):
    def test_contradictory_source_fingerprint_needs_full_fixed_bytes(self):
        a=row(68,"NATIVE_ONLY_TO_MATCHED")
        b=row(69,"MATCHED_TO_REFERENCE_LOSS")
        self.assertEqual(subject.fixed_fingerprint(a),subject.fixed_fingerprint(b))
        groups=subject.contradiction_groups([a,b])
        self.assertEqual(len(groups),1)
        self.assertEqual(groups[0]["case_numbers"],[68,69])

    def test_same_species_with_distinct_original_source_not_contradiction(self):
        a=row(1,"NATIVE_ONLY_TO_MATCHED")
        b=row(2,"MATCHED_TO_REFERENCE_LOSS",key="su1_area05_03")
        self.assertFalse(subject.contradiction_groups([a,b]))

    def test_distinct_level_identity_does_not_merge(self):
        a=row(1,"NATIVE_ONLY_TO_MATCHED",level=28)
        b=row(2,"MATCHED_TO_REFERENCE_LOSS",level=69)
        self.assertFalse(subject.contradiction_groups([a,b]))

    def test_table_key_malformed_rejected(self):
        a=row(1,"NATIVE_ONLY_TO_MATCHED")
        a["source_symbols_json"]='[["sl","name"]]'
        with self.assertRaises(ValueError):
            subject.normalized_symbols(a)

    def test_tampered_evidence_rejected(self):
        with tempfile.TemporaryDirectory() as td:
            p=Path(td)/"tampered.csv"
            p.write_text("case,forged\n1,yes\n")
            with self.assertRaises(ValueError):
                subject.checked_sha(p,subject.AB_SHA,"provenance")

    def test_no_native_counters_without_real_evidence(self):
        with self.assertRaises((ValueError,KeyError)):
            subject.classify_level_rows([],{
                "status":"ACTUAL_ORIGINAL_SV400_ISOLATED_NATIVE_WILD_LEVEL_AB_REFERENCE_DIAGNOSTICS",
                "reference_parity_comparison":[{"mode":"baseline","matched_occurrences":389},
                    {"mode":"terarium-176-194-raw-point-levels","matched_occurrences":431}],
                "reference_commit":subject.PKHEX,"source":"SHA_VERIFIED_ORIGINAL_SV_4_0_0_M2_61_PLUS_223_TRCOL",
                "changed_rows_count":92,
            })


if __name__=="__main__":
    unittest.main()