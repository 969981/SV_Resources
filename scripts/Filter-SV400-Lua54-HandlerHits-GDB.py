"""Bounded Ryujinx-compatible native handler filter for exact Lua opcode PC.

Unlike a read watchpoint (GDB remote Z3, absent in some Ryujinx GDB stubs),
this uses only an original AArch64 handler hardware execution breakpoint.
It is *opt-in*, capped, and can be very slow due to host-side false hits.

At verified native interpreter entry main+0x41150:
    source -s python scripts/Filter-SV400-Lua54-HandlerHits-GDB.py
    sv400-filter-arm root 215522 2000
    continue
    # If a candidate matches: sv400-vm-opcode (full guest Proto code SHA).
No guest code writing; no claim of actual game test until connected.
"""
from __future__ import annotations

import importlib.util
import json
import os
from pathlib import Path

try:
    import gdb
except ImportError:
    gdb=None

MAX_FILTER_HITS=50000
DEFAULT_HITS=250


def filter_plan(watch_plan,maxhits):
    if (watch_plan.get("status") != "FULL_CODE_SHA_PINNED_READ_WATCHPOINT_PLAN_ONLY"
        or watch_plan.get("vm_execution_observed") is not False):
        raise ValueError("input must be pinned original Lua word plan")
    if (not isinstance(maxhits,int) or isinstance(maxhits,bool)
        or maxhits<1 or maxhits>MAX_FILTER_HITS):
        raise ValueError("maxhits must be an explicit bounded positive integer")
    addr=watch_plan["target_word_address"]
    if addr<=0 or addr%4:
        raise ValueError("untrusted original Proto.code instruction address")
    return {
        "target_nextpc":addr+4,
        "target_raw_word":watch_plan["word_u32"],
        "native_handler_rva":int(watch_plan["native_handler_rva"],16),
        "target_lua_pc":watch_plan["target_lua_pc"],
        "proto_scope":watch_plan["proto_scope"],
        "maxhits":maxhits,
        "status":"ARMED_NATIVE_HANDLER_HOST_FILTER_ONLY",
        "runtime_verified":False,
    }


def matches_handler_registers(plan,x27,w20,handler_rva):
    return (handler_rva == plan["native_handler_rva"]
            and x27 == plan["target_nextpc"]
            and (w20 & 0xffffffff) == plan["target_raw_word"])


def safe_plan(plan):
    return {k:v for k,v in plan.items()
            if k not in ("target_nextpc","target_raw_word")}


def load_module(path_env,modname):
    path=os.environ.get(path_env)
    if not path:
        raise ValueError("missing "+path_env)
    spec=importlib.util.spec_from_file_location(modname,path)
    if spec is None or spec.loader is None:
        raise ValueError("cannot load helper "+path_env)
    module=importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


