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
        self.assertEqual(meta["sourceTracking"], "vendor-only")
        tools = meta["tools"]
        self.assertEqual(set(x["name"] for x in tools),
                         {"gftool", "PokeDocs", "pkNX", "Switch-Toolbox", "SCVI_Extract", "nx2elf"})
        config = configparser.ConfigParser()
        if (ROOT / ".gitmodules").exists():
            config.read(ROOT / ".gitmodules", encoding="utf-8")
        self.assertFalse(config.sections(), "Submodule metadata should be empty")
        entries = subprocess.run(["git", "ls-tree", "HEAD", "--", "tools"], cwd=ROOT,
                                 capture_output=True, text=True, check=True)
        self.assertIn("tools", entries.stdout)
        recursive = subprocess.run(["git", "ls-tree", "HEAD", "tools/"], cwd=ROOT,
                                   capture_output=True, text=True, check=True)
        for item in tools:
            path = item["path"]
            section = f'submodule "{path}"'
            if item["importMethod"] == "vendor-tree":
                self.assertFalse(config.has_section(section), path)
                self.assertFalse(item["submodules"], path)
                self.assertIn(f"040000 tree {item['sourceTreeSha']}\t{path}", recursive.stdout)
                if item["name"] == "PokeDocs":
                    self.assertTrue((ROOT / path / "SV/Hashlists/FileSystem/hashes_inside_fd.txt").is_file())
                elif item["name"] == "SCVI_Extract":
                    for rel in ["README.md", "full_extract.py", "trpfs_extract.py",
                                "trpak_extract.py", "schemas/trpfs.fbs", "schemas/trpfd.fbs",
                                "schemas/trpak.fbs", "info/names_original.txt",
                                "info/names_changed.txt", ".gitignore"]:
                        self.assertTrue((ROOT / path / rel).is_file(), f"{path}/{rel}")
                    actual = subprocess.run(["git", "ls-tree", "-r", "--name-only", "HEAD", "--", path],
                                            cwd=ROOT, capture_output=True, text=True, check=True)
                    self.assertEqual(len(actual.stdout.splitlines()), 10)
                elif item["name"] == "nx2elf":
                    self.assertTrue((ROOT / path / "CMakeLists.txt").is_file())
                    self.assertTrue((ROOT / path / "nx2elf.cpp").is_file())
                    actual = subprocess.run(["git", "ls-tree", "-r", "--name-only", "HEAD", "--", path],
                                            cwd=ROOT, capture_output=True, text=True, check=True)
                    self.assertEqual(len(actual.stdout.splitlines()), 13)
                elif item["name"] == "gftool":
                    for rel in ("GFTool.Core/GFTool.Core.csproj", "NxMiddleware/BnTxx/BnTxx.csproj", "TrinityModLoader.slnx", "NxMiddleware/NxMiddleware.slnx", "LICENSE"):
                        self.assertTrue((ROOT / path / rel).is_file(), f"Missing: {path}/{rel}")
                    tree = subprocess.run(["git", "ls-tree", "-r", "HEAD", "--", path], cwd=ROOT,
                                          capture_output=True, text=True, check=True)
                    self.assertNotIn("160000 commit", tree.stdout)
                    for project in (ROOT / path).rglob("*.csproj"):
                        source = project.read_text(encoding="utf-8-sig")
                        self.assertIn("<TargetFramework>net10.0", source, str(project))
                    self.assertFalse((ROOT / path / "TrinityModLoader.sln").exists())
                    self.assertFalse((ROOT / path / "NxMiddleware/NxMiddleware.sln").exists())
                elif item["name"] in ("pkNX", "Switch-Toolbox"):
                    solution = "pkNX.sln" if item["name"] == "pkNX" else "Toolbox.sln"
                    self.assertTrue((ROOT / path / solution).is_file())
                else:
                    self.fail(f"Unexpected vendored tool: {item['name']}")
            else:
                self.fail(f"Unknown vendored tool: {item['name']}")
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
