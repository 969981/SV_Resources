"""Synthetic-free smoke validation for the pinned curated SV 4.0.0 Haxe mapping."""
import importlib.util
import json
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SCRIPT = ROOT / "scripts/Verify-SV-Haxe-Recovery.py"
spec = importlib.util.spec_from_file_location("sv_haxe_verify", SCRIPT)
mod = importlib.util.module_from_spec(spec)
spec.loader.exec_module(mod)


class TestHaxeRecovery(unittest.TestCase):
    def test_fnv_class(self):
        self.assertEqual(mod.fnv1a64("main.util.CompositionCamera"), "FEA9C3BFB3FCD429")

    def test_fnv_static(self):
        self.assertEqual(mod.fnv1a64("CalcXFov"), "424E3EA0446070E7")

    def test_native_provenance(self):
        data = json.loads((ROOT / "tools/SV.Lua54/fixtures/native_manifest.json").read_text())
        main = next(m for m in data["sources"] if m["module"] == "main")
        self.assertEqual(main["prototype_count"], 37743)
        self.assertEqual(main["sha256"],
                         "c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815")

    def test_reference_not_misrepresented_as_native(self):
        path = ROOT / "tools/SV.Lua54/haxe/4.0.0/methods.jsonl"
        record = json.loads(path.read_text(encoding="utf-8").strip())
        self.assertEqual(record["body_status"], "OLDER_SV_REFERENCE")
        self.assertEqual(record["runtime_status"], "NOT_OBSERVED")
        for key in ("proto_id", "parent_proto_id", "pc_start", "pc_end_exclusive", "code_offset"):
            self.assertIsNone(record[key])

    def test_complete_curated_manifest(self):
        summary = mod.verify(ROOT)
        self.assertEqual(summary["validated_records"], 1)
        self.assertEqual(summary["native_mapped"], 0)
        self.assertEqual(summary["reference_only"], 1)


if __name__ == "__main__":
    unittest.main()
