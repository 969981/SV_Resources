"""Synthetic R0/R1 contract tests; never download or publish game data."""
import hashlib
import json
from pathlib import Path
import sqlite3
import struct
import sys
import tempfile
import unittest

REPO = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(REPO))
from scripts.resource_pipeline import cli


def ahtb(entries):
    payload = b"AHTB" + struct.pack("<I", len(entries))
    for i, name in enumerate(entries):
        encoded = name.encode("utf-8") + b"\0"
        payload += struct.pack("<QH", i + 1, len(encoded)) + encoded
    return payload


def bntx():
    buf = bytearray(0x300)
    buf[:4] = b"BNTX"
    struct.pack_into("<H", buf, 0xC, 0xFEFF)
    struct.pack_into("<I", buf, 0x1C, len(buf))
    pos = 0x80
    buf[pos:pos+4] = b"BRTI"
    struct.pack_into("<I", buf, pos + 0x1C, 0x2001)
    struct.pack_into("<II", buf, pos + 0x24, 128, 128)
    return bytes(buf)


class TrinityCatalogTests(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        self.addCleanup(self.tmp.cleanup)
        self.root = Path(self.tmp.name) / "Unpack" / "4.0.0" / "romfs" / "arc" / "data.trpfs"
        (self.root / "virtual").mkdir(parents=True)
        (self.root / "_index").mkdir(parents=True)
        self.tblpath = "message/dat/Simp_Chinese/common/sample.tbl"
        self.bntxpath = "appli/tex/icon_ribbon/icon_ribbon_001/icon_ribbon_001.bntx"
        self.records = []

    def write(self, name, data, native_hash):
        target = self.root / "virtual" / name
        target.parent.mkdir(parents=True, exist_ok=True)
        target.write_bytes(data)
        self.records.append({"Status": "OK", "Hash": native_hash,
                             "Name": name, "Sha256": hashlib.sha256(data).hexdigest().upper(),
                             "Size": len(data), "PackName": "test.trpak", "PackOffset": 42})
        return target

    def index(self):
        (self.root / "_index" / "export.jsonl").write_text(
            "\n".join(json.dumps(r) for r in self.records) + "\n", encoding="utf-8")

    def open_db(self):
        return cli.connect(self.root / "_index" / "resource_catalog.sqlite")

    def test_ahtb_labels_and_validation(self):
        encoded = ahtb(["hello", "文字"])
        entries = cli.parse_ahtb(encoded)
        self.assertEqual([x["label"] for x in entries], ["hello", "文字"])
        self.assertTrue(all(x["text"] is None for x in entries))
        with self.assertRaises(ValueError):
            cli.parse_ahtb(encoded[:-1])
        with self.assertRaises(ValueError):
            cli.parse_ahtb(b"WRONG")

    def test_bntx_metadata_not_fake_png(self):
        metadata = cli.parse_bntx(bntx())
        self.assertEqual(metadata["textures"][0]["width"], 128)
        self.assertEqual(metadata["textures"][0]["height"], 128)
        self.assertEqual(metadata["png_status"], "NOT_CONVERTED")
        with self.assertRaises(ValueError):
            cli.parse_bntx(b"BNTX" + bytes(10))

    def test_scan_convert_export(self):
        self.write(self.tblpath, ahtb(["msg_a", "msg_b"]), "0123456789ABCDEF")
        self.write(self.bntxpath, bntx(), "FEDCBA9876543210")
        self.index()
        with self.open_db() as conn:
            result = cli.scan(self.root, conn, verify=True)
            self.assertEqual(result["records_scanned"], 2)
            self.assertEqual(result["formats"]["AHTB"], 1)
            self.assertEqual(result["formats"]["BNTX"], 1)
            self.assertEqual(conn.execute("SELECT COUNT(*) FROM raw_files WHERE sha256_verified=1").fetchone()[0], 2)
            labels = cli.convert(self.root, conn, "labels", 0)
            self.assertEqual(labels["ok"], 1)
            out = self.root / "parsed" / "message/dat/Simp_Chinese/common/sample.labels.json"
            self.assertTrue(out.exists())
            content = json.loads(out.read_text("utf-8"))
            self.assertEqual(content["status"], "LABELS_ONLY")
            self.assertIsNone(content["entries"][0]["text"])
            self.assertTrue((self.root / "converted/message/dat/Simp_Chinese/common/sample.labels.csv").exists())
            self.assertEqual(cli.convert(self.root, conn, "labels", 0)["skipped"], 1)
            bntx_result = cli.convert(self.root, conn, "bntx", 0)
            self.assertEqual(bntx_result["blocked"], 1)
            self.assertFalse((self.root / "converted/appli/tex/icon_ribbon/icon_ribbon_001/icon_ribbon_001.png").exists())
            counts = cli.export_tables(self.root, conn, self.root / "_index" / "exports", True)
            self.assertEqual(counts["raw_files"], 2)
            self.assertEqual(counts["parsed_records"], 2)
            self.assertEqual(counts["resource_assets"], 3)
            self.assertTrue((self.root / "_index" / "exports" / "resource_catalog.json").is_file())

    def test_unsafe_paths_are_rejected(self):
        for s in ("../outside.bin", "/absolute.bin", "a/../../bad", "a\\evil"):
            with self.assertRaises(ValueError):
                cli.safe_path(s)
        self.records = [{"Status":"OK", "Hash":"DEADBEEF00000000",
                         "Name":"../traversal.bin", "Size":1}]
        self.index()
        with self.open_db() as conn:
            result = cli.scan(self.root, conn)
            self.assertEqual(result["malformed_paths"], 1)
            self.assertEqual(result["records_scanned"], 0)

    def test_hash_mismatch_blocks_conversion(self):
        self.write(self.tblpath, ahtb(["key"]), "1111111111111111")
        self.records[0]["Sha256"] = "0" * 64
        self.index()
        with self.open_db() as conn:
            cli.scan(self.root, conn, verify=False)
            result = cli.convert(self.root, conn, "labels", 0)
            self.assertEqual(result["failed"], 1)
            self.assertFalse((self.root / "parsed/message/dat/Simp_Chinese/common/sample.labels.json").exists())



class NativeFormatRegressionTests(unittest.TestCase):
    """The repository already tracks these tiny, genuine source fixtures."""

    def test_actual_zh_hans_ahtb(self):
        source = REPO / (
            "Unpack/4.0.0/romfs/arc/data.trpfs/virtual/message/dat/"
            "Simp_Chinese/common/app_common.tbl")
        if not source.is_file():
            self.skipTest("Native AHTB fixture not checked out")
        entries = cli.parse_ahtb(source.read_bytes())
        self.assertEqual(len(entries), 65)
        self.assertEqual(entries[0]["label"], "msg_common_18_keywait")
        self.assertEqual(entries[-1]["label"], "msg_app_common_max")

    def test_actual_icon_ribbon_bntx(self):
        source = REPO / (
            "Unpack/4.0.0/romfs/arc/data.trpfs/virtual/appli/tex/"
            "icon_ribbon/icon_ribbon_001/icon_ribbon_001.bntx")
        if not source.is_file():
            self.skipTest("Native BNTX fixture not checked out")
        data = cli.parse_bntx(source.read_bytes())
        self.assertIn({"brti_offset": 0x1F8, "format_code": "0x00002001",
                       "width": 128, "height": 128}, data["textures"])

if __name__ == "__main__":
    unittest.main()
