"""Isolated wild level A/B formula tests against exact C# GetNew semantics."""
from pathlib import Path
import importlib.util
import unittest

PATH=Path(__file__).resolve().parents[1]/"scripts"/"AB-SV-Terarium-176-194-Source-Levels.py"
SPEC=importlib.util.spec_from_file_location("sv_176194_ab",PATH)
M=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(M)

class TerariumLevelABTests(unittest.TestCase):
    def sample(self):
        return dict(rawPointMin=57,rawPointMax=75,clippedPointMin=59,
                    clippedPointMax=69,criteriaMinLevel=7,criteriaMaxLevel=80,
                    appliedBoost=0,band=False,minLevel=59,maxLevel=69,
                    areaAdjust=0,areaLevelMin=59,areaLevelMax=69)

    def test_actual_clipped_formula_reproduces_original_event(self):
        self.assertEqual(M.recompute(self.sample(),False),(59,69))
        self.assertEqual(M.recompute(self.sample(),True),(57,75))

    def test_criteria_intersection_and_boost_cannot_be_confused_with_area_clipping(self):
        t=dict(self.sample(),rawPointMin=20,rawPointMax=99,clippedPointMin=40,
               clippedPointMax=78,criteriaMinLevel=45,criteriaMaxLevel=70,
               appliedBoost=3,minLevel=48,maxLevel=73)
        self.assertEqual(M.recompute(t,False),(48,73))
        self.assertEqual(M.recompute(t,True),(48,73))

    def test_get_new_caps_level_100_but_band_uses_original(self):
        t=dict(self.sample(),rawPointMax=110,clippedPointMax=100,
               criteriaMaxLevel=120,appliedBoost=10,minLevel=69)
        self.assertEqual(M.recompute(t,False),(69,100))
        self.assertEqual(M.recompute(t,True),(67,100))
        self.assertEqual(M.recompute(dict(t,band=True),True),(67,120))

    def test_sample_bound_does_not_claim_actual_final_pkl(self):
        self.assertIn("NOT_FULL_PKL_RERUN",M.STATUS)

if __name__=="__main__":
    unittest.main()
