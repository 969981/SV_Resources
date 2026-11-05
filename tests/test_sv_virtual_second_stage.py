"""Unit tests for bounded second-stage virtual processing (synthetic bytes)."""
import json
from contextlib import closing
from pathlib import Path
import struct
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from scripts.resource_pipeline import cli, process_virtual as pv


def ahtb_one(label="key"):
    encoded = label.encode("utf-8") + b"\0"
    return b"AHTB" + struct.pack("<I", 1) + struct.pack("<QH", 0x123456789ABCDEF0, len(encoded)) + encoded


class ProcessVirtualTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name) / "data.trpfs"
        self.prefix = "message/dat/Simp_Chinese/common"
        self.src = self.root / "virtual" / self.prefix / "test.tbl"
        self.src.parent.mkdir(parents=True)
        (self.root / "_index").mkdir()
        self.src.write_bytes(ahtb_one())

    def test_labels_real_parser_and_outputs(self):
        files = pv.scoped_paths(self.root, self.prefix, 100)
        with closing(cli.connect(self.root / "_index" / "resource_catalog.sqlite")) as conn:
            a = pv.index_local(self.root, conn, files)
            self.assertEqual(a["available"], 1)
            self.assertEqual(a["local_only"], 1)
            self.assertEqual(a["formats"]["AHTB"], 1)
            conversion = cli.convert(self.root, conn, "labels", 20)
            self.assertEqual(conversion["ok"], 1, conversion)
            file = self.root / "parsed" / self.prefix / "test.labels.json"
            self.assertEqual(json.loads(file.read_text())["entries"][0]["label"], "key")
            self.assertTrue((self.root / "converted" / self.prefix / "test.labels.csv").is_file())
            selected, deferred = pv.outputs(self.root, 1)
            self.assertEqual(len(selected), 2)
            self.assertFalse(deferred)
            self.assertTrue(all("sha256" in item for item in selected))
            db = conn.execute("SELECT sha256_verified,source_pack FROM raw_files").fetchone()
            self.assertEqual(db, (0, None))

    def test_local_changes_reindex_and_native_manifest_rejects_mismatch(self):
        with closing(cli.connect(self.root / "_index" / "resource_catalog.sqlite")) as conn:
            files = pv.scoped_paths(self.root, self.prefix, 100)
            pv.index_local(self.root, conn, files)
            old = conn.execute("SELECT sha256_recorded FROM raw_files").fetchone()[0]
            self.src.write_bytes(ahtb_one("changed"))
            self.assertEqual(pv.index_local(self.root, conn, files)["hash_mismatch"], 0)
            new = conn.execute("SELECT sha256_recorded FROM raw_files").fetchone()[0]
            self.assertNotEqual(old, new)
            conn.execute("UPDATE raw_files SET source_pack='native-pack',sha256_recorded=?", (old,))
            conn.commit()
            result = pv.index_local(self.root, conn, files)
            self.assertEqual(result["hash_mismatch"], 1)
            self.assertEqual(conn.execute("SELECT available,extract_status FROM raw_files").fetchone(),
                             (0, "HASH_MISMATCH"))

    def test_output_scoping_prevents_prior_batches_from_consuming_budget(self):
        current = self.root / "parsed" / self.prefix / "test.tbl.json"
        current.parent.mkdir(parents=True, exist_ok=True)
        current.write_text("{}", encoding="utf-8")
        other = self.root / "parsed" / "another" / "file.json"
        other.parent.mkdir(parents=True)
        other.write_text("{}", encoding="utf-8")
        published, _ = pv.outputs(self.root, 1, self.prefix)
        self.assertEqual([x["path"] for x in published],
                         ["parsed/message/dat/Simp_Chinese/common/test.tbl.json"])

    def test_non_utf8_labels_preserve_exact_bytes(self):
        from scripts.resource_pipeline import r1_text
        # Rebuild the declared native record length after changing the key.
        data = b"AHTB" + struct.pack("<I", 1) + struct.pack("<QH", 1, 4) + bytes.fromhex("6D829200")
        for parser in (cli.parse_ahtb, r1_text.parse_ahtb):
            label = parser(data)[0]
            self.assertEqual(label["label_encoding_status"], "INVALID_UTF8_ESCAPED")
            self.assertEqual(label["label_raw_hex"], "6D8292")

    def test_prefix_and_file_budget_guards(self):
        for bad in ("..", "../out", "/absolute", "message\\dat"):
            with self.assertRaises(ValueError):
                pv.scoped_paths(self.root, bad, 10)
        with self.assertRaises(ValueError):
            pv.scoped_paths(self.root, self.prefix, 0)
        with self.assertRaises(ValueError):
            pv.scoped_paths(self.root, "not-extracted", 10)


if __name__ == "__main__":
    unittest.main()
