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
ACTIVE_INVOCATIONS_BY_THREAD = {}
BREAKPOINTS = []
BLR_CONTEXTS_BY_THREAD = {}
MATCHED_CALLS = 0
MAX_MATCHED_CALLS = 24
TARGET_NATIVE_WRAPPER = 0x1959E40
TARGET_CPP_DEFAULT = 0xEF4890

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

def thread_id():
    thread = gdb.selected_thread()
    return thread.global_num if thread else -1

def current_invocation(tid):
    active = ACTIVE_INVOCATIONS_BY_THREAD.get(tid, [])
    return active[-1] if active else None

def resolved_lua_cfunction(tag, value):
    if tag == 0x16:
        return value
    if tag == 0x26 and value:
        try:
            return read_u64(value + 0x18)
        except Exception:
            return None
    return None

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

def read_u64(address):
    return int.from_bytes(mem(address, 8), "little")

def snapshot_candidate_object(obj):
    """Bounded, read-only snapshots of statically identified write regions.

    These are sampled offsets, NOT exhaustive Memory SSA or proof of aliasing.
    """
    if not obj:
        return {"status": "NULL_OBJECT"}
    out = {
        "obj_0x38_0x60": safe_mem(obj + 0x38, 0x28),
        "obj_0x178_0x188": safe_mem(obj + 0x178, 0x10),
        "obj_0x244_u16": safe_mem(obj + 0x244, 2),
        "obj_0x2a0_u8": safe_mem(obj + 0x2a0, 1),
        "linked_first_four": [],
    }
    try:
        first = read_u64(obj + 0x178)
        last = read_u64(obj + 0x180)
        span = last - first
        if first and 0 <= span <= 0x8000 and span % 8 == 0:
            out["linked_total_count"] = span // 8
            for i in range(min(span // 8, 4)):
                ptr = read_u64(first + i * 8)
                out["linked_first_four"].append({
                    "index": i, "pointer": hex(ptr),
                    "child_0x1fc_u8": safe_mem(ptr + 0x1fc, 1) if ptr else "NULL"
                })
        else:
            out["linked_total_count"] = "INVALID_OR_UNREADABLE_RANGE"
    except Exception as exc:
        out["linked_error"] = str(exc)[:120]
    return out

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
                if opcode(word) != 20 or a_field(word) != 3 or not bounded_vm_event():
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
                emit(self.kind, pc=hex(pc), sp=hex(sp), thread_id=thread_id(),
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
                # R15 target PC9 is CALL A3 B3 C1. Filter the *resolved*
                # native function pointer, not B=3 calls in unrelated scripts.
                global MATCHED_CALLS
                word = reg("x20") & 0xffffffff
                a, b, c = a_field(word), b_field(word), c_field(word)
                if opcode(word) != 68 or (a, b, c) != (3, 3, 1):
                    return False
                lua_state, function_slot = reg("x21"), reg("x22")
                function_tv = tvalue(function_slot)
                if "word0" not in function_tv or "word1" not in function_tv:
                    return False
                candidate = int(function_tv["word0"], 16)
                tag = int(function_tv["word1"], 16) & 0x3f
                target = resolved_lua_cfunction(tag, candidate)
                if target != BASE + TARGET_NATIVE_WRAPPER:
                    return False
                if MATCHED_CALLS >= MAX_MATCHED_CALLS:
                    return False
                MATCHED_CALLS += 1
                tid = thread_id()
                expected_slot = reg("x26") + a * 16
                slot_ok = function_slot == expected_slot
                call_id = emit(self.kind, pc=hex(pc), sp=hex(sp),
                               thread_id=tid,
                               instruction_word=hex(word), A=a, B=b, C=c,
                               lua_state=hex(lua_state), function_slot=hex(function_slot),
                               expected_function_slot=hex(expected_slot),
                               function_slot_matches_A=slot_ok,
                               masked_function_tag=hex(tag),
                               resolved_cfunction=hex(target),
                               cfunction_matches_wrapper=True,
                               cclosure_f_plus_0x18_raw=safe_mem(candidate + 0x18, 8) if candidate and tag == 0x26 else "NOT_A_CLOSURE_CANDIDATE",
                               function_tvalue=function_tv,
                               next_tvalue=tvalue(function_slot + 16),
                               third_tvalue=tvalue(function_slot + 32),
                               candidate_gc_pointer=hex(candidate) if tag == 0x26 else None,
                               candidate_object_bytes_0x80=safe_mem(candidate, 0x80) if candidate and tag == 0x26 else "NOT_A_CLOSURE_CANDIDATE",
                               x20=hex(word), x21=hex(lua_state), x22=hex(function_slot),
                               x26=hex(reg("x26")), x27=hex(reg("x27")))
                # Consume the event at one matching NATIVE_ENTRY; never pair
                # by lua_State alone across threads or unrelated CALLs.
                LAST_CALL_BY_L[(tid, lua_state)] = {
                    "seq": call_id, "thread_id": tid, "lua_state": hex(lua_state),
                    "function_slot": hex(function_slot),
                    "resolved_cfunction": hex(target),
                    "function_slot_matches_A": slot_ok,
                    "candidate_closure": hex(candidate) if tag == 0x26 else None,
                    "tag": hex(tag),
                    "lua_receiver_tvalue": tvalue(function_slot + 16),
                }
            elif self.kind == "NATIVE_ENTRY":
                tid = thread_id()
                lua_state = reg("x0")
                last = LAST_CALL_BY_L.pop((tid, lua_state), None)
                matched = bool(last and last["function_slot_matches_A"] and
                               last["resolved_cfunction"] == hex(BASE + TARGET_NATIVE_WRAPPER))
                if matched:
                    ACTIVE_INVOCATIONS_BY_THREAD.setdefault(tid, []).append({
                        "call_seq": last["seq"],
                        "lua_state": lua_state,
                        "entry_sp": sp,
                        "helper1_result": None,
                        "object_holder": None,
                        "target_load": None,
                        "lua_receiver_tvalue": last["lua_receiver_tvalue"],
                    })
                emit(self.kind, pc=hex(pc), thread_id=tid,
                     lua_state=hex(lua_state), matching_call=last,
                     matched_call_and_thread=matched,
                     invocation_id=last["seq"] if matched else None,
                     x1=hex(reg("x1")), x2=hex(reg("x2")), x3=hex(reg("x3")),
                     x4=hex(reg("x4")), x5=hex(reg("x5")), x6=hex(reg("x6")),
                     x7=hex(reg("x7")), x8=hex(reg("x8")),
                     lr=hex(reg("x30")), sp=hex(sp))
            elif self.kind == "HELPER1_BEFORE":
                tid = thread_id()
                active = current_invocation(tid)
                emit(self.kind, pc=hex(pc), thread_id=tid,
                     invocation_id=active["call_seq"] if active else None,
                     x0=hex(reg("x0")), x1=hex(reg("x1")),
                     lr=hex(reg("x30")), sp=hex(sp))
            elif self.kind == "HELPER1_RETURN":
                result = reg("x0")
                tid = thread_id()
                active = current_invocation(tid)
                holder = None
                state = None
                if result:
                    try:
                        holder = read_u64(result)
                        state = mem(holder, 1)[0] if holder else None
                    except Exception:
                        pass
                expected_receiver_payload = None
                receiver_tag = None
                if active:
                    active["helper1_result"] = result
                    active["object_holder"] = holder
                    receiver = active.get("lua_receiver_tvalue", {})
                    if "word0" in receiver and "word1" in receiver:
                        try:
                            receiver_pointer = int(receiver["word0"], 16)
                            receiver_tag = int(receiver["word1"], 16) & 0xff
                            if (receiver_tag & 0xf) == 2:
                                expected_receiver_payload = receiver_pointer
                            elif (receiver_tag & 0xf) == 7 and receiver_pointer:
                                user_offset = int.from_bytes(mem(receiver_pointer + 10, 2), "little")
                                expected_receiver_payload = receiver_pointer + (
                                    user_offset * 16 + 0x28 if user_offset else 0x20)
                        except Exception:
                            pass
                emit(self.kind, pc=hex(pc), thread_id=tid,
                     invocation_id=active["call_seq"] if active else None,
                     result_x0=hex(result),
                     result_bytes_candidate_0x40=safe_mem(result, 0x40) if result else "NULL",
                     holder_pointer_candidate=hex(holder) if holder else None,
                     holder_state_byte=state,
                     lua_receiver_tag=hex(receiver_tag) if receiver_tag is not None else None,
                     expected_payload_from_lua_receiver=hex(expected_receiver_payload) if expected_receiver_payload is not None else None,
                     helper1_matches_lua_receiver=(result == expected_receiver_payload) if expected_receiver_payload is not None else None,
                     holder_bytes_0x20=safe_mem(holder, 0x20) if holder else "UNAVAILABLE",
                     result_pointer_semantics="OBJECT_WRAPPER_CANDIDATE_NOT_RTTI_VERIFIED",
                     lr=hex(reg("x30")), sp=hex(sp))
            elif self.kind == "HELPER2_BEFORE":
                tid = thread_id()
                active = current_invocation(tid)
                emit(self.kind, pc=hex(pc), thread_id=tid,
                     invocation_id=active["call_seq"] if active else None,
                     x0=hex(reg("x0")), x1=hex(reg("x1")), x2=hex(reg("x2")),
                     lr=hex(reg("x30")), sp=hex(sp))
            elif self.kind == "HELPER2_RETURN":
                tid = thread_id()
                active = current_invocation(tid)
                emit(self.kind, pc=hex(pc), thread_id=tid,
                     invocation_id=active["call_seq"] if active else None,
                     result_x0=hex(reg("x0")),
                     result_w0_unsigned=reg("x0") & 0xffffffff,
                     result_interpretation="RAW_REGISTER_ONLY_NO_DEREFERENCE",
                     lr=hex(reg("x30")), sp=hex(sp))
            elif self.kind == "GLOBAL_SLOT_BEFORE_LOAD":
                page = reg("x8")
                slot = page + 0xf30
                tid = thread_id()
                active = current_invocation(tid)
                emit(self.kind, pc=hex(pc), thread_id=tid,
                     invocation_id=active["call_seq"] if active else None,
                     x8_page=hex(page), computed_slot=hex(slot),
                     expected_slot=hex(BASE + 0x46ddf30),
                     slot_matches_expected=(slot == BASE + 0x46ddf30),
                     slot_bytes_0x20=safe_mem(slot, 0x20),
                     lr=hex(reg("x30")), sp=hex(sp))
            elif self.kind == "GLOBAL_POINTER_LOADED":
                target = reg("x8")
                tid = thread_id()
                active = current_invocation(tid)
                if active:
                    active["target_load"] = target
                emit(self.kind, pc=hex(pc), thread_id=tid,
                     invocation_id=active["call_seq"] if active else None,
                     x8_target_candidate=hex(target),
                     target_matches_static_candidate=(target == BASE + TARGET_CPP_DEFAULT),
                     target_bytes_0x20=safe_mem(target, 0x20) if target else "NULL",
                     pointer_role="INDIRECT_CALL_TARGET_CANDIDATE",
                     lr=hex(reg("x30")), sp=hex(sp))
            elif self.kind in ("INDIRECT_CALL", "INDIRECT_SLOW_CALL"):
                x0, x1, x8 = reg("x0"), reg("x1"), reg("x8")
                tid = thread_id()
                active = current_invocation(tid)
                # This branch is the DIRECT BLR. Tag 3 follows a helper
                # slow path and must be reported separately.
                expected = None
                holder = active.get("object_holder") if active else None
                holder_tag = None
                if holder:
                    try:
                        holder_tag = mem(holder, 1)[0]
                        stored = read_u64(holder + 8)
                        if holder_tag in (2, 3) and stored:
                            back = read_u64(stored + 0x10)
                            expected = back - 0x28 if back >= 0x28 else None
                        elif holder_tag in (0, 1):
                            expected = stored
                    except Exception:
                        pass
                before = snapshot_candidate_object(x0) if x8 == BASE + TARGET_CPP_DEFAULT else {
                    "status": "UNRECOGNIZED_TARGET_NO_TYPED_SNAPSHOT",
                    "object_bytes_0x40": safe_mem(x0, 0x40) if x0 else "NULL"}
                expected_return_rva = 0x195A054 if self.kind == "INDIRECT_SLOW_CALL" else 0x1959EFC
                context = {
                    "object": x0, "mode_w1": x1 & 0xffffffff,
                    "target": x8, "before": before,
                    "caller_sp": sp, "invocation_id": active["call_seq"] if active else None,
                    "target_entry_seen": False,
                    "expected_return_rva": expected_return_rva,
                    "slow_helper_branch": self.kind == "INDIRECT_SLOW_CALL",
                }
                BLR_CONTEXTS_BY_THREAD.setdefault(tid, []).append(context)
                emit(self.kind, pc=hex(pc), thread_id=tid,
                     invocation_id=context["invocation_id"],
                     x0_arg=hex(x0), x1_arg=hex(x1),
                     w1_unsigned=x1 & 0xffffffff,
                     x8_target_candidate=hex(x8),
                     expected_return_pc=hex(BASE + expected_return_rva),
                     slow_helper_branch=context["slow_helper_branch"],
                     target_rva_candidate=hex(x8 - BASE) if x8 >= BASE else None,
                     static_initial_target_rva_candidate="0xEF4890",
                     target_matches_static_candidate=(x8 == BASE + TARGET_CPP_DEFAULT),
                     x8_matches_loaded_slot=(x8 == active["target_load"]) if active and active["target_load"] is not None else None,
                     holder_state_byte=holder_tag,
                     expected_x0_from_holder=hex(expected) if expected is not None else None,
                     x0_matches_holder_path=(x0 == expected) if expected is not None else None,
                     sampled_object_before=before,
                     lr=hex(reg("x30")), sp=hex(sp))
            elif self.kind == "TARGET_CPP_ENTRY":
                tid = thread_id()
                pending = BLR_CONTEXTS_BY_THREAD.get(tid, [])
                context = pending[-1] if pending else None
                matched = bool(context and context["target"] == BASE + TARGET_CPP_DEFAULT
                               and reg("x30") == BASE + context["expected_return_rva"]
                               and reg("x0") == context["object"]
                               and (reg("x1") & 0xffffffff) == context["mode_w1"])
                if matched:
                    context["target_entry_seen"] = True
                    emit(self.kind, pc=hex(pc), thread_id=tid,
                         invocation_id=context["invocation_id"],
                         matched_pending_blr=True,
                         caller_lr=hex(reg("x30")),
                         x0_object=hex(reg("x0")),
                         w1_unsigned=reg("x1") & 0xffffffff,
                         proof="CPU_ENTERED_STATIC_CPP_TARGET_FROM_WRAPPER")
            elif self.kind in ("INDIRECT_RETURN", "INDIRECT_SLOW_RETURN"):
                tid = thread_id()
                stack = BLR_CONTEXTS_BY_THREAD.get(tid, [])
                context = stack.pop() if stack else None
                recognized = bool(context and context["target"] == BASE + TARGET_CPP_DEFAULT)
                after = snapshot_candidate_object(context["object"]) if recognized else None
                emit(self.kind, pc=hex(pc), thread_id=tid,
                     invocation_id=context["invocation_id"] if context else None,
                     return_x0=hex(reg("x0")),
                     matched_pending_blr=(context is not None),
                     target_entry_seen=context["target_entry_seen"] if context else False,
                     call_target=hex(context["target"]) if context else None,
                     call_mode_w1=context["mode_w1"] if context else None,
                     original_object=hex(context["object"]) if context else None,
                     sampled_object_before=context["before"] if context else None,
                     sampled_object_after=after,
                     lr=hex(reg("x30")), sp=hex(sp),
                     note="after BLR and before wrapper clears W0")
            elif self.kind == "SLOW_PATH_ENTRY":
                tid = thread_id()
                active = current_invocation(tid)
                emit(self.kind, pc=hex(pc), thread_id=tid,
                     invocation_id=active["call_seq"] if active else None,
                     slow_path="WRAPPER_STATE_3_NOT_DIRECT_BLR",
                     x0=hex(reg("x0")), x1=hex(reg("x1")),
                     x2=hex(reg("x2")), x3=hex(reg("x3")))
            elif self.kind == "WRAPPER_RETURN":
                tid = thread_id()
                active = current_invocation(tid)
                emit(self.kind, pc=hex(pc), thread_id=tid,
                     invocation_id=active["call_seq"] if active else None,
                     lua_cfunction_w0=reg("x0") & 0xffffffff,
                     returns_zero_lua_results=((reg("x0") & 0xffffffff) == 0),
                     matched_call=active is not None)
                if active:
                    ACTIVE_INVOCATIONS_BY_THREAD[tid].pop()
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
         cpp_abi="STATIC_ARGS_OBJECT_U32_RUNTIME_NOT_VERIFIED",
         target_wrapper_rva=hex(TARGET_NATIVE_WRAPPER),
         static_cpp_target_rva=hex(TARGET_CPP_DEFAULT),
         target_call_opcode="CALL_A3_B3_C1",
         observer_filter="C_FUNCTION_POINTER_MATCHED_AT_VM_CALL")

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
    Observer(0x195a050, "INDIRECT_SLOW_CALL")
    Observer(0xef4890, "TARGET_CPP_ENTRY")
    Observer(0x1959efc, "INDIRECT_RETURN")
    Observer(0x195a054, "INDIRECT_SLOW_RETURN")
    Observer(0x1959f20, "SLOW_PATH_ENTRY")
    Observer(0x1959f0c, "WRAPPER_RETURN")

    gdb.write("R18 observer armed. Runtime evidence will be emitted only after the game reaches these original code paths.\n")
except Exception as exc:
    for bp in BREAKPOINTS:
        try:
            bp.delete()
        except Exception:
            pass
    gdb.write("R18_OBSERVER_REFUSED " + str(exc) + "\n")
    raise
