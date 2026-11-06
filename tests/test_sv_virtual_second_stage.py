"""Unit tests for bounded second-stage virtual processing (synthetic bytes)."""
import json
from contextlib import closing
from pathlib import Path
import struct
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from scripts.resource_pipeline import cli, process_virtual as pv, full_secondary as fs


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


class FullSweepCompactionTests(unittest.TestCase):
    def test_compacts_never_attempted_singleton_leaves_with_exact_paths(self):
        rows = [(f"appli/tex/icon_ribbon/item_{i:04d}/texture.bin", "A" * 40)
                for i in range(142)]
        leaves = fs.build_tasks(rows, 1000)
        self.assertEqual(len(leaves), 142)
        compacted = fs.compact_never_attempted(leaves, {"attempted": {}})
        self.assertEqual(sorted(t["file_count"] for t in compacted), [14, 64, 64])
        self.assertEqual(sorted(p for t in compacted for p in t["paths"]),
                         sorted(p for p, _ in rows))
        self.assertTrue(all(t["id"].startswith("__full_rollup__/") for t in compacted))

    def test_checkpointed_leaf_and_rollup_keep_their_ids(self):
        rows = [(f"chara/obj/body/entry_{i:04d}/scene.trscn", "B" * 40)
                for i in range(75)]
        leaves = fs.build_tasks(rows, 1000)
        leaf = leaves[0]
        state = {"attempted": {leaf["id"]: {
            "fingerprint": leaf["fingerprint"], "status": "ATTEMPTED",
            "parsed_records": 1, "hash_mismatches": 0,
        }}}
        first = fs.compact_never_attempted(leaves, state)
        self.assertTrue(any(t["id"] == leaf["id"] for t in first))
        self.assertEqual(sorted(p for t in first for p in t["paths"]),
                         sorted(p for p, _ in rows))
        rollup = next(t for t in first if t["id"].startswith("__full_rollup__/"))
        state["attempted"][rollup["id"]] = {
            "fingerprint": rollup["fingerprint"], "status": "ATTEMPTED",
            "parsed_records": rollup["file_count"], "hash_mismatches": 0,
        }
        second = fs.compact_never_attempted(leaves, state)
        self.assertEqual([(t["id"], t["fingerprint"]) for t in first],
                         [(t["id"], t["fingerprint"]) for t in second])
        self.assertTrue(fs.is_terminal(rollup, state))

    def test_high_expansion_message_catalogs_are_not_compacted(self):
        rows = [(f"message/dat/English/common/entry_{i:03d}/file.dat", "C" * 40)
                for i in range(10)]
        leaves = fs.build_tasks(rows, 1000)
        result = fs.compact_never_attempted(leaves, {"attempted": {}})
        self.assertEqual([t["id"] for t in leaves], [t["id"] for t in result])



class CandidateSignatureTests(unittest.TestCase):
    def test_signatures_are_classified_but_not_claimed_decoded(self):
        with tempfile.TemporaryDirectory() as td:
            src = Path(td) / "candidate.bin"
            for head, label in ((b"BNSH", "BNSH_SHADER"),
                                (b"SARC", "SARC_ARCHIVE"),
                                (b"FRES", "BFRES_CONTAINER")):
                src.write_bytes(head + bytes(60))
                fmt, _, confidence, parser_status = cli.detect(src, ".bin")
                self.assertEqual(fmt, label)
                self.assertEqual(confidence, "CONFIRMED")
                self.assertEqual(parser_status, "PENDING_DECODER")

    def test_documented_trinity_extensions_are_only_candidates(self):
        with tempfile.TemporaryDirectory() as td:
            for ext in (".trmtr", ".trmmt", ".trscn", ".trs"):
                src = Path(td) / ("fixture" + ext)
                src.write_bytes(bytes(64))
                fmt, _, confidence, parser_status = cli.detect(src, ext)
                self.assertEqual(fmt, "FLATBUFFER_CANDIDATE")
                self.assertEqual(confidence, "CANDIDATE")
                self.assertEqual(parser_status, "PENDING_SCHEMA")



if __name__ == "__main__":
    unittest.main()
