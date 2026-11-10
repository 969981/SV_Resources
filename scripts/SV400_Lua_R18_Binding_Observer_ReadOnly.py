"""R18 read-only observer for original SV 4.0.0 Lua SELF/CALL and f558733FC.

Run only after attaching GDB to an offline AArch64 guest:
  set $main = 0xACTUAL_LOADED_MAIN_NSO_BASE
  set $r18_game = 0  # 0 Scarlet, 1 Violet
  set pagination off
  set logging file r18-local-private-gdb.log
  set logging enabled on
  source scripts/SV400_Lua_R18_Binding_Observer_ReadOnly.py
  continue

Software breakpoints modify guest code and timing. Pointer dumps are local
debug evidence; review them before publishing. This observer never claims an
independent ELF hash attestation or a proven CClosure layout.
"""
import json
import struct
import uuid
import gdb

GAME_NAMES = {0: "scarlet_main", 1: "violet_main"}
GAME_SHAS = {
    0: "53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f",
    1: "84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30",
}
BASE = 0
GAME = 0
SESSION = str(uuid.uuid4())
SEQ = 0
VM_EVENTS = 0
MAX_VM_EVENTS = 160
LAST_CALL_BY_L = {}
BREAKPOINTS = []

def reg(name):
    return int(gdb.parse_and_eval("$" + name))

def mem(address, count):
    if not 0 < address < (1 << 64) or not 0 < count <= 0x100:
        raise ValueError("bounded guest read rejected")
    return bytes(gdb.selected_inferior().read_memory(address, count))

def safe_mem(address, count):
    try:
        return mem(address, count).hex()
    except Exception as exc:
        return "UNREADABLE:" + str(exc)[:120]

def tvalue(address):
    try:
        raw = mem(address, 16)
        return {
            "address": hex(address),
            "raw16": raw.hex(),
            "word0": hex(struct.unpack("<Q", raw[:8])[0]),
            "word1": hex(struct.unpack("<Q", raw[8:])[0]),
        }
    except Exception as exc:
        return {"address": hex(address), "raw16": "UNREADABLE:" + str(exc)[:120]}

def emit(kind, **values):
    global SEQ
    SEQ += 1
    record = {
        "source": "guest-gdb-readonly-self-reported",
        "session": SESSION,
        "seq": SEQ,
        "kind": kind,
        "game": GAME_NAMES[GAME],
        "elf_sha256_claim": GAME_SHAS[GAME],
        "runtime_attestation": "NOT_INDEPENDENTLY_VERIFIED",
        **values
    }
    gdb.write("R18_EVENT " + json.dumps(record, sort_keys=True) + "\n")
    return SEQ

def opcode(word):
    return word & 0x7f

def a_field(word):
    return (word >> 7) & 0xff

def b_field(word):
    return (word >> 16) & 0xff

def c_field(word):
    return (word >> 24) & 0xff

def require(off, expected_hex):
    expected = bytes.fromhex(expected_hex)
    actual = mem(BASE + off, len(expected))
    if actual != expected:
        raise ValueError("original instruction mismatch at +0x%x: %s" %
                         (off, actual.hex().upper()))

def bounded_vm_event():
    global VM_EVENTS
    if VM_EVENTS >= MAX_VM_EVENTS:
        return False
    VM_EVENTS += 1
    return True

