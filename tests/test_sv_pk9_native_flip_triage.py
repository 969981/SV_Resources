"""No-ROM deterministic identity guards for SV 4.0.0 three-run PK9 audit."""
from pathlib import Path
import importlib.util
import tempfile
import unittest
from zipfile import ZipFile

ROOT = Path(__file__).resolve().parents[1]
spec = importlib.util.spec_from_file_location("sv_400_pk9_audit", ROOT / "scripts/Audit-SV-PK9-Native-Flips.py")
mod = importlib.util.module_from_spec(spec)
spec.loader.exec_module(mod)

class AuditIdentityTests(unittest.TestCase):
    def test_member_unique_matching(self):
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "data.zip"
            with ZipFile(path, "w") as zipfile:
                zipfile.writestr("PK9/embedded-proof.json", '{"status":"ok"}')
            with ZipFile(path) as zipfile:
                self.assertEqual(mod.doc(zipfile, "embedded-proof.json"), {"status": "ok"})
                with self.assertRaisesRegex(ValueError, "exactly one"):
                    mod.member(zipfile, "missing.json")

    def test_duplicate_member_rejected(self):
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "data.zip"
            with ZipFile(path, "w") as zipfile:
                zipfile.writestr("one/a.json", "{}")
                zipfile.writestr("two/a.json", "{}")
            with ZipFile(path) as zipfile:
                with self.assertRaisesRegex(ValueError, "exactly one"):
                    mod.member(zipfile, "a.json")

    def test_missing_evidence_rejected(self):
        with tempfile.TemporaryDirectory() as tmp:
            absent = Path(tmp) / "absent.zip"
            with self.assertRaisesRegex(ValueError, "Missing original"):
                mod.audit(absent, absent, absent)

if __name__ == "__main__":
    unittest.main()
