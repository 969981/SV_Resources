"""No-ROM regression for original 676 wild / 203 fixed ZERO-LOSS research."""
import importlib.util
from pathlib import Path
import tempfile
import unittest

SCRIPT=Path(__file__).resolve().parents[1]/"scripts"/"Audit-SV400-Remaining-676-Wild-203-Fixed.py"
SPEC=importlib.util.spec_from_file_location("sv400_zero_loss_ref",SCRIPT)
M=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(M)

def interval(lo,hi):
    return {"level_min":str(lo),"level_max":str(hi)}

class SourceGapZeroLossTests(unittest.TestCase):
    def test_surplus_is_not_invented_as_additional_native_template(self):
        pairs,remaining=M.match_level_group(
            [interval(9,16),interval(18,25),interval(30,39)],
            [interval(7,60)])
        self.assertEqual((len(pairs),len(remaining)),(1,2))

    def test_upper_bound_change_not_mistaken_for_lower_bound(self):
        pair,other=M.match_level_group([interval(59,70)],[interval(59,74)])
        self.assertEqual((int(pair[0][0]["level_min"]),int(pair[0][1]["level_min"])),(59,59))
        self.assertEqual((int(pair[0][0]["level_max"]),int(pair[0][1]["level_max"])),(70,74))
        self.assertFalse(other)

    def test_seven_entry_group_limit_prevents_accidental_unbounded_matching(self):
        with self.assertRaisesRegex(ValueError,">7"):
            M.match_level_group([interval(1,99)]*8,[interval(1,99)])

    def test_original_fourteen_fixed_families_partition(self):
        def row(species,locs):
            result={"species_national":str(species)}
            result.update({f"location{i}":str(locs[i]) for i in range(4)})
            return result
        rows=[row(48,[176,194,0,0]) for _ in range(9)]
        rows += [row(194,[144,146,148,158]) for _ in range(2)]
        rows += [row(55,[16,67,0,0]) for _ in range(2)]
        rows += [row(297,[16,67,96,0])]
        self.assertEqual(M.classify_fixed_14(rows),
                         {"176_and_194":9,"wooper_146_and_158":2,
                          "16_and_67":2,"unmatched_nonlocation_297":1})

    def test_unknown_fixed_family_fails_closed(self):
        with self.assertRaisesRegex(ValueError,"Fourteen fixed"):
            M.classify_fixed_14([{"species_national":"23","location0":"140",
                                   "location1":"158","location2":"0","location3":"0"}])

    def test_unverified_original_csv_and_manifest_rejected(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp);tr=root/"T30/comparison";tr.mkdir(parents=True)
            (root/"SV400_Native_To_PKHeX_Manifest.json").write_text("{}")
            with self.assertRaisesRegex(ValueError,"61\\+223"):
                M.verify_inputs(root,root)

if __name__=="__main__":
    unittest.main()
