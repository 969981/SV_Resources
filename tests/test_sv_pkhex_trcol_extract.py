"""Native TRCOL dependency extraction guards: synthetic source-only tests."""
import importlib.util
import csv
from pathlib import Path
import tempfile
import unittest

SCRIPT=Path(__file__).resolve().parents[1]/"scripts/Extract-SV-PKHeX-TRCOL-Packs.py"
spec=importlib.util.spec_from_file_location("sv_pkhex_trcol_extract",SCRIPT)
mod=importlib.util.module_from_spec(spec)
spec.loader.exec_module(mod)


def make_table(folder):
    path=folder/"pack_index.tsv"
    with path.open("w",newline="",encoding="utf-8") as f:
        w=csv.DictWriter(f,delimiter="\t",fieldnames=("pack_index","packed_bytes"))
        w.writeheader()
        w.writerows([
            {"pack_index":120,"packed_bytes":250},
            {"pack_index":130,"packed_bytes":600},
            {"pack_index":140,"packed_bytes":4096},
        ])
    return path


def proof(name="world/scene/field/area_1.trcol"):
    return {"source":"4.0.0-original-native-TRSCN-Havok-flatbuffer",
            "status":"RESOLVED_NATIVE_TRCOL_PACKS",
            "unresolved_count":0,
            "selected_pack_indices":[120],
            "havok_references":[
                {"source_scene":"room1.trscn","trcol_path":name,
                 "status":"FOUND_ONE_NATIVE_FILE",
                 "native_matches":[{"hash":"AABBCCDD01234567","pack_index":120,
                                    "source_virtual_path":name}]}
            ]}


class TrcolExtractionPreflightTests(unittest.TestCase):
    def test_accepts_real_schema_provenance_and_repeated_scene_reference(self):
        with tempfile.TemporaryDirectory() as tmp:
            table=make_table(Path(tmp))
            evidence=proof()
            evidence["havok_references"].append(dict(evidence["havok_references"][0]))
            packs,paths=mod.prepare(evidence,table)
            self.assertEqual(packs,[120])
            self.assertEqual(paths,{"world/scene/field/area_1.trcol":("AABBCCDD01234567",120)})

    def test_non_havok_scene_can_be_legitimately_empty(self):
        with tempfile.TemporaryDirectory() as tmp:
            table=make_table(Path(tmp))
            evidence=proof()
            evidence["havok_references"]=[]
            evidence["selected_pack_indices"]=[]
            self.assertEqual(mod.prepare(evidence,table),([],{}))

    def test_missing_or_conflicting_game_descriptor_hard_fails(self):
        with tempfile.TemporaryDirectory() as tmp:
            table=make_table(Path(tmp))
            evidence=proof()
            evidence["unresolved_count"]=1
            with self.assertRaises(ValueError):
                mod.prepare(evidence,table)
            evidence["unresolved_count"]=0
            evidence["havok_references"][0]["native_matches"][0]["hash"]="BADHASH"
            with self.assertRaises(ValueError):
                mod.prepare(evidence,table)
            evidence=proof()
            evidence["havok_references"][0]["native_matches"][0]["pack_index"]=999
            evidence["selected_pack_indices"]=[999]
            with self.assertRaises(ValueError):
                mod.prepare(evidence,table)

    def test_pack_byte_budget_must_not_be_silently_overridden(self):
        with tempfile.TemporaryDirectory() as tmp:
            table=make_table(Path(tmp))
            with self.assertRaises(ValueError):
                mod.prepare(proof(),table,max_packs=0)
            with self.assertRaises(ValueError):
                mod.prepare(proof(),table,max_packed_mib=0)

    def test_native_virtual_trcol_path_protects_against_traversal(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp)
            for name in ("","../escape.trcol","/abs.trcol",r"world\bad.trcol",
                         "a//b.trcol","a/./b.trcol","a/not-a-geometry.bin","C:/bad.trcol"):
                with self.assertRaises(ValueError):
                    mod.safe_file(root,name)
            self.assertTrue(mod.safe_file(root,"world/legit.trcol").is_relative_to(root))


if __name__=="__main__":
    unittest.main()
