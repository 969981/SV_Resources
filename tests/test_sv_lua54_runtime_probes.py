"""R3 synthetic VM contract/identity tests; NEVER uses game runtime events."""
from __future__ import annotations

import copy
from pathlib import Path
import struct
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.chunk import Chunk, Constant, Proto, parse
from sv_lua54 import runtime_probes, trace

HEADER = (bytes.fromhex("1b4c7561540019930d0a1a0a")
          + b"\x04\x08\x08" + (0x5678).to_bytes(8, "little")
          + struct.pack("<d", 370.5))
CLASS = "C0000000000000004"
METHOD = "F0000000000000005"
FIELDS = ["F0000000000000001", "S0000000000000002", "F0000000000000003"]


def abc(name, a=0, b=0, c=0, k=0):
    return trace.OPNAMES.index(name) | a << 7 | k << 15 | b << 16 | c << 24


def abx(name, a, bx):
    return trace.OPNAMES.index(name) | a << 7 | bx << 15


def node(pid, parent, words, *, constants=(), children=(), upvalues=b"", params=0):
    return Proto(id=pid, parent_id=parent, start=0, code_offset=0, end=0,
                 source=None, line_defined=0, last_line_defined=0,
                 num_params=params, is_vararg=0, max_stack_size=8,
                 code=struct.pack("<"+"I"*len(words), *words),
                 constants=list(constants), children=list(children),
                 upvalues=upvalues)


def synthetic_chunk():
    body_words = []
    for idx in range(3):
        body_words += [abc("GETFIELD", 1, 0, idx),
                       abc("MOVE", 2, 1),
                       abc("CALL", 2, 1, 1)]
    body_words.append(abc("RETURN0"))
    body = node(1, 0, body_words,
                constants=[Constant(4, name.encode()) for name in FIELDS],
                upvalues=b"\x00\x00\x00\x01\x3a\x00\x01\x37\x00",
                params=1)
    root = node(0, None, [abc("GETUPVAL",0,0),
                          abx("LOADK",1,0), abc("GETTABLE",0,0,1),
                          abx("LOADK",1,1), abc("GETTABLE",0,0,1),
                          abx("LOADK",1,2), abx("CLOSURE",2,0),
                          abc("SETTABLE",0,1,2), abc("RETURN0")],
                constants=[Constant(4,CLASS.encode()),
                           Constant(4,b"prototype"), Constant(4,METHOD.encode())],
                children=[body], upvalues=b"\x01\x00\x00")
    return parse(Chunk(HEADER,1,root,"").encode())


def synthetic_events(manifest):
    events = []
    base = {"run_id": "synthetic-run-01", "root_activation_id": "activation-01"}
    def emit(kind, **kw):
        events.append(dict(base, event=kind, event_seq=len(events), **kw))
    emit("run_begin", schema=manifest["schema"], observer_build="synthetic-only",
         source_sha256=manifest["source_sha256"],
         root_proto_code_sha256=manifest["root_proto_code_sha256"])
    emit("closure_create", pc=manifest["root_closure_pc"],
         method_code_sha256=manifest["method_code_sha256"],
         closure_id="mock-closure-01",
         upvalues={"0":{"cell_id":"env-cell","value_type":"table","value_id":"env-table"},
                   "1":{"cell_id":"R58-cell","value_type":"nil"},
                   "2":{"cell_id":"R55-cell","value_type":"nil"}})
    for i, info in enumerate(manifest["call_probes"]):
        emit("upvalue_snapshot", closure_id="mock-closure-01",slot=1,
             cell_id="R58-cell", value_type="nil")
        emit("upvalue_snapshot", closure_id="mock-closure-01",slot=2,
             cell_id="R55-cell", value_type="nil")
        emit("call_pre", closure_id="mock-closure-01",pc=info["call_pc"],
             field_hash=info["field_hash"],receiver_id="mock-table-01",
             receiver_lookup_evidence="observed_table_get",
             callee_id=f"mock-cfn-{i}",
             callee_kind="c_function",callee_module="synthetic-lib",
             callee_module_rva=f"0x{0x1000+i*16:x}")
    return events


class RuntimeProbeTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.manifest=runtime_probes.build_manifest(
            synthetic_chunk(), CLASS, METHOD, (2,5,8))

    def test_manifest_is_pinned_to_actual_proto_code(self):
        m = self.manifest
        self.assertEqual(m["method_proto_id"],1)
        self.assertEqual(m["root_closure_pc"],6)
        self.assertEqual([x["call_pc"] for x in m["call_probes"]],[2,5,8])
        self.assertEqual([x["field_hash"] for x in m["call_probes"]],FIELDS)
        self.assertEqual([x["parent_register"] for x in m["upvalue_captures"]],
                         [None,58,55])
        self.assertTrue(m["vm_hook_scope"]["never_use_as_cpu_pc"])
        self.assertEqual(m["runtime_evidence_status"],"NOT_COLLECTED")

    def test_self_indexed_slots_and_static_s_field_are_structural_only(self):
        p = node(7, 0, [
            abc("GETI", 2, 0, 14),
            abc("SELF", 2, 2, 0, 1),
            abc("CALL", 2, 2, 1),
            abc("GETTABUP", 3, 0, 1),
            abc("GETFIELD", 3, 3, 2),
            abc("CALL", 3, 1, 2),
            abc("GETI", 4, 0, 7),
            abc("SELF", 4, 4, 3, 1),
            abc("CALL", 4, 2, 1),
            abc("RETURN0"),
        ], constants=[
            Constant(4, FIELDS[0].encode()),
            Constant(4, CLASS.encode()),
            Constant(4, FIELDS[1].encode()),
            Constant(4, FIELDS[2].encode()),
        ])
        code = trace.instructions(p)
        a = runtime_probes.receiver_origin(p, code, 2)
        b = runtime_probes.receiver_origin(p, code, 5)
        c = runtime_probes.receiver_origin(p, code, 8)
        self.assertEqual((a["kind"], a["slot_index"]), ("SELF_INDEXED_SLOT",14))
        self.assertEqual((c["kind"], c["slot_index"]), ("SELF_INDEXED_SLOT",7))
        self.assertEqual(b["kind"],"ENV_CLASS_STATIC_FIELD")
        self.assertEqual(b["class_hash"],CLASS)
        self.assertEqual(b["field_hash"],FIELDS[1])
        self.assertFalse(any(x["runtime_verified"] for x in (a,b,c)))

    def test_same_block_seti_return_producer_only_candidate(self):
        p = node(7, 0, [
            abc("CALL",2,1,2),
            abc("SETI",0,14,2),
            abc("GETI",2,0,14),
            abc("SELF",2,2,0,1),
            abc("CALL",2,2,1),abc("RETURN0"),
        ], constants=[Constant(4, FIELDS[0].encode())])
        info = runtime_probes.receiver_origin(p,trace.instructions(p),4)
        self.assertEqual(info["slot_index"],14)
        self.assertEqual(info["same_block_seti_writers"][0]["pc"],1)
        self.assertEqual(info["same_block_seti_writers"][0]["producer_call_pc"],0)
        self.assertFalse(info["runtime_verified"])

    def test_no_game_events_never_claim_verified(self):
        result = runtime_probes.audit_events(self.manifest, [])
        self.assertEqual(result["status"], "NO_RUNTIME_EVIDENCE")
        self.assertFalse(result["runtime_verified"])

    def test_mock_trace_fulfills_contract_but_not_gameplay_proof(self):
        result = runtime_probes.audit_events(self.manifest,
                                             synthetic_events(self.manifest))
        self.assertEqual(result["status"],"SCHEMA_CONSISTENT_UNATTESTED_TELEMETRY")
        self.assertTrue(result["complete_single_activation"])
        self.assertFalse(result["runtime_verified"])

    def test_different_activation_cannot_reuse_closure(self):
        events=synthetic_events(self.manifest)
        events[3]["root_activation_id"]="other-activation"
        result=runtime_probes.audit_events(self.manifest,events)
        self.assertEqual(result["status"],"INVALID_EVENT_CONTRACT")

    def test_call_target_key_mismatch_rejected(self):
        events=synthetic_events(self.manifest)
        events[4]["field_hash"]=FIELDS[1]
        result=runtime_probes.audit_events(self.manifest,events)
        self.assertIn("incorrect field key",str(result["errors"]))
        self.assertFalse(result["runtime_verified"])

    def test_missing_upvalue_snapshots_rejected(self):
        events=synthetic_events(self.manifest)
        events=[e for e in events if e["event"]!="upvalue_snapshot"]
        for i,event in enumerate(events):event["event_seq"]=i
        result=runtime_probes.audit_events(self.manifest,events)
        self.assertIn("fresh UpVal",str(result["errors"]))

    def test_fabricated_receiver_and_native_function_must_be_rejected(self):
        events=synthetic_events(self.manifest)
        events[4]["receiver_lookup_evidence"]="inferred_from_symbol_hash"
        events[4].pop("callee_module_rva")
        result=runtime_probes.audit_events(self.manifest,events)
        self.assertIn("not VM-observed",str(result["errors"]))
        self.assertIn("normalized native callee",str(result["errors"]))

    def test_non_monotonic_trace_sequence_rejected(self):
        events=synthetic_events(self.manifest)
        events[4]["event_seq"]=events[3]["event_seq"]
        result=runtime_probes.audit_events(self.manifest,events)
        self.assertIn("non-monotonic",str(result["errors"]))

    def test_wrong_root_code_fingerprint_rejected(self):
        events=synthetic_events(self.manifest)
        events[0]["root_proto_code_sha256"]="0"*64
        result=runtime_probes.audit_events(self.manifest,events)
        self.assertIn("wrong original source",str(result["errors"]))

    def test_malformed_upvalue_cells_cannot_pass(self):
        events=synthetic_events(self.manifest)
        events[1]["upvalues"]["2"]["cell_id"]="R58-cell"
        result=runtime_probes.audit_events(self.manifest,events)
        self.assertIn("reused one cell",str(result["errors"]))


if __name__=="__main__":
    unittest.main()
