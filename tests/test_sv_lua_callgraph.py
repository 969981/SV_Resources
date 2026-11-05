"""Synthetic evidence tests for pinned SV C/F crosswalk. No ROM files."""
import importlib.util
from pathlib import Path
import tempfile
import unittest

SCRIPT = Path(__file__).resolve().parents[1] / "scripts/Index-SV-Lua-CallGraph.py"
spec = importlib.util.spec_from_file_location("index_sv_lua", SCRIPT)
module = importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)


class TestLuaClassFunctionIndex(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        root = Path(self.temp.name)
        self.hash_root = root / "hashlists"
        self.hash_root.mkdir()
        self.external = root / "SV-Script-RE"
        (self.external / "split").mkdir(parents=True)
        (self.external / "decompiled").mkdir()
        self.prior = root / "prior.tsv"
        self.prior.write_text(
            "kind\thash\tcandidate_name\n", encoding="utf-8"
        )
        self.h_known = module.fnv64("main.ui.Known")
        self.h_unknown = module.fnv64("main.ui.Unknown")
        self.f_known = module.fnv64("Setup")
        self.f_unknown = module.fnv64("preStart")
        self.f_unknown_class = module.fnv64("Start")
        (self.hash_root / "lua_c_hashes.txt").write_text(
            f"0x{self.h_known} main.ui.Known\n0x{self.h_unknown} \n",
            encoding="utf-8"
        )
        (self.hash_root / "lua_f_hashes.txt").write_text(
            f"0x{self.f_known} Setup\n0x{self.f_unknown} \n0x{self.f_unknown_class} Start\n",
            encoding="utf-8"
        )
        for kind in ("e", "s"):
            (self.hash_root / f"lua_{kind}_hashes.txt").write_text(
                f"0x{module.fnv64('x' + kind)} x{kind}\n", encoding="utf-8"
            )
        a = "C" + self.h_unknown
        b = "C" + self.h_known
        (self.external / "decompiled" / (a + ".lua")).write_text(
            f"---@class {a}\n"
            f"--- {a}.preStart\n"
            f"function {a}_prototype:F{self.f_unknown}()\n  return 1\nend\n"
            f"--- main.ui.Unknown.Start\n"
            f"function {a}_prototype:F{self.f_unknown_class}()\n  return 2\nend\n"
            f"{a}.__super__ = {b}\n"
            f"print({b})\n",
            encoding="utf-8"
        )
        (self.external / "split" / (a + ".lua")).write_text(
            f'L68_1 = _ENV["{a}"]["prototype"]\n'
            f'L69_1 = "F{self.f_unknown}"\n\n'
            f'L68_1 = _ENV["{a}"]["prototype"]\n'
            f'L69_1 = "F{self.f_unknown_class}"\n'
            f'print({b})\n',
            encoding="utf-8"
        )

    def test_exact_names_and_function_owner(self):
        out, report = module.build(self.external, self.hash_root, self.prior)
        self.assertEqual(report["classes_in_external_corpus"], 1)
        self.assertEqual(report["methods_defined_in_external_corpus"], 2)
        self.assertEqual(report["method_definitions_with_raw_assignment"], 2)
        self.assertEqual(report["unknown_c_with_file"], 1)
        self.assertEqual(report["unknown_f_with_owner"], 1)
        self.assertEqual(report["new_exact_comment_candidates"], 2)
        exact = out["new_exact_comment_names.tsv"].decode()
        self.assertIn("main.ui.Unknown", exact)
        self.assertIn("preStart", exact)
        self.assertIn("HASH_EXACT_EDITOR_COMMENT", exact)
        self.assertIn("PRESENT_IN_OLDER_CORPUS", out["unmapped_c_context.tsv"].decode())
        self.assertIn("F" + self.f_unknown, out["class_to_function.tsv"].decode())

    def test_invalid_known_mapping_rejected(self):
        (self.hash_root / "lua_c_hashes.txt").write_text(
            "0x0000000000000001 main.ui.Known\n", encoding="utf-8")
        with self.assertRaises(ValueError):
            module.build(self.external, self.hash_root, self.prior)

    def test_cross_version_evidence_never_edits_inputs(self):
        first = (self.hash_root / "lua_f_hashes.txt").read_bytes()
        out, report = module.build(self.external, self.hash_root, self.prior)
        self.assertFalse(report["original_pokedocs_files_modified"])
        self.assertFalse(report["proposed_merged_changes"])
        self.assertEqual(first, (self.hash_root / "lua_f_hashes.txt").read_bytes())
        self.assertIn(b"main.ui.Unknown", out["new_exact_comment_names.tsv"])
        self.assertIn(b"main.ui.Known", out["unmapped_c_context.tsv"])


if __name__ == "__main__":
    unittest.main()
