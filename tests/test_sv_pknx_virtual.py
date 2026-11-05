import importlib.util
import tempfile
from pathlib import Path
import unittest


MODULE_PATH = Path(__file__).resolve().parents[1] / "scripts" / "pknx_virtual.py"
spec = importlib.util.spec_from_file_location("pknx_virtual", MODULE_PATH)
pknx = importlib.util.module_from_spec(spec)
spec.loader.exec_module(pknx)


class TestPkNXVirtual(unittest.TestCase):
    def test_supported_only_native_pknx_formats(self):
        cases = {
            "message/dat/Simp_Chinese/common/monsname.dat": "text",
            "message/dat/Simp_Chinese/common/monsname.tbl": "ahtb",
            "avalon/data/personal_array.bin": "personal",
            "other/test.sarc": "sarc",
            "other/test.gfpak": "gfpak",
            "other/test.ahtb": "ahtb",
            "pokemon/data/foo/model.trmdl": None,
            "world/test.bfbs": None,
            "other/sample.bin": None,
            "audio/song.bnk": None,
        }
        for path, expected in cases.items():
            with self.subTest(path=path):
                self.assertEqual(pknx.parser_for(path), expected)

    def test_batch_selection_and_restart(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            old = (pknx.INDEX, pknx.PROGRESS, pknx.INVENTORY)
            try:
                pknx.INDEX = root / "_index"
                pknx.PROGRESS = pknx.INDEX / "progress.json"
                pknx.INVENTORY = pknx.INDEX / "inventory.json"
                pknx.tracked_paths = lambda: [
                    "avalon/data/personal_array.bin",
                    "message/dat/JPN/common/monsname.dat",
                    "pokemon/data/pm0001/model.trmdl",
                ]
                first = pknx.select(root / "work", 1)
                self.assertEqual(first["selected_count"], 1)
                self.assertEqual(first["remaining_after"], 1)
                pknx.save_json(pknx.PROGRESS, {"last_path": first["last_path"], "batch_number": 1})
                second = pknx.select(root / "work2", 10)
                self.assertEqual(second["first_path"], "message/dat/JPN/common/monsname.dat")
                restarted = pknx.select(root / "work3", 10, restart=True)
                self.assertEqual(restarted["selected_count"], 2)
            finally:
                pknx.INDEX, pknx.PROGRESS, pknx.INVENTORY = old


if __name__ == "__main__":
    unittest.main()
