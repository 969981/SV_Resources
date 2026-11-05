"""Synthetic, ROM-free coverage of the M2 parallel worker planner."""
import gzip
from pathlib import Path
import sys
import tempfile
import threading
import time
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "scripts"))
from sv_m2_parallel import iter_prepared_batches, validate_unique_paths


class TestParallelM2(unittest.TestCase):
    def test_order_and_bounded_overlap(self):
        active = 0
        peak = 0
        lock = threading.Lock()

        def prepare(start, end):
            nonlocal active, peak
            with lock:
                active += 1
                peak = max(peak, active)
            time.sleep(0.03)
            with lock:
                active -= 1
            return (start, end)

        records = list(iter_prepared_batches(21502, 21803, 100, 10, 3, prepare))
        self.assertEqual(
            records,
            [(21502, 21602, (21502, 21602)),
             (21602, 21702, (21602, 21702)),
             (21702, 21802, (21702, 21802)),
             (21802, 21803, (21802, 21803))],
        )
        self.assertGreaterEqual(peak, 2)
        self.assertLessEqual(peak, 3)

    def test_single_worker_fallback(self):
        seen = []
        records = list(iter_prepared_batches(0, 5, 2, 2, 1, lambda a, b: seen.append(a) or b))
        self.assertEqual([p[:2] for p in records], [(0, 2), (2, 4)])
        self.assertEqual(seen, [0, 2])

    def test_exceptions_stop_publication(self):
        def broken(a, b):
            if a == 4:
                raise RuntimeError("decoder failed")
            return b

        iterator = iter_prepared_batches(0, 9, 2, 10, 2, broken)
        self.assertEqual(next(iterator)[:2], (0, 2))
        self.assertEqual(next(iterator)[:2], (2, 4))
        with self.assertRaisesRegex(RuntimeError, "decoder failed"):
            next(iterator)

    def _index(self, lines):
        temp = tempfile.TemporaryDirectory()
        path = Path(temp.name) / "file_index.tsv.gz"
        with gzip.open(path, "wt", encoding="utf-8") as stream:
            stream.write("hash\tpack_index\tpack_name\tvirtual_path\n")
            stream.write("".join(lines))
        self.addCleanup(temp.cleanup)
        return path

    def test_native_index_unique_paths(self):
        path = self._index([
            "0000000000000001\t0\tp0\tfield/one.bin\n",
            "0000000000000002\t1\tp1\tfield/two.bin\n",
            "0000000000000003\t2\tp2\t\n",
        ])
        self.assertEqual(validate_unique_paths(path, 1), 3)

    def test_native_index_case_collision_rejected(self):
        path = self._index([
            "0000000000000001\t0\tp0\tfield/One.BIN\n",
            "0000000000000002\t1\tp1\tfield/one.bin\n",
        ])
        with self.assertRaisesRegex(ValueError, "collision"):
            validate_unique_paths(path, 1)

    def test_legacy_collisions_not_introduced_by_parallel(self):
        path = self._index([
            "0000000000000001\t0\tp0\tfield/one.bin\n",
            "0000000000000002\t1\tp1\tfield/one.bin\n",
            "0000000000000003\t2\tp2\tfield/two.bin\n",
        ])
        self.assertEqual(validate_unique_paths(path, 2), 3)

    def test_invalid_worker_range(self):
        with self.assertRaisesRegex(ValueError, "Invalid"):
            list(iter_prepared_batches(0, 2, 1, 2, 5, lambda a, b: b))


if __name__ == "__main__":
    unittest.main()
