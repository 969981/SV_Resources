"""Read-only SV Violet 4.0.0 ARM64 GDB native observation preflight.

Run from WSL2 gdb-multiarch AFTER connecting to the remote target:
    source -s python scripts/Probe-SV400-LuaVM-GDB.py
    sv400-native-preflight
    sv400-native-arm 0x458a4

Requires SV400_MAIN_BASE (verified guest VA) and SV400_VIOLET_ELF.
Does NOT identify the Lua VM dispatch loop or actual Lua Proto PCs.
Only registers at a native hardware breakpoint are collected. No guessed
Lua state layout and no software-breakpoint fallback.
"""
from __future__ import annotations

import hashlib
import json
import os
from pathlib import Path
import struct

try:
    import gdb
except ImportError:
    gdb = None

SOURCE_SHA = "84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30"
LUA_VERSION_STRING_XREF_RVA = 0x458A4
CHECK_RVAS = (0x1000, LUA_VERSION_STRING_XREF_RVA)
PROBE_MARKER = "NATIVE_CPU_BREAKPOINT_ONLY_NO_LUA_PROTO_IDENTITY"


def executable_segments(data: bytes):
    if len(data) < 128 or data[:4] != b"\x7fELF" or data[4:6] != b"\x02\x01":
        raise ValueError("expected ELF64 little-endian")
    if struct.unpack_from("<H", data, 18)[0] != 183:
        raise ValueError("expected AArch64")
    phoff = struct.unpack_from("<Q", data, 32)[0]
    entsize, count = struct.unpack_from("<HH", data, 54)
    if entsize < 56 or count == 0 or count > 2048:
        raise ValueError("invalid program headers")
    segments = []
    for idx in range(count):
        off = phoff + idx*entsize
        if off+56 > len(data):
            raise ValueError("truncated program headers")
        kind, flags, fileoff, vaddr, _, filesz, _, _ = struct.unpack_from(
            "<IIQQQQQQ", data, off)
        if kind == 1 and flags & 1:
            if fileoff+filesz > len(data):
                raise ValueError("truncated executable segment")
            segments.append((vaddr, vaddr+filesz, fileoff))
    if not segments:
        raise ValueError("no executable PT_LOAD")
    return segments


def code_bytes_at_rva(elf: bytes, rva: int, size: int = 16):
    for start, end, off in executable_segments(elf):
        if start <= rva and rva+size <= end:
            position = off + rva - start
            return elf[position:position+size]
    raise ValueError(f"RVA {rva:#x} outside executable PT_LOAD")


def verify_live_bytes(elf: bytes, main_base: int, reader, rvas=CHECK_RVAS):
    """reader(absolute_address,length) returns bytes; no guest writes."""
    if main_base <= 0 or main_base % 4096:
        raise ValueError("guest main base must be supplied, page-aligned")
    result = []
    for rva in rvas:
        expected = code_bytes_at_rva(elf, rva, 16)
        observed = bytes(reader(main_base+rva, len(expected)))
        if observed != expected:
            raise ValueError(f"guest code mismatch at main+{rva:#x}: "
                             "wrong build/base, or mapped code changed")
        result.append({"rva":hex(rva), "verified":True,
                       "bytes_sha256":hashlib.sha256(expected).hexdigest()})
    return result


def read_verified_elf():
    p = os.environ.get("SV400_VIOLET_ELF")
    if not p:
        raise ValueError("SV400_VIOLET_ELF is required")
    data = Path(p).expanduser().read_bytes()
    if hashlib.sha256(data).hexdigest() != SOURCE_SHA:
        raise ValueError("Violet 4.0.0 ELF SHA mismatch: refusing wrong game")
    return data


def configured_main_base():
    raw = os.environ.get("SV400_MAIN_BASE")
    if not raw:
        raise ValueError("SV400_MAIN_BASE must be verified live guest mapping")
    return int(raw, 0)


