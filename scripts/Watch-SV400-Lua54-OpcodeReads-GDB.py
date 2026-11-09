"""SV Violet 4.0.0 hardware *read* watchpoints for exact original Lua words.

This is an optional local operator workflow. GDB remote Z3 read watchpoints
MAY be unsupported by the Ryujinx GDB stub; this script fails closed.
No guest writes, no instruction patching, no software watchpoint fallback.

Workflow at a paused, *pinned and verified* native Lua VM entry:
  source -s python scripts/Watch-SV400-Lua54-OpcodeReads-GDB.py
  sv400-watch-arm root 215522
  continue
  # If read watchpoint fires, this is a MEMORY READ, not yet proof VM opcode.
  # At pause, arm the matching one-shot native handler and continue:
  sv400-native-arm 0x453fc
  continue
  sv400-vm-opcode       # only now verifies live x27/w20/full Proto SHA.
"""
from __future__ import annotations

import importlib.util
import json
import os
from pathlib import Path
import struct

try:
    import gdb
except ImportError:
    gdb = None

ELF_SHA = "84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30"
BLUA_SHA = "c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815"
ENTRY_RVA = 0x41150
# All observed opcode numbers are pinned to original main.blua by previous CI.
WATCH_TARGETS = {
    "root": {215522: ("CLOSURE", 79, 0x453fc),
             215523: ("SETTABLE", 16, 0x41b9c)},
    "setup":{7:("CALL",68,0x4487c),8:("SETI",17,0x41d14),
             11:("CALL",68,0x4487c),32:("CALL",68,0x4487c),
             47:("CALL",68,0x4487c),48:("SETI",17,0x41d14),
             83:("CALL",68,0x4487c)},
}


def create_watch_plan(reader, ci_ptr, expected, scope, target_pc, frame_helper):
    """Require full original Proto code SHA and target instruction opcode.

    Addresses are local debugger-only; return a sanitized companion view for logs.
    Never promote the existence or activation of a watchpoint to a game event.
    """
    if scope not in WATCH_TARGETS or target_pc not in WATCH_TARGETS[scope]:
        raise ValueError("not one of the 9 pinned original root/Setup Lua PCs")
    frame = frame_helper.inspect_frame(
        reader, ci_ptr, expected, redact_pointers=False)
    if frame.get("status") != "ORIGINAL_PROTO_FULL_CODE_BYTES_MATCH" or frame.get("proto_scope") != scope:
        raise ValueError("actual guest frame does not match full original target Proto SHA")
    candidate=frame.get("savedpc_index_candidate")
    if not isinstance(candidate,int) or candidate>target_pc:
        raise ValueError("target Lua word has already passed in this guest frame")
    addresses=frame.get("candidate_addresses")
    if not addresses or "code_ptr" not in addresses:
        raise ValueError("no original Proto.code pointer observed")
    code_ptr=int(addresses["code_ptr"],16)
    code_length=expected[scope]["code_length_bytes"]
    if target_pc*4+4>code_length:
        raise ValueError("target Lua PC outside full original Proto code")
    word_address=code_ptr+target_pc*4
    raw=bytes(reader(word_address,4))
    if len(raw)!=4:
        raise ValueError("cannot read exact original target Lua opcode")
    word=struct.unpack("<I",raw)[0]
    name,op,handler=WATCH_TARGETS[scope][target_pc]
    if word & 0x7f != op:
        raise ValueError("target word opcode does not match original Lua PC contract")
    return {
        "status":"FULL_CODE_SHA_PINNED_READ_WATCHPOINT_PLAN_ONLY",
        "proto_scope":scope,"proto_id":expected[scope]["proto_id"],
        "proto_code_sha256":expected[scope]["code_sha256"],
        "target_lua_pc":target_pc,"lua_opcode":name,
        "native_handler_rva":hex(handler),
        "target_word_address":word_address,
        "word_u32":word,
        "vm_execution_observed":False,
        "watchpoint_hit_observed":False,
    }


def sanitized_watch_plan(plan):
    return {k:v for k,v in plan.items()
            if k not in ("target_word_address","word_u32")}


