"""Original Gen9 collision-source trace cryptographic provenance safeguards."""
from pathlib import Path
import importlib.util
import unittest

PATH=Path(__file__).resolve().parents[1]/"scripts"/"Verify-SV-Fixed-158-Collision-Sources.py"
SPEC=importlib.util.spec_from_file_location("fixed_source",PATH)
M=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(M)

class NativeCollisionTests(unittest.TestCase):
    def sources(self):
        return {
          "world/test/worldend.trscn":{"sha256":"A"*64,"verifiedByOriginalM2Manifest":True},
          "world/collision/a.trcol":{"sha256":"B"*64,"verifiedByOriginalM2Manifest":True},
        }

    def test_havok_scene_and_trcol_are_both_original_sha_verified(self):
        source=dict(TrscnPath="world/test/worldend.trscn",CollisionKind="HAVOK_TRCOL",
                    TrcolPath="world/collision/a.trcol",TrcolSha256="B"*64,
                    BoxPosition=None,BoxSize=None)
        self.assertEqual(M.verify_collision(source,self.sources())["CollisionKind"],"HAVOK_TRCOL")
        with self.assertRaises(ValueError):
            M.verify_collision(dict(source,TrcolSha256="C"*64),self.sources())

    def test_box_is_not_a_fake_trcol(self):
        source=dict(TrscnPath="world/test/worldend.trscn",CollisionKind="BOX",
                    TrcolPath="",TrcolSha256="",BoxPosition="(0,0,0)",BoxSize="(1,1,1)")
        self.assertEqual(M.verify_collision(source,self.sources())["CollisionKind"],"BOX")
        with self.assertRaises(ValueError):
            M.verify_collision(dict(source,TrcolPath="world/collision/a.trcol"),self.sources())

    def test_unverified_scene_is_rejected(self):
        s=self.sources()
        s["world/test/worldend.trscn"]["verifiedByOriginalM2Manifest"]=False
        with self.assertRaises(ValueError):
            M.verify_collision(dict(TrscnPath="world/test/worldend.trscn",
                CollisionKind="BOX",TrcolPath="",TrcolSha256=""),s)

    def test_case_count_is_source_driven_not_reference_guess(self):
        self.assertIn("NOT_GAME_RNG",M.STATUS)

if __name__=="__main__":
    unittest.main()
