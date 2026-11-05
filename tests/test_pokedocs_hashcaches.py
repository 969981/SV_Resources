#!/usr/bin/env python3
"""Synthetic end-to-end coverage for the PokeDocs SV/ZA cache pipeline."""
import json
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
SCRIPT = ROOT / "scripts" / "Build-PokeDocs-HashCaches.py"


class TestPokeDocsCachePipeline(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        self.addCleanup(self.tmp.cleanup)
        self.root = Path(self.tmp.name)
        self.source = self.root / "mirror"
        self.output = self.root / "caches"
        for game, base in (("SV", "100"), ("ZA", "200")):
            folder = self.source / game / "Hashlists" / "FileSystem"
            folder.mkdir(parents=True, exist_ok=True)
            (folder / "hashes_inside_fd.txt").write_text(
                f"0000000000000{base} textures/{game}/城.png\n", encoding="utf-8"
            )
            (folder / "hashes_inside_trpak.txt").write_text(
                f"0000000000000{int(base) + 1} trpak/{game}/file.bin\n", encoding="utf-8"
            )

    def run_cli(self, *extra, ok=True):
        cmd = [
            sys.executable, str(SCRIPT), "--source-root", str(self.source),
            "--output-root", str(self.output), *extra,
        ]
        proc = subprocess.run(cmd, text=True, capture_output=True, check=False)
        if ok and proc.returncode:
            self.fail(f"{cmd}\nSTDOUT: {proc.stdout}\nSTDERR: {proc.stderr}")
        if not ok:
            self.assertNotEqual(proc.returncode, 0)
        return proc

    def test_build_both_and_verify(self):
        self.run_cli()
        provenance = json.loads((self.output / "provenance.json").read_text())
        for game in ("SV", "ZA"):
            self.assertEqual(provenance["games"][game]["hash_count"], 2)
            self.assertEqual(len(provenance["games"][game]["inputs"]), 2)
            self.assertEqual(len(provenance["games"][game]["sha256"]), 64)
            self.assertTrue((self.output / game / "GFPAKHashCache.bin").is_file())
            self.assertTrue((self.output / game / "hashcache-report.json").is_file())
        self.run_cli("--verify-only")

    def test_existing_output_requires_explicit_overwrite(self):
        self.run_cli()
        self.run_cli(ok=False)
        self.run_cli("--overwrite")

    def test_corrupt_cache_is_rejected(self):
        self.run_cli()
        with (self.output / "SV" / "GFPAKHashCache.bin").open("ab") as stream:
            stream.write(b"X")
        self.run_cli("--verify-only", ok=False)

    def test_single_game_fd_only(self):
        self.run_cli("--game", "ZA", "--fd-only")
        result = json.loads((self.output / "ZA" / "hashcache-report.json").read_text())
        self.assertEqual(result["entries"], 1)
        self.assertFalse((self.output / "SV").exists())
        self.run_cli("--game", "ZA", "--fd-only", "--verify-only")


if __name__ == "__main__":
    unittest.main()
