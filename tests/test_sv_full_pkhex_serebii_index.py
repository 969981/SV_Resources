"""Offline invariant tests for full Gen9 PKHeX+Serebii indexing."""
from pathlib import Path
import importlib.util
import unittest

SCRIPT = Path(__file__).resolve().parents[1]/"scripts"/"Build-SV-PKHeX-Serebii-Index.py"
SPEC = importlib.util.spec_from_file_location("sv_full_index",SCRIPT)
MOD = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(MOD)


class TestFullSVIndex(unittest.TestCase):
    def test_all_regions_and_terarium_general_location(self):
        self.assertEqual(MOD.region(6),"Paldea")
        self.assertEqual(MOD.region(156),"Kitakami")
        self.assertEqual(MOD.region(158),"Kitakami")
        self.assertEqual(MOD.region(174),"Blueberry")
        self.assertEqual(MOD.region(196),"Blueberry")
        self.assertEqual(MOD.region(200),"Blueberry")
        self.assertEqual(MOD.region(30001),"Unknown")

    def test_pinned_sha_and_reference_file_counts(self):
        self.assertEqual(set(MOD.SOURCE_FILES),{"wild","fixed","raid_paldea","raid_kitakami","raid_blueberry"})
        self.assertEqual(sum(v[1] for k,v in MOD.SOURCE_FILES.items() if k.startswith("raid_")),700)
        for file,count,sha in MOD.SOURCE_FILES.values():
            self.assertTrue(file.endswith(".pkl"))
            self.assertGreater(count,0)
            self.assertEqual(len(sha),64)
            self.assertEqual(sha,sha.upper())

    def test_verifiable_area_urls_and_region_index_fallback(self):
        self.assertEqual(MOD.SEREBII_AREA[156][0],"Wistful Fields")
        self.assertEqual(MOD.SEREBII_AREA[158][0],"Mossfell Confluence")
        self.assertEqual(MOD.NAMES[200],"Terarium")
        self.assertEqual(len(MOD.SEREBII_INDEX),3)
        for _,url in MOD.SEREBII_AREA.values():
            self.assertTrue(url.startswith("https://www.serebii.net/pokearth/"))

    def test_bilingual_names_columns(self):
        self.assertIn("species_name_zh",MOD.CSV)
        self.assertIn("species_name_en",MOD.CSV)
        self.assertIn("pkhex_source_sha256",MOD.CSV)
        self.assertIn("serebii_scope",MOD.CSV)
        self.assertIn("raw_json",MOD.CSV)

if __name__=="__main__":
    unittest.main()