if gdb is not None:
    class FilterSession:
        def __init__(self):
            self.bp=None
            self.plan=None
            self.hits=0

        class HandlerFilter(gdb.Breakpoint):
            def __init__(self,plan,session,absolute_address):
                # Explicitly hardware instruction breakpoint (remote Z1).
                super().__init__("*"+hex(absolute_address),
                                 type=gdb.BP_HARDWARE_BREAKPOINT)
                self.plan=plan
                self.session=session
                self.guest_rva=plan["native_handler_rva"]

            def stop(self):
                self.session.hits+=1
                count=self.session.hits
                try:
                    x27=int(gdb.parse_and_eval("$x27"))
                    w20=int(gdb.parse_and_eval("$x20"))
                    matched=matches_handler_registers(self.plan,x27,w20,self.guest_rva)
                except Exception as exc:
                    self.enabled=False
                    gdb.write("SV400_HANDLER_FILTER_UNREADABLE_REGISTER "+type(exc).__name__+"\n")
                    return True
                if matched:
                    self.enabled=False
                    gdb.write("SV400_HANDLER_FILTER_CANDIDATE "+json.dumps({
                        **safe_plan(self.plan),
                        "native_handler_hit_count":count,
                        "status":"NATIVE_HANDLER_X27_W20_MATCH_REQUIRES_FULL_PROTO_SHA",
                        "runtime_verified":False,
                        "next_action":"sv400-vm-opcode",
                    },sort_keys=True)+"\n")
                    return True
                if count>=self.plan["maxhits"]:
                    self.enabled=False
                    gdb.write("SV400_HANDLER_FILTER_CAP_REACHED "+json.dumps({
                        **safe_plan(self.plan),
                        "native_handler_hit_count":count,
                        "status":"BOUNDED_FILTER_EXHAUSTED_NOT_OBSERVED",
                        "runtime_verified":False,
                    },sort_keys=True)+"\n")
                    return True
                # Host-side false hit: this can slow down the emulator.
                # A bounded cap always prevents indefinite continuation.
                return False

        def arm(self,scope,pc,maxhits):
            if self.bp is not None and self.bp.is_valid():
                raise ValueError("disarm previous handler filter first")
            native=load_module("SV400_GDB_PREFLIGHT_SCRIPT","sv400_native_filter_pin")
            frame=load_module("SV400_FRAME_HELPER","sv400_frame_filter_pin")
            watch=load_module("SV400_READ_WATCH_HELPER","sv400_plan_filter_pin")
            expected=watch._pinned_manifest()
            base=native.configured_main_base()
            inferior=gdb.selected_inferior()
            if inferior is None:
                raise ValueError("no guest debugger target")
            if int(gdb.parse_and_eval("$pc")) != base+native.LUA_NATIVE_OPCODE_ENTRY_RVA:
                raise ValueError("arm only at verified Lua interpreter entry")
            native.verify_live_bytes(native.read_verified_elf(),base,
                                     lambda a,n:inferior.read_memory(a,n))
            source=watch.create_watch_plan(
                lambda a,n:inferior.read_memory(a,n),
                int(gdb.parse_and_eval("$x1")),expected,scope,pc,frame)
            plan=filter_plan(source,maxhits)
            elf=native.read_verified_elf()
            rva=plan["native_handler_rva"]
            if bytes(inferior.read_memory(base+rva,16))!=native.code_bytes_at_rva(elf,rva,16):
                raise ValueError("native handler bytes mismatch with original ELF")
            self.bp=self.HandlerFilter(plan,self,base+rva)
            self.plan=plan
            self.hits=0
            gdb.write("SV400_HANDLER_FILTER_ARMED "+json.dumps(safe_plan(plan),sort_keys=True)+"\n")
            gdb.write("WARNING: this host-side filter may run very slowly even with a cap.\n")

        def disarm(self):
            if self.bp is not None and self.bp.is_valid():
                self.bp.delete()
            self.bp=None
            self.plan=None
            self.hits=0
            gdb.write("SV400_HANDLER_FILTER_DISARMED\n")

    SESSION=FilterSession()

    class FilterArmCommand(gdb.Command):
        def __init__(self):
            super().__init__("sv400-filter-arm",gdb.COMMAND_USER)
        def invoke(self,args,from_tty):
            p=args.split()
            if len(p) not in (2,3):
                raise gdb.GdbError("usage: sv400-filter-arm root|setup LUA_PC [maxhits]")
            try:
                SESSION.arm(p[0],int(p[1],0),
                            int(p[2],0) if len(p)==3 else DEFAULT_HITS)
            except Exception as exc:
                raise gdb.GdbError(str(exc)) from exc

    class FilterDisarmCommand(gdb.Command):
        def __init__(self):
            super().__init__("sv400-filter-disarm",gdb.COMMAND_USER)
        def invoke(self,args,from_tty):
            if args.strip():
                raise gdb.GdbError("usage: sv400-filter-disarm")
            SESSION.disarm()

    FilterArmCommand()
    FilterDisarmCommand()
    gdb.write("SV400_BOUNDED_NATIVE_HANDLER_FILTER_REGISTERED; no breakpoint armed\n")
