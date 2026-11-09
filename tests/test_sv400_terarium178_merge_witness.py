"""No-ROM regression tests for independent original Terarium 178 overlap source audit."""
import importlib.util
from pathlib import Path
import tempfile
import unittest

ROOT=Path(__file__).resolve().parents[1]
path=ROOT/"scripts"/"Audit-SV400-Terarium178-Original-Merge.py"
spec=importlib.util.spec_from_file_location("sv400_178_merge_witness",path)
module=importlib.util.module_from_spec(spec);spec.loader.exec_module(module)

class Original178SourceMergeTests(unittest.TestCase):
    def test_existing_reference_interval_disappears_after_merge(self):
        d=module.evaluate_intervals([(59,70),(65,70),(65,74)],[(59,74)],(59,70),(59,74))
        self.assertEqual(d,{"pre_has_max74_and_max70or71":True,
                            "reference_exact_in_pre":True,
                            "reference_exact_in_post":False,
                            "native_wide_in_post":True})

    def test_no_mechanical_level_74_cap_rule_from_source(self):
        d=module.evaluate_intervals([(59,74)],[(59,74)],(59,70),(59,74))
        self.assertFalse(d["pre_has_max74_and_max70or71"])
        self.assertFalse(d["reference_exact_in_pre"])

    def test_multiple_original_point_sources_not_unique_by_synthetic_example(self):
        d=module.evaluate_intervals([(59,70),(65,74)],[(59,74)],(59,70),(59,74))
        self.assertTrue(d["pre_has_max74_and_max70or71"])
        self.assertFalse(d["reference_exact_in_post"])

    def test_original_sha_fails_closed(self):
        with tempfile.TemporaryDirectory() as tmp:
            source=Path(tmp)/"unverified.csv";source.write_text("synthetic only\n")
            manifest=Path(tmp)/"manifest.json";manifest.write_text("{}")
            with self.assertRaisesRegex(ValueError,"CSV SHA drift"):
                module.verify_source(source,manifest)

    def test_output_cannot_overwrite_original_source(self):
        with tempfile.TemporaryDirectory() as tmp:
            source=Path(tmp)/"source.csv";source.write_text("synthetic only\n")
            manifest=Path(tmp)/"manifest.json";manifest.write_text("{}")
            with self.assertRaisesRegex(ValueError,"Cannot overwrite"):
                module.audit(source,manifest,Path(tmp)/"out")

if __name__=="__main__":
    unittest.main()
