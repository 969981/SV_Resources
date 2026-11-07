"""No-network tests for Serebii encounter review queue evidence levels."""
from pathlib import Path
import importlib.util
import unittest

PATH=Path(__file__).resolve().parents[1]/"scripts"/"Build-SV-Serebii-Review-Queue.py"
SPEC=importlib.util.spec_from_file_location("serebii_queue",PATH)
MODULE=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(MODULE)


class QueuePolicyTests(unittest.TestCase):
    def test_listed_is_still_level_unchecked(self):
        a,p=MODULE.classify("LISTED",156,"wild")
        self.assertEqual(a,"SPECIES_LISTED_LEVEL_UNCHECKED")
        self.assertEqual(p,"HIGH")
    def test_not_listed_does_not_mean_illegal(self):
        a,p=MODULE.classify("NOT_LISTED",158,"wild")
        self.assertNotIn("ILLEGAL",a)
        self.assertEqual(p,"HIGH")
    def test_event_reference_not_current_availability(self):
        a,p=MODULE.classify("CATEGORY_INDEX_ONLY",None,"mighty_tera_raid")
        self.assertEqual(a,"EVENT_CATALOGUE_ONLY_NOT_ROW_VERIFIED")
    def test_unreviewed_is_explicit(self):
        a,p=MODULE.classify("NOT_REVIEWED",22,"fixed")
        self.assertEqual(a,"NOT_REVIEWED")
    def test_urgency_of_original_native_delta_locations(self):
        self.assertEqual(MODULE.classify("NOT_REVIEWED",156,"wild")[1],"HIGH")
        self.assertEqual(MODULE.classify("NOT_REVIEWED",158,"fixed")[1],"HIGH")


if __name__=="__main__":
    unittest.main()