class Observer(gdb.Breakpoint):
    def __init__(self, off, kind):
        super().__init__("*0x%x" % (BASE + off), internal=False)
        self.off = off
        self.kind = kind
        BREAKPOINTS.append(self)

    def stop(self):
        try:
            pc, sp = reg("pc"), reg("sp")
            if self.kind == "SELF_HANDLER":
                word = reg("x20") & 0xffffffff
                if opcode(word) != 20 or not bounded_vm_event():
                    return False
                # At +0x42088 the handler has NOT yet assigned X23/X24
                # for this instruction. Derive source slots from B/C and
                # the proven VM register base X26 instead.
                base, dest = reg("x26"), reg("x22")
                a, b, c = a_field(word), b_field(word), c_field(word)
                key_is_constant = bool(word & 0x8000)
                key_base = base
                if key_is_constant:
                    try:
                        key_base = int.from_bytes(mem(sp + 0x20, 8), "little")
                    except Exception:
                        key_base = 0
                object_slot = base + b * 16
                key_slot = key_base + c * 16 if key_base else 0
                emit(self.kind, pc=hex(pc), sp=hex(sp),
                     instruction_word=hex(word), A=a, B=b, C=c,
                     K=int(key_is_constant),
                     vm_register_base=hex(base),
                     destination_slot=hex(dest),
                     destination_matches_A=(dest == base + a * 16),
                     object_slot=hex(object_slot),
                     object_tvalue=tvalue(object_slot),
                     key_slot=hex(key_slot) if key_slot else None,
                     key_tvalue=tvalue(key_slot) if key_slot else None,
                     key_base=hex(key_base),
                     x19=hex(reg("x19")), x20=hex(word),
                     x23_before_handler=hex(reg("x23")),
                     x24_before_handler=hex(reg("x24")),
                     x21=hex(reg("x21")), x22=hex(dest),
                     x26=hex(base), x27=hex(reg("x27")))
            elif self.kind == "CALL_HANDLER":
                word = reg("x20") & 0xffffffff
                if opcode(word) != 68 or b_field(word) != 3 or not bounded_vm_event():
                    return False
                lua_state, function_slot = reg("x21"), reg("x22")
                function_tv = tvalue(function_slot)
                word0 = function_tv.get("word0", "0")
                candidate = int(word0, 16) if word0.startswith("0x") else 0
                tag = int(function_tv.get("word1", "0"), 16) & 0xff
                masked_tag = tag & 0x3f
                a = a_field(word)
                expected_slot = reg("x26") + a * 16
                call_id = emit(self.kind, pc=hex(pc), sp=hex(sp),
                               instruction_word=hex(word), A=a, B=b_field(word), C=c_field(word),
                               lua_state=hex(lua_state), function_slot=hex(function_slot),
                               expected_function_slot=hex(expected_slot),
                               function_slot_matches_A=(function_slot == expected_slot),
                               function_tvalue_tag=hex(tag),
                               masked_function_tag=hex(masked_tag),
                               cclosure_f_plus_0x18_raw=safe_mem(candidate + 0x18, 8) if candidate and masked_tag == 0x26 else "NOT_A_CLOSURE_CANDIDATE",
                               function_tvalue=function_tv,
                               next_tvalue=tvalue(function_slot + 16),
                               third_tvalue=tvalue(function_slot + 32),
                               candidate_gc_pointer=hex(candidate),
                               candidate_object_bytes_0x80=safe_mem(candidate, 0x80) if candidate else "NOT_AVAILABLE",
                               x20=hex(word), x21=hex(lua_state), x22=hex(function_slot),
                               x23=hex(reg("x23")), x26=hex(reg("x26")), x27=hex(reg("x27")),
                               lr=hex(reg("x30")))
                LAST_CALL_BY_L[lua_state] = {
                    "seq": call_id,
                    "function_slot": function_slot,
                    "function_word0_candidate": candidate,
                    "function_tvalue": function_tv,
                }
            elif self.kind == "NATIVE_ENTRY":
                lua_state = reg("x0")
                last = LAST_CALL_BY_L.get(lua_state)
                candidate = last.get("function_word0_candidate", 0) if last else 0
                emit(self.kind, pc=hex(pc), lua_state=hex(lua_state),
                     matching_recent_call=last,
                     candidate_closure_pointer=hex(candidate) if candidate else None,
                     candidate_closure_bytes_0x80=safe_mem(candidate, 0x80) if candidate else "NOT_AVAILABLE",
                     x1=hex(reg("x1")), x2=hex(reg("x2")), x3=hex(reg("x3")),
                     x4=hex(reg("x4")), x5=hex(reg("x5")), x6=hex(reg("x6")),
                     x7=hex(reg("x7")), x8=hex(reg("x8")),
                     lr=hex(reg("x30")), sp=hex(sp),
                     cclosure_f_offset="NOT_ASSUMED",
                     cclosure_layout="RAW_BYTES_ONLY_NOT_INTERPRETED")
            elif self.kind == "HELPER1_BEFORE":
                emit(self.kind, pc=hex(pc), x0=hex(reg("x0")),
                     x1=hex(reg("x1")), lr=hex(reg("x30")), sp=hex(sp))
            elif self.kind == "HELPER1_RETURN":
                result = reg("x0")
                emit(self.kind, pc=hex(pc), result_x0=hex(result),
                     result_bytes_candidate_0x40=safe_mem(result, 0x40) if result else "NULL",
                     result_pointer_semantics="NOT_PROVEN",
                     lr=hex(reg("x30")), sp=hex(sp))
            elif self.kind == "HELPER2_BEFORE":
                emit(self.kind, pc=hex(pc), x0=hex(reg("x0")),
                     x1=hex(reg("x1")), x2=hex(reg("x2")),
                     lr=hex(reg("x30")), sp=hex(sp))
            elif self.kind == "HELPER2_RETURN":
                emit(self.kind, pc=hex(pc), result_x0=hex(reg("x0")),
                     result_interpretation="RAW_REGISTER_ONLY_NO_DEREFERENCE",
                     lr=hex(reg("x30")), sp=hex(sp))
            elif self.kind == "GLOBAL_SLOT_BEFORE_LOAD":
                page = reg("x8")
                slot = page + 0xf30
                emit(self.kind, pc=hex(pc), x8_page=hex(page),
                     computed_slot=hex(slot), slot_bytes_0x20=safe_mem(slot, 0x20),
                     lr=hex(reg("x30")), sp=hex(sp))
            elif self.kind == "GLOBAL_POINTER_LOADED":
                target = reg("x8")
                emit(self.kind, pc=hex(pc), x8_target_candidate=hex(target),
                     target_bytes_0x20=safe_mem(target, 0x20) if target else "NULL",
                     pointer_role="INDIRECT_CALL_TARGET_CANDIDATE",
                     lr=hex(reg("x30")), sp=hex(sp))
            elif self.kind == "INDIRECT_CALL":
                x0, x1, x8 = reg("x0"), reg("x1"), reg("x8")
                emit(self.kind, pc=hex(pc), x0_arg=hex(x0), x1_arg=hex(x1),
                     x8_target_candidate=hex(x8),
                     target_rva_candidate=hex(x8 - BASE) if x8 >= BASE else None,
                     x0_bytes_0x40=safe_mem(x0, 0x40) if x0 else "NULL",
                     x1_bytes_0x20_candidate=safe_mem(x1, 0x20) if x1 else "NOT_AVAILABLE",
                     lr=hex(reg("x30")), sp=hex(sp))
            elif self.kind == "INDIRECT_RETURN":
                emit(self.kind, pc=hex(pc), return_x0=hex(reg("x0")),
                     lr=hex(reg("x30")), sp=hex(sp),
                     note="after BLR and before wrapper clears W0")
        except Exception as exc:
            emit("DIAGNOSTIC", stage=self.kind, error=str(exc)[:220])
        return False

