"""Optional read-only SV 4.0.0 live Lua VM frame inspection for GDB.

Load AFTER attaching and pausing at guest main+0x41150:
    source -s python scripts/Inspect-SV400-Lua54-GDB.py
    sv400-vm-frame

This does not discover a VM breakpoint or run game code. The command refuses
to execute unless the native PC, ELF/BLUA hashes and guest code mapping match.
No UpVal or receiver values are guessed or published.
"""
import hashlib
import importlib.util
import json
import os
import secrets
from pathlib import Path

try:
    import gdb
except ImportError:
    gdb = None

ELF_SHA = "84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30"
BLUA_SHA = "c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815"
SETUP_SHA = "9491ca5a3f0ca76cc7a21d31ef8320bb57b95e7e2bdf990806d21d02946006c1"
ENTRY_RVA = 0x41150


def _load_source(filename, modname):
    spec=importlib.util.spec_from_file_location(modname, filename)
    if spec is None or spec.loader is None:
        raise ValueError("could not load pinned local inspection source")
    obj=importlib.util.module_from_spec(spec)
    spec.loader.exec_module(obj)
    return obj


def _inputs():
    # Operator-supplied absolute paths avoid guessing the remote GDB cwd.
    for name in ("SV400_FRAME_HELPER","SV400_GDB_PREFLIGHT_SCRIPT",
                 "SV400_FRAME_IDENTITIES_JSON","SV400_VIOLET_ELF",
                 "SV400_MAIN_BASE"):
        if not os.environ.get(name):
            raise ValueError("required environment variable "+name)
    assert os.environ["SV400_FRAME_HELPER"]
    manifest=json.loads(Path(os.environ["SV400_FRAME_IDENTITIES_JSON"]).read_text())
    if manifest.get("original_blua_sha256") != BLUA_SHA:
        raise ValueError("not pinned main.blua manifest")
    roots=manifest.get("proto_code_identities")
    if not isinstance(roots,dict) or roots.get("setup",{}).get("code_sha256") != SETUP_SHA:
        raise ValueError("Setup native code SHA differs from pinned Proto17900")
    return roots


def inspect_paused_frame(gdb_module, main_base, expected, elf_probe, frame_probe):
    inferior=gdb_module.selected_inferior()
    if inferior is None:
        raise ValueError("no guest process attached")
    if int(gdb_module.parse_and_eval("$pc")) != main_base + ENTRY_RVA:
        raise ValueError("VM inspection requires pause at native Lua interpreter entry main+0x41150")
    elf_probe.verify_live_bytes(
        elf_probe.read_verified_elf(),
        main_base,
        lambda addr,count:inferior.read_memory(addr,count))
    frame_probe.validate_expected(expected)
    return frame_probe.inspect_frame(
        lambda addr,count:inferior.read_memory(addr,count),
        int(gdb_module.parse_and_eval("$x1")),
        expected,
        redact_pointers=True)


# Session-local identities: no guest pointers or salt exported.
SESSION_SALT=secrets.token_bytes(32)


