"""R16 offline checker for self-reported, read-only guest Lua CALL traces.

This verifies internal PC/receiver/alias consistency against the immutable
original 4.0.0 Lua methods. It CANNOT attest that a GDB log really came
from a guest or establish C++ ABI. Highest result is SELF_REPORTED_ONLY.
Tokens are session-scoped pseudonymous object identities, not addresses.
"""
from __future__ import annotations
from collections import defaultdict
from hashlib import sha256
from .r16_engine_bridge import EXPECTED_ELF,R15_METHODS,LUA_K

MAIN_SHA="c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815"
WORDS={
 0:"00008094",1:"020200C4",
 4:None,5:None,6:"02010092",
 7:"02028194",8:"0301028E",9:"010301C4",
}
TRACE_PCS=(0,1,4,5,6,7,8,9)
EVENT_KIND={0:"METHOD_LOOKUP",1:"CALL",
 4:"SLOT_READ",5:"SLOT_READ",6:"FIELD_WRITE",
 7:"METHOD_LOOKUP",8:"FIELD_READ",9:"CALL"}

def _required_token(value,label):
    if not isinstance(value,str) or not 1<=len(value)<=128:
        raise ValueError(f"missing or invalid {label} object token")
    return value

def verify_report(report):
    if report.get("schema_version")!=1 or report.get("source")!="guest-gdb-readonly":
        raise ValueError("R16 trace must be explicit guest-gdb-readonly schema 1")
    game=report.get("game")
    if game not in EXPECTED_ELF or report.get("elf_sha256")!=EXPECTED_ELF[game]:
        raise ValueError("original Scarlet/Violet SHA mismatch")
    if report.get("main_blua_sha256")!=MAIN_SHA:
        raise ValueError("original SV400 main.blua identity mismatch")
    _required_token(report.get("session_id"),"session")
    events=report.get("events")
    if not isinstance(events,list):
        raise ValueError("events array required")
    if not events:
        return {"status":"NO_RUNTIME_CALL_EVENTS","live_abi_verified":False,
                "live_object_identity_attested":False,"events_checked":0}
    if len(events)>25000:
        raise ValueError("R16 trace is too large for this bounded checker")
    grouped=defaultdict(list)
    seqs=[]
    state_token=None
    for ev in events:
        if not isinstance(ev,dict):
            raise ValueError("event must be an object")
        name=ev.get("method")
        if name not in R15_METHODS:
            raise ValueError("unknown original C/F method")
        p=R15_METHODS[name]
        if ev.get("proto_id")!=p["proto"]:
            raise ValueError("original Lua Proto identity mismatch")
        pc=ev.get("pc")
        if type(pc) is not int or pc not in TRACE_PCS:
            raise ValueError("unexpected Lua VM PC; no unsupported execution claim")
        if ev.get("kind")!=EVENT_KIND[pc]:
            raise ValueError("PC/opcode event kind changed")
        word=WORDS[pc]
        if pc in (4,5):
            # Original 4.0.0 GETI A/B/C differ by class, so check both.
            slot=p["owner_slot"] if pc==4 else p["child_slot"]
            expected=({
              4:{10:"0A00008D",2:"0200008D"},
              5:{12:"0C00010D",4:"0400010D"},
            })[pc][slot]
            word=expected
        if ev.get("native_lua_word")!=word:
            raise ValueError(f"original instruction at PC{pc} differs")
        st=_required_token(ev.get("lua_state_token"),"lua_state")
        if state_token is None:state_token=st
        if st!=state_token:raise ValueError("mixed Lua states in one session")
        frame=_required_token(ev.get("frame_token"),"root activation/frame")
        seq=ev.get("seq")
        if type(seq) is not int or seq<0:
            raise ValueError("invalid monotonic event sequence")
        seqs.append(seq)
        grouped[(name,frame)].append(ev)
    if seqs!=sorted(set(seqs)):
        raise ValueError("cross-frame events must have strictly increasing sequence")
    checked=0
    for (name,frame),evs in grouped.items():
        pcs=[x["pc"] for x in evs]
        if len(pcs)!=len(set(pcs)):
            raise ValueError("duplicate native PC for one captured activation")
        if pcs[:2]!=[0,1]:
            raise ValueError("original SELF method lookup must precede first CALL")
        bypc={e["pc"]:e for e in evs}
        first0,first1=bypc[0],bypc[1]
        if first0.get("field_key")!=LUA_K[0] or first1.get("field_key")!=LUA_K[0]:
            raise ValueError("first native Lua method hash does not match")
        if _required_token(first0.get("function_token"),"first callable")!=first1.get("function_token"):
            raise ValueError("SELF callable and first CALL function differ")
        root=_required_token(first1.get("self_token"),"self")
        if first0.get("receiver_token")!=root or first1.get("receiver_token")!=root:
            raise ValueError("SELF receiver identity differs from original self")
        args=first1.get("argument_tokens")
        if args!=[root]:
            raise ValueError("first CALL B2 must pass only receiver self")
        outcome=first1.get("outcome")
        if outcome not in ("RETURN","THROW"):
            raise ValueError("first opaque CALL outcome missing")
        if outcome=="THROW" or first1.get("truthy") is False:
            if len(pcs)!=2:
                raise ValueError("false/throw first call must not execute later field writes")
            checked+=2
            continue
        if first1.get("truthy") is not True:
            raise ValueError("truthiness of original first CALL return not observed")
        if pcs!=list(TRACE_PCS):
            raise ValueError("success branch must include ordered GETI/SETFIELD/SELF/GETFIELD/CALL observations")
        owner=bypc[4]
        child=bypc[5]
        if owner.get("slot")!=R15_METHODS[name]["owner_slot"]:
            raise ValueError("owner GETI original slot mismatch")
        if child.get("slot")!=R15_METHODS[name]["child_slot"]:
            raise ValueError("child GETI original slot mismatch")
        owner_token=_required_token(owner.get("value_token"),"owner pointer")
        child_token=_required_token(child.get("value_token"),"child pointer")
        put=bypc[6]
        if (put.get("field_key")!="component" or
                put.get("owner_token")!=owner_token or
                put.get("value_token")!=child_token):
            raise ValueError("original SETFIELD must use the observed owner and child objects")
        meth=bypc[7]
        if meth.get("receiver_token")!=child_token or meth.get("field_key")!=LUA_K[2]:
            raise ValueError("second SELF source must be the observed child object")
        if bypc[8].get("field_key")!="updateInterval" or bypc[8].get("owner_token")!=owner_token:
            raise ValueError("interval GETFIELD must read same owner object")
        interval=_required_token(bypc[8].get("value_token"),"interval value")
        call=bypc[9]
        if (call.get("field_key")!=LUA_K[2] or
                call.get("function_token")!=meth.get("function_token") or
                call.get("receiver_token")!=child_token or
                call.get("argument_tokens")!=[child_token,interval]):
            raise ValueError("second SELF/CALL B3 function+receiver+interval identities do not match")
        if call.get("outcome") not in ("RETURN","THROW"):
            raise ValueError("second CALL result/exception not recorded")
        checked+=len(pcs)
    return {
      "status":"TRACE_SELF_REPORTED_CONSISTENT_NOT_INDEPENDENTLY_ATTESTED",
      "source_claim":report["source"],
      "session_id_hash":sha256(report["session_id"].encode()).hexdigest(),
      "activated_frames_checked":len(grouped),
      "events_checked":checked,
      "static_elf_sha256":report["elf_sha256"],
      "live_abi_verified":False,
      "live_object_identity_attested":False,
      "runtime_status":"NOT_OBSERVED_INDEPENDENTLY",
    }
