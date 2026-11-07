#!/usr/bin/env python3
"""No-ROM guard tests for the native geometry sensitivity diagnostic."""
import importlib.util
from pathlib import Path
import tempfile
import unittest

SCRIPT = Path(__file__).resolve().parents[1] / "scripts/Sweep-SV-Collision-Tolerance.py"
spec = importlib.util.spec_from_file_location("sv_tol", SCRIPT)
module = importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)


class CollisionToleranceGuardTests(unittest.TestCase):
    def setUp(self):
        self.original = b"\n".join(
            f"    private const float {axis} = 30f;".encode() for axis in module.CONSTANTS
        ) + b"\n"

    def test_30_is_byte_identical(self):
        self.assertEqual(module.patched(self.original, 30), self.original)

    def test_10_and_0_change_only_three_constants(self):
        for value in (0, 10):
            converted = module.patched(self.original, value)
            self.assertEqual(converted.count(f"= {value}f;".encode()), 3)
            self.assertEqual(len(converted.splitlines()), 3)
            self.assertNotEqual(module.digest(converted), module.digest(self.original))

    def test_unrecognized_vendor_source_is_rejected(self):
        for invalid in (b"", self.original.replace(b"tolY", b"badY"),
                        self.original + b"private const float tolZ = 30f;\n"):
            with self.assertRaises(ValueError):
                module.patched(invalid, 10)
        with self.assertRaises(ValueError):
            module.patched(self.original, 15)

    def test_original_native_build_provenance_required(self):
        good = {
            "status": "GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES",
            "collisionBlocker": None, "originalTrcolEntries": 223,
            "generated": [{"name": str(i)} for i in range(5)],
            "unverifiedExtraFiles": [],
        }
        module.ensure_original_build(good)
        for update in ({"collisionBlocker": "unclosed"}, {"originalTrcolEntries": 222},
                       {"unverifiedExtraFiles": [{"file": "unknown"}]},
                       {"status": "GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES_PARTIAL"}):
            with self.assertRaises(ValueError):
                module.ensure_original_build({**good, **update})

    def test_location_158_counts_are_from_real_csv_fields(self):
        with tempfile.TemporaryDirectory() as d:
            p = Path(d)
            (p / "wild_native_only.csv").write_text(
                "location_id,cross_from_id\n156,158\n158,157\n156,158\n", encoding="utf-8"
            )
            (p / "fixed_native_only.csv").write_text(
                "location0,location1,location2,location3\n158,0,0,0\n0,146,0,0\n", encoding="utf-8"
            )
            self.assertEqual(module.stats(p), {
                "wild_native_only_cross_from_158": 2,
                "wild_native_only_met_location_158": 1,
                "wild_native_only_location_156_cross_from_158": 2,
                "fixed_native_only_with_location_158": 1,
            })


if __name__ == "__main__":
    unittest.main()