def _module(file_env,modname):
    path=os.environ.get(file_env)
    if not path:
        raise ValueError("missing "+file_env)
    spec=importlib.util.spec_from_file_location(modname,path)
    if spec is None or spec.loader is None:
        raise ValueError("invalid Python source path in "+file_env)
    module=importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def _pinned_manifest():
    filename=os.environ.get("SV400_FRAME_IDENTITIES_JSON")
    if not filename:
        raise ValueError("SV400_FRAME_IDENTITIES_JSON not set")
    doc=json.loads(Path(filename).read_text(encoding="utf-8"))
    if doc.get("original_blua_sha256")!=BLUA_SHA:
        raise ValueError("wrong original BLUA fingerprint manifest")
    expected=doc.get("proto_code_identities")
    if not isinstance(expected,dict) or set(expected)!={"root","setup"}:
        raise ValueError("not the two original Proto fingerprints")
    if expected["root"].get("code_sha256")!="402537c209657ed69f8147a0cc5ac7a377b88e30b1485595a993463f2ce68265":
        raise ValueError("root original SHA fingerprint changed")
    if expected["setup"].get("code_sha256")!="9491ca5a3f0ca76cc7a21d31ef8320bb57b95e7e2bdf990806d21d02946006c1":
        raise ValueError("Setup original SHA fingerprint changed")
    return expected


if gdb is not None:
    class WatchSession:
        def __init__(self):
            self.watch=None
            self.plan=None

        class OpcodeReadWatch(gdb.Breakpoint):
            def __init__(self,plan,session):
                # A read watchpoint requires hardware support: GDB remote Z3.
                # This CANNOT silently become a software single-step watcher.
                address=plan["target_word_address"]
                super().__init__(f"*(unsigned int *){address:#x}",
                                 type=gdb.BP_WATCHPOINT,wp_class=gdb.WP_READ)
                self.plan=plan
                self.session=session

            def stop(self):
                self.enabled=False
                self.session.watch=self
                gdb.write("SV400_LUA_OPCODE_MEMORY_READ "+json.dumps({
                    **sanitized_watch_plan(self.plan),
                    "status":"TARGET_WORD_READ_NOT_YET_VERIFIED_VM_FETCH",
                    "watchpoint_hit_observed":True,
                    "vm_execution_observed":False,
                    "next_action":"Arm matching native handler and verify x27/w20/full code",
                },sort_keys=True)+"\n")
                return True

        def arm(self,scope,pc):
            if self.watch is not None and self.watch.is_valid():
                raise ValueError("prior read watchpoint must first be disarmed")
            if scope not in WATCH_TARGETS or pc not in WATCH_TARGETS[scope]:
                raise ValueError("not a pinned original Lua PC")
            native=_module("SV400_GDB_PREFLIGHT_SCRIPT","sv400_pin_native_watch")
            frame=_module("SV400_FRAME_HELPER","sv400_pin_frame_watch")
            expected=_pinned_manifest()
            main_base=native.configured_main_base()
            guest=gdb.selected_inferior()
            if guest is None:
                raise ValueError("no actual attached guest")
            native_pc=int(gdb.parse_and_eval("$pc"))
            if native_pc!=main_base+ENTRY_RVA:
                raise ValueError("arm watchpoint only at verified interpreter entry main+0x41150")
            elf=native.read_verified_elf()
            native.verify_live_bytes(elf,main_base,
                                     lambda addr,n:guest.read_memory(addr,n))
            ci=int(gdb.parse_and_eval("$x1"))
            plan=create_watch_plan(lambda addr,n:guest.read_memory(addr,n),
                                   ci,expected,scope,pc,frame)
            watch=self.OpcodeReadWatch(plan,self)
            self.plan=plan
            self.watch=watch
            gdb.write("SV400_LUA_OPCODE_READ_WATCH_ARMED "+json.dumps(
                sanitized_watch_plan(plan),sort_keys=True)+"\n")
            gdb.write("Hardware guest read-watchpoint only; no evidence of VM execution yet.\n")

        def disarm(self):
            if self.watch is not None and self.watch.is_valid():
                self.watch.delete()
            self.watch=None
            self.plan=None
            gdb.write("SV400_LUA_OPCODE_READ_WATCH_DISARMED\n")

    SESSION=WatchSession()

    class WatchArmCommand(gdb.Command):
        def __init__(self):
            super().__init__("sv400-watch-arm",gdb.COMMAND_USER)
        def invoke(self,args,from_tty):
            parts=args.split()
            if len(parts)!=2:
                raise gdb.GdbError("usage: sv400-watch-arm root|setup LUA_PC")
            try:
                SESSION.arm(parts[0],int(parts[1],0))
            except Exception as exc:
                raise gdb.GdbError(str(exc)) from exc

    class WatchDisarmCommand(gdb.Command):
        def __init__(self):
            super().__init__("sv400-watch-disarm",gdb.COMMAND_USER)
        def invoke(self,args,from_tty):
            if args.strip():
                raise gdb.GdbError("usage: sv400-watch-disarm")
            SESSION.disarm()

    WatchArmCommand()
    WatchDisarmCommand()
    gdb.write("SV400_READ_WATCH_COMMANDS_REGISTERED; no target access or watchpoint created\n")
