"""Native SV 4.0.0 DAT/TBL fixtures + end-to-end catalog regression tests."""
import hashlib
import json
import os
import struct
import sys
from pathlib import Path
import tempfile
import unittest

REPO = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(REPO))
from scripts.resource_pipeline import cli, r1_text

SOURCE = REPO / "Unpack/4.0.0/romfs/arc/data.trpfs/virtual/message/dat/Simp_Chinese/common"


class SVMessageNativeTests(unittest.TestCase):
    def read(self, name, ext):
        file = SOURCE / f"{name}.{ext}"
        if not file.is_file():
            if os.environ.get("SV_REQUIRE_NATIVE_FIXTURES") == "1":
                self.fail(f"Native regression fixture missing from sparse checkout: {file}")
            self.skipTest("Native fixture excluded by lightweight sparse checkout")
        return file.read_bytes()

    def test_native_species_and_item_names(self):
        specimens = {
            "monsname": (1026, [(1, "妙蛙种子"), (6, "喷火龙")]),
            "itemname": (2558, [(1, "大师球"), (4, "精灵球")]),
            "wazaname": (920, [(1, "拍击"), (3, "连环巴掌")]),
            "tokusei": (311, [(1, "恶臭"), (2, "降雨")]),
            "ribbon": (320, [(0, "卡洛斯冠军奖章"), (1, "冠军奖章")]),
        }
        for table, (count, expectations) in specimens.items():
            with self.subTest(table=table):
                decoded = r1_text.join_messages(
                    self.read(table, "dat"), self.read(table, "tbl"),
                    "Simp_Chinese", table)
                self.assertEqual(len(decoded["entries"]), count)
                self.assertEqual(decoded["matching"], "TRAILING_MAX_SENTINEL")
                self.assertTrue(decoded["sentinel"]["label"].lower().endswith("_max"))
                self.assertEqual(decoded["language"], "zh-Hans")
                for i, expected in expectations:
                    self.assertEqual(decoded["entries"][i]["text"], expected)
                    self.assertEqual(decoded["entries"][i]["text_status"], "DECODED")

    def test_control_tokens_preserved(self):
        decoded = r1_text.parse_dat(self.read("bag","dat"))
        self.assertEqual(len(decoded), 395)
        self.assertIn("EMPTY", decoded[0]["text"])
        self.assertEqual(decoded[0]["tokens"][0]["code_hex"], "BDFF")
        self.assertEqual(decoded[8]["text"], "HP")
        self.assertEqual(decoded[9]["text"], "/")
        self.assertEqual(decoded[6]["text"].split("[")[0], "Lv.")

    def test_native_bag_has_lossless_invalid_utf8_label(self):
        # Native bag.tbl contains one malformed UTF-8 key (at ordinal 95);
        # keep raw bytes rather than guessing a Shift-JIS game identifier.
        decoded = r1_text.join_messages(
            self.read("bag", "dat"), self.read("bag", "tbl"),
            "Simp_Chinese", "bag")
        self.assertEqual(len(decoded["entries"]), 395)
        odd = decoded["entries"][95]
        self.assertEqual(odd["label_encoding_status"], "INVALID_UTF8_ESCAPED")
        self.assertIn("8292", odd["label_raw_hex"])
        self.assertIn("\\x82\\x92", odd["label"])
        self.assertTrue(decoded["sentinel"]["label"].lower().endswith("_max"))

    def test_mismatched_tbl_rejected(self):
        tbl = bytearray(self.read("monsname","tbl"))
        struct.pack_into("<I",tbl,4,1)
        with self.assertRaises(ValueError):
            r1_text.join_messages(self.read("monsname","dat"),bytes(tbl),
                                  "Simp_Chinese","monsname")

    def test_full_native_text_pipeline(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)/"data.trpfs"
            (root/"_index").mkdir(parents=True)
            native = root/"virtual/message/dat/Simp_Chinese/common"
            native.mkdir(parents=True)
            records = []
            for ext, hh in (("dat","7AAA111111111111"),("tbl","7AAA222222222222")):
                contents = self.read("ribbon",ext)
                (native/f"ribbon.{ext}").write_bytes(contents)
                records.append({
                    "Status":"OK", "Hash":hh, "Name":f"message/dat/Simp_Chinese/common/ribbon.{ext}",
                    "Sha256":hashlib.sha256(contents).hexdigest().upper(),
                    "Size":len(contents),"PackName":"fixture.trpak","PackOffset":0
                })
            (root/"_index/export.jsonl").write_text(
                "\n".join(json.dumps(x) for x in records)+"\n",encoding="utf-8")
            with cli.connect(root/"_index/resource_catalog.sqlite") as conn:
                cli.scan(root,conn,verify=True)
                summary = cli.decode_messages(root,conn)
                self.assertEqual(summary["ok"],1,summary)
                self.assertEqual(summary["failed"],0,summary)
                row = conn.execute("""SELECT language,label,text_value,decode_status
                  FROM message_catalog WHERE table_name='common/ribbon'
                    AND ordinal=0""").fetchone()
                self.assertEqual(row,("zh-Hans","mes_ribbon_name_000",
                                      "卡洛斯冠军奖章","DECODED"))
                self.assertEqual(conn.execute("SELECT COUNT(*) FROM message_entries").fetchone()[0],320)
                out=root/"resources/messages/Simp_Chinese/common/ribbon.json"
                self.assertEqual(json.loads(out.read_text("utf-8"))["entries"][0]["text"],"卡洛斯冠军奖章")
                self.assertEqual(cli.decode_messages(root,conn)["skipped"],1)
                counts=cli.export_tables(root,conn,root/"_index/exports",False)
                self.assertEqual(counts["message_catalog"],320)

if __name__ == "__main__":
    unittest.main()
