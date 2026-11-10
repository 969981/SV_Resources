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
        self.assertEqual(mod.fnv1a64("dll_util.Assert"), "E5FCD7D9D8F34718")
        self.assertEqual(mod.fnv1a64("dll_util.MathUtil"), "ED59418C4CAB0EC4")

    def test_fnv_static(self):
        self.assertEqual(mod.fnv1a64("CalcXFov"), "424E3EA0446070E7")
        self.assertEqual(mod.fnv1a64("Format"), "042B860498E558B2")
        self.assertEqual(mod.fnv1a64("IsNull"), "B859A84B9E933D14")
        self.assertEqual(mod.fnv1a64("Clamp"), "05B90B9B5A6DE6BC")

    def test_native_provenance(self):
        data = json.loads((ROOT / "tools/SV.Lua54/fixtures/native_manifest.json").read_text())
        main = next(m for m in data["sources"] if m["module"] == "main")
        self.assertEqual(main["prototype_count"], 37743)
        self.assertEqual(main["sha256"],
                         "c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815")

    def test_exact_native_linked_method_ids(self):
        rows = records()
        self.assertIn(len(rows), (12, 71))
        expected = {
            "main.util.CompositionCamera.CalcXFov": (36158, 426666, 426670, 426671, 16),
            "main.util.StrUtil.Format": (36271, 427562, 427566, 427567, 10),
            "dll_util.Assert.IsNull": (69, 243, 244, 245, 4),
            "dll_util.MathUtil.Clamp": (76, 270, 271, 272, 8),
            "main.field.action.ActionChair.onBeginSitting": (12995,160939,160945,160946,1),
            "main.battle.BattleViewBase.StartIdleCamera": (6073,90878,90884,90885,1),
            "main.event.base.BaseBattleTalkEvent.onCreate": (2377,49646,49652,49653,1),
            "main.field.behaviour.DanPartnerPokemon.GetBehaviourType": (14216,173130,173136,173137,3),
            "main.field.behaviour.DanPokemonBehavior.GetBehaviourType": (14223,173264,173270,173271,3),
            "main.battle.BattleView.GetIntervalAddPopup": (6349,93938,93944,93945,3),
            "main.event.base.BaseScenarioEvent.checkStartCondition": (689,25082,25088,25089,3),
            "main.event.base.BaseScenarioEvent.isImportant": (699,25162,25168,25169,3),
        }
        for row in rows:
            key = row["class_name"] + "." + row["method_name"]
            if row.get("promotion_batch") == "R11_59":
                self.assertNotIn(key, expected)
                self.assertEqual(row["haxe_body_status"], "CFG_HIR_AST_LITERAL_LIFTED")
                self.assertEqual(row["pc_end_exclusive"], 3)
                self.assertEqual(row["closure_pc"], row["root_pc"]+6)
                self.assertEqual(row["assignment_pc"], row["root_pc"]+7)
            else:
                self.assertIn(key, expected)
                self.assertEqual((row["proto_id"], row["root_pc"], row["closure_pc"],
                                  row["assignment_pc"], row["pc_end_exclusive"]), expected[key])
            self.assertEqual(row["body_status"], "SV400_NATIVE_MAPPED")
            if row["haxe_body_status"] == "EXTERN_ONLY_UNRECONSTRUCTED":
                self.assertEqual(row["haxe_compile_status"], "NOT_RUN")
                self.assertEqual(row["stock_lua_smoke_status"], "NOT_APPLICABLE_EXTERN_ONLY")
            elif row["haxe_body_status"] == "CFG_HIR_AST_LITERAL_LIFTED":
                self.assertEqual(row["haxe_compile_status"], "NOT_RUN")
                self.assertEqual(row["stock_lua_smoke_status"], "NOT_RUN")
                self.assertEqual(row["cfg_edges"], [[0,1,"SEQUENTIAL"]])
            elif row["haxe_body_status"] == "NATIVE_RETURN0_NOOP_IMPLEMENTED":
                self.assertEqual(row["haxe_compile_status"], "NOT_RUN")
                self.assertEqual(row["stock_lua_smoke_status"], "NOT_RUN")
                self.assertEqual(row["native_child_opcode_words"], ["000100C7"])
                self.assertEqual(row["za_haxe_build_evidence_run_id"], 42754153383)
            else:
                self.assertEqual(row["haxe_compile_status"], "STOCK_HAXE_4_3_7_LUA_COMPILED")
                self.assertEqual(row["stock_haxe_evidence_run_id"], 42749582979)
            if row["haxe_body_status"] == "EXTERN_ONLY_UNRECONSTRUCTED":
                self.assertEqual(row["lua_differential_status"], "NOT_RUN")
                self.assertEqual(row["za_haxe_compile_status"], "NOT_TESTED_EXTERN_ONLY")
            elif row["haxe_body_status"] == "CFG_HIR_AST_LITERAL_LIFTED":
                self.assertEqual(row["lua_differential_status"],
                                 "SV400_ORIGINAL_CHILD_VS_ZASCRIPTS_LUA54_PASS")
                self.assertEqual(row["za_haxe_compile_status"],
                                 "PINNED_ZASCRIPTS_HAXE_4_3_1_LUA_5_4_3_BUILT")
                self.assertEqual(row["za_differential_cases"], 3)
                self.assertEqual(row["za_differential_passed"], 3)
                if row.get("promotion_batch") == "R11_59":
                    self.assertGreater(row["za_differential_run_id"], 42758827830)
                else:
                    self.assertEqual(row["za_differential_run_id"], 42758094283)
            elif row["haxe_body_status"] == "NATIVE_RETURN0_NOOP_IMPLEMENTED":
                self.assertEqual(row["lua_differential_status"],
                                 "SV400_ORIGINAL_CHILD_VS_ZASCRIPTS_LUA54_PASS")
                self.assertEqual(row["za_haxe_compile_status"],
                                 "PINNED_ZASCRIPTS_HAXE_4_3_1_LUA_5_4_3_BUILT")
                self.assertEqual(row["za_differential_cases"], 3)
                self.assertEqual(row["za_differential_passed"], 3)
                self.assertEqual(row["za_differential_run_id"], 42754893614)
            else:
                self.assertEqual(row["lua_differential_status"],
                                 "SV400_ORIGINAL_CHILD_VS_ZASCRIPTS_LUA54_PASS")
                self.assertEqual(row["za_haxe_compile_status"],
                                 "PINNED_ZASCRIPTS_HAXE_4_3_1_LUA_5_4_3_BUILT")
                self.assertEqual(row["za_differential_run_id"], 42752782758)
                self.assertEqual(row["za_differential_passed"], row["za_differential_cases"])
            self.assertEqual(row["runtime_status"], "NOT_OBSERVED")

    def test_reject_claim_of_runtime_equivalence_without_execution(self):
        for row in records():
            self.assertNotEqual(row["haxe_body_status"], "RUNTIME_VERIFIED")
            self.assertNotEqual(row["runtime_status"], "RUNTIME_VERIFIED")

    def test_complete_original_bytecode_witness(self):
        summary = mod.verify(ROOT)
        self.assertIn(summary["validated_records"], (12, 71))
        self.assertEqual(summary["native_mapped"], summary["validated_records"])
        self.assertEqual(summary["reference_only"], 0)
        self.assertEqual(summary["stock_haxe_compiled"], 3)
        self.assertEqual(summary["extern_only"], 1)
        self.assertEqual(summary["pinned_za_haxe_compiled"], summary["validated_records"]-1)
        self.assertEqual(summary["native_lua_differential_passed_methods"], summary["validated_records"]-1)
        extra = summary["validated_records"]-12
        self.assertIn(extra, (0,59))
        self.assertEqual(summary["native_lua_differential_total_cases"], 56+3*extra)
        self.assertEqual(summary["cfg_hir_ast_lifted"], 5+extra)


if __name__ == "__main__":
    unittest.main()
