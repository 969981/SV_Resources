"""Synthetic tests only; no proprietary game data used."""
import importlib.util
import json
import subprocess
import sys
import tempfile
import unittest
from pathlib import Path

SCRIPT = Path(__file__).resolve().parents[1] / "scripts" / "Plan-SV-Unpack.py"
spec = importlib.util.spec_from_file_location("sv_unpack_plan", SCRIPT)
module = importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)


class TestUnpackPlan(unittest.TestCase):
    def test_path_safety(self):
        for path in ("../bad", "/abs", "x/../bad", "x\\bad", ""):
            with self.subTest(path=path):
                with self.assertRaises(ValueError):
                    module.safe_relative(path)

    def test_manifest_and_layout(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            (root / "4.0.0/0").mkdir(parents=True)
            (root / "4.0.0/0/scarlet_main").write_bytes(b"NSO0")
            manifest = {
                "game": "Pokemon Violet", "gameVersion": "4.0.0",
                "files": [
                    {"relativePath": "arc/data.trpfs", "sourceSha256": "abc",
                     "sourceBytes": 10,
                     "artifacts": [{"path": "4.0.0/1/arc/data.trpfs.7z.001"}]},
                    {"relativePath": "arc/data.trpfd", "sourceSha256": "def",
                     "sourceBytes": 4, "artifacts": []},
                ],
            }
            (root / "violet_4.0.0_romfs_transfer_manifest.json").write_text(
                json.dumps(manifest), encoding="utf-8")
            proc = subprocess.run([sys.executable, str(SCRIPT), "--repo", str(root),
                                   "--create-directories"], capture_output=True, text=True)
            self.assertEqual(proc.returncode, 0, proc.stderr)
            tasks = json.loads((root / "Unpack/4.0.0/_index/unpack_plan.json").read_text())["tasks"]
            self.assertEqual(len(tasks), 3)
            self.assertTrue((root / "Unpack/4.0.0/romfs/arc/data.trpfs").is_dir())
            self.assertTrue((root / "Unpack/4.0.0/exefs/scarlet_main").is_dir())
            self.assertTrue(all(t["status"] == "PLANNED" for t in tasks))
            self.assertEqual((root / "4.0.0/0/scarlet_main").read_bytes(), b"NSO0")


if __name__ == "__main__":
    unittest.main()
