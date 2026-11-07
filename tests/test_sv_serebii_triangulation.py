"""Strict, no-ROM tests for PKHeX/Serebii encounter source triangulation."""
from pathlib import Path
import importlib.util
import unittest

ROOT = Path(__file__).resolve().parents[1]
FILE = ROOT / "scripts" / "Triangulate-SV-PKHeX-Serebii.py"
SPEC = importlib.util.spec_from_file_location("triangulation", FILE)
TRIAGE = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(TRIAGE)
EVIDENCE = ROOT / "data" / "reference" / "sv400-serebii-selected-locations.json"


class SerebiiTriangulationTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        _, cls.locations = TRIAGE.load_facts(EVIDENCE)

    def test_location_id_mapping(self):
        self.assertEqual(self.locations[156]["name"], "Wistful Fields")
        self.assertEqual(self.locations[158]["name"], "Mossfell Confluence")

    def test_five_pkhex_crossover_flips_receive_cautious_labels(self):
        for species, expected in (
            (23,"BOTH_AREA_ROSTERS_LIST_SPECIES_CROSSOVER_NOT_VERIFIED"),
            (24,"ONLY_SOURCE_AREA_ROSTER_LISTS_SPECIES_CROSSOVER_NOT_VERIFIED"),
            (214,"ONLY_SOURCE_AREA_ROSTER_LISTS_SPECIES_CROSSOVER_NOT_VERIFIED"),
            (273,"ONLY_SOURCE_AREA_ROSTER_LISTS_SPECIES_CROSSOVER_NOT_VERIFIED"),
            (274,"ONLY_SOURCE_AREA_ROSTER_LISTS_SPECIES_CROSSOVER_NOT_VERIFIED"),
        ):
            row = {"family":"wild_kitakami_native_only_crossover", "species":str(species),
                   "met_location":"156"}
            self.assertEqual(TRIAGE.classify(row,self.locations)["serebii_evidence"],expected)

    def test_serebii_presence_is_not_exact_fixed_template_proof(self):
        row = {"family":"fixed_added_location_158","met_location":"158","species":"23"}
        self.assertEqual(TRIAGE.classify(row,self.locations)["serebii_evidence"],
                         "SEREBII_FIXED_SPECIES_PRESENT_EXACT_TEMPLATE_NOT_VERIFIED")

    def test_serebii_absence_does_not_become_illegal_verdict(self):
        row = {"family":"fixed_added_location_158","met_location":"158","species":"25"}
        self.assertEqual(TRIAGE.classify(row,self.locations)["serebii_evidence"],
                         "NO_LISTING_FOR_REVIEWED_SPECIES_NOT_PROOF_OF_ILLEGALITY")

    def test_wild_level_is_not_validated_by_species_roster(self):
        row = {"family":"wild_native_new_max_level","met_location":"156","species":"532"}
        self.assertEqual(TRIAGE.classify(row,self.locations)["serebii_evidence"],
                         "SEREBII_SPECIES_PRESENT_LEVEL_NOT_CHECKED")

    def test_nonreviewed_species_is_unknown(self):
        self.assertEqual(TRIAGE.member(self.locations,158,999,"fixed"),"NOT_REVIEWED")
        self.assertEqual(TRIAGE.member(self.locations,123,23,"standard"),"NOT_REVIEWED")


if __name__ == "__main__":
    unittest.main()
