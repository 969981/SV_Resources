"""Synthetic git fixtures for the SV unknown-format auditor."""
import hashlib
import json
import subprocess
import tempfile
import unittest
from pathlib import Path
from scripts.resource_pipeline import unknown_format_audit as a

def git(repo,*args):
    subprocess.run(["git",*args],cwd=repo,check=True,capture_output=True)

class AuditTests(unittest.TestCase):
    def test_missing_and_unknown_are_not_confused_with_parsed(self):
        with tempfile.TemporaryDirectory() as tmp:
            repo=Path(tmp)
            git(repo,"init","-q")
            git(repo,"config","user.name","Test")
            git(repo,"config","user.email","test@example.invalid")
            names=["chara/obj/a.trscn","chara/obj/b.bntx","chara/obj/c.bin"]
            base=repo/a.RAW_PREFIX
            for n in names:
                p=base/n
                p.parent.mkdir(parents=True,exist_ok=True)
                p.write_bytes(n.encode())
            records=[]
            for name,status in [(names[0],"INSPECTED_UNPARSED"),(names[1],"STRUCTURE_PARSED")]:
                records.append({"source":name,
                    "source_sha256":hashlib.sha256(name.encode()).hexdigest().upper(),
                    "parse_status":status,"format_candidate":"FLATBUFFER_CANDIDATE",
                    "bytes":len(name),"inspection":{"header_hex":"41424344"}})
            folder=repo/a.REPORT_PREFIX
            folder.mkdir(parents=True)
            (folder/"task-a.json").write_text(json.dumps({"input_files":2,"sources":records}))
            git(repo,"add",".")
            git(repo,"commit","-qm","fixture")
            result=a.summarize(repo,repo/"out")
            self.assertEqual(result["tracked_native_files"],3)
            self.assertEqual(result["unique_inspected_sources"],2)
            self.assertEqual(result["missing_inspection_sources"],1)
            self.assertEqual(result["status_counts"]["INSPECTED_UNPARSED"],1)
            self.assertEqual(result["status_counts"]["STRUCTURE_PARSED"],1)
            self.assertEqual(result["invalid_report_count"],0)
            self.assertEqual((repo/"out/missing_inspection_paths.txt").read_text().strip(),names[2])
            self.assertTrue((repo/"out/unknown_format_candidates.csv").is_file())

    def test_malformed_sha_report_does_not_count(self):
        with tempfile.TemporaryDirectory() as tmp:
            repo=Path(tmp)
            git(repo,"init","-q")
            git(repo,"config","user.name","Test")
            git(repo,"config","user.email","test@example.invalid")
            (repo/a.RAW_PREFIX).mkdir(parents=True)
            (repo/a.RAW_PREFIX/"a.bin").write_bytes(b"abc")
            folder=repo/a.REPORT_PREFIX
            folder.mkdir(parents=True)
            (folder/"task-bad.json").write_text(json.dumps({"input_files":1,"sources":[{
                "source":"a.bin","source_sha256":"bad",
                "parse_status":"INSPECTED_UNPARSED"}]}))
            git(repo,"add",".")
            git(repo,"commit","-qm","fixture")
            result=a.summarize(repo,repo/"out")
            self.assertEqual(result["invalid_report_count"],1)
            self.assertEqual(result["missing_inspection_sources"],1)

if __name__=="__main__":
    unittest.main()
