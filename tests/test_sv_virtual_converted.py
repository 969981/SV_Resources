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
    def test_large_message_catalogs_are_bounded(self):
        rows = [(f"message/dat/French/common/entry_{i:04d}.dat", "A" * 64)
                for i in range(292)]
        rows += [(f"message/dat/English/script/entry_{i:04d}.dat", "B" * 64)
                 for i in range(200)]
        groups = vc.fs.build_tasks(rows, 1000)
        common = [g for g in groups if g["prefix"] == "message/dat/French/common"]
        scripts = [g for g in groups if g["prefix"] == "message/dat/English/script"]
        self.assertEqual(sum(g["file_count"] for g in common), 292)
        self.assertTrue(all(g["file_count"] <= 96 for g in common))
        self.assertEqual(len(scripts), 1)
        self.assertEqual(scripts[0]["file_count"], 200)

    def test_unattempted_single_file_leaves_compact_without_losing_coverage(self):
        rows = [(f"appli/tex/icon_ribbon/item_{i:03d}/image.bntx", "A" * 64)
                for i in range(70)]
        leaves = vc.build_converted_tasks(rows, 1000)
        self.assertEqual(len(leaves), 70)
        compacted = vc._compact_unattempted(leaves, {"attempted": {}})
        self.assertEqual(len(compacted), 2)
        self.assertEqual(sorted(x["file_count"] for x in compacted), [6, 64])
        self.assertEqual(sorted(p for task in compacted for p in task["paths"]),
                         sorted(p for p, _ in rows))
        self.assertTrue(all(task["prefix"] == "appli/tex/icon_ribbon"
                            for task in compacted))

    def test_old_checkpoint_and_new_rollup_fingerprints_are_stable(self):
        rows = [(f"appli/tex/icon_ribbon/item_{i:03d}/image.bntx", "B" * 64)
                for i in range(70)]
        leaves = vc.build_converted_tasks(rows, 1000)
        old = leaves[0]
        state = {"attempted": {old["id"]: {
            "fingerprint": old["fingerprint"], "status": "ATTEMPTED",
            "parsed_records": 1}}}
        grouped = vc._compact_unattempted(leaves, state)
        self.assertEqual(len(grouped), 3)
        self.assertTrue(any(t["id"] == old["id"] for t in grouped))
        self.assertTrue(vc.fs.is_terminal(old, state))
        self.assertEqual(sum(t["file_count"] for t in grouped), 70)
        first = {t["id"]: t["fingerprint"] for t in grouped}
        for task in grouped:
            if task["id"] != old["id"]:
                state["attempted"][task["id"]] = {
                    "fingerprint": task["fingerprint"],
                    "status": "ATTEMPTED", "parsed_records": task["file_count"]}
        repeat = vc._compact_unattempted(leaves, state)
        self.assertEqual(first, {t["id"]: t["fingerprint"] for t in repeat})
        self.assertTrue(all(vc.fs.is_terminal(t, state) for t in repeat))

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
