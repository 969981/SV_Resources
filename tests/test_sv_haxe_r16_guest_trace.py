"""Synthetic event-token tests cannot authenticate a real guest; fail closed."""
import copy
import sys
import unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools/SV.Lua54/src"))
from sv_lua54.emit_haxe.r16_guest_trace import verify_report,MAIN_SHA
from sv_lua54.emit_haxe.r16_engine_bridge import EXPECTED_ELF

NAME="main.field.action.base.IAction.Setup"
SOURCE={"schema_version":1,"source":"guest-gdb-readonly","session_id":"test-synthetic",
        "game":"violet_main","elf_sha256":EXPECTED_ELF["violet_main"],
        "main_blua_sha256":MAIN_SHA}
BASE={"method":NAME,"proto_id":12930,"frame_token":"activation1","lua_state_token":"L1"}
def event(seq,pc,word,kind,**kwargs):
    return {**BASE,"seq":seq,"pc":pc,"native_lua_word":word,
            "kind":kind,**kwargs}
def build(truthy=True):
    items=[
      event(0,0,"00008094","METHOD_LOOKUP",field_key="F22C7B81A049FA20D",
            function_token="callable1",receiver_token="self"),
      event(1,1,"020200C4","CALL",field_key="F22C7B81A049FA20D",
            function_token="callable1",receiver_token="self",self_token="self",
            argument_tokens=["self"],truthy=truthy,outcome="RETURN"),
    ]
    if truthy:
        items+= [
          event(2,4,"0A00008D","SLOT_READ",slot=10,value_token="owner"),
          event(3,5,"0C00010D","SLOT_READ",slot=12,value_token="child"),
          event(4,6,"02010092","FIELD_WRITE",field_key="component",
                owner_token="owner",value_token="child"),
          event(5,7,"02028194","METHOD_LOOKUP",field_key="f558733FC",
                receiver_token="child",function_token="callable2"),
          event(6,8,"0301028E","FIELD_READ",field_key="updateInterval",
                owner_token="owner",value_token="interval"),
          event(7,9,"010301C4","CALL",field_key="f558733FC",
                function_token="callable2",receiver_token="child",
                argument_tokens=["child","interval"],outcome="RETURN"),
        ]
    return {**SOURCE,"events":items}

class GuestTraceNoFakeAttestation(unittest.TestCase):
    def test_zero_events_does_not_claim_guest_execution(self):
        doc={**SOURCE,"events":[]}
        result=verify_report(doc)
        self.assertEqual(result["status"],"NO_RUNTIME_CALL_EVENTS")
        self.assertFalse(result["live_abi_verified"])

    def test_self_reported_full_call_trace_only_consistency(self):
        result=verify_report(build(True))
        self.assertEqual(result["events_checked"],8)
        self.assertEqual(result["activated_frames_checked"],1)
        self.assertIn("SELF_REPORTED",result["status"])
        self.assertFalse(result["live_abi_verified"])
        self.assertFalse(result["live_object_identity_attested"])

    def test_false_branch_no_second_call(self):
        result=verify_report(build(False))
        self.assertEqual(result["events_checked"],2)

    def test_refuses_false_branch_followed_by_field_write(self):
        d=build(True)
        d["events"][1]["truthy"]=False
        with self.assertRaisesRegex(ValueError,"false/throw"):
            verify_report(d)

    def test_refuses_lua_pc_word_drift(self):
        d=build()
        d["events"][2]["native_lua_word"]="00000000"
        with self.assertRaisesRegex(ValueError,"instruction"):
            verify_report(d)

    def test_refuses_swapped_child_pointer(self):
        d=build()
        d["events"][-1]["receiver_token"]="unrelated-child"
        with self.assertRaisesRegex(ValueError,"identities"):
            verify_report(d)

    def test_refuses_wrong_k_method_hash(self):
        d=build()
        d["events"][5]["field_key"]="wrong"
        with self.assertRaisesRegex(ValueError,"second SELF"):
            verify_report(d)

    def test_refuses_cross_state_and_cross_activation(self):
        d=build()
        d["events"][3]["lua_state_token"]="other"
        with self.assertRaisesRegex(ValueError,"mixed Lua states"):
            verify_report(d)
        d=build()
        d["events"][3]["frame_token"]="frame2"
        with self.assertRaises(ValueError):
            verify_report(d)

    def test_refuses_unpinned_game_sha_and_fake_attestation(self):
        d=build()
        d["elf_sha256"]="0"*64
        with self.assertRaisesRegex(ValueError,"SHA mismatch"):
            verify_report(d)
        d=build()
        d["source"]="synthetic"
        with self.assertRaises(ValueError):
            verify_report(d)

    def test_refuses_disordered_events(self):
        d=build()
        d["events"][2]["seq"]=9
        with self.assertRaisesRegex(ValueError,"increasing"):
            verify_report(d)

if __name__=="__main__":
    unittest.main()
