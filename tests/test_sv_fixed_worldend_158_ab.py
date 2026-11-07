"""No-ROM unit tests for source-only 158 WorldEnd counterfactual diagnostics."""
from pathlib import Path
import importlib.util
import unittest
import tempfile
import json

SCRIPT=Path(__file__).resolve().parents[1]/"scripts"/"Experiment-SV-Fixed-Worldend-158.py"
spec=importlib.util.spec_from_file_location("sv_fixed_worldend",SCRIPT)
M=importlib.util.module_from_spec(spec)
spec.loader.exec_module(M)

class FixedWorldendTests(unittest.TestCase):
    def row(self,locations=(140,158,0,0)):
        return {name:str(value) for name,value in zip(M.FIELDS,
            (23,0,59,0,0,255,0,0,0,0,0,*locations))}

    def test_removal_is_diagnostic_and_not_in_place(self):
        row=self.row()
        changed=M.without_inferred_158(row)
        self.assertEqual(tuple(int(changed[f"location{i}"]) for i in range(4)),(140,0,0,0))
        self.assertEqual(tuple(int(row[f"location{i}"]) for i in range(4)),(140,158,0,0))
        self.assertNotEqual(M.canonical(row),M.canonical(changed))

    def test_original_pkhex_field_signature_and_stage_event(self):
        row=self.row()
        e=dict(stage="fixed_serialized",game="sl",tableKey="su1_area03_07",tableIndex=673,
               species=23,form=0,level=59,finalLocations=[140,158],location158AddedByWander=True)
        self.assertEqual(M.source_key_from_trace(e),M.source_key_from_binary(row))
        with self.assertRaises(ValueError):
            M.source_key_from_trace(dict(e,finalLocations=list(range(5))))

    def test_do_not_delete_an_original_158_in_already_valid_source(self):
        # This is why source selection must check "location158AddedByWander"
        # separately; this basic transform is never called on every fixed.
        e=dict(game="vl",tableKey="real_primary",tableIndex=2,species=23,form=0,
               level=59,finalLocations=[158],location158AddedByWander=False)
        self.assertFalse(e["location158AddedByWander"])
        self.assertEqual(M.source_key_from_trace(e)[3],(158,0,0,0))

    def test_reject_incomplete_actual_trace(self):
        with tempfile.TemporaryDirectory() as tmp:
            f=Path(tmp)/"trace.jsonl"
            f.write_text(json.dumps(dict(stage="fixed_wander",game="sl",tableKey="x",
                    tableIndex=1,targetArea="subarea_su01worldend",targetLocation=158))+"\n",
                    encoding="utf-8")
            with self.assertRaises(ValueError):
                M.scan_native_fixed_trace(f)

    def test_native_fixed_binary_stride(self):
        self.assertEqual(M.RECORD.size,20)
        self.assertEqual(len(M.FIELDS),15)

if __name__=="__main__":
    unittest.main()