if gdb is not None:
    class ProbeSession:
        def __init__(self):
            self.elf = None
            self.base = None
            self.bp = None
            self.hits = 0

        def preflight(self):
            self.elf = read_verified_elf()
            self.base = configured_main_base()
            inferior = gdb.selected_inferior()
            if inferior is None:
                raise ValueError("no attached target: connect with target remote first")
            matched = verify_live_bytes(
                self.elf, self.base,
                lambda address, count: inferior.read_memory(address, count))
            report = {
                "status":"ELF_GUEST_EXECUTABLE_BYTES_MATCH",
                "source_sha256":SOURCE_SHA,
                "guest_main_base":hex(self.base),
                "checks":matched,
                "lua_vm_dispatch_pc":None,
                "lua_state_layout_verified":False,
                "runtime_lua_pc":None,
                "runtime_upvalues":None,
            }
            gdb.write("SV400_NATIVE_PREFLIGHT "+json.dumps(report)+"\n")
            return report

        def arm(self, rva: int):
            self.preflight()
            if self.bp is not None and self.bp.is_valid():
                raise ValueError("native hardware breakpoint already armed")
            permitted = {LUA_VERSION_STRING_XREF_RVA}
            for token in os.environ.get("SV400_AUDITED_NATIVE_RVAS", "").split(","):
                if token.strip():
                    permitted.add(int(token.strip(), 0))
            if rva not in permitted:
                raise ValueError("RVA has not been audited; explicitly add it to "
                                 "SV400_AUDITED_NATIVE_RVAS only after ARM64 validation")
            expected = code_bytes_at_rva(self.elf, rva, 16)
            actual = bytes(gdb.selected_inferior().read_memory(self.base+rva, 16))
            if expected != actual:
                raise ValueError("native probe address has unexpected bytes")
            self.bp = self.NativeBreakpoint(self.base+rva, rva, self)
            gdb.write(f"ARMED_HARDWARE_NATIVE_RVA main+{rva:#x}; "
                      "not a Lua VM PC unless independently verified\n")

        class NativeBreakpoint(gdb.Breakpoint):
            def __init__(self, addr, rva, owner):
                super().__init__("*"+hex(addr), type=gdb.BP_HARDWARE_BREAKPOINT)
                self.owner = owner
                self.rva = rva

            def stop(self):
                self.owner.hits += 1
                names = ("pc", "sp", "lr", "x0", "x1", "x2", "x3", "x4",
                         "x5", "x6", "x7", "x19", "x20", "x21", "x22")
                registers = {}
                for name in names:
                    try:
                        registers[name] = hex(int(gdb.parse_and_eval("$"+name)))
                    except Exception:
                        registers[name] = None
                event = {
                    "event":"native_cpu_breakpoint_hit",
                    "status":PROBE_MARKER,
                    "source_elf_sha256":SOURCE_SHA,
                    "guest_main_base":hex(self.owner.base),
                    "main_rva":hex(self.rva),
                    "breakpoint_hits":self.owner.hits,
                    "cpu_registers":registers,
                    "runtime_lua_proto_pc":None,
                    "runtime_closure_id":None,
                    "runtime_upvalue_cells":None,
                }
                dest = os.environ.get("SV400_NATIVE_TRACE_JSONL")
                if dest:
                    with Path(dest).expanduser().open("a", encoding="utf-8") as fp:
                        fp.write(json.dumps(event, sort_keys=True)+"\n")
                gdb.write("SV400_CPU_HIT "+json.dumps(event, sort_keys=True)+"\n")
                # Explicitly leave the remote guest paused for review.
                return True

        def disarm(self):
            if self.bp and self.bp.is_valid():
                self.bp.delete()
            self.bp = None
            gdb.write("SV400_NATIVE_PROBE_DISARMED\n")

    SESSION = ProbeSession()

    class PreflightCommand(gdb.Command):
        def __init__(self):
            super().__init__("sv400-native-preflight", gdb.COMMAND_USER)
        def invoke(self, arg, from_tty):
            if arg.strip():
                raise gdb.GdbError("usage: sv400-native-preflight")
            try:
                SESSION.preflight()
            except Exception as exc:
                raise gdb.GdbError(str(exc)) from exc

    class ArmCommand(gdb.Command):
        def __init__(self):
            super().__init__("sv400-native-arm", gdb.COMMAND_USER)
        def invoke(self, arg, from_tty):
            if not arg.strip():
                raise gdb.GdbError("usage: sv400-native-arm 0x458a4")
            try:
                SESSION.arm(int(arg.strip(), 0))
            except Exception as exc:
                raise gdb.GdbError(str(exc)) from exc

    class DisarmCommand(gdb.Command):
        def __init__(self):
            super().__init__("sv400-native-disarm", gdb.COMMAND_USER)
        def invoke(self, arg, from_tty):
            SESSION.disarm()

    PreflightCommand()
    ArmCommand()
    DisarmCommand()
    gdb.write("SV400_NATIVE_GDB_COMMANDS_REGISTERED; "
              "target not attached and no breakpoint armed\n")
