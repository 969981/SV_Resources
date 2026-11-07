"""No-ROM safeguards for real original source event trace correlation."""
from pathlib import Path
import importlib.util
import json
import tempfile
import unittest

SCRIPT=Path(__file__).resolve().parents[1]/"scripts"/"Join-SV-Native-Point-Trace.py"
SPEC=importlib.util.spec_from_file_location("native_trace_join",SCRIPT)
M=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(M)


class PointTraceTests(unittest.TestCase):
    def wild_target(self):
        return dict(location_id="156",cross_from_id="158",species_national="23",
                    form_raw="0",gender_raw="1",native_level_min="23",
                    native_level_max="29",time_forbidden_mask="0",weather_allowed_mask="15")

    def fixed_target(self):
        return dict(species_national="23",form_raw="0",level="15",
                    **{f"native_location{i}":str(x) for i,x in enumerate((140,158,0,0))})

    def test_exact_wild_identity(self):
        t=self.wild_target()
        actual=dict(location=156,crossFrom=158,species=23,form=0,gender=1,
                    minLevel=23,maxLevel=29,timeMask=0,weatherMask=15)
        self.assertEqual(M.target_wild_key(t),M.wild_key(actual))
        self.assertNotEqual(M.target_wild_key(t),M.wild_key(dict(actual,weatherMask=31)))
        self.assertNotEqual(M.target_wild_key(t),M.wild_key(dict(actual,minLevel=24)))

    def test_exact_fixed_four_slot_location_identity(self):
        t=self.fixed_target()
        e=dict(species=23,form=0,level=15,finalLocations=[140,158])
        self.assertEqual(M.target_fixed_key(t),M.source_fixed_key(e))
        self.assertNotEqual(M.target_fixed_key(t),M.source_fixed_key(dict(e,finalLocations=[140])))

    def test_rejects_more_than_four_fixed_locations(self):
        with self.assertRaises(ValueError):
            M.source_fixed_key(dict(species=23,form=0,level=15,finalLocations=[1,2,3,4,5]))

    def test_rejects_incomplete_trace_marker(self):
        with tempfile.TemporaryDirectory() as tmp:
            path=Path(tmp)/"trace.jsonl"
            path.write_text('{"stage":"wild_serialized","location":156,"crossFrom":158,"species":23,"form":0,"gender":1,"minLevel":23,"maxLevel":29,"timeMask":0,"weatherMask":15}\n',encoding="utf-8")
            with self.assertRaises(ValueError):
                M.disjoint_trace_diagnostics(path,[self.wild_target()],[self.fixed_target()])

    def test_duplicate_wild_targets_are_multiset_not_an_error(self):
        # A single native serialization must not prove two identical CSV rows.
        with tempfile.TemporaryDirectory() as tmp:
            path=Path(tmp)/"trace.jsonl"
            event=dict(stage="wild_serialized",location=156,crossFrom=158,species=23,
                       form=0,gender=1,minLevel=23,maxLevel=29,timeMask=0,weatherMask=15)
            end=dict(stage="trace_finished",status="REAL_NATIVE_POINT_PROVENANCE_RECORDED_NOT_GAME_RUNTIME_PROVED")
            path.write_text("\n".join(json.dumps(e) for e in [event,end])+"\n",encoding="utf-8")
            row=self.wild_target()
            events=M.disjoint_trace_diagnostics(path,[row,row],[self.fixed_target()])
            key=M.target_wild_key(row)
            self.assertEqual(events["wild_targets"][key],2)
            self.assertEqual(len(events["wild_output"][key]),1)
            self.assertEqual(min(events["wild_targets"][key],len(events["wild_output"][key])),1)

    def test_completed_trace_target_link(self):
        with tempfile.TemporaryDirectory() as tmp:
            path=Path(tmp)/"trace.jsonl"
            events=[
                dict(stage="wild_serialized",location=156,crossFrom=158,species=23,form=0,
                     gender=1,minLevel=23,maxLevel=29,timeMask=0,weatherMask=15),
                dict(stage="wild_weather_assigned",location=156,crossFrom=158,species=23,form=0,
                     gender=1,minLevel=23,maxLevel=27,timeMask=0,weatherMask=15,
                     sourcePointAsset="world/data/encount/point_data/point_data/encount_data_su1.bin",
                     sourcePointIndex=77,pointX=1.0,pointY=1.5,pointZ=3.0),
                dict(stage="fixed_serialized",game="sl",tableKey="example",tableIndex=8,species=23,
                     form=0,level=15,fieldIndex="Kitakami",finalLocations=[140,158],
                     location158AddedByWander=True),
                dict(stage="trace_finished",status="REAL_NATIVE_POINT_PROVENANCE_RECORDED_NOT_GAME_RUNTIME_PROVED")
            ]
            path.write_text("\n".join(json.dumps(e) for e in events)+"\n",encoding="utf-8")
            data=M.disjoint_trace_diagnostics(path,[self.wild_target()],[self.fixed_target()])
            self.assertEqual(len(data["wild_output"][M.target_wild_key(self.wild_target())]),1)
            self.assertEqual(len(data["fixed_output"][M.target_fixed_key(self.fixed_target())]),1)


if __name__=="__main__":
    unittest.main()
