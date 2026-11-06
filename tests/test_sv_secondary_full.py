"""No-ROM regression for deterministic full-sweep planning and safety."""
from pathlib import Path
import subprocess
import tempfile
from unittest import mock
import sys
import unittest

REPO = Path(__file__).resolve().parents[1]
sys.path.insert(0,str(REPO))
from scripts.resource_pipeline import full_secondary as fs


class FullSecondaryTests(unittest.TestCase):
    def test_pairs_and_deterministic_shards(self):
        rows=[
            ("message/dat/English/common/itemname.dat","a"*40),
            ("message/dat/English/common/itemname.tbl","b"*40),
            ("message/dat/English/common/monsname.dat","c"*40),
            ("message/dat/English/common/monsname.tbl","d"*40),
            ("appli/tex/icon_ribbon/a/a.bntx","e"*40),
            ("pokemon/data/pm0025/test/test.trmdl","f"*40),
            ("pokemon/data/pm0025/test/test.trmsh","1"*40),
            ("pokemon/data/pm0025/test/test.trmbf","2"*40),
        ]
        first=fs.build_tasks(rows,2)
        second=fs.build_tasks(list(reversed(rows)),2)
        self.assertEqual(first,second)
        self.assertEqual(sum(x["file_count"] for x in first),len(rows))
        self.assertEqual(len({p for x in first for p in x["paths"]}),len(rows))
        self.assertEqual(first[0]["prefix"],"message/dat/English/common")
        dat_groups=[t for t in first if t["prefix"].startswith("message/dat/")]
        self.assertEqual([len(t["paths"]) for t in dat_groups],[2,2])
        self.assertTrue(any(all(p.endswith(("itemname.dat","itemname.tbl")) for p in x["paths"])
                            for x in dat_groups))

    def test_resume_after_attempted_fingerprint(self):
        rows=[("message/dat/English/common/a.dat","a"*40),
              ("message/dat/English/common/a.tbl","b"*40),
              ("pokemon/data/test/test.trmdl","c"*40)]
        tasks=fs.build_tasks(rows,2)
        state={"attempted":{}}
        chosen=fs.select_batch(tasks,state,1,2)
        self.assertEqual(len(chosen),1)
        state["attempted"][chosen[0]["id"]]={"fingerprint":chosen[0]["fingerprint"],
                                              "status":"ATTEMPTED",
                                              "parsed_records":chosen[0]["file_count"]}
        remaining=fs.select_batch(tasks,state,10,10)
        self.assertEqual(len(remaining),1)
        newrows=[(p,"9"*40 if p.endswith("a.dat") else sha) for p,sha in rows]
        changed=fs.build_tasks(newrows,2)
        self.assertEqual(len(fs.select_batch(changed,state,10,10)),2)

    def test_error_retry_budget_and_changed_fingerprint(self):
        task = {"id": "broken#00000", "fingerprint": "original", "file_count": 5}
        state = {"attempted": {
            task["id"]: {"fingerprint": "original", "status": "ERROR",
                         "error_attempts": 1}}}
        self.assertEqual(fs.select_batch([task], state, 2, 10), [task])
        state["attempted"][task["id"]]["error_attempts"] = fs.MAX_ERROR_ATTEMPTS
        self.assertEqual(fs.select_batch([task], state, 2, 10), [])
        changed = dict(task, fingerprint="new-source-fingerprint")
        self.assertEqual(fs.select_batch([changed], state, 2, 10), [changed])

    def test_partial_retries_are_bounded_but_remain_unresolved(self):
        task = {"id": "partial#00000", "fingerprint": "source", "file_count": 4}
        row = {"fingerprint": "source", "status": "PARTIAL",
               "parsed_records": 4, "partial_attempts": 1, "unresolved": 3}
        state = {"attempted": {task["id"]: row}}
        self.assertFalse(fs.is_terminal(task, state))
        self.assertEqual(fs.select_batch([task], state, 1, 4), [task])
        row["partial_attempts"] = fs.MAX_PARTIAL_ATTEMPTS
        self.assertTrue(fs.is_terminal(task, state))
        self.assertEqual(fs.select_batch([task], state, 1, 4), [])
        self.assertEqual(row["status"], "PARTIAL")
        self.assertFalse(fs.is_terminal(dict(task, fingerprint="new"), state))

    def test_legacy_attempted_without_inspection_is_revisited(self):
        task = {"id": "legacy#00000", "fingerprint": "source", "file_count": 2}
        state = {"attempted": {task["id"]: {
            "fingerprint": "source", "status": "ATTEMPTED"}}}
        self.assertFalse(fs.is_terminal(task, state))
        state["attempted"][task["id"]]["parsed_records"] = 1
        self.assertFalse(fs.is_terminal(task, state))
        state["attempted"][task["id"]]["parsed_records"] = 2
        self.assertTrue(fs.is_terminal(task, state))

    def test_new_flatc_schema_replays_only_prior_unsupported_files(self):
        # The decoder upgrade must not rewrite the full native sweep:
        # already-inspected schema candidates are retried exactly once.
        row={"fingerprint":"sha","status":"ATTEMPTED","parsed_records":1,
             "inspected_unparsed":1,"hash_mismatches":0}
        prior={"attempted":{"schema#00000":row}}
        candidate={"id":"schema#00000","fingerprint":"sha","file_count":1,
                   "paths":["pokemon/data/pm0128/clip.tranm"]}
        self.assertFalse(fs.is_terminal(candidate,prior))
        row["schema_decoder_epoch"]=fs.SCHEMA_DECODER_EPOCH
        self.assertTrue(fs.is_terminal(candidate,prior))
        row.pop("schema_decoder_epoch")
        unknown=dict(candidate,paths=["pokemon/data/pm0128/mystery.xyz"])
        self.assertTrue(fs.is_terminal(unknown,prior))
        row["inspected_unparsed"]=0
        self.assertTrue(fs.is_terminal(candidate,prior))

    def test_exhausted_partial_schema_candidate_can_revisit_after_decoder_upgrade(self):
        task={"id":"partial#00000","fingerprint":"sha","file_count":1,
              "paths":["pokemon/data/pm0128/material.trmtr"]}
        row={"fingerprint":"sha","status":"PARTIAL","parsed_records":1,
             "partial_attempts":fs.MAX_PARTIAL_ATTEMPTS,
             "inspected_unparsed":1}
        state={"attempted":{task["id"]:row}}
        self.assertFalse(fs.is_terminal(task,state))
        row["schema_decoder_epoch"]=fs.SCHEMA_DECODER_EPOCH
        self.assertTrue(fs.is_terminal(task,state))

    def test_windows_sparse_checkout_missing_files_are_restored(self):
        # Reproduce Git reporting success without materializing a selected path.
        with tempfile.TemporaryDirectory() as temp:
            repo=Path(temp)
            def git(*args):
                return subprocess.run(["git",*args],cwd=repo,check=True,
                                      capture_output=True,text=True)
            git("init","-q")
            git("config","user.name","CI")
            git("config","user.email","ci@example.invalid")
            relative="message/dat/English/common/another_name.dat"
            source=repo/fs.ROOT/"virtual"/relative
            source.parent.mkdir(parents=True)
            source.write_bytes(b"DAT/TBL fixture")
            git("add",".")
            git("commit","-qm","fixture")
            git("sparse-checkout","init","--no-cone")
            git("sparse-checkout","set","scripts/resource_pipeline")
            self.assertFalse(source.exists())
            selection={"selected":[{"prefix":"message/dat/English/common","paths":[relative]}]}
            real_run=subprocess.run
            def simulate_sparse_no_materialization(command,*args,**kwargs):
                if command and command[0]=="git" and "sparse-checkout" in command:
                    # Simulate cone-mode also returning success without hydrating.
                    return subprocess.CompletedProcess(command,0)
                return real_run(command,*args,**kwargs)
            with mock.patch.object(fs.subprocess,"run",
                                   side_effect=simulate_sparse_no_materialization):
                result=fs.materialize_selected(repo,selection)
            self.assertTrue(source.is_file())
            self.assertEqual(source.read_bytes(),b"DAT/TBL fixture")
            self.assertEqual(result["recovered_sparse_missing"],1)
            self.assertEqual(result["verified_local_paths"],1)

    def test_bounded_parent_hydration_with_real_git_sparse(self):
        with tempfile.TemporaryDirectory() as temp:
            repo=Path(temp)
            def git(*args):
                subprocess.run(["git",*args],cwd=repo,check=True,
                               capture_output=True,text=True)
            git("init","-q")
            git("config","user.name","CI")
            git("config","user.email","ci@example.invalid")
            folder="message/dat/English/common"
            files=[folder+"/another_name.dat",folder+"/another_name.tbl"]
            for item in files:
                path=repo/fs.ROOT/"virtual"/item
                path.parent.mkdir(parents=True,exist_ok=True)
                path.write_bytes(item.encode())
            git("add",".")
            git("commit","-qm","fixture")
            git("sparse-checkout","init","--no-cone")
            git("sparse-checkout","set","scripts/resource_pipeline")
            self.assertFalse((repo/fs.ROOT/"virtual"/files[0]).exists())
            result=fs.materialize_selected(repo,{
                "selected":[{"prefix":folder,"paths":files}]
            })
            self.assertEqual(result["verified_local_paths"],2)
            self.assertEqual(result["bounded_parent_patterns"],1)
            self.assertEqual(result["exact_file_patterns"],0)
            for item in files:
                self.assertEqual((repo/fs.ROOT/"virtual"/item).read_bytes(),
                                 item.encode())

    def test_batch_backfills_small_groups_around_large_siblings(self):
        tasks=[
            {"id":"big-a","fingerprint":"A","file_count":1200},
            {"id":"big-b","fingerprint":"B","file_count":1200},
            {"id":"small-c","fingerprint":"C","file_count":200},
        ]
        selected=fs.select_batch(tasks,{"attempted":{}},3,1500)
        self.assertEqual([t["id"] for t in selected],["big-a","small-c"])
        self.assertEqual(sum(t["file_count"] for t in selected),1400)

    def test_oversized_family_and_budget_guard(self):
        rows=[("pokemon/large/big.trmdl","a"*40),
              ("pokemon/large/big.trmbf","b"*40),
              ("pokemon/large/big.trmsh","c"*40)]
        t=fs.build_tasks(rows,2)
        self.assertEqual(sum(x["file_count"] for x in t),3)
        self.assertTrue(all(x["file_count"]<=2 for x in t))
        with self.assertRaises(ValueError):
            fs.select_batch(fs.build_tasks(rows,3),{"attempted":{}},10,2)


if __name__=="__main__":
    unittest.main()
