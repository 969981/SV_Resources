#!/usr/bin/env python3
"""Offline validator for read-only, SELF-REPORTED R17 guest GDB log lines.

A locally generated text file can be fabricated. Even complete events do NOT
independently prove original Switch runtime, CClosure* object identity, guest
ELF SHA, native return ABI or connection to Lua IAction.Setup child.
"""
import argparse,json,sys
from pathlib import Path

ELFS={
 "scarlet_main":"53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f",
 "violet_main":"84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30",
}
KINDS={"SESSION","CLASS_BEFORE_BL","TABLE_BEFORE_BL","NATIVE_METHOD_ENTRY","DIAGNOSTIC"}
def verify_lines(lines):
    ev=[]
    for line in lines:
        if not line.startswith("R17_EVENT "):continue
        o=json.loads(line[len("R17_EVENT "):])
        if not isinstance(o,dict) or o.get("kind") not in KINDS:
            raise ValueError("invalid R17 original event type")
        game=o.get("game")
        if (game not in ELFS or
            o.get("elf_sha256_claim")!=ELFS[game] or
            o.get("source")!="guest-gdb-readonly-self-reported" or
            o.get("runtime_attestation")!="NOT_INDEPENDENTLY_VERIFIED"):
            raise ValueError("wrong version or unsafe runtime attestation")
        ev.append(o)
    if not ev:
        return {"status":"NO_GUEST_EVENTS","events_checked":0,
                "actual_guest_observation_proven":False,
                "lua_child_object_identity_proven":False,
                "native_cpp_abi_proven":False}
    if ev[0]["kind"]!="SESSION" or len([e for e in ev if e["kind"]=="SESSION"])!=1:
        raise ValueError("exactly one original session event required")
    session=ev[0].get("session")
    game=ev[0]["game"]
    if not isinstance(session,str) or len(session)<6:
        raise ValueError("invalid guest session marker")
    seq=[x.get("seq") for x in ev]
    if any(type(n)!=int for n in seq) or seq!=sorted(set(seq)):
        raise ValueError("R17 trace events not strictly monotonic")
    if any(x.get("session")!=session or x["game"]!=game for x in ev):
        raise ValueError("different GDB sessions or game editions cannot be merged")
    if ev[0].get("loaded_elf_identity")!="CODEWORD_AND_CLASS_LITERAL_ONLY" or ev[0].get("guest_full_elf_sha256_independently_verified") is not False:
        raise ValueError("guest codeword check is not complete ELF SHA or true attestation")
    counts={k:0 for k in KINDS}
    for x in ev:
        kind=x["kind"];counts[kind]+=1
        if kind=="CLASS_BEFORE_BL" and x.get("exact_original_registers") is not True:
            raise ValueError("native class registration BL registers mismatch")
        if kind=="TABLE_BEFORE_BL" and x.get("relocated_table_pair_matches_static") is not True:
            raise ValueError("native method relocation table not observed as expected")
        if kind=="NATIVE_METHOD_ENTRY":
            for key in ("x0","x1","x2","x3","x4","lr","sp"):
                value=x.get(key)
                if not isinstance(value,str) or not value.startswith("0x"):
                    raise ValueError("missing original register read: "+key)
            if x.get("lua_child_object_identity")!="NOT_OBSERVED" or x.get("cclosure_function_mapping")!="NOT_PROVEN":
                raise ValueError("must not promote guest native method hit to Lua CClosure")
    if counts["NATIVE_METHOD_ENTRY"] and not counts["TABLE_BEFORE_BL"]:
        # Some guest sessions attach after initial registration; this script
        # requires a single complete lifecycle rather than joining unrelated
        # historic pointers.
        raise ValueError("native entry without a same-session table relocation hit")
    return {
      "status":"SELF_REPORTED_GDB_EVENTS_CONSISTENT_NOT_INDEPENDENTLY_ATTESTED",
      "game":game,"events_checked":len(ev),
      "session_event_counts":counts,
      "static_class_registration_hit":counts["CLASS_BEFORE_BL"]>0,
      "static_method_table_observed":counts["TABLE_BEFORE_BL"]>0,
      "static_executable_callback_hit":counts["NATIVE_METHOD_ENTRY"]>0,
      "actual_guest_observation_proven":False,
      "lua_child_object_identity_proven":False,
      "native_cpp_abi_proven":False,
      "game_runtime_status":"NOT_OBSERVED_INDEPENDENTLY",
    }

def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--log",type=Path,required=True)
    ap.add_argument("--out",type=Path,required=True)
    a=ap.parse_args()
    out=verify_lines(a.log.read_text("utf-8").splitlines())
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(out,ensure_ascii=False,indent=2)+"\n","utf-8")
    print(json.dumps(out,ensure_ascii=False,indent=2))
    return 2 if out["status"]=="NO_GUEST_EVENTS" else 0

if __name__=="__main__":sys.exit(main())
