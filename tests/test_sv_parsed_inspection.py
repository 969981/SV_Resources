"""Regression: every native file must receive a real parsed/ inspection entry."""
from pathlib import Path
import json
import sys
import tempfile
import unittest

REPO = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(REPO))
from scripts.resource_pipeline import cli, process_virtual, inspect_all


class ExhaustiveInspectionTests(unittest.TestCase):
    def test_all_source_formats_have_exact_record_and_only_proven_parse(self):
        with tempfile.TemporaryDirectory() as d:
            root = Path(d) / cli.BASE
            names = ["appli/config/valid.json",
                     "appli/config/unknown.bin",
                     "appli/config/broken.xml"]
            values = [b'{"version":4,"entries":[1,2]}',
                      b"\x00\xff\x12\x34\x55\x66",
                      b"<broken"]
            files = []
            for name, blob in zip(names, values):
                path = root / "virtual" / name
                path.parent.mkdir(parents=True, exist_ok=True)
                path.write_bytes(blob)
                files.append((name, path))
            with cli.connect(root / "_index" / "resource_catalog.sqlite") as conn:
                result = process_virtual.index_local(root, conn, files)
                self.assertEqual(result["available"], 3)
                report = inspect_all.inspect_all(
                    root, conn, files, "appli/config", "abcd1234"
                )
            self.assertEqual(report["inspection_records"], 3)
            self.assertEqual(report["source_files"], 3)
            self.assertEqual(report["by_status"], {
                "INSPECTED_UNPARSED": 2, "STRUCTURE_PARSED": 1})
            manifest = root / report["manifest"]
            rows = [json.loads(line) for line in manifest.read_text("utf-8").splitlines()]
            self.assertEqual([r["source"] for r in rows], names)
            self.assertEqual(rows[0]["parse_status"], "STRUCTURE_PARSED")
            self.assertTrue(rows[0]["parsed_assets"][0]["path"].endswith(".structure.json"))
            self.assertEqual(rows[1]["parse_status"], "INSPECTED_UNPARSED")
            self.assertEqual(rows[1]["inspection"]["header_hex"], values[1].hex().upper())
            self.assertFalse(rows[2]["parsed_assets"])
            selected, deferred = process_virtual.outputs(
                root, 10, "appli/config", required_paths=(report["manifest"],))
            self.assertEqual(deferred, [])
            self.assertIn(report["manifest"], [a["path"] for a in selected])
            self.assertTrue(any(x["path"].endswith("valid.json.structure.json") for x in selected))

    def test_required_manifest_cannot_be_omitted(self):
        with tempfile.TemporaryDirectory() as d:
            root = Path(d)
            with self.assertRaises(ValueError):
                process_virtual.outputs(
                    root, 10, "pokemon/data", required_paths=("parsed/pokemon/data/missing.jsonl",))

    def test_no_false_png_or_json_claim(self):
        with tempfile.TemporaryDirectory() as d:
            root = Path(d)
            path = root / "virtual/appli/tex/false.png"
            path.parent.mkdir(parents=True)
            path.write_bytes(b"not a PNG")
            self.assertIsNone(inspect_all._parse_known_common(
                path, "appli/tex/false.png", root))
            path2 = root / "virtual/appli/tex/false.json"
            path2.write_bytes(b"{broken json")
            self.assertIsNone(inspect_all._parse_known_common(
                path2, "appli/tex/false.json", root))


if __name__ == "__main__":
    unittest.main()
