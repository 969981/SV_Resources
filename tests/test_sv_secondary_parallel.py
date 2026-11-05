"""Synthetic end-to-end parallel worker / isolated-SQLite tests (no game assets)."""
import hashlib
import json
from pathlib import Path
import struct
import sys
import tempfile
import unittest

REPO=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(REPO))
from scripts.resource_pipeline import parallel_secondary as par, full_secondary as fs


def tbl(label):
    raw=label.encode("utf-8")+b"\0"
    return b"AHTB"+struct.pack("<I",1)+struct.pack("<QH",0x123456789ABCDEF0,len(raw))+raw


class ParallelSecondaryTests(unittest.TestCase):
    def test_two_workers_use_separate_db_and_publish_distinct_outputs(self):
        with tempfile.TemporaryDirectory() as tmp:
            repo=Path(tmp)
            root=repo/fs.ROOT
            folder="message/dat/English/common"
            tasks=[]
            for name in ("first","second"):
                rel=folder+"/"+name+".tbl"
                path=root/"virtual"/rel
                path.parent.mkdir(parents=True,exist_ok=True)
                path.write_bytes(tbl(name))
                tasks.append({"id":folder+"#"+name,
                              "fingerprint":hashlib.sha256(rel.encode()).hexdigest().upper(),
                              "prefix":folder,"paths":[rel],"file_count":1})
            plan=root/fs.SELECTION_NAME
            plan.parent.mkdir(parents=True,exist_ok=True)
            plan.write_text(json.dumps({"selected":tasks}),encoding="utf-8")
            result=par.main_run(repo,max_workers=2,png="",model="",output_mb=5)
            self.assertEqual(result["error_count"],0,result)
            self.assertEqual(result["completed_count"],2,result)
            self.assertEqual(result["input_files"],2)
            self.assertFalse((repo/".sv-secondary-work"/par.task_slug(tasks[0])).exists())
            for name in ("first","second"):
                out=root/"parsed"/folder/(name+".labels.json")
                csv=root/"converted"/folder/(name+".labels.csv")
                self.assertEqual(json.loads(out.read_text())["entries"][0]["label"],name)
                self.assertTrue(csv.is_file())
            state=json.loads((root/fs.STATE_NAME).read_text())
            self.assertEqual(len(state["attempted"]),2)
            pub=json.loads((repo/"sv-secondary-publication.json").read_text())
            self.assertEqual(pub["completed_tasks"],2)
            self.assertTrue(all((repo/x).exists() for x in pub["paths"]))

    def test_failed_worker_is_checkpointed_and_bounded(self):
        with tempfile.TemporaryDirectory() as tmp:
            repo = Path(tmp)
            root = repo / fs.ROOT
            task = {"id": "missing#00000", "fingerprint": "abcdef",
                    "prefix": "message/dat/English/common",
                    "paths": ["message/dat/English/common/missing.tbl"],
                    "file_count": 1}
            selection = root / fs.SELECTION_NAME
            selection.parent.mkdir(parents=True, exist_ok=True)
            selection.write_text(json.dumps({"selected": [task]}), encoding="utf-8")
            for attempt in (1, 2):
                result = par.main_run(repo, max_workers=1, png="", model="", output_mb=5)
                self.assertEqual(result["error_count"], 1)
                state = fs.load_state(repo)
                saved = state["attempted"][task["id"]]
                self.assertEqual(saved["status"], "ERROR")
                self.assertEqual(saved["error_attempts"], attempt)
                self.assertEqual(bool(fs.select_batch([task], state, 1, 5)),
                                 attempt < fs.MAX_ERROR_ATTEMPTS)

    def test_verified_copy_rejects_tampering(self):
        with tempfile.TemporaryDirectory() as temp:
            base=Path(temp)
            source=base/"original.json"
            source.write_bytes(b"{}")
            with self.assertRaises(ValueError):
                par.copy_verified(source,base/"published.json","DEADBEEF")
            self.assertFalse((base/"published.json").exists())


if __name__=="__main__":
    unittest.main()
