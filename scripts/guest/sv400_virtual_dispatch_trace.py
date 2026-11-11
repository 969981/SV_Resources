#!/usr/bin/env python3
"""SV 4.0.0 guest AArch64 GDB trace. OBSERVATION ONLY; does not patch game state.

Usage in GDB on a *guest AArch64* remote stub:
  source scripts/guest/sv400_virtual_dispatch_trace.py
  sv400-trace-arm 0x<verified_guest_address_of_FUN_0159B96C> sv400_trace.jsonl 20
  continue
  sv400-trace-off

The function address is absolute guest PC, NOT a raw Ghidra VA/main+RVA.
"""
import datetime
import json
import struct
import gdb

GH_ENTRY = 0x0159B96C
GH_CTOR = 0x0175D004
GH_HELPER = 0x0159BA2C
GH_VTABLE = 0x0453FFD0
GH_GLOBAL_VERSION = 0x048420A8
GH_A_ROOT = 0x047D8B20
GH_B_ROOT = 0x047D4E00
GH_A_SLOT = 0x04835100
GH_B_SLOT = 0x04834F40
PREFIX = bytes.fromhex("fd7bbfa9fd03009103050994")
EDITIONS = {
    (bytes.fromhex("e1031f2a"), bytes.fromhex("40068052")): ("scarlet", 0, 50),
    (bytes.fromhex("21008052"), bytes.fromhex("60068052")): ("violet", 1, 51),
}
_active = None


def reg(name):
    return int(gdb.parse_and_eval("$" + name)) & ((1 << 64) - 1)


def read_bytes(addr, size):
    if not addr:
        return None
    try:
        return bytes(gdb.selected_inferior().read_memory(addr, size))
    except (gdb.error, MemoryError, ValueError):
        return None


def u(addr, size):
    buf = read_bytes(addr, size)
    return int.from_bytes(buf, "little") if buf is not None else None


def hx(value):
    return "0x%x" % value if value is not None else None


def caller_decode(lr, target):
    ins = u(lr - 4, 4) if lr >= 4 else None
    out = {"lr_minus_4": hx(lr - 4) if lr >= 4 else None,
           "opcode": hx(ins), "type": "unresolved"}
    if ins is None:
        return out
    if (ins & 0xFFFFFC1F) == 0xD63F0000:
        n = (ins >> 5) & 31
        value = reg("x" + str(n)) if n < 31 else None
        out.update(type="BLR", branch_reg="x%d" % n,
                   branch_reg_value=hx(value), matches_target=value == target)
    elif (ins & 0xFC000000) == 0x94000000:
        imm = ins & 0x03FFFFFF
        if imm & 0x02000000:
            imm -= 0x04000000
        dest = (lr - 4 + (imm << 2)) & ((1 << 64) - 1)
        out.update(type="BL", decoded_target=hx(dest), matches_target=dest == target)
    return out


class Watch(gdb.Breakpoint):
    def __init__(self, session, label, address):
        super().__init__("*" + hx(address), internal=True)
        self.session = session
        self.label = label

    def stop(self):
        try:
            self.session.record(self.label)
        except Exception as exc:
            gdb.write("SV400 trace capture error: %s\n" % exc, gdb.STDERR)
        return False


