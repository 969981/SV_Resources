"""No-ROM guard tests for strictly original game resource injection and PK9 variant diff."""
import importlib.util, json, tempfile, unittest
from pathlib import Path

SCRIPTS=Path(__file__).resolve().parents[1]/"scripts"
def load(name):
    spec=importlib.util.spec_from_file_location(name.replace("-","_"),SCRIPTS/name)
    module=importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module
stage=load("Stage-SV-Native-PKHeX-Resources.py")
diff=load("Compare-SV-PK9-Embedded-Legality.py")

class NativeEmbeddedLegalityTests(unittest.TestCase):
    def test_original_checkout_unchanged_and_five_sha_validated(self):
        with tempfile.TemporaryDirectory() as tmp:
            root=Path(tmp);native=root/"source";native.mkdir()
            pinned=root/"pin";isolated=root/"clone"
            p=Path("PKHeX.Core/Resources/legality/wild/Gen9")
            for target in (pinned,isolated):(target/p).mkdir(parents=True)
            products=[]
            for name in stage.FILES:
                data=("native-"+name).encode()
                (native/name).write_bytes(data)
                (pinned/p/name).write_bytes(b"pinned-reference")
                (isolated/p/name).write_bytes(b"pinned-reference")
                products.append({"name":name,"bytes":len(data),"sha256":stage.sha(data)})
            proof={"status":stage.STATUS,"collisionBlocker":None,"unverifiedExtraFiles":[],"generated":products}
            (native/"native-encounter-build.json").write_text(json.dumps(proof))
            r=stage.stage(native,isolated,pinned,root/"proof.json")
            self.assertEqual(len(r["resources"]),5)
            self.assertEqual((pinned/p/stage.FILES[0]).read_bytes(),b"pinned-reference")
            self.assertEqual((isolated/p/stage.FILES[0]).read_bytes(),(native/stage.FILES[0]).read_bytes())
            with self.assertRaises(ValueError):stage.stage(native,pinned,pinned,root/"reject.json")
            products[0]["sha256"]="0"*64
            (native/"native-encounter-build.json").write_text(json.dumps(proof))
            with self.assertRaises(ValueError):stage.stage(native,isolated,pinned,root/"reject.json")

    def test_real_fixture_sha_preserved_and_native_template_candidates_mandatory(self):
        a={"sourcePath":"actual.pk9","originalSourceSHA256":"A"*64,
           "original":{"Parsed":True,"Valid":True,"MatchedEncounterType":"EncounterSlot9","InvalidChecks":[]},
           "modified":{"Parsed":True,"Valid":False,"MatchedEncounterType":"EncounterInvalid","InvalidChecks":[]},
           "invalidLocationNegativeControl":None}
        base={"pkhexSource":"pinned","sourceSamplesFromOfficialPKHeXTests":[dict(a,sourcePath=f"{i}.pk9") for i in range(6)]}
        native=json.loads(json.dumps(base))
        native["nativeTemplateSampleChecks"]={name:{"attempted":4,"valid":3,"exactEncounterClassMatched":3} for name in stage.FILES}
        proof={"status":diff.STATUS,"resources":[{"name":name} for name in stage.FILES]}
        r=diff.compare(base,native,proof)
        self.assertEqual(r["official_pk9_compared"],6)
        self.assertEqual(r["changed_official_pk9"],0)
        native["sourceSamplesFromOfficialPKHeXTests"][0]["original"]["Valid"]=False
        self.assertEqual(diff.compare(base,native,proof)["changed_official_pk9"],1)
        native["sourceSamplesFromOfficialPKHeXTests"][0]["originalSourceSHA256"]="B"*64
        with self.assertRaises(ValueError):diff.compare(base,native,proof)
        native["sourceSamplesFromOfficialPKHeXTests"][0]["originalSourceSHA256"]="A"*64
        native["nativeTemplateSampleChecks"][stage.FILES[0]]["attempted"]=0
        with self.assertRaises(ValueError):diff.compare(base,native,proof)

    def test_delta_candidate_same_sha_and_targeted_verdict_flip(self):
        x={"sourcePath":"actual.pk9","originalSourceSHA256":"A"*64,
           "original":{"Parsed":True,"Valid":True,"MatchedEncounterType":"EncounterSlot9","InvalidChecks":[]},
           "modified":{"Parsed":True,"Valid":False,"MatchedEncounterType":"EncounterInvalid","InvalidChecks":[]},
           "invalidLocationNegativeControl":None}
        base={"pkhexSource":"pin",
              "sourceSamplesFromOfficialPKHeXTests":[dict(x,sourcePath=f"{i}.pk9") for i in range(6)],
              "deltaCandidatePK9Count":1,
              "deltaCandidateTests":[{
                  "name":"fixed_158_0025_015_001.pk9",
                  "originalSourceSHA256":"B"*64,
                  "species":25,"form":0,"metLocation":158,"metLevel":15,
                  "legality":{"Parsed":True,"Valid":False,"MatchedEncounterType":"EncounterInvalid","InvalidChecks":[]},
              }]}
        native=json.loads(json.dumps(base))
        native["nativeTemplateSampleChecks"]={
            name:{"attempted":4,"valid":4,"exactEncounterClassMatched":4} for name in stage.FILES}
        native["deltaCandidateTests"][0]["legality"]={
            "Parsed":True,"Valid":True,"MatchedEncounterType":"EncounterFixed9","InvalidChecks":[]}
        proof={"status":diff.STATUS,"resources":[{"name":name} for name in stage.FILES]}
        compared=diff.compare(base,native,proof)
        self.assertEqual(compared["targeted_native_delta_pk9_compared"],1)
        self.assertEqual(compared["targeted_native_delta_verdict_flips"],1)
        self.assertEqual(compared["targeted_native_delta_by_category"]["fixed_added_location_158"]["reference_rejected_native_valid"],1)
        native["deltaCandidateTests"][0]["originalSourceSHA256"]="0"*64
        with self.assertRaises(ValueError):
            diff.compare(base,native,proof)

if __name__=="__main__":unittest.main()
