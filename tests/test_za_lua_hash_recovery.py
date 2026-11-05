"""Only synthetic input is used to verify ZA Lua FNV recovery."""
import importlib.util
import tempfile
import unittest
from pathlib import Path

SCRIPT=Path(__file__).resolve().parents[1]/"scripts"/"Recover-ZA-Lua-Hashes.py"
spec=importlib.util.spec_from_file_location("za_lua_recovery",SCRIPT)
module=importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)

class TestZALuaHashes(unittest.TestCase):
    def setUp(self):
        self.tmp=tempfile.TemporaryDirectory()
        self.addCleanup(self.tmp.cleanup)
        base=Path(self.tmp.name)
        self.source=base/"source"
        self.source.mkdir()
        self.table=base/"recovered.tsv"
        mapped={"c":"TestClass","e":"TestEnum","f":"GetText","s":"StartCameraShake"}
        for kind,name in mapped.items():
            lines=[f"0x{module.fnv1a64(name):016X} {name}\n"]
            if kind=="s":
                lines.append(f"0x{module.fnv1a64('IsEndCameraShake'):016X} \n")
            else:
                lines.append(f"0x{100+ord(kind):016X} \n")
            (self.source/f"lua_{kind}_hashes.txt").write_text("".join(lines))
        self.table.write_text(
            "kind\thash\tcandidate_name\tstatus\tmethod\thash_algorithm\n"+
            f"s\t0x{module.fnv1a64('IsEndCameraShake'):016X}\tIsEndCameraShake\t"
            "HASH_EXACT_CANDIDATE\tsynthetic\tFNV-1a-64_custom_offset\n")

    def test_known_hashes(self):
        self.assertEqual(module.fnv1a64("GetText"),0xFDA9FDCF981A0210)
        self.assertEqual(module.fnv1a64("Destroy"),0x1C2AA00ADAC52EC5)

    def test_overlay_without_source_mutation(self):
        original=(self.source/"lua_s_hashes.txt").read_bytes()
        outputs,report=module.build_outputs(self.source,self.table)
        self.assertEqual(report["summary"]["original_unknown"],4)
        self.assertEqual(report["summary"]["recovered"],1)
        self.assertIn(b"IsEndCameraShake",outputs["lua_s_hashes.merged.txt"])
        self.assertEqual(original,(self.source/"lua_s_hashes.txt").read_bytes())
        self.assertEqual(outputs["lua_c_hashes.merged.txt"],
                         (self.source/"lua_c_hashes.txt").read_bytes())

    def test_reject_invalid_candidate(self):
        self.table.write_text(self.table.read_text().replace("IsEndCameraShake","FakeName"))
        with self.assertRaises(ValueError):
            module.build_outputs(self.source,self.table)

    def test_reject_overwriting_mapped(self):
        self.table.write_text(
            "kind\thash\tcandidate_name\tstatus\tmethod\thash_algorithm\n"+
            f"f\t0x{module.fnv1a64('GetText'):016X}\tGetText\t"
            "HASH_EXACT_CANDIDATE\tsynthetic\tFNV-1a-64_custom_offset\n")
        with self.assertRaises(ValueError):
            module.build_outputs(self.source,self.table)

if __name__=="__main__":
    unittest.main()
