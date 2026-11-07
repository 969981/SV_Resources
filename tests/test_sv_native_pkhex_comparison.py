"""ROM-free tests proving native-vs-PKHeX comparison cannot fake provenance."""
import importlib.util
import json
from pathlib import Path
import struct
import tempfile
import unittest

SCRIPT=Path(__file__).resolve().parents[1]/"scripts/Compare-SV-Native-PKHeX-Encounters.py"
spec=importlib.util.spec_from_file_location("sv_native_pkhex_diff",SCRIPT)
mod=importlib.util.module_from_spec(spec)
spec.loader.exec_module(mod)


def wild(level=6):
    area=struct.pack("<HH",6,0)+struct.pack("<HBBBBBB",25,0,0,level,9,0,1)
    end=4+8+len(area)
    return b"sv"+struct.pack("<HII",1,12,end)+area


def fixed(level=60):
    return struct.pack("<HBBBBBBHHHHBBBB",
        151,0,level,3,5,0,1,12,32,0,0,6,0,0,0)


def prepare(root):
    src=root/"native-source.json"
    original=[
        {"source_virtual_path":"message/dat/English/common/place_name.dat",
         "native_sha256":"A"*64,"native_bytes":3,
         "status":"EXTRACTED_NATIVE_SHA256_VERIFIED"},
        {"source_virtual_path":"message/dat/English/common/place_name.tbl",
         "native_sha256":"B"*64,"native_bytes":5,
         "status":"EXTRACTED_NATIVE_SHA256_VERIFIED"},
    ]
    for i in range(59):
        original.append({"source_virtual_path":f"world/synthetic/source_{i}.bin",
                         "native_sha256":f"{i+1:064X}","native_bytes":i,
                         "status":"EXTRACTED_NATIVE_SHA256_VERIFIED"})
    src.write_text(json.dumps({"status":"61_NATIVE_TARGETS_EXTRACTED_SHA256_VERIFIED",
                               "targets":original}),"utf-8")
    out=root/"actual-build"
    out.mkdir()
    ref=root/"pkhex-reference"
    ref.mkdir()
    selected={mod.NAMES["wild"]:wild(),mod.NAMES["fixed"]:fixed()}
    for name,data in selected.items():
        (out/name).write_bytes(data)
        (ref/name).write_bytes(data)
    builder={
        "status":"GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES",
        "originalM2Manifest":str(src.resolve()),
        "sourceFilesActuallyRead":[
            {"path":x["source_virtual_path"],"sha256":x["native_sha256"],
             "bytes":x["native_bytes"],"verifiedByOriginalM2Manifest":True}
            for x in original[:2]],
        "unverifiedExtraFiles":[],
        "generated":[{"name":name,"bytes":len(data),"sha256":mod.sha(data)}
                     for name,data in selected.items()],
    }
    evidence=out/"native-encounter-build.json"
    evidence.write_text(json.dumps(builder),"utf-8")
    return src,evidence,out,ref,builder


