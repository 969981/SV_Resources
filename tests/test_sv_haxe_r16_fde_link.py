"""FDE cross-references are code RANGE hints, not native Lua CFunction evidence."""
import csv,gzip,json,sys,tempfile,unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"scripts"))
import importlib.util
spec=importlib.util.spec_from_file_location("r16_fde",ROOT/"scripts/Link-SV-R16-Xref-FDE.py")
mod=importlib.util.module_from_spec(spec);spec.loader.exec_module(mod)

def fixture(dir:Path,inside=True):
    sources={}
    for g in ("scarlet_main","violet_main"):
        p=dir/g;p.mkdir()
        sha=g+"sourceSha"
        (p/"fde_manifest.json").write_text(json.dumps(
          {"sha256":sha,"source":g+".elf","fde_count":1,"status":"VALIDATED"}))
        with gzip.open(p/"fde_ranges.csv.gz","wt",newline="") as f:
            w=csv.writer(f)
            w.writerow(["index","entry_rva","length_bytes","end_exclusive","fde_rva"])
            start=0x13FE000 if inside else 0x2300000
            w.writerow([0,f"0x{start:x}",0x500,f"0x{start+0x500:x}","0xdeadbeef"])
        sources[g]={
          "elf_sha256":sha,
          "literal_direct_adrp_add_xref_candidates":{
            "cE35B3EB3":[{"adrp_rva":"0x13fe21c","literal_rva":"0x3b04bcb"}]
          }
        }
    return {"native_binary_literal_evidence":sources},{
        g:dir/g for g in ("scarlet_main","violet_main")}

class FdeCannotAttestCpp(unittest.TestCase):
    def test_range_inside_fde_only_bounds_candidate(self):
        with tempfile.TemporaryDirectory() as t:
            ev,paths=fixture(Path(t))
            r=mod.link(ev,paths)
            for game in r["results"].values():
                x=game["class_literal_code_xrefs"][0]
                self.assertEqual(x["candidate_function_entry_rva"],"0x13fe000")
                self.assertEqual(x["status"],
                                 "VALIDATED_ELF_FDE_CONTAINS_CLASS_STRING_XREF_ONLY")
                self.assertFalse(game["callee_cpp_entry_proven"])
                self.assertFalse(game["native_binding_registration_proven"])
            self.assertEqual(r["game_runtime_status"],"NOT_OBSERVED")

    def test_no_fde_cover_does_not_invent_function(self):
        with tempfile.TemporaryDirectory() as t:
            ev,paths=fixture(Path(t),inside=False)
            r=mod.link(ev,paths)
            for game in r["results"].values():
                self.assertIsNone(game["class_literal_code_xrefs"][0]["candidate_function_entry_rva"])

    def test_bad_elf_identity_fails_closed(self):
        with tempfile.TemporaryDirectory() as t:
            ev,paths=fixture(Path(t))
            ev["native_binary_literal_evidence"]["violet_main"]["elf_sha256"]="wrong"
            with self.assertRaisesRegex(ValueError,"exact"):
                mod.link(ev,paths)

if __name__=="__main__":
    unittest.main()
