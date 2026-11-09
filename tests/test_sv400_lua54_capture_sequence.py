"""Synthetic, explicitly unauthenticated SV VM event-correlation tests."""
import importlib.util
from pathlib import Path
import unittest

PATH=Path(__file__).resolve().parents[1]/"scripts"/"Validate-SV400-Lua54-LiveCapture.py"
SPEC=importlib.util.spec_from_file_location("sv400_capture_sequence",PATH)
m=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(m)

SESSION="synthetic-fixture-20261109"
def obj(t="table", ident="obj-1"):
    return {"tag_byte":5 if t=="table" else 6,"base_type":t,"value":None,
            "opaque_payload_id":ident}
def core(seq,scope,pc):
    return {
        "event":"original_lua_opcode_context_snapshot",
        "sample_seq":seq,"session_id":SESSION,
        "status":"ORIGINAL_PROTO_HANDLER_WORD_AND_SHA_MATCH",
        "proto_scope":scope,"lua_pc":pc,
        "thread_number":1,
        "root_frame_id":"rootframe-1" if scope=="root" else None,
        "setup_closure_id":"closure-1" if scope=="setup" else None,
    }


def fixture():
    before=core(1,"root",215522)
    before["before_closure_parent_R55_R58"]={"root_R55":obj(ident="root55"),"root_R58":obj(ident="root58")}
    after=core(2,"root",215523)
    after["after_closure_setup_and_upval_cells"]={
        "new_setup_closure_id":"closure-1",
        "parent_root_register_55":obj(ident="root55"),
        "parent_root_register_58":obj(ident="root58"),
        "slot1_v_points_to_root_R58":True,
        "slot2_v_points_to_root_R55":True,
        "upval_slots":[{"slot":0,"cell_id":"cell0"},
                       {"slot":1,"cell_id":"cell58"},
                       {"slot":2,"cell_id":"cell55"}],
    }
    setup=[]
    for i,pc in enumerate((7,8,11,32,47,48,83),start=3):
        row=core(i,"setup",pc)
        if pc in (7,47):
            row["factory_callable_tvalue"]=obj("function","factorycall"+str(pc))
        if pc in (8,48):
            row["factory_return_tvalue"]=obj(ident=("factory14" if pc==8 else "factory7"))
        if pc in (11,32,83):
            row["actual_callable_tvalue"]=obj("function","callee"+str(pc))
        if pc in (11,83):
            row["actual_receiver_tvalue"]=obj(ident=("factory14" if pc==11 else "factory7"))
        setup.append(row)
    return [before,after,*setup]


class SequenceSchemaTests(unittest.TestCase):
    def test_complete_consistent_synthetic_capture_still_not_verified_game(self):
        a=m.audit_capture(fixture())
        self.assertEqual(a["input_events"],9)
        self.assertTrue(a["root_creation_order_consistent"])
        self.assertTrue(a["root_stack_values_unchanged_across_creation"])
        self.assertTrue(a["child_upval_parent_stack_links"])
        self.assertTrue(a["complete_target_pc_coverage"])
        self.assertEqual(a["setup_events_same_child_closure"],[7,8,11,32,47,48,83])
        self.assertEqual(a["factory_return_to_receiver_checks"]["PC8_return_to_PC11_receiver"],
                         "IDENTITY_MATCH")
        self.assertTrue(all(a["call_target_object_present"].values()))
        self.assertFalse(a["actual_game_runtime_source_authenticated"])
        self.assertFalse(a["callee_proto_or_c_function_rva_resolved"])
        self.assertFalse(a["behavior_equivalence_verified"])

    def test_missing_root_after_never_marks_capture_order(self):
        events=fixture()
        a=m.audit_capture([events[0],*events[2:]])
        self.assertFalse(a["root_creation_order_consistent"])
        self.assertIsNone(a["root_child_setup_closure_identity"])

    def test_wrong_upval_parent_value_does_not_pass(self):
        events=fixture()
        events[1]["after_closure_setup_and_upval_cells"]["parent_root_register_58"]=obj(ident="different")
        result=m.audit_capture(events)
        self.assertFalse(result["root_stack_values_unchanged_across_creation"])

    def test_mismatched_receiver_identity_is_reported_not_silenced(self):
        events=fixture()
        events[4]["actual_receiver_tvalue"]=obj(ident="wrong")
        a=m.audit_capture(events)
        self.assertEqual(a["factory_return_to_receiver_checks"]["PC8_return_to_PC11_receiver"],
                         "IDENTITY_OR_ORDER_MISMATCH")

    def test_wrong_child_closure_identity_is_not_cross_joined(self):
        events=fixture()
        events[4]["setup_closure_id"]="another-closure"
        a=m.audit_capture(events)
        self.assertNotIn(11,a["setup_events_same_child_closure"])
        self.assertEqual(a["factory_return_to_receiver_checks"]["PC8_return_to_PC11_receiver"],
                         "IDENTITY_OR_ORDER_MISMATCH")

    def test_wrong_order_or_mixed_session_rejected(self):
        events=fixture()
        events[3]["sample_seq"]=3
        with self.assertRaisesRegex(ValueError,"strictly increasing"):
            m.audit_capture(events)
        events=fixture()
        events[4]["session_id"]="another-synthetic-session"
        with self.assertRaisesRegex(ValueError,"different GDB sessions"):
            m.audit_capture(events)

    def test_unknown_untrusted_event_rejected(self):
        events=fixture()
        events[0]["event"]="fake_native_vm"
        with self.assertRaisesRegex(ValueError,"sanitized"):
            m.audit_capture(events)

    def test_all_events_synthetic_does_not_prove_real_runtime(self):
        a=m.audit_capture([])
        self.assertFalse(a["root_creation_order_consistent"])
        self.assertFalse(a["complete_target_pc_coverage"])
        self.assertFalse(a["actual_game_runtime_source_authenticated"])

if __name__=="__main__":
    unittest.main()
