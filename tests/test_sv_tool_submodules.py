"""Validate Git submodule pins, URLs, project imports and manifests offline."""
import configparser
import json
import subprocess
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


class TestToolSubmodules(unittest.TestCase):
    def test_pinned_sources(self):
        meta = json.loads((ROOT / "tools/upstream.json").read_text(encoding="utf-8"))
        self.assertEqual(meta["sourceTracking"], "git-submodule")
        tools = meta["tools"]
        self.assertEqual(set(x["name"] for x in tools),
                         {"gftool", "PokeDocs", "pkNX", "Switch-Toolbox", "SCVI_Extract"})
        config = configparser.ConfigParser()
        self.assertTrue(config.read(ROOT / ".gitmodules", encoding="utf-8"))
        entries = subprocess.run(["git", "ls-tree", "HEAD", "--", "tools"], cwd=ROOT,
                                 capture_output=True, text=True, check=True)
        self.assertIn("tools", entries.stdout)
        recursive = subprocess.run(["git", "ls-tree", "HEAD", "tools/"], cwd=ROOT,
                                   capture_output=True, text=True, check=True)
        for item in tools:
            path = item["path"]
            section = f'submodule "{path}"'
            self.assertTrue(config.has_section(section), path)
            self.assertEqual(config[section]["path"], path)
            self.assertEqual(config[section]["url"], item["repository"])
            self.assertIn(f"160000 commit {item['ref']}\t{path.split('/')[-1]}", recursive.stdout)
            self.assertEqual(len(item["ref"]), 40)

    def test_project_uses_imported_gftool(self):
        source = (ROOT / "tools/SV.TrinityDump/SV.TrinityDump.csproj").read_text(encoding="utf-8")
        self.assertIn("../gftool/GFTool.Core/GFTool.Core.csproj", source)
        self.assertNotIn("_external", source)
        setup = (ROOT / "scripts/Prepare-SV-Trinity.ps1").read_text(encoding="utf-8")
        self.assertIn("tools\\PokeDocs", setup)
        self.assertIn("scripts\\deps\\oo2core_8_win64.dll", setup)


if __name__ == "__main__":
    unittest.main()
