"""Synthetic no-ROM tests for ZA source provenance and exact-hash annotation checks."""
import csv
import importlib.util
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location("za_audit", ROOT / "scripts" / "Verify-ZA-Lua-Sources.py")
audit = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(audit)

class TestZALuaSourceProvenance(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        root = Path(self.temp.name)
        self.source, self.overlay, self.recon = root/"original", root/"overlay", root/"reconstruction"
        self.source.mkdir()
        self.overlay.mkdir()
        target = "Camera_Test_123"
        self.target = target
        self.h = audit.fnv1a64(target)
        for kind in audit.KINDS:
            src = audit.fnv1a64("Simple_" + kind)
            rows = [f"0x{src:016X} Simple_{kind}\n"]
            if kind == "s":
                rows.append(f"0x{self.h:016X} \n")
            (self.source/f"lua_{kind}_hashes.txt").write_text("".join(rows))
        with (self.overlay/"recovered.tsv").open("w", newline="") as f:
            w = csv.writer(f, delimiter="\t")
            w.writerow(audit.CANDIDATE_HEADER)
            w.writerow(["s", f"0x{self.h:016X}", target,
                        "HASH_EXACT_CANDIDATE", "fixture", "FNV-1a-64_custom_offset"])
        src = self.recon/"source/main/example/Example.hx"
        src.parent.mkdir(parents=True)
        src.write_text(
            'package example;\n@:hashAbi("S%016X")\npublic static function %s():Void {}\n' %
            (self.h, target), encoding="utf-8")
        self.recon_src = src
        with (self.overlay/"source-evidence.tsv").open("w",newline="") as f:
            w=csv.writer(f,delimiter="\t")
            w.writerow(audit.EVIDENCE_HEADER)
            w.writerow(["s", f"0x{self.h:016X}", target, "2",
                        "source/main/example/Example.hx", "2", audit.blob_sha(src.read_bytes()),
                        audit.PINNED_COMMIT])

    def test_exact_match_source_and_line(self):
        outputs, report, evidence = audit.outputs(self.source,self.overlay)
        self.assertEqual(report["total_candidates"],1)
        self.assertEqual(report["corroborated_by_pinned_source"],1)
        self.assertEqual(audit.verify_reconstruction(self.recon,evidence),1)
        self.assertIn(b"SOURCE_CORROBORATED", outputs["source-line-index.tsv"])

    def test_mutated_reconstruction_rejected(self):
        _, _, evidence = audit.outputs(self.source,self.overlay)
        self.recon_src.write_text("mutated",encoding="utf-8")
        with self.assertRaises(ValueError):
            audit.verify_reconstruction(self.recon,evidence)

    def test_wrong_original_line_rejected(self):
        p=self.overlay/"source-evidence.tsv"
        p.write_text(p.read_text().replace("\t2\tsource/main","\t3\tsource/main"))
        with self.assertRaises(ValueError):
            audit.outputs(self.source,self.overlay)

    def test_wrong_candidate_name_rejected(self):
        p=self.overlay/"recovered.tsv"
        p.write_text(p.read_text().replace(self.target,"BadName"))
        with self.assertRaises(ValueError):
            audit.outputs(self.source,self.overlay)

if __name__=="__main__":
    unittest.main()
