"""Synthetic tests for inventory-driven SV secondary conversion batches."""
import hashlib
import json
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from scripts.resource_pipeline import batch_secondary as batch


class NativeBatchTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.repo = Path(self.temp.name)
        subprocess.run(["git", "init", "-q"], cwd=self.repo, check=True)
        subprocess.run(["git", "config", "user.email", "ci@example.invalid"], cwd=self.repo, check=True)
        subprocess.run(["git", "config", "user.name", "CI"], cwd=self.repo, check=True)
        self.root = self.repo / batch.BASE
        samples = {
            "appli/tex/icon_item/item_0001/a.bntx": b"BNTX-1",
            "appli/tex/icon_item/item_0002/b.bntx": b"BNTX-2",
            "message/dat/English/common/itemname.dat": b"sample",
            "message/dat/English/common/itemname.tbl": b"sample",
            "chara/model_pc/p0_bag0002_nylon/bag.trmdl": b"sample",
        }
        for name, data in samples.items():
            file = self.root / "virtual" / name
            file.parent.mkdir(parents=True, exist_ok=True)
            file.write_bytes(data)
        subprocess.run(["git", "add", "."], cwd=self.repo, check=True)
        subprocess.run(["git", "commit", "-qm", "fixtures"], cwd=self.repo, check=True)

    def test_scopes_and_offsets_from_real_git_tree(self):
        info = batch.plan(self.repo, "images", "appli/tex/icon_item", 0, 1)
        self.assertEqual(info["available_scopes"], 2)
        self.assertEqual(info["selected_scopes"], ["appli/tex/icon_item/item_0001"])
        info = batch.plan(self.repo, "images", "appli/tex/icon_item", 1, 1)
        self.assertEqual(info["selected_scopes"], ["appli/tex/icon_item/item_0002"])
        info = batch.plan(self.repo, "text", "message/dat/English/common", 0, 1)
        self.assertEqual(info["selected_scopes"], ["message/dat/English/common"])
        info = batch.plan(self.repo, "models", "chara/model_pc/p0_bag0002_nylon", 0, 1)
        self.assertEqual(info["selected_scopes"], ["chara/model_pc/p0_bag0002_nylon"])

    def test_failed_or_invalid_prefix_rejected(self):
        for value in ("../escape", "/abs", "a\\b", "parsed/x", "a//b", "a/./b", "."):
            with self.subTest(value=value):
                with self.assertRaises(ValueError):
                    batch.safe_scope(value)
        with self.assertRaises(ValueError):
            batch.plan(self.repo, "text", "appli/tex/icon_item", 0, 1)
        with self.assertRaises(ValueError):
            batch.plan(self.repo, "models", "", -1, 1)

    def test_publish_only_hash_checked_derived_files(self):
        artifact = self.root / "converted" / "appli/tex/icon_item/item_0001/a.png"
        artifact.parent.mkdir(parents=True, exist_ok=True)
        artifact.write_bytes(b"synthetic-png")
        report = self.root / "_index/secondary/fixture.json"
        report.parent.mkdir(parents=True, exist_ok=True)
        report.write_text("{}", encoding="utf-8")
        batch_file = report.parent / "batches/images-000000-001.json"
        batch_file.parent.mkdir(parents=True, exist_ok=True)
        batch_file.write_text("{}", encoding="utf-8")
        item = {"path": artifact.relative_to(self.root).as_posix(),
                "bytes": artifact.stat().st_size,
                "sha256": hashlib.sha256(artifact.read_bytes()).hexdigest().upper()}
        result = {"results": [{"report_path": report.relative_to(self.repo).as_posix(),
                               "outputs": [item]}]}
        self.assertEqual(batch.stage_verified(self.repo, result, batch_file), 3)
        staged = subprocess.run(["git", "diff", "--cached", "--name-only"], cwd=self.repo,
                                capture_output=True, check=True, text=True).stdout
        self.assertIn("a.png", staged)
        item["sha256"] = "0" * 64
        with self.assertRaises(ValueError):
            batch.stage_verified(self.repo, result, batch_file)

    def test_no_native_assets_published(self):
        file = self.root / "virtual" / "appli/tex/icon_item/item_0001/a.bntx"
        report = self.root / "_index/secondary/fixture.json"
        report.parent.mkdir(parents=True, exist_ok=True)
        report.write_text("{}", encoding="utf-8")
        row = {"path": file.relative_to(self.root).as_posix(),
               "bytes": file.stat().st_size, "sha256": batch.sha256(file)}
        with self.assertRaises(ValueError):
            batch.stage_verified(self.repo, {"results": [
                {"report_path": report.relative_to(self.repo).as_posix(),
                 "outputs": [row]}]}, report)


if __name__ == "__main__":
    unittest.main()
