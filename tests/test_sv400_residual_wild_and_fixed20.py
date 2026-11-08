"""Synthetic guards for SV Gen9 native-reference diagnostic scripts (no ROM)."""
import importlib.util
from pathlib import Path
import tempfile
import unittest

ROOT = Path(__file__).resolve().parent
HERE = ROOT if (ROOT / "Trace-SV400-Wild-T30-Residual.py").exists() else ROOT.parent / "scripts"


def load(name, file):
    spec = importlib.util.spec_from_file_location(name, HERE/file)
    mod = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(mod)
    return mod


wild = load('native_wild', 'Trace-SV400-Wild-T30-Residual.py')
fixed = load('native_fixed', 'Resolve-SV400-Fixed158-Original20.py')


class WildResidual(unittest.TestCase):
    def test_level_split_multiset_and_seven_field_identity(self):
        # One broad native interval may correspond to THREE PKHeX level bands,
        # so reference multiplicity is lost even when source species/place match.
        native = [(158, 0, 313, 0, 255, 7, 60, 9, 31)]
        ref = [(158, 0, 313, 0, 255, 9, 16, 9, 31),
               (158, 0, 313, 0, 255, 18, 25, 9, 31),
               (158, 0, 313, 0, 255, 30, 39, 9, 31)]
        groups, surplus = wild.analyze(native, ref)
        self.assertEqual((len(groups),len(surplus),surplus[0][3]), (1,1,2))
        self.assertEqual(groups[0]['candidate_one_to_one_pairs'], 1)
        self.assertEqual(groups[0]['native_intervals'], '[[7,60]]')

    def test_crossover_or_weather_never_collapses(self):
        src=[(158,0,313,0,255,7,60,9,31),
             (140,158,313,0,255,7,60,9,15)]
        ref=[(158,158,313,0,255,18,25,9,31),
             (140,158,313,0,255,18,25,9,31)]
        groups, surplus=wild.analyze(src,ref)
        self.assertEqual(len(groups),4)
        self.assertEqual(len(surplus),2)

    def test_schema_mismatch_and_bad_level_rejected(self):
        with tempfile.TemporaryDirectory() as tmp:
            file=Path(tmp)/'bad.csv'
            file.write_text('wrong,header\n1,2\n')
            with self.assertRaises(ValueError):wild.slots(file)
            file.write_text(','.join(wild.COLUMNS)+'\n158,0,313,0,255,100,101,9,31\n')
            with self.assertRaises(ValueError):wild.slots(file)

    def test_original_source_sha_pins_present(self):
        self.assertEqual(len(wild.EXPECTED_SHA),4)
        self.assertTrue(all(len(v)==64 for v in wild.EXPECTED_SHA.values()))


class FixedSource(unittest.TestCase):
    def test_raw_fixed20_discriminates_840_variants(self):
        ordinary=bytes.fromhex('4803000F0000FF00000000000000000084889E00')
        special=bytes.fromhex('4803000F0308FF00000000000000000084889E00')
        self.assertEqual((len(ordinary),len(special)),(20,20))
        self.assertEqual(ordinary[:4],special[:4])
        self.assertNotEqual(ordinary[4:6],special[4:6])
        self.assertEqual((ordinary[4],ordinary[5]),(0,0))
        self.assertEqual((special[4],special[5]),(3,8))

    def test_fixed_sha_is_pinned(self):
        self.assertEqual(len(fixed.FIXED_SHA),64)
        self.assertEqual(fixed.STATUS,'SV400_ORIGINAL_FSYM20_PER_TABLEKEY_SOURCE_VERIFIED_CASE_ROW_IDS_REMAIN_AMBIGUOUS')


if __name__=='__main__':unittest.main()