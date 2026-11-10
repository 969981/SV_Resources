"""R17 synthetic GDB log tests: no impersonated guest / Lua CClosure proof."""
import importlib.util,json,unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
spec=importlib.util.spec_from_file_location("r17gdb",ROOT/"scripts/Verify-SV-Lua-R17-GdbLog.py")
mod=importlib.util.module_from_spec(spec);spec.loader.exec_module(mod)
META={"source":"guest-gdb-readonly-self-reported",
      "game":"violet_main",
      "elf_sha256_claim":mod.ELFS["violet_main"],
      "runtime_attestation":"NOT_INDEPENDENTLY_VERIFIED",
      "session":"synthetic-case-12345"}
def event(n,kind,**kwargs):
    return "R17_EVENT "+json.dumps({**META,"seq":n,"kind":kind,**kwargs})
def session():
    return event(1,"SESSION",loaded_elf_identity="CODEWORD_AND_CLASS_LITERAL_ONLY",
                 guest_full_elf_sha256_independently_verified=False)
def good():
    return [session(),
      event(2,"CLASS_BEFORE_BL",exact_original_registers=True),
      event(3,"TABLE_BEFORE_BL",relocated_table_pair_matches_static=True),
      event(4,"NATIVE_METHOD_ENTRY",x0="0x1",x1="0x2",x2="0x3",
            x3="0x4",x4="0x5",lr="0x6",sp="0x7",
            lua_child_object_identity="NOT_OBSERVED",
            cclosure_function_mapping="NOT_PROVEN")]

class R17GuestLog(unittest.TestCase):
    def test_empty_is_missing_not_success(self):
        d=mod.verify_lines([])
        self.assertEqual(d["status"],"NO_GUEST_EVENTS")
        self.assertFalse(d["native_cpp_abi_proven"])
    def test_complete_synthetic_is_only_self_report(self):
        d=mod.verify_lines(good())
        self.assertIn("SELF_REPORTED",d["status"])
        self.assertEqual(d["events_checked"],4)
        self.assertFalse(d["lua_child_object_identity_proven"])
        self.assertFalse(d["actual_guest_observation_proven"])
    def test_wrong_table_pointer_fails(self):
        a=good()
        a[2]=event(3,"TABLE_BEFORE_BL",relocated_table_pair_matches_static=False)
        with self.assertRaisesRegex(ValueError,"relocation table"):
            mod.verify_lines(a)
    def test_wrong_original_class_registers_fails(self):
        a=good()
        a[1]=event(2,"CLASS_BEFORE_BL",exact_original_registers=False)
        with self.assertRaisesRegex(ValueError,"BL registers"):
            mod.verify_lines(a)
    def test_false_cclosure_claim_rejected(self):
        a=good()
        v=json.loads(a[-1][len("R17_EVENT "):])
        v["cclosure_function_mapping"]="RUNTIME_VERIFIED"
        a[-1]="R17_EVENT "+json.dumps(v)
        with self.assertRaisesRegex(ValueError,"promote"):
            mod.verify_lines(a)
    def test_wrong_build_claim_rejected(self):
        a=good()
        x=json.loads(a[2][len("R17_EVENT "):])
        x["elf_sha256_claim"]="0"*64
        a[2]="R17_EVENT "+json.dumps(x)
        with self.assertRaisesRegex(ValueError,"wrong version"):
            mod.verify_lines(a)
    def test_cross_session_or_nonmonotonic_rejected(self):
        a=good()
        x=json.loads(a[3][len("R17_EVENT "):])
        x["session"]="another-frame"
        a[3]="R17_EVENT "+json.dumps(x)
        with self.assertRaisesRegex(ValueError,"different GDB sessions"):
            mod.verify_lines(a)
        a=good()
        x=json.loads(a[3][len("R17_EVENT "):])
        x["seq"]=1
        a[3]="R17_EVENT "+json.dumps(x)
        with self.assertRaisesRegex(ValueError,"monotonic"):
            mod.verify_lines(a)
    def test_no_registration_same_session_rejected(self):
        a=[session(),event(2,"NATIVE_METHOD_ENTRY",x0="0x1",
                  x1="0x2",x2="0x3",x3="0x4",x4="0x5",lr="0x6",sp="0x7",
                  lua_child_object_identity="NOT_OBSERVED",cclosure_function_mapping="NOT_PROVEN")]
        with self.assertRaisesRegex(ValueError,"without"):
            mod.verify_lines(a)
if __name__=="__main__": unittest.main()
