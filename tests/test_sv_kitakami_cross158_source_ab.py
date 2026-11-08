"""ROM-free guarded tests for original SV400 Kitakami 158 source-geometry A/B."""
import csv
import importlib.util
import json
from pathlib import Path
import tempfile
import unittest

SCRIPT=Path(__file__).resolve().parents[1] / "scripts" / "Compare-SV400-Source158-Original-AB.py"
spec=importlib.util.spec_from_file_location("original_158_ab", SCRIPT)
ab=importlib.util.module_from_spec(spec)
spec.loader.exec_module(ab)


class TestOriginal158AB(unittest.TestCase):
    def setUp(self):
        self.tmp=tempfile.TemporaryDirectory()
        self.addCleanup(self.tmp.cleanup)
        self.root=Path(self.tmp.name)

    def test_exact_focal_crossfrom_field(self):
        self.assertTrue(ab.focus((144,158,25,0,0,15,20,0,15)))
        self.assertTrue(ab.focus((158,158,25,0,0,15,20,0,15)))
        self.assertFalse(ab.focus((158,0,25,0,0,15,20,0,15)))
        self.assertFalse(ab.focus((144,140,25,0,0,15,20,0,15)))

    def test_multiset_tally_counts_duplicates(self):
        from collections import Counter
        a=(144,158,25,0,0,15,20,0,15)
        b=(166,158,25,0,0,15,20,0,15)
        c=(144,158,25,0,0,21,24,0,15)
        result=ab.tally(Counter({a:2,b:1}),Counter({a:1,c:1}))
        self.assertEqual(result,{"native":3,"reference":2,"matched":1,"native_only":2,"pkhex_only":1})

    def test_gen9_strict_csv_schema(self):
        p=self.root/"native_only.csv"
        with p.open("w",newline="",encoding="utf-8") as f:
            w=csv.DictWriter(f,fieldnames=list(ab.SLOTS))
            w.writeheader()
            w.writerow(dict(zip(ab.SLOTS,(144,158,25,0,0,15,20,0,15))))
        self.assertEqual(sum(ab.parse_diff(p).values()),1)
        p.write_text("species_national,location_id\n25,144\n",encoding="utf-8")
        with self.assertRaisesRegex(ValueError,"columns mismatch"):
            ab.parse_diff(p)

    def test_guard_reference_must_be_verifiably_source_backed(self):
        src=self.root/"inputs"/"bad-bridge.json"
        src.parent.mkdir()
        src.write_text(json.dumps({"status":"UNVERIFIED_FIXTURE"}),encoding="utf-8")
        with self.assertRaisesRegex(ValueError,"bridge manifest drift"):
            ab.compare(self.root/"native",src,self.root/"diff",{},self.root/"none.py",self.root/"out")

    def test_no_overwrite_provenance(self):
        src=self.root/"bad-bridge.json"
        src.write_text(json.dumps({}),encoding="utf-8")
        with self.assertRaisesRegex(ValueError,"never overwrite"):
            ab.compare(self.root,src,self.root,{},self.root/"none.py",self.root)


if __name__=="__main__":
    unittest.main()