class Session:
    def __init__(self, entry, path, max_hits):
        architecture = gdb.selected_frame().architecture().name().lower()
        if "aarch64" not in architecture:
            raise gdb.GdbError("Requires guest AArch64 GDB registers; got: " + architecture)
        if read_bytes(entry, len(PREFIX)) != PREFIX:
            raise gdb.GdbError("Target does not match 4.0.0 instruction prefix at " + hx(entry))
        pair = (read_bytes(entry + 0x5C, 4), read_bytes(entry + 0x68, 4))
        if pair not in EDITIONS:
            raise gdb.GdbError("Edition immediates do not match either verified SV 4.0.0 build")
        if read_bytes(entry + 0xB8, 8) != bytes.fromhex("00a900b9c0035fd6"):
            raise gdb.GdbError("Post-write store/RET did not match the original ARM64 code")
        self.entry = entry
        self.slide = entry - GH_ENTRY
        self.game, self.edition, self.game_version = EDITIONS[pair]
        self.path = path
        self.max_hits = max_hits
        self.entry_hits = 0
        self.ctor_hits = 0
        self.known_constructed = set()
        self.file = open(path, "a", encoding="utf-8")
        self.watches = [
            Watch(self, "target_entry", entry),
            Watch(self, "edition_helper_entry", self.abs(GH_HELPER)),
            Watch(self, "post_global_write", entry + 0xBC),
            Watch(self, "class_constructor_entry", self.abs(GH_CTOR)),
        ]
        self.emit({"event": "preflight", "game": self.game,
                   "verified_absolute_entry": hx(entry), "ghidra_image_base": "0x100000",
                   "mapping": "uniform slide inferred from verified code bytes; data mapping independently checked per sample",
                   "creator_va": hx(self.abs(GH_CTOR)),
                   "max_target_hits": max_hits})

    def abs(self, ghidra_va):
        return self.slide + ghidra_va

    def emit(self, record):
        record["utc"] = datetime.datetime.now(datetime.timezone.utc).isoformat()
        self.file.write(json.dumps(record, ensure_ascii=False, sort_keys=True) + "\n")
        self.file.flush()

    def data_state(self):
        result = {}
        for label, root, slot, off, size in [
            ("A", GH_A_ROOT, GH_A_SLOT, 0x2C, 4),
            ("B", GH_B_ROOT, GH_B_SLOT, 0xB0BC, 4)
        ]:
            root_ptr = u(self.abs(root), 8)
            valid = root_ptr == self.abs(slot)
            obj = u(root_ptr, 8) if valid else None
            record = {"relocation_matches_expected_slot": valid,
                      "root_address": hx(self.abs(root)), "slot_address": hx(root_ptr),
                      "instance": hx(obj)}
            if obj:
                record["edition_field"] = u(obj + off, size)
                if label == "A":
                    record["enable_flag"] = u(obj + 0x28, 1)
                else:
                    record["enable_flag"] = u(obj + 0xB0B8, 1)
            result[label] = record
        result["global_game_version"] = u(self.abs(GH_GLOBAL_VERSION), 4)
        return result

    def record(self, label):
        pc, lr = reg("pc"), reg("x30")
        x0 = reg("x0")
        data = {"event": label, "pc": hx(pc), "lr": hx(lr),
                "x0": hx(x0), "x1": hx(reg("x1")),
                "x8": hx(reg("x8")), "sp": hx(reg("sp"))}
        if label == "class_constructor_entry":
            self.ctor_hits += 1
            if self.ctor_hits <= 256:
                self.known_constructed.add(x0)
                data["constructed_object_candidate"] = hx(x0)
                data["entry_only_not_construction_complete"] = True
            else:
                self.watches[3].enabled = False
        if label == "target_entry":
            self.entry_hits += 1
            vptr = u(x0, 8)
            slot = u(vptr + 0x88, 8) if vptr else None
            data.update(
                caller=caller_decode(lr, self.entry),
                candidate_x0_vptr=hx(vptr),
                candidate_vtable_slot_17=hx(slot),
                vtable_slot_matches_target=slot == self.entry,
                vptr_matches_expected_table=vptr == self.abs(GH_VTABLE),
                x0_previously_seen_in_constructor=x0 in self.known_constructed,
                x0_is_this_not_assumed=True
            )
            gdb.write("SV400 %s entry #%d pc=%s lr=%s slot_match=%s\n" %
                      (self.game, self.entry_hits, hx(pc), hx(lr), slot == self.entry))
            if self.entry_hits >= self.max_hits:
                for bp in self.watches:
                    bp.enabled = False
        if label == "edition_helper_entry":
            data["argument_edition"] = reg("x1") & 0xffffffff
            data["object_A_before_edition"] = u(x0 + 0x2C, 4)
        if label == "post_global_write":
            data["state_after_write"] = self.data_state()
            data["expected_edition"] = self.edition
            data["expected_global_game_version"] = self.game_version
        self.emit(data)

    def close(self):
        for bp in self.watches:
            bp.delete()
        self.file.close()


class Arm(gdb.Command):
    def __init__(self):
        super().__init__("sv400-trace-arm", gdb.COMMAND_USER)

    def invoke(self, arguments, from_tty):
        global _active
        args = gdb.string_to_argv(arguments)
        if len(args) not in (2, 3):
            raise gdb.GdbError("Usage: sv400-trace-arm <absolute_guest_PC> <trace.jsonl> [max_hits]")
        if _active:
            raise gdb.GdbError("Previous session active. Run sv400-trace-off first.")
        entry = int(args[0], 0)
        limit = int(args[2]) if len(args) == 3 else 20
        if limit < 1 or limit > 1000:
            raise gdb.GdbError("max_hits must be 1..1000")
        _active = Session(entry, args[1], limit)
        gdb.write("SV400 trace armed (%s), use 'continue' to observe guest hits\n" % _active.game)


class Off(gdb.Command):
    def __init__(self):
        super().__init__("sv400-trace-off", gdb.COMMAND_USER)

    def invoke(self, arguments, from_tty):
        global _active
        if _active:
            _active.close()
            _active = None
        gdb.write("SV400 trace disabled\n")


Arm()
Off()