try:
    BASE = reg("main")
    GAME = int(gdb.parse_and_eval("$r18_game"))
    if GAME not in GAME_SHAS:
        raise ValueError("$r18_game must be 0 (Scarlet) or 1 (Violet)")
    if BASE <= 0 or BASE % 0x1000:
        raise ValueError("$main must be the actual page-aligned loaded main NSO base")

    checks = {
        0x42088: "E91340F9885E1053",
        0x4487c: "897E1853885E1053",
        0x1959e58: "EE9EC797",
        0x1959e5c: "800300B4",
        0x1959e74: "DFE3C897",
        0x1959e78: "486F01D0",
        0x1959e94: "089947F9",
        0x1959e98: "89425F39",
        0x1959ef8: "00013FD6",
        0x1959efc: "F44F42A9",
    }
    for off, word in checks.items():
        require(off, word)
    if mem(BASE + 0x3ae83c2, 9) != b"f558733FC":
        raise ValueError("original method-name literal mismatch")

    emit("SESSION", main_base=hex(BASE),
         guest_full_elf_sha256_independently_verified=False,
         exact_codeword_and_method_literal_checks=True,
         breakpoint_kind="SOFTWARE_GDB_BREAKPOINTS_TIMING_AFFECTING",
         cclosure_layout="NOT_ASSUMED",
         cpp_abi="NOT_RESOLVED")

    Observer(0x42088, "SELF_HANDLER")
    Observer(0x4487c, "CALL_HANDLER")
    Observer(0x1959e40, "NATIVE_ENTRY")
    Observer(0x1959e58, "HELPER1_BEFORE")
    Observer(0x1959e5c, "HELPER1_RETURN")
    Observer(0x1959e74, "HELPER2_BEFORE")
    Observer(0x1959e78, "HELPER2_RETURN")
    Observer(0x1959e94, "GLOBAL_SLOT_BEFORE_LOAD")
    Observer(0x1959e98, "GLOBAL_POINTER_LOADED")
    Observer(0x1959ef8, "INDIRECT_CALL")
    Observer(0x1959efc, "INDIRECT_RETURN")

    gdb.write("R18 observer armed. Runtime evidence will be emitted only after the game reaches these original code paths.\n")
except Exception as exc:
    for bp in BREAKPOINTS:
        try:
            bp.delete()
        except Exception:
            pass
    gdb.write("R18_OBSERVER_REFUSED " + str(exc) + "\n")
    raise
