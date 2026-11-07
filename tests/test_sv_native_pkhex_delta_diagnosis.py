"""Tests for source-attested native-vs-PKHeX forensic classification; no ROM."""
from __future__ import annotations
import csv
import hashlib
import importlib.util
import json
from pathlib import Path
import tempfile
import unittest

SCRIPT=Path(__file__).resolve().parents[1]/"scripts/Diagnose-SV-Native-PKHeX-Deltas.py"
spec=importlib.util.spec_from_file_location("sv_delta_forensics",SCRIPT)
m=importlib.util.module_from_spec(spec)
spec.loader.exec_module(m)


def fixed(loc0,loc1):
    return {"species_national":25,"form_raw":0,"level":15,
        "flawless_iv_count":0,"tera_type_raw":0,"gender_raw":255,
        "ability_permission_raw":0,"move1":0,"move2":0,"move3":0,"move4":0,
        "location0":loc0,"location1":loc1,"location2":0,"location3":0}


def wild(level,loc=158,cross=0):
    return {"location_id":loc,"cross_from_id":cross,"species_national":25,
        "form_raw":0,"gender_raw":255,"level_min":level,"level_max":level+5,
        "time_forbidden_mask":0,"weather_allowed_mask":15}


def csvwrite(p,rows):
    with p.open("w",encoding="utf-8-sig",newline="") as f:
        writer=csv.DictWriter(f,fieldnames=list(rows[0]))
        writer.writeheader()
        writer.writerows(rows)


class NativeForensicTests(unittest.TestCase):
    def test_fixed_location_only_and_new_158(self):
        s=m.pair_fixed([fixed(136,0)],[fixed(136,158)])
        self.assertEqual(s["non_location_template_matched_pairs"],1)
        self.assertEqual(s["matched_with_new_location_158"],1)
        self.assertEqual(s["matched_other_location_changes"],0)
        self.assertEqual(s["unmatched_pkhex_templates"],0)

    def test_no_fabricated_correction_for_unmatched_template(self):
        p=fixed(136,0)
        n=fixed(136,158);n["level"]=17
        s=m.pair_fixed([p],[n])
        self.assertEqual(s["non_location_template_matched_pairs"],0)
        self.assertEqual(s["unmatched_pkhex_templates"],1)
        self.assertEqual(s["unmatched_native_templates"],1)

    def test_duplicated_fixed_template_has_deterministic_minimal_matching(self):
        a=[fixed(136,0),fixed(140,0)]
        b=[fixed(140,158),fixed(136,158)]
        s=m.pair_fixed(a,b)
        self.assertEqual(s["non_location_template_matched_pairs"],2)
        self.assertEqual(s["matched_with_new_location_158"],2)
        self.assertEqual(s["ambiguous_template_groups"],0)

    def test_wild_classifies_level_and_new_crossovers_independently(self):
        ref=[wild(5,158,0)]
        nat=[wild(6,158,0),wild(8,164,158)]
        s=m.diagnose_wild(ref,nat)
        self.assertEqual(s["level_range_signature_present_on_both_sides"]["pkhex_rows"],1)
        self.assertEqual(s["level_range_signature_present_on_both_sides"]["native_rows"],1)
        self.assertEqual(s["entirely_new_native_signature"]["rows"],1)
        self.assertEqual(s["entirely_new_native_signature"]["crossover"],1)
        self.assertEqual(s["net_native_minus_pkhex"],1)

    def test_real_report_requires_sha_and_exact_report_counters(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp);diff=root/"diff";native=root/"native";out=root/"report"
            diff.mkdir();native.mkdir()
            products=[]
            for name,data in ((m.WILD_NAME,b"original-wild-proof"),
                              (m.FIXED_NAME,b"original-fixed-proof")):
                (native/name).write_bytes(data)
                products.append({"name":name,"bytes":len(data),
                    "sha256":hashlib.sha256(data).hexdigest().upper()})
            source={"status":"GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES",
                    "collisionBlocker":None,"originalTrcolEntries":223,
                    "generated":products}
            (root/"build.json").write_text(json.dumps(source),"utf-8")
            comp={"all_generated_from_native_not_reference":True,
                  "tables":{
                     "wild":{"status":"FIELD_LEVEL_DIFFERENCES","pkhex_sha256":"F"*64,
                             "native_sha256":products[0]["sha256"],"reference_only":1,"native_only":2},
                     "fixed":{"status":"FIELD_LEVEL_DIFFERENCES","pkhex_sha256":"F"*64,
                              "native_sha256":products[1]["sha256"],"reference_only":1,"native_only":1}}}
            (diff/"native-comparison.json").write_text(json.dumps(comp),"utf-8")
            for table, ref_rows, native_rows in (
                ("fixed",[fixed(136,0)],[fixed(136,158)]),
                ("wild",[wild(5)],[wild(6),wild(8,164,158)])):
                csvwrite(diff/f"{table}_pkhex_only.csv",ref_rows)
                csvwrite(diff/f"{table}_native_only.csv",native_rows)
            report=m.run(diff,native,root/"build.json",out)
            self.assertEqual(report["fixed"]["matched_with_new_location_158"],1)
            self.assertEqual(report["wild"]["entirely_new_native_signature"]["rows"],1)
            self.assertTrue((out/m.REPORT_NAME).exists())
            self.assertTrue((out/"sv-400-fixed-location-pairs.csv").exists())
            # Tampered native binary must never be presented as verified.
            (native/m.WILD_NAME).write_bytes(b"forged bytes")
            with self.assertRaises(ValueError):
                m.run(diff,native,root/"build.json",root/"report2")
            # Original evidence and diff source remain unchanged.

if __name__=="__main__":
    unittest.main()
