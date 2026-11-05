#!/usr/bin/env python3
"""Small, dependency-free tests for virtual_converted publication invariants."""
import json
from pathlib import Path
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "scripts" / "resource_pipeline"))
import virtual_converted as vc


class VirtualConvertedTest(unittest.TestCase):
    def test_layer_mapping(self):
        self.assertEqual(vc.destination_for("converted/chara/mesh.gltf"),
                         "virtual_converted/chara/mesh.gltf")
        self.assertEqual(vc.destination_for("parsed/message/a.json"),
                         "virtual_converted/_parsed/message/a.json")
        self.assertEqual(vc.destination_for("resources/messages/a.csv"),
                         "virtual_converted/_resources/messages/a.csv")

    def test_never_publish_raw_or_escaping_path(self):
        for name in ("virtual/test.bin", "../raw.bin", "other/test.png",
                     "converted/../../escape", "parsed", "converted/"):
            with self.subTest(path=name), self.assertRaises(ValueError):
                vc.destination_for(name)

    def test_exact_coverage_and_native_unsupported_evidence(self):
        with tempfile.TemporaryDirectory() as td:
            repo = Path(td)
            work = repo / ".sv-secondary-work" / "fixture" / "data.trpfs"
            source = "unknown/mystery.trdata"
            inspection_rel = "parsed/unknown/_inspection/fixture.jsonl"
            inspection = work / inspection_rel
            inspection.parent.mkdir(parents=True)
            entry = {
                "source": source, "source_sha256": "A" * 64,
                "bytes": 12, "format_candidate": "UNKNOWN",
                "parse_status": "INSPECTED_UNPARSED",
                "parsed_assets": [],
            }
            inspection.write_text(json.dumps(entry) + "\n", encoding="utf-8")
            output = {
                "path": inspection_rel, "bytes": inspection.stat().st_size,
                "sha256": vc.cli.digest(inspection),
            }
            task = {"id": "unknown#00000", "fingerprint": "F" * 64,
                    "paths": [source], "file_count": 1}
            data = {
                "inspection": {
                    "manifest": inspection_rel, "inspection_records": 1,
                    "manifest_sha256": vc.cli.digest(inspection),
                    "by_status": {"INSPECTED_UNPARSED": 1},
                },
                "outputs": [output], "deferred_outputs": [], "problems": [],
                "stages": {},
            }
            published = vc.publish_virtual_converted(
                repo, {"task": task, "work": work, "data": data, "returncode": 0})
            self.assertEqual(len(published), 2)
            self.assertTrue(any("virtual_converted/_parsed/" in p for p in published))
            ledger = repo / vc.fs.ROOT / "virtual_converted" / "_index" / "tasks"
            records = list(ledger.glob("task-*.json"))
            self.assertEqual(len(records), 1)
            saved = json.loads(records[0].read_text(encoding="utf-8"))
            self.assertEqual(saved["input_files"], 1)
            self.assertEqual(saved["sources"][0]["parse_status"], "INSPECTED_UNPARSED")
            self.assertFalse(any(p.startswith("virtual_converted/unknown/") for p in
                                 (asset["path"] for asset in saved["outputs"])))

    def test_inspection_must_exactly_match_selection(self):
        with tempfile.TemporaryDirectory() as td:
            repo = Path(td)
            work = repo / "worker"
            rel = "parsed/one/_inspection/test.jsonl"
            manifest = work / rel
            manifest.parent.mkdir(parents=True)
            manifest.write_text('{"source":"one/a.bin","parse_status":"INSPECTED_UNPARSED"}\n',
                                encoding="utf-8")
            data = {"inspection": {"manifest": rel, "inspection_records": 1,
                                    "manifest_sha256": vc.cli.digest(manifest)},
                    "outputs": [{"path": rel, "bytes": manifest.stat().st_size,
                                 "sha256": vc.cli.digest(manifest)}]}
            task = {"id": "one#00000", "fingerprint": "1", "paths": ["one/b.bin"]}
            with self.assertRaises(ValueError):
                vc.publish_virtual_converted(repo, {"task": task, "work": work, "data": data})


if __name__ == "__main__":
    unittest.main()
