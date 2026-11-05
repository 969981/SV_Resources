"""Synthetic tests for Unpack-SV-EventPrefetch.py (no retail data)."""
import importlib.util
import struct
import unittest
from pathlib import Path

SRC = Path(__file__).resolve().parents[1] / "scripts" / "Unpack-SV-EventPrefetch.py"
spec = importlib.util.spec_from_file_location("sv_event_prefetch", SRC)
mod = importlib.util.module_from_spec(spec)
spec.loader.exec_module(mod)


def synthetic_prefetch(*values):
    # FlatBuffers root at 12, vtable at 6, uint64 vector at 20.
    return (
        struct.pack("<I", 12) + b"\x00\x00"
        + struct.pack("<HHH", 6, 8, 4)
        + struct.pack("<iI", 6, 4)
        + struct.pack("<I", len(values))
        + b"".join(struct.pack("<Q", v) for v in values)
    )


def synthetic_empty_events():
    # Root at 16, vtable at 8, 2 scalar fields, vector at 28.
    return (
        struct.pack("<I", 16) + b"\x00" * 4
        + struct.pack("<HHHH", 8, 12, 4, 8)
        + struct.pack("<iII", 8, 2, 4)
        + struct.pack("<I", 0)
    )


class TestSVEventPrefetch(unittest.TestCase):
    def test_trpre_exact_64_bit(self):
        rows, values = mod.parse_trpre(
            synthetic_prefetch(0, 0x0123456789ABCDEF, 0xFFFFFFFFFFFFFFFF)
        )
        self.assertEqual(values, [
            "0000000000000000", "0123456789abcdef", "ffffffffffffffff"
        ])
        self.assertEqual(rows[0], [0, 24, "0x0000000000000000"])
        self.assertEqual(rows[-1], [2, 40, "0xffffffffffffffff"])

    def test_trpre_empty(self):
        rows, values = mod.parse_trpre(synthetic_prefetch())
        self.assertEqual(rows, [])
        self.assertEqual(values, [])

    def test_trevt_empty_root(self):
        events, states, refs, counts = mod.parse_trevt(synthetic_empty_events())
        self.assertEqual(events["rootField0Raw"], 2)
        self.assertEqual(counts["eventCount"], 0)
        self.assertEqual(states, [])
        self.assertEqual(refs, [])

    def test_reject_bad_offset(self):
        with self.assertRaises(ValueError):
            mod.parse_trpre(struct.pack("<I", 123456))

    def test_expected_source_digests_are_well_formed(self):
        self.assertEqual(len(mod.EXPECTED), 3)
        for size, digest in mod.EXPECTED.values():
            self.assertGreater(size, 0)
            self.assertEqual(len(digest), 64)
            int(digest, 16)


if __name__ == "__main__":
    unittest.main()
