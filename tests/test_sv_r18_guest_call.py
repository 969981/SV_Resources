"""R18 synthetic-only tests. No AArch64 guest is connected by CI."""
import copy
import importlib.util
import tempfile
import unittest
from pathlib import Path

SCRIPT = Path(__file__).resolve().parents[1] / "scripts" / "Verify-SV-R18-GuestCall.py"
spec = importlib.util.spec_from_file_location("r18_guest_checker", SCRIPT)
mod = importlib.util.module_from_spec(spec)
spec.loader.exec_module(mod)

BASE = 0x7100000000
GAME = "scarlet_main"
HASH = mod.HASHES[GAME]
STAGES = [
    "SESSION", "CALL_HANDLER", "NATIVE_ENTRY", "HELPER1_BEFORE",
    "HELPER1_RETURN", "HELPER2_BEFORE", "HELPER2_RETURN",
    "GLOBAL_SLOT_BEFORE_LOAD", "GLOBAL_POINTER_LOADED", "INDIRECT_CALL",
    "TARGET_CPP_ENTRY", "INDIRECT_RETURN", "WRAPPER_RETURN",
]

def fixture(source="synthetic-fixture"):
    es = []
    for idx, kind in enumerate(STAGES, 1):
        e = {
            "source": source, "session": "fixture-session-001",
            "seq": idx, "kind": kind, "game": GAME,
            "elf_sha256_claim": HASH,
        }
        if kind != "SESSION":
            e["thread_id"] = 7
        if idx >= 3:
            e["invocation_id"] = 2
        es.append(e)
    d = {e["kind"]: e for e in es}
    d["SESSION"].update(main_base=hex(BASE), exact_codeword_and_method_literal_checks=True)
    d["CALL_HANDLER"].update(A=3, B=3, C=1, lua_state="0x10002000",
        resolved_cfunction=hex(BASE + mod.WRAPPER),
        cfunction_matches_wrapper=True, function_slot_matches_A=True)
    d["NATIVE_ENTRY"].update(pc=hex(BASE + mod.WRAPPER),
        lua_state="0x10002000", matched_call_and_thread=True)
    d["HELPER1_BEFORE"].update(x1="0x1")
    d["HELPER1_RETURN"].update(helper1_matches_lua_receiver=True)
    d["HELPER2_BEFORE"].update(x1="0x2")
    d["HELPER2_RETURN"].update(result_w0_unsigned=5)
    d["GLOBAL_SLOT_BEFORE_LOAD"].update(
        computed_slot=hex(BASE + mod.SLOT), slot_matches_expected=True)
    d["GLOBAL_POINTER_LOADED"].update(
        x8_target_candidate=hex(BASE + mod.CPP_TARGET),
        target_matches_static_candidate=True)
    d["INDIRECT_CALL"].update(pc=hex(BASE + mod.DIRECT_BLR),
        x0_arg="0x17000000", x8_target_candidate=hex(BASE + mod.CPP_TARGET),
        target_matches_static_candidate=True, x8_matches_loaded_slot=True,
        x0_matches_holder_path=True, w1_unsigned=5,
        sampled_object_before={"obj_0x244_u16": "0000"})
    d["TARGET_CPP_ENTRY"].update(pc=hex(BASE + mod.CPP_TARGET),
        matched_pending_blr=True, x0_object="0x17000000", w1_unsigned=5)
    d["INDIRECT_RETURN"].update(matched_pending_blr=True, target_entry_seen=True,
        call_target=hex(BASE + mod.CPP_TARGET),
        sampled_object_after={"obj_0x244_u16": "0001"})
    d["WRAPPER_RETURN"].update(pc=hex(BASE + mod.RET), matched_call=True,
        returns_zero_lua_results=True, lua_cfunction_w0=0)
    return es

