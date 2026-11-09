"""No-ROM tests for verified original 186←176/5046 focused causal evidence."""
import importlib.util
import json
from pathlib import Path
import tempfile
import unittest

FILE = Path(__file__).resolve().parents[1] / "scripts" / "Audit-SV400-186-MinLoss-5046-Duplicate-Trace.py"
SPEC = importlib.util.spec_from_file_location("sv400_186_5046_causal", FILE)
M = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(M)


class Source186CausalAuditTests(unittest.TestCase):
    def test_exact_focused_slot_scope(self):
        yes = {"stage":"wild_serialized","location":186,"crossFrom":176,
               "species":88,"form":0,"gender":0,"minLevel":58,"maxLevel":68,
               "timeMask":0,"weatherMask":15}
        no = dict(yes, crossFrom=194)
        self.assertTrue(M.slot186(yes))
        self.assertFalse(M.slot186(no))
        self.assertEqual(M.serialized_counter([yes,no])[ (88,0,0,58,68,0,15) ], 1)

    def test_duplicate_original_point_candidate_is_not_one_point(self):
        events=[]
        for idx in (5046,5072,5257):
            for sp,crit in ((313,110),(313,111),(314,112),(314,113)):
                events.append(dict(
                    stage="wild_raw_candidate",location=158,species=sp,
                    criteriaIndex=crit,pointSource=M.SOURCE,pointIndex=idx,
                    sourceCollisionArea=M.WORLDEND,areaName="a_su0108",
                    minLevel=7,maxLevel=60,timeMask=9,form=0,gender=0))
        candidates=M.raw313(events)
        self.assertEqual(sum(candidates.values()),12)
        self.assertEqual({x[3] for x in candidates},{5046,5072,5257})
        self.assertEqual(len(M.raw313([dict(events[0],maxLevel=59)])),0)

    def test_trace_incomplete_or_wrong_profile_must_fail(self):
        with tempfile.TemporaryDirectory() as td:
            file=Path(td)/"trace.jsonl"
            file.write_text(json.dumps({"stage":"trace_start","focusedProfile":"wrong"})
                            +"\n"+json.dumps({"stage":"trace_finished","status":"REAL_NATIVE_POINT_PROVENANCE_RECORDED_NOT_GAME_RUNTIME_PROVED"})+"\n")
            with self.assertRaisesRegex(ValueError,"Incomplete or wrong-profile"):
                M.load_events(file)

    def test_build_without_original_61_223_evidence_rejected(self):
        with tempfile.TemporaryDirectory() as td:
            folder=Path(td)
            (folder/"native-encounter-build.json").write_text('{"status":"MOCK"}')
            with self.assertRaisesRegex(ValueError,"61\\+223"):
                M.read_native_manifest(folder,"baseline")


if __name__=="__main__":
    unittest.main()
