"""Synthetic unit tests for the manual Trinity M2 parallel publisher.

No proprietary ROM, Oodle, .NET, or 7z runtime needed.
"""
import importlib.util
from pathlib import Path
import sys
import unittest

SCRIPTS = Path(__file__).resolve().parents[1] / "scripts"
sys.path.insert(0, str(SCRIPTS))
spec = importlib.util.spec_from_file_location("sv_m2_manual", SCRIPTS / "Run-SV-M2Window.py")
assert spec and spec.loader
manual = importlib.util.module_from_spec(spec)
spec.loader.exec_module(manual)


class TestM2ManualWindows(unittest.TestCase):
    def test_two_packs_run_in_two_process_windows(self):
        seen = []

        def prepare(start, end):
            seen.append((start, end))
            summary = dict(batchStartPack=start, batchEndPackExclusive=end,
                           success=10, failed=0, bytesVerified=500,
                           decoderExitCode=0)
            return summary, [f"_index/batches/manual-pack-{start:06d}.jsonl"]

        summaries, stage = manual.run_windows(0, 2, 23589, 1, 2, prepare)
        self.assertEqual([x["batchStartPack"] for x in summaries], [0, 1])
        self.assertEqual(set(seen), {(0, 1), (1, 2)})
        self.assertEqual(len(stage), 2)

    def test_range_boundary(self):
        def prepare(start, end):
            return dict(batchStartPack=start, batchEndPackExclusive=end,
                        success=1, failed=0, decoderExitCode=0), ["ok"]
        summaries, _ = manual.run_windows(23588, 1, 23589, 1, 1, prepare)
        self.assertEqual(len(summaries), 1)
        with self.assertRaisesRegex(ValueError, "outside"):
            manual.run_windows(23588, 2, 23589, 1, 1, prepare)

    def test_failure_rejected_and_never_returned_to_publisher(self):
        def prepare(start, end):
            return dict(batchStartPack=start, batchEndPackExclusive=end,
                        success=0, failed=1, decoderExitCode=1), ["do-not-commit"]
        with self.assertRaisesRegex(RuntimeError, "failures"):
            manual.run_windows(0, 2, 23589, 1, 2, prepare)

    def test_report_range_mismatch(self):
        def prepare(start, end):
            return dict(batchStartPack=start+1, batchEndPackExclusive=end,
                        success=1, failed=0, decoderExitCode=0), ["do-not-commit"]
        with self.assertRaisesRegex(RuntimeError, "mismatch"):
            manual.run_windows(0, 2, 23589, 1, 2, prepare)

    def test_missing_ok_rejected(self):
        def prepare(start, end):
            return dict(batchStartPack=start, batchEndPackExclusive=end,
                        success=0, failed=0, decoderExitCode=0), ["do-not-commit"]
        with self.assertRaisesRegex(RuntimeError, "No native OK"):
            manual.run_windows(0, 1, 23589, 1, 1, prepare)

    def test_bounds_rejected(self):
        for bad in ((0, 0, 23589, 1, 2), (-1, 2, 23589, 1, 2),
                    (0, 1, 23589, 101, 2), (0, 1, 23589, 1, 5)):
            with self.subTest(bad=bad), self.assertRaises(ValueError):
                manual.run_windows(*bad, lambda start, end: ({}, []))

    def test_no_global_progress_file_in_output_set(self):
        def prepare(start, end):
            return (dict(batchStartPack=start, batchEndPackExclusive=end,
                         success=1, failed=0, decoderExitCode=0),
                    [f"_index/batches/manual-pack-{start}.jsonl"])
        _, stage = manual.run_windows(0, 2, 23589, 1, 2, prepare)
        self.assertTrue(all("full-extract-progress.json" not in p for p in stage))


if __name__ == "__main__":
    unittest.main()