class R18GuestCallTests(unittest.TestCase):
    def test_synthetic_complete_never_attested(self):
        out = mod.analyze(fixture())
        self.assertTrue(out["complete"])
        self.assertEqual(out["status"], "SYNTHETIC_FIXTURE_ONLY")
        self.assertFalse(out["independently_attested"])
        self.assertFalse(out["cpp_object_type_verified"])
        self.assertFalse(out["memory_ssa_complete"])

    def test_self_report_still_not_independent(self):
        out = mod.analyze(fixture("guest-gdb-readonly-self-reported"))
        self.assertEqual(out["status"], "SELF_REPORTED_COMPLETE_NOT_INDEPENDENTLY_ATTESTED")
        self.assertFalse(out["independently_attested"])

    def test_empty_log(self):
        self.assertEqual(mod.analyze([])["status"], "NO_GUEST_EVENTS")

    def test_missing_cpu_entry_is_incomplete(self):
        es = [e for e in fixture() if e["kind"] != "TARGET_CPP_ENTRY"]
        self.assertFalse(mod.analyze(es)["complete"])

    def test_wrong_runtime_x8_is_not_a_valid_call(self):
        es = fixture()
        next(e for e in es if e["kind"] == "INDIRECT_CALL")["x8_target_candidate"] = "0x1234"
        self.assertFalse(mod.analyze(es)["complete"])

    def test_bad_object_provenance(self):
        es = fixture()
        next(e for e in es if e["kind"] == "INDIRECT_CALL")["x0_matches_holder_path"] = False
        self.assertFalse(mod.analyze(es)["complete"])

    def test_lua_receiver_payload_mismatch(self):
        es = fixture()
        next(e for e in es if e["kind"] == "HELPER1_RETURN")["helper1_matches_lua_receiver"] = False
        self.assertFalse(mod.analyze(es)["complete"])

    def test_argument_changed_between_helper_and_target(self):
        es = fixture()
        next(e for e in es if e["kind"] == "TARGET_CPP_ENTRY")["w1_unsigned"] = 4
        self.assertFalse(mod.analyze(es)["complete"])

    def test_cross_thread_mixing_not_accepted(self):
        es = fixture()
        next(e for e in es if e["kind"] == "TARGET_CPP_ENTRY")["thread_id"] = 8
        self.assertFalse(mod.analyze(es)["complete"])

    def test_partial_trace_cannot_be_success(self):
        es = [e for e in fixture() if e["kind"] != "WRAPPER_RETURN"]
        self.assertFalse(mod.analyze(es)["complete"])

    def test_same_target_called_without_lua_call_no_proof(self):
        es = [e for e in fixture() if e["kind"] != "CALL_HANDLER"]
        self.assertEqual(mod.analyze(es)["status"], "NO_TARGET_CALL")

    def test_wrong_opcode_arity(self):
        es = fixture()
        next(e for e in es if e["kind"] == "CALL_HANDLER")["C"] = 2
        self.assertFalse(mod.analyze(es)["complete"])

    def test_duplicate_sequence_rejected(self):
        es = fixture()
        es[3]["seq"] = es[2]["seq"]
        self.assertEqual(mod.analyze(es)["status"], "INVALID_TRACE")

    def test_mixed_session_rejected(self):
        es = fixture()
        es[-1]["session"] = "other-session"
        self.assertEqual(mod.analyze(es)["status"], "INVALID_TRACE")

    def test_wrong_elf_claim_rejected(self):
        es = fixture()
        es[-1]["elf_sha256_claim"] = mod.HASHES["violet_main"]
        self.assertEqual(mod.analyze(es)["status"], "INVALID_TRACE")

    def test_observer_diagnostic_rejected(self):
        es = fixture()
        es.append(dict(es[-1], seq=14, kind="DIAGNOSTIC"))
        self.assertEqual(mod.analyze(es)["status"], "INVALID_TRACE")

    def test_gdb_text_loader(self):
        import json
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "guest.log"
            es = fixture()
            path.write_text("GDB banner\n" + "\n".join(
                "R18_EVENT " + json.dumps(e) for e in es) + "\n", encoding="utf-8")
            out = mod.analyze(mod.load_events(path))
            self.assertEqual(out["status"], "SYNTHETIC_FIXTURE_ONLY")

if __name__ == "__main__":
    unittest.main()