class NativeSVComparisonTests(unittest.TestCase):
    def test_actual_original_provenance_required(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp)
            src,evidence,out,ref,built=prepare(root)
            source=json.loads(src.read_text("utf-8"))
            mod.validate(source,built,src)
            source["status"]="REFERENCE_ONLY"
            with self.assertRaises(ValueError):
                mod.validate(source,built,src)
            source["status"]="61_NATIVE_TARGETS_EXTRACTED_SHA256_VERIFIED"
            built["status"]="NOT_NATIVE"
            with self.assertRaises(ValueError):
                mod.validate(source,built,src)

    def test_byte_exact_native_wild_and_fixed_but_partial_coverage(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp)
            src,evidence,out,ref,_=prepare(root)
            result=mod.compare(src,evidence,out,ref,root/"diff")
            self.assertEqual(result["tables"]["wild"]["status"],"EXACT_BINARY_MATCH")
            self.assertEqual(result["tables"]["fixed"]["status"],"EXACT_BINARY_MATCH")
            self.assertEqual(result["tables"]["wild"]["native_areas"],1)
            self.assertEqual(result["tables"]["wild"]["reference_areas"],1)
            self.assertEqual(result["tables"]["raid_paldea"]["status"],"NOT_GENERATED_FROM_NATIVE")
            self.assertEqual(result["status"],"NATIVE_TABLES_MATCH_BYTE_FOR_BYTE_BUT_PARTIAL_LEGALITY_COVERAGE")
            self.assertTrue((root/"diff/native-comparison.json").exists())

    def test_field_mismatch_detects_exact_native_difference(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp)
            src,evidence,out,ref,built=prepare(root)
            mutated=wild(level=7)
            (out/mod.NAMES["wild"]).write_bytes(mutated)
            built["generated"][0]["sha256"]=mod.sha(mutated)
            evidence.write_text(json.dumps(built),"utf-8")
            result=mod.compare(src,evidence,out,ref,root/"diff")
            r=result["tables"]["wild"]
            self.assertEqual(r["status"],"FIELD_LEVEL_DIFFERENCES")
            self.assertEqual(r["reference_only"],1)
            self.assertEqual(r["native_only"],1)
            self.assertEqual(r["field_changes_in_unambiguous_pairs"],{"level_min":1})
            self.assertTrue((root/"diff/wild_native_only.csv").exists())

    def test_unauthorized_pkhex_copy_rejected_without_evidence(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp)
            src,evidence,out,ref,built=prepare(root)
            built["generated"][0]["sha256"]="0"*64
            evidence.write_text(json.dumps(built),"utf-8")
            with self.assertRaises(ValueError):
                mod.compare(src,evidence,out,ref,root/"diff")
            built["generated"][0]["sha256"]=mod.sha(wild())
            built["sourceFilesActuallyRead"][0]["sha256"]="F"*64
            evidence.write_text(json.dumps(built),"utf-8")
            with self.assertRaises(ValueError):
                mod.compare(src,evidence,out,ref,root/"diff")

    def test_native_raid_binary_still_compares_if_collision_is_missing(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp)
            src,evidence,out,ref,built=prepare(root)
            raid=struct.pack("<HBBBBBBHHHHBBBBhh",
                150,0,1,2,5,1,75,33,45,85,99,12,7,6,10,-1,100)
            name=mod.NAMES["raid_paldea"]
            (out/name).write_bytes(raid)
            (ref/name).write_bytes(raid)
            built["generated"]=[{"name":name,"bytes":len(raid),"sha256":mod.sha(raid)}]
            built["status"]="GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES_PARTIAL"
            built["collisionBlocker"]="MISSING_ORIGINAL_NATIVE_ASSET: field/area/havok.trcol"
            evidence.write_text(json.dumps(built),"utf-8")
            outcome=mod.compare(src,evidence,out,ref,root/"diff")
            self.assertEqual(outcome["tables"]["raid_paldea"]["status"],"EXACT_BINARY_MATCH")
            self.assertEqual(outcome["tables"]["wild"]["status"],"NOT_GENERATED_FROM_NATIVE")
            self.assertEqual(outcome["tables"]["fixed"]["status"],"NOT_GENERATED_FROM_NATIVE")
            self.assertEqual(outcome["status"],"NATIVE_TABLES_MATCH_BYTE_FOR_BYTE_BUT_PARTIAL_LEGALITY_COVERAGE")

    def test_preserves_multiplicity_and_ignores_order(self):
        orig=[{"location_id":6,"cross_from_id":0,"species_national":25,
               "form_raw":0,"gender_raw":0,"level_min":5,"level_max":9,
               "time_forbidden_mask":0,"weather_allowed_mask":1,
               "area_index":0,"slot_index":i} for i in range(2)]
        changed=[orig[1],orig[0]]
        self.assertTrue(mod.interpret(orig,changed,"wild")["semantic_exact"])
        self.assertEqual(mod.interpret(orig,changed[:1],"wild")["reference_only"],1)


if __name__=="__main__":
    unittest.main()
