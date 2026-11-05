"""Synthetic, no-ROM coverage for a truthful per-file SV secondary audit."""
import gzip
import json
from pathlib import Path
import subprocess
import tempfile
import unittest

from scripts.resource_pipeline import audit_secondary as audit
from scripts.resource_pipeline import full_secondary as fs


class AuditSecondaryTests(unittest.TestCase):
    def test_every_tracked_file_is_listed_even_before_processing(self):
        with tempfile.TemporaryDirectory() as temp:
            repo = Path(temp)
            def git(*parts):
                subprocess.run(["git", *parts], cwd=repo,
                               check=True, capture_output=True)
            git("init", "-q")
            git("config", "user.name", "CI")
            git("config", "user.email", "ci@example.invalid")
            root = repo / fs.ROOT
            virtual = root / "virtual" / "pokemon" / "test.trmdl"
            virtual.parent.mkdir(parents=True)
            virtual.write_bytes(b"TEST")
            progress = root / "_index" / "full-extract-progress.json"
            progress.parent.mkdir(parents=True)
            progress.write_text(json.dumps({
                "expectedNativeFiles": 2, "totalPacks": 5, "nextPack": 1,
                "state": "PARTIAL"}), encoding="utf-8")
            git("add", ".")
            git("commit", "-qm", "fixture")
            out = repo / "audit-out"
            summary = audit.build_audit(repo, out)
            self.assertEqual(summary["tracked_virtual_files"], 1)
            self.assertEqual(summary["original_not_yet_tracked_estimate"], 1)
            self.assertEqual(summary["by_status"], {"NOT_ATTEMPTED": 1})
            self.assertFalse(summary["eligible_for_final_manual_review"])
            with gzip.open(out / "virtual-file-ledger.jsonl.gz",
                           "rt", encoding="utf-8") as handle:
                rows = [json.loads(line) for line in handle]
            self.assertEqual(len(rows), 1)
            self.assertEqual(rows[0]["source"], "pokemon/test.trmdl")
            self.assertEqual(rows[0]["status"], "NOT_ATTEMPTED")

    def test_parsed_asset_missing_marks_output_missing(self):
        with tempfile.TemporaryDirectory() as temp:
            repo = Path(temp)
            def git(*parts):
                subprocess.run(["git", *parts], cwd=repo,
                               check=True, capture_output=True)
            git("init", "-q")
            git("config", "user.name", "CI")
            git("config", "user.email", "ci@example.invalid")
            root = repo / fs.ROOT
            source = "message/dat/English/common/test.dat"
            dest = root / "virtual" / source
            dest.parent.mkdir(parents=True)
            dest.write_bytes(b"test")
            task = fs.build_tasks([(source, "a"*40)])[0]
            # The fixture source Git blob must match the planner fingerprint.
            git("add", ".")
            git("commit", "-qm", "native")
            task = fs.build_tasks(fs.listed_native(repo))[0]
            batch = "abc123"
            manifest = "parsed/message/dat/English/common/_inspection/" + batch + ".jsonl"
            actual = root / manifest
            actual.parent.mkdir(parents=True)
            entry = {
                "source": source, "parse_status": "STRUCTURE_PARSED",
                "format_candidate": "MESSAGE_DAT_CANDIDATE",
                "parsed_assets": [{"kind": "message",
                                   "path": "parsed/message/dat/English/common/missing.json"}],
                "source_sha256": "F"*64, "sha256_evidence": "LOCAL_DIGEST_ONLY"}
            raw = (json.dumps(entry) + "\n").encode("utf-8")
            actual.write_bytes(raw)
            state = root / fs.STATE_NAME
            state.parent.mkdir(parents=True, exist_ok=True)
            state.write_text(json.dumps({
                "schemaVersion": 1, "epoch": fs.EPOCH,
                "attempted": {task["id"]: {
                    "fingerprint": task["fingerprint"], "status": "ATTEMPTED",
                    "parsed_records": 1, "inspection_manifest": manifest,
                    "inspection_sha256": __import__("hashlib").sha256(raw).hexdigest()}},
                "totals": {"runs": 1, "source_files_attempted": 1}}))
            git("add", ".")
            git("commit", "-qm", "inspect")
            summary = audit.build_audit(repo, repo / "audit-out")
            self.assertEqual(summary["by_status"], {"OUTPUT_MISSING": 1})
            self.assertFalse(summary["eligible_for_final_manual_review"])


if __name__ == "__main__":
    unittest.main()
