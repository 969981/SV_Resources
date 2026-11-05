"""Native R3 dependency proof and R4 incremental state tests (no asset publishing)."""
from pathlib import Path
import hashlib
import json
import os
import shutil
import struct
import sys
import tempfile
import unittest

REPO=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(REPO))
from scripts.resource_pipeline import cli, r3_objects as r3, r4_pipeline as r4

NATIVE=REPO/"Unpack/4.0.0/romfs/arc/data.trpfs/virtual/chara/model_pc/p0_bag0000_schoolbackpack"
STEM="p0_bag0000_00_bag00"
REL=Path("chara/model_pc/p0_bag0000_schoolbackpack")/(STEM+".trmdl")

class R3R4Tests(unittest.TestCase):
    def native(self):
        if not (NATIVE/(STEM+".trmdl")).is_file():
            if os.environ.get("SV_REQUIRE_NATIVE_FIXTURES")=="1":
                self.fail("Native backpack model fixture missing: "+str(NATIVE))
            self.skipTest("Native model fixture omitted by sparse checkout")
        return NATIVE

    def test_native_trmdl_and_trmsh(self):
        path=self.native()
        info=r3.parse_trmdl((path/(STEM+".trmdl")).read_bytes())
        self.assertEqual(info["meshes"],[
            STEM+".trmsh",
            STEM+"_lod1.trmsh",
            STEM+"_lod2.trmsh"])
        self.assertEqual(info["skeleton"],STEM+".trskl")
        self.assertEqual(info["materials"],[STEM+".trmtr"])
        self.assertTrue(info["lods"])
        for suffix in (".trmsh","_lod1.trmsh","_lod2.trmsh"):
            self.assertEqual(r3.parse_trmsh_buffer(
                (path/(STEM+suffix)).read_bytes()),
                STEM+suffix.replace(".trmsh",".trmbf"))
        known={(REL.parent/entry.name).as_posix() for entry in path.iterdir() if entry.is_file()}
        graph=r3.classify_model(REL.as_posix(),REPO/"Unpack/4.0.0/romfs/arc/data.trpfs/virtual",known)
        self.assertEqual(graph["missing_required"],[])
        self.assertEqual(graph["structural_status"],"COMPLETE_REFERENCES")
        declared=[x for x in graph["dependencies"] if x["evidence"]=="TRMSH"]
        self.assertEqual(len(declared),3)
        self.assertTrue(all(x["exists"] for x in declared))
        self.assertTrue(all(x["path"].endswith(".trmbf") for x in declared))

    def test_binary_parse_rejects_damage_and_traversal(self):
        self.native()
        raw=(NATIVE/(STEM+".trmdl")).read_bytes()
        with self.assertRaises(ValueError):
            r3.parse_trmdl(raw[:30])
        with self.assertRaises(ValueError):
            r3.parse_trmdl(b"\xFF"*100)
        for bad in ("../bad.trmsh","a/../../bad","/absolute","a\\b.trmbf"):
            with self.assertRaises(ValueError):
                r3.checked_relative(bad)

    def test_validation_requires_real_buffers_and_skin(self):
        with tempfile.TemporaryDirectory() as t:
            folder=Path(t)
            path=folder/"toy.gltf"
            binpath=folder/"toy.bin"
            binpath.write_bytes(bytes(64))
            document={
                "asset":{"version":"2.0"},
                "buffers":[{"uri":"toy.bin","byteLength":64}],
                "bufferViews":[{"buffer":0,"byteOffset":0,"byteLength":36}],
                "accessors":[{"bufferView":0,"componentType":5126,"count":3,"type":"VEC3"}],
                "nodes":[{"mesh":0}],
                "meshes":[{"primitives":[{"attributes":{"POSITION":0}}]}],
                "scenes":[{"nodes":[0]}],"scene":0
            }
            path.write_text(json.dumps(document),encoding="utf-8")
            result=r3.validate_gltf(path)
            self.assertEqual(result["primitive_count"],1)
            self.assertEqual(result["visual"],"NOT_REVIEWED")
            with self.assertRaises(ValueError):
                r3.validate_gltf(path,require_skin=True)
            with self.assertRaises(ValueError):
                r3.validate_gltf(path,require_animations=True)
            document["meshes"][0]["primitives"][0]["attributes"]["POSITION"]=55
            path.write_text(json.dumps(document),encoding="utf-8")
            with self.assertRaises(ValueError):
                r3.validate_gltf(path)

    def test_resume_retry_and_fingerprint(self):
        source=self.native()
        with tempfile.TemporaryDirectory() as t:
            root=Path(t)/"data.trpfs"
            native=root/"virtual"/REL.parent
            native.mkdir(parents=True)
            (root/"_index").mkdir()
            for file in source.iterdir():
                if file.is_file() and file.suffix.lower() in r4.EXTS:
                    shutil.copy2(file,native/file.name)
            with cli.connect(root/"_index"/"resource_catalog.sqlite") as conn:
                r4.apply_schema(conn)
                first=r4.process(root,conn,REPO,discover=True,tool_sha="FAKE_SHA")
                self.assertEqual(first["counts"]["parsed"],1,first)
                self.assertEqual(first["counts"]["blocked"],1,first)
                self.assertEqual(first["counts"]["failed"],0,first)
                row=conn.execute("SELECT fingerprint,attempts FROM r4_object_jobs").fetchone()
                self.assertEqual(row[1],1)
                count=conn.execute("SELECT COUNT(*) FROM r4_object_dependencies").fetchone()[0]
                self.assertGreaterEqual(count,10)
                counts=cli.export_tables(root,conn,root/"_index"/"exports",False)
                self.assertEqual(counts["r4_object_jobs"],1)
                self.assertGreaterEqual(counts["r4_object_dependencies"],10)
                self.assertTrue((root/"_index/exports/r4_job_summary.csv").exists())
                second=r4.process(root,conn,REPO,discover=True,tool_sha="FAKE_SHA")
                self.assertEqual(second["counts"]["skipped"],1,second)
                self.assertEqual(conn.execute("SELECT attempts FROM r4_object_jobs").fetchone()[0],1)
                third=r4.process(root,conn,REPO,discover=True,resume=True,
                                 retry_failed=True,tool_sha="FAKE_SHA")
                self.assertEqual(third["counts"]["blocked"],1,third)
                self.assertEqual(conn.execute("SELECT attempts FROM r4_object_jobs").fetchone()[0],2)
                mesh=native/(STEM+".trmsh")
                mesh.write_bytes(mesh.read_bytes()+b"\x00")
                fourth=r4.process(root,conn,REPO,discover=True,tool_sha="FAKE_SHA")
                self.assertEqual(fourth["counts"]["blocked"],1,fourth)
                row2=conn.execute("SELECT fingerprint,attempts FROM r4_object_jobs").fetchone()
                self.assertNotEqual(row[0],row2[0])
                self.assertEqual(row2[1],1)
                assert (root/"parsed"/(str(REL)+".object.json")).exists()
                packs=r4.pack_reports(root,root/"_index/r4-archives",1)
                self.assertEqual(len(packs["archives"]),1)
                self.assertTrue(packs["no_game_assets"])


    def test_explicit_animation_map_provenance(self):
        with tempfile.TemporaryDirectory() as tmp:
            path=Path(tmp)/"map.json"
            filename=REL.as_posix()
            selected="pokemon/data/pm0025/pm0025_00_00/pm0025_00_00_00000_defaultwait01_loop.tranm"
            path.write_text(json.dumps({filename:[selected,selected]}),encoding="utf-8")
            self.assertEqual(r4.load_animation_map(path),{filename:[selected]})
            path.write_text(json.dumps({filename:["../unsafe.tranm"]}),encoding="utf-8")
            with self.assertRaises(ValueError):
                r4.load_animation_map(path)
            path.write_text(json.dumps({filename:["safe.txt"]}),encoding="utf-8")
            with self.assertRaises(ValueError):
                r4.load_animation_map(path)

    def test_no_unreviewed_promotion(self):
        with tempfile.TemporaryDirectory() as t:
            gltf=Path(t)/"toy.gltf"
            gltf.write_text('{"asset":{"version":"2.0"}}',encoding="utf-8")
            quality={"gltf_sha256":hashlib.sha256(gltf.read_bytes()).hexdigest().upper(),
                     "visual":"NOT_REVIEWED"}
            approval=Path(t)/"approval.json"
            approval.write_text(json.dumps({
                "object":"example.trmdl","fingerprint":"ABCD","gltf_sha256":quality["gltf_sha256"],
                "reviewer":"reviewer","evidence":"inspected",
                "checks":{"materials":"PASS","uv":"PASS","lod":"PASS","skeleton":"PASS"}}))
            with self.assertRaises(ValueError):
                r4.verify_approval(approval,"example.trmdl","ABCD",quality)

if __name__=="__main__":
    unittest.main()