def inspect_paused_opcode(gdb_module,main_base,expected,elf_probe,opcode_helper):
    """Bounded read-only GDB operation at first instruction of audited handler.

    Requires an operator to pause the guest at an opcode handler *entry*.
    Does not register or autonomously arm high-frequency VM breakpoints.
    """
    guest=gdb_module.selected_inferior()
    if guest is None:
        raise ValueError("no attached guest")
    pc=int(gdb_module.parse_and_eval("$pc"))
    handler=pc-main_base
    if handler not in {v[0] for v in opcode_helper.TARGET_HANDLERS.values()}:
        raise ValueError("not paused exactly at audited Lua opcode handler entry")
    elf=elf_probe.read_verified_elf()
    elf_probe.verify_live_bytes(elf,main_base,
                                lambda addr,n:guest.read_memory(addr,n))
    expected_bytes=elf_probe.code_bytes_at_rva(elf,handler,16)
    if bytes(guest.read_memory(pc,16))!=expected_bytes:
        raise ValueError("guest opcode handler bytes changed")
    register=lambda name:int(gdb_module.parse_and_eval("$"+name))
    read=lambda addr,n:guest.read_memory(addr,n)
    ci=register("x25")
    regbase=register("x26")
    nextpc=register("x27")
    instr=register("x20")&0xffffffff
    result=opcode_helper.inspect_handler_entry(read,ci,regbase,nextpc,
                                               instr,handler,expected)
    result["observer_type"]="OPERATOR_PAUSED_GDB_NATIVE_HANDLER"
    result["runtime_guest_source_attested_by_ci"]=False
    if result["status"]!="ORIGINAL_PROTO_HANDLER_WORD_AND_SHA_MATCH":
        return result
    scope,luapc=result["proto_scope"],result["lua_pc"]
    if scope=="root" and luapc==215522:
        result["before_closure_parent_R55_R58"]=(
            opcode_helper.snapshot_root_regs_if_confirmed(
                read,result,regbase,SESSION_SALT))
    elif scope=="setup":
        if luapc in (8,48) and result["opcode"]=="SETI":
            slot={8:2,48:4}[luapc]
            result["factory_return_tvalue"]=opcode_helper.read_tvalue(
                read,regbase+slot*16,SESSION_SALT)
            result["factory_return_register"]=slot
        elif luapc in (11,32,83) and result["opcode"]=="CALL":
            a=(instr>>7)&0xff
            result["actual_callable_tvalue"]=opcode_helper.read_tvalue(
                read,regbase+a*16,SESSION_SALT)
            result["callee_register"]=a
            if luapc in (11,83):
                result["actual_receiver_tvalue"]=opcode_helper.read_tvalue(
                    read,regbase+(a+1)*16,SESSION_SALT)
            # This Closure was code-fingerprint matched by inspect_handler_entry.
            func=opcode_helper.read_u64(read,ci)
            closure=opcode_helper.read_u64(read,func)
            result["setup_upval_snapshots"]=[
                opcode_helper.snapshot_upval(read,closure,slot,SESSION_SALT)
                for slot in (0,1,2)]
    result["real_callee_proto_or_c_rva_verified"]=False
    result["behavior_equivalence_verified"]=False
    return result


if gdb is not None:
    class SV400FrameCommand(gdb.Command):
        def __init__(self):
            super().__init__("sv400-vm-frame",gdb.COMMAND_USER)
        def invoke(self,arg,from_tty):
            if arg.strip():
                raise gdb.GdbError("usage: sv400-vm-frame")
            try:
                identities=_inputs()
                native=_load_source(os.environ["SV400_GDB_PREFLIGHT_SCRIPT"],
                                    "sv400_pin_native_preflight")
                frame=_load_source(os.environ["SV400_FRAME_HELPER"],
                                   "sv400_pin_frame_helper")
                base=native.configured_main_base()
                out=inspect_paused_frame(gdb,base,identities,native,frame)
                out["observer_type"]="LOCAL_GDB_PAUSED_NATIVE_ENTRY"
                out["runtime_upvalue_cells_verified"]=False
                out["real_call_return_objects_verified"]=False
                out["static_native_dispatch_entry_rva"]=hex(ENTRY_RVA)
                gdb.write("SV400_FRAME_EVIDENCE "+json.dumps(out,sort_keys=True)+"\n")
            except Exception as exc:
                raise gdb.GdbError(str(exc)) from exc


    class SV400OpcodeCommand(gdb.Command):
        def __init__(self):
            super().__init__("sv400-vm-opcode",gdb.COMMAND_USER)
        def invoke(self,arg,from_tty):
            if arg.strip():
                raise gdb.GdbError("usage: sv400-vm-opcode")
            try:
                identities=_inputs()
                native=_load_source(os.environ["SV400_GDB_PREFLIGHT_SCRIPT"],
                                    "sv400_pin_native_opcode")
                helper_path=os.environ.get("SV400_OPCODE_CONTEXT_HELPER")
                if not helper_path:
                    raise ValueError("SV400_OPCODE_CONTEXT_HELPER path not set")
                opcode=_load_source(helper_path,"sv400_pin_opcode_context")
                base=native.configured_main_base()
                out=inspect_paused_opcode(gdb,base,identities,native,opcode)
                gdb.write("SV400_OPCODE_EVIDENCE "+json.dumps(out,sort_keys=True)+"\n")
            except Exception as exc:
                raise gdb.GdbError(str(exc)) from exc

    SV400FrameCommand()
    SV400OpcodeCommand()
    gdb.write("SV400_VM_FRAME_COMMAND_REGISTERED; no debugger memory read occurred\n")
