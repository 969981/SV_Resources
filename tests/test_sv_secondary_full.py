"""No-ROM regression for deterministic full-sweep planning and safety."""
from pathlib import Path
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
                                              "status":"ATTEMPTED"}
        remaining=fs.select_batch(tasks,state,10,10)
        self.assertEqual(len(remaining),1)
        newrows=[(p,"9"*40 if p.endswith("a.dat") else sha) for p,sha in rows]
        changed=fs.build_tasks(newrows,2)
        self.assertEqual(len(fs.select_batch(changed,state,10,10)),2)

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
