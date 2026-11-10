"""Native SV 4.0.0 Haxe ABI/Proto-PC consistency tests (no decryption keys)."""
import importlib.util
import json
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SCRIPT = ROOT / "scripts/Verify-SV-Haxe-Recovery.py"
spec = importlib.util.spec_from_file_location("sv_haxe_verify", SCRIPT)
mod = importlib.util.module_from_spec(spec)
spec.loader.exec_module(mod)


def records():
    text = (ROOT / "tools/SV.Lua54/haxe/4.0.0/methods.jsonl").read_text(encoding="utf-8")
    return [json.loads(s) for s in text.splitlines() if s.strip()]


class TestHaxeRecovery(unittest.TestCase):
    def test_fnv_class(self):
        self.assertEqual(mod.fnv1a64("main.util.CompositionCamera"), "FEA9C3BFB3FCD429")
        self.assertEqual(mod.fnv1a64("main.util.StrUtil"), "23E5342B132D5323")

    def test_fnv_static(self):
        self.assertEqual(mod.fnv1a64("CalcXFov"), "424E3EA0446070E7")
        self.assertEqual(mod.fnv1a64("Format"), "042B860498E558B2")

    def test_native_provenance(self):
        data = json.loads((ROOT / "tools/SV.Lua54/fixtures/native_manifest.json").read_text())
        main = next(m for m in data["sources"] if m["module"] == "main")
        self.assertEqual(main["prototype_count"], 37743)
        self.assertEqual(main["sha256"],
                         "c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815")

    def test_exact_native_linked_method_ids(self):
        rows = records()
        self.assertEqual(len(rows), 2)
        expected = {
            "main.util.CompositionCamera.CalcXFov": (36158, 426666, 426670, 426671, 16),
            "main.util.StrUtil.Format": (36271, 427562, 427566, 427567, 10),
        }
        for row in rows:
            key = row["class_name"] + "." + row["method_name"]
            self.assertIn(key, expected)
            self.assertEqual((row["proto_id"], row["root_pc"], row["closure_pc"],
                              row["assignment_pc"], row["pc_end_exclusive"]), expected[key])
            self.assertEqual(row["body_status"], "SV400_NATIVE_MAPPED")
            self.assertEqual(row["haxe_compile_status"], "NOT_RUN")
            self.assertEqual(row["lua_differential_status"], "NOT_RUN")
            self.assertEqual(row["runtime_status"], "NOT_OBSERVED")

    def test_reject_claim_of_runtime_equivalence_without_execution(self):
        for row in records():
            self.assertNotEqual(row["haxe_body_status"], "RUNTIME_VERIFIED")
            self.assertNotEqual(row["runtime_status"], "RUNTIME_VERIFIED")

    def test_complete_original_bytecode_witness(self):
        summary = mod.verify(ROOT)
        self.assertEqual(summary["validated_records"], 2)
        self.assertEqual(summary["native_mapped"], 2)
        self.assertEqual(summary["reference_only"], 0)


if __name__ == "__main__":
    unittest.main()
