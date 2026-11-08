from pathlib import Path
import importlib.util
import tempfile
import json
import unittest

PATH=Path(__file__).resolve().parents[1]/"scripts"/"Compare-SV400-Point5046-AreaFilter-AB.py"
SPEC=importlib.util.spec_from_file_location("sv_point5046_area_filter_ab",PATH)
M=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(M)

class Point5046AreaFilterABTests(unittest.TestCase):
    def report(self):
        return {
            "status":"ORIGINAL_SV400_POINT5046_SOURCE_AREA_FILTER_PROBES_NOT_GAME_LEGALITY",
            "sourcePointAsset":"world/data/encount/point_data/point_data/encount_data_su1.bin",
            "sourcePointIndex":5046,
            "sourceLocation":158,
            "probeCount":7,
            "probes":[{"pointSource":"world/data/encount/point_data/point_data/encount_data_su1.bin",
                       "pointIndex":5046,"location":158,"pointSourceCollisionArea":"subarea_su01worldend",
                       "storageCandidateAccepted":True,"pointSourceCandidateAccepted":True,
                       "filterTokens":[{"name":"a_su0108"}],"criteriaIndex":i}
                      for i in (40,41,74,110,111,112,113)],
        }

    def test_complete_original_point_criteria_probe_set(self):
        with tempfile.TemporaryDirectory() as td:
            p=Path(td)/"probe.json"
            p.write_text(json.dumps(self.report()),encoding="utf-8")
            d=M.validate_probe_report(p)
            self.assertEqual(d["probeCount"],7)

    def test_missing_criteria_probe_fails_closed(self):
        with tempfile.TemporaryDirectory() as td:
            d=self.report()
            d["probes"].pop()
            d["probeCount"]=6
            p=Path(td)/"probe.json"
            p.write_text(json.dumps(d),encoding="utf-8")
            with self.assertRaisesRegex(ValueError,"criteria set incomplete"):
                M.validate_probe_report(p)

    def test_wrong_point_identity_fails_closed(self):
        with tempfile.TemporaryDirectory() as td:
            d=self.report()
            d["sourcePointIndex"]=5047
            p=Path(td)/"probe.json"
            p.write_text(json.dumps(d),encoding="utf-8")
            with self.assertRaisesRegex(ValueError,"identity mismatch"):
                M.validate_probe_report(p)

    def test_scope_contains_local_and_cross_from_158_only(self):
        self.assertTrue(M.scopes((158,0,129,0,0,5,30,0,15))["location158_or_cross_from158"])
        self.assertTrue(M.scopes((144,158,129,0,0,5,30,0,15))["location158_or_cross_from158"])
        self.assertFalse(M.scopes((144,0,129,0,0,5,30,0,15))["location158_or_cross_from158"])

if __name__=="__main__":
    unittest.main()
