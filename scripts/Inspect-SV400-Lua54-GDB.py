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

    SV400FrameCommand()
    gdb.write("SV400_VM_FRAME_COMMAND_REGISTERED; no debugger memory read occurred\n")
