"""ROM-free guards for targeted SV Gen9 native pack extraction."""
import importlib.util
import hashlib
import json
from pathlib import Path
import tempfile
import unittest

SCRIPT = Path(__file__).resolve().parents[1] / "scripts/Extract-SV-PKHeX-Native-Packs.py"
spec = importlib.util.spec_from_file_location("sv_enc_target_extract", SCRIPT)
mod = importlib.util.module_from_spec(spec)
spec.loader.exec_module(mod)


def fixture():
    path="world/data/encount/pokedata/pokedata/pokedata_array.bin"
    targets = [{"expected": path, "group": "wild.criteria", "status": "LOCATED_NATIVE_INDEX",
                "hits": [{"source_hash": "0000000000000001", "source_virtual_path": path,
                          "pack_index": 22000}]} for _ in range(61)]
    return {
        "summary": {"targets": 61, "located": 61, "missing": 0, "ambiguous": 0,
                    "selected_packs": 1, "selected_packed_bytes": 123},
        "selected_packs": [{"pack_index":22000,"packed_bytes":123}],
        "targets": targets,
    }


class ExtractionTests(unittest.TestCase):
    def test_native_pack_budget_and_missing_cases(self):
        report = fixture()
        self.assertEqual(mod.preflight(report),[22000])
        with self.assertRaises(RuntimeError):
            mod.preflight(report,max_packs=0)
        with self.assertRaises(RuntimeError):
            mod.preflight(report,max_packed_bytes=122)
        report["summary"]["missing"]=1
        with self.assertRaises(RuntimeError):
            mod.preflight(report)

    def test_reject_unsafe_virtual_paths(self):
        with tempfile.TemporaryDirectory() as directory:
            root=Path(directory)
            for path in ("", "../evil", "/abs", "c:evil", "world//file", r"world\evil"):
                with self.assertRaises(ValueError):
                    mod.target_safe(root,path)
            self.assertTrue(mod.target_safe(root,"world/data.bin").is_relative_to(root))

    def test_target_shas_are_validated_against_original_native_dumper_report(self):
        with tempfile.TemporaryDirectory() as directory:
            repo=Path(directory)
            p=repo/mod.TRPFS/"virtual"/"world/data/encount/pokedata/pokedata/pokedata_array.bin"
            p.parent.mkdir(parents=True)
            data=b"native synthetic byte array"
            p.write_bytes(data)
            h=hashlib.sha256(data).hexdigest().upper()
            report=repo/mod.TRPFS/"_index/batches/manual-pack-022000-022000.jsonl"
            report.parent.mkdir(parents=True)
            row={"Hash":"0000000000000001", "Name":"world/data/encount/pokedata/pokedata/pokedata_array.bin",
                 "Status":"OK","Sha256":h,"Size":len(data),"Error":None}
            report.write_text(json.dumps(row)+"\n","utf-8")
            selection=fixture()
            selection["targets"]=selection["targets"][:1]
            out,stage=mod.verify_targets(repo,selection,[{"report":report.relative_to(repo).as_posix()}])
            self.assertEqual(out[0]["native_sha256"],h)
            self.assertEqual(stage,[p.as_posix()])
            p.write_bytes(b"tampered")
            with self.assertRaises(RuntimeError):
                mod.verify_targets(repo,selection,[{"report":report.relative_to(repo).as_posix()}])

    def test_no_reference_bin_treated_as_native(self):
        r=fixture()
        r["targets"][0]["hits"][0]["source_virtual_path"]="PKHeX.Core/encounter_wild_paldea.pkl"
        with self.assertRaises(ValueError):
            mod.target_safe(Path("."),"../PKHeX.Core/encounter_wild_paldea.pkl")


if __name__=="__main__":
    unittest.main()
