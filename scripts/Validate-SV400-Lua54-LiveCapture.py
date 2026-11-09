#!/usr/bin/env python3
"""Audit the *order and identity consistency* of SV 4.0.0 GDB VM snapshots.

This is a logical event correlator, NOT a provenance authenticator.
Passing does not prove that the JSONL was actually observed in the game.
Only accept sanitized sv400-vm-opcode events, never raw guest addresses.
"""
from __future__ import annotations
import argparse
import json
from pathlib import Path

EXPECTED_ROOT = (215522,215523)
EXPECTED_SETUP = (7,8,11,32,47,48,83)
REQUIRED_CALLEES = (11,32,83)
MAX_EVENTS=20000


def object_id(value):
    if not isinstance(value,dict):
        return None
    return value.get("opaque_payload_id")


def compare_value(left,right):
    if not isinstance(left,dict) or not isinstance(right,dict):
        return False
    return all(left.get(key)==right.get(key)
               for key in ("tag_byte","base_type","value","opaque_payload_id"))


def audit_capture(events):
    if not isinstance(events,list) or len(events)>MAX_EVENTS:
        raise ValueError("too many events")
    sample=[]
    session_ids=set()
    previous=0
    for event in events:
        if not isinstance(event,dict) or event.get("event")!="original_lua_opcode_context_snapshot":
            raise ValueError("not a sanitized SV400 opcode sample")
        seq=event.get("sample_seq")
        if not isinstance(seq,int) or isinstance(seq,bool) or seq<=previous:
            raise ValueError("event order must be strictly increasing")
        previous=seq
        token=event.get("session_id")
        if not isinstance(token,str) or len(token)<10 or len(token)>128:
            raise ValueError("missing opaque session identity")
        session_ids.add(token)
        if len(session_ids)!=1:
            raise ValueError("events from different GDB sessions cannot be mixed")
        if event.get("status")!="ORIGINAL_PROTO_HANDLER_WORD_AND_SHA_MATCH":
            continue
        scope=event.get("proto_scope")
        pc=event.get("lua_pc")
        if (scope=="root" and pc in EXPECTED_ROOT) or (scope=="setup" and pc in EXPECTED_SETUP):
            sample.append(event)
    before=None
    after=None
    for event in sample:
        if event["proto_scope"]=="root" and event["lua_pc"]==215522:
            if isinstance(event.get("before_closure_parent_R55_R58"),dict):
                before=event
        if event["proto_scope"]=="root" and event["lua_pc"]==215523 and before:
            same=(event.get("root_frame_id") is not None
                  and event.get("root_frame_id")==before.get("root_frame_id")
                  and event.get("thread_number") is not None
                  and event.get("thread_number")==before.get("thread_number"))
            if same and event["sample_seq"]>before["sample_seq"] and (
                isinstance(event.get("after_closure_setup_and_upval_cells"),dict)
            ):
                after=event
                break
    result={
        "source_session_id":next(iter(session_ids),None),
        "input_events":len(events),
        "pinned_target_events":len(sample),
        "root_before_capture":before is not None,
        "root_after_capture_same_frame":after is not None,
        "root_creation_order_consistent":bool(before and after),
        "root_stack_values_unchanged_across_creation":None,
        "root_child_setup_closure_identity":None,
        "child_upval_parent_stack_links":False,
        "child_slot1_and_slot2_cells":None,
        "setup_function_pcs_observed":[],
        "setup_events_same_child_closure":[],
        "factory_return_to_receiver_checks":{},
        "call_target_object_present":{},
        "callee_proto_or_c_function_rva_resolved":False,
        "actual_game_runtime_source_authenticated":False,
        "behavior_equivalence_verified":False,
        "status":"SCHEMA_CONSISTENCY_AUDIT_ONLY",
        "limitations":[
            "JSON samples and their session identifiers are not independently authenticated",
            "A read watchpoint hit alone cannot establish an actual Lua opcode execution",
            "Real callee Lua Proto ID or C function RVA requires additional ABI validation",
            "A/B game behavior has not been tested",
        ],
    }
    if before and after:
        b=before["before_closure_parent_R55_R58"]
        a=after["after_closure_setup_and_upval_cells"]
        r55=a.get("parent_root_register_55")
        r58=a.get("parent_root_register_58")
        result["root_stack_values_unchanged_across_creation"]=(
            compare_value(b.get("root_R55"),r55)
            and compare_value(b.get("root_R58"),r58))
        result["root_child_setup_closure_identity"]=a.get("new_setup_closure_id")
        result["child_upval_parent_stack_links"]=bool(
            a.get("slot1_v_points_to_root_R58") is True
            and a.get("slot2_v_points_to_root_R55") is True)
        slots=a.get("upval_slots")
        if isinstance(slots,list) and len(slots)==3 and (
            slots[1].get("slot")==1 and slots[2].get("slot")==2
        ):
            ids=[slots[1].get("cell_id"),slots[2].get("cell_id")]
            result["child_slot1_and_slot2_cells"]={
                "slot1_captures":"root_R58",
                "slot2_captures":"root_R55",
                "both_cells_have_nonempty_ids":all(bool(v) for v in ids),
                "cells_share_identity":ids[0]==ids[1] if all(ids) else None,
            }
    after_seq=after["sample_seq"] if after else -1
    expected_closure=result["root_child_setup_closure_identity"]
    setup=[event for event in sample if event.get("proto_scope")=="setup" and event["sample_seq"]>after_seq]
    for event in setup:
        pc=event["lua_pc"]
        if pc not in result["setup_function_pcs_observed"]:
            result["setup_function_pcs_observed"].append(pc)
        if expected_closure and event.get("setup_closure_id")==expected_closure:
            result["setup_events_same_child_closure"].append(pc)
        if pc in REQUIRED_CALLEES:
            tv=event.get("actual_callable_tvalue")
            result["call_target_object_present"][str(pc)]=bool(
                tv and tv.get("base_type")=="function"
                and object_id(tv))
    by_pc={}
    for event in setup:
        by_pc.setdefault(event["lua_pc"],event)
    for ret_pc,recv_pc in ((8,11),(48,83)):
        ret=by_pc.get(ret_pc)
        call=by_pc.get(recv_pc)
        key=f"PC{ret_pc}_return_to_PC{recv_pc}_receiver"
        if not ret or not call:
            result["factory_return_to_receiver_checks"][key]="NOT_OBSERVED"
            continue
        ident1=object_id(ret.get("factory_return_tvalue"))
        ident2=object_id(call.get("actual_receiver_tvalue"))
        same_closure=(ret.get("setup_closure_id") is not None
                      and ret.get("setup_closure_id")==call.get("setup_closure_id"))
        same_activation=(ret.get("vm_callinfo_id") is not None
                         and ret.get("vm_callinfo_id")==call.get("vm_callinfo_id")
                         and ret.get("thread_number") is not None
                         and ret.get("thread_number")==call.get("thread_number"))
        in_order=ret["sample_seq"]<call["sample_seq"]
        result["factory_return_to_receiver_checks"][key]=(
            "IDENTITY_MATCH" if ident1 and ident1==ident2 and same_closure and same_activation and in_order
            else "IDENTITY_OR_ORDER_MISMATCH"
        )
    result["complete_target_pc_coverage"]=all(
        pc in result["setup_function_pcs_observed"] for pc in EXPECTED_SETUP)
    result["complete_same_setup_closure_coverage"]=bool(
        expected_closure and all(pc in result["setup_events_same_child_closure"]
                                 for pc in EXPECTED_SETUP))
    # A single reused Closure can serve several Setup invocations.
    # Require the same CallInfo* identity, thread and ordered PC sequence,
    # not just seven PC observations spread across different activations.
    groups={}
    for e in setup:
        ident=e.get("vm_callinfo_id")
        thread=e.get("thread_number")
        if (not expected_closure or not ident or thread is None
            or e.get("setup_closure_id")!=expected_closure):
            continue
        groups.setdefault((ident,thread),[]).append(e["lua_pc"])
    def contains_complete_order(pcs):
        matched=0
        for pc in pcs:
            if pc==EXPECTED_SETUP[matched]:
                matched+=1
                if matched==len(EXPECTED_SETUP):
                    return True
            elif pc==EXPECTED_SETUP[0]:
                matched=1
        return False
    result["complete_same_setup_activation"]=any(
        contains_complete_order(pcs) for pcs in groups.values())
    result["event_source_consistency"]="ONLY_SANITIZED_USER_SUPPLIED_JSON"
    return result


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--events",type=Path,required=True)
    ap.add_argument("--output",type=Path,required=True)
    args=ap.parse_args()
    events=[]
    for line in args.events.read_text(encoding="utf-8").splitlines():
        if not line.strip():
            continue
        events.append(json.loads(line))
    result=audit_capture(events)
    args.output.parent.mkdir(parents=True,exist_ok=True)
    args.output.write_text(json.dumps(result,ensure_ascii=False,indent=2,sort_keys=True)+"\n")
    print("SV400_VM_EVENT_SEQUENCE_SCHEMA_ONLY",
          result["input_events"],result["root_creation_order_consistent"],
          result["complete_target_pc_coverage"],
          "runtime_source_authenticated",False)


if __name__=="__main__":
    main()
