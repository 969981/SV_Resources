"""R7 Native OP_CLOSURE read-only GDB observer for Violet 4.0.0.

Attach only to your own offline guest with AArch64 register access.
(gdb) set $main = 0xACTUAL_MAIN_NSO_BASE
(gdb) set logging file r7-gdb.log
(gdb) set logging enabled on
(gdb) source scripts/SV400_Lua_R7_NativeClosure_ReadOnly.py
(gdb) continue

This is an observational guest-memory reader. Software breakpoints can change
guest instruction bytes / timing while installed; no game API writes are made.
GDB Python code is NOT run by CI, only syntax-checked.
"""
import json
import struct
import uuid
import gdb

ELF_SHA = "d17403eaa9d844db82f647fd2f1518806b10c0518d53602fc0ac1766298fdba0"
BUILD_ID = "709bfd66115298640155fcc4979dba151c7cc79a"
BLUA_SHA = "ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572"
ENTRY_RVA = 0x453FC
POST_RVA = 0x454D8
VM_ENTRY_RVA = 0x41150
WORDS_NATIVE = {
    0x41150: 0xD10383FF,
    0x411CC: 0xB8404774,
    0x411E4: 0x12001A88,
    0x411EC: 0xF8685B08,
    0x411F0: 0xD61F0100,
    0x453FC: 0xF9400BE8,
    0x4543C: 0x97FF9081,
    0x4548C: 0x97FF90B5,
    0x454D8: 0xF85E83B4,
}
# Exact original root Lua 5.4 instruction words, indexed by 0-based PC.
PC = {48: (0x0008874F, 18, 13),
      49: (0x000907CF, 19, 13),
      50: (0x0009884F, 20, 13),
      12242: (0x01621C4F, 752, 16)}
ROOT_SIZECODE = 91622
SESSION = str(uuid.uuid4())
SEQ = 0
# Values are sampled only after checking native and original Lua code words.
PENDING = {}
ACTIVATIONS = {}
vm_entry_bp = None


def emit(label, data):
    gdb.write(label + " " + json.dumps(data, sort_keys=True) + "\n")


def tid():
    thread = gdb.selected_thread()
    return repr(thread.ptid if thread else None)


def reg(name):
    return int(gdb.parse_and_eval("$" + name))


def read(addr, n):
    if addr <= 0 or addr >= (1 << 64) or n < 1 or n > 400000:
        raise ValueError("invalid bounded guest memory read")
    return bytes(gdb.selected_inferior().read_memory(addr, n))


def u8(addr):
    return read(addr, 1)[0]


def u32(addr):
    return struct.unpack("<I", read(addr, 4))[0]


def u64(addr):
    return struct.unpack("<Q", read(addr, 8))[0]


def hx(x):
    return hex(x)


def lua_frame(L, ci):
    """ELF-derived offsets. No claims about other game builds."""
    fn_slot = u64(ci)                   # CallInfo.func (TValue *)
    closure = u64(fn_slot)             # TValue.value.gc = LClosure *
    if u8(fn_slot + 8) != 0x46:        # LUA_VLCL collectable
        raise ValueError("current ci.func is not a Lua LClosure TValue")
    p = u64(closure + 0x18)           # LClosure.p
    code = u64(p + 0x38)             # Proto.code
    return fn_slot, closure, p, code


def validate_original_root(L, ci, next_pc, word):
    fn_slot, parent, proto, code = lua_frame(L, ci)
    if u32(proto + 0x18) != ROOT_SIZECODE:
        return None
    for pc, (fingerprint, _, _) in PC.items():
        if u32(code + pc * 4) != fingerprint:
            return None
    diff = next_pc - code
    if diff % 4 or diff < 4 or diff > ROOT_SIZECODE * 4:
        return None
    pc = diff // 4 - 1   # w20 is already fetched; x27 points at next word
    if pc not in PC or u32(next_pc - 4) != word or word != PC[pc][0]:
        return None
    if word & 0x7f != 79:           # native VM OP_CLOSURE index
        return None
    return pc, parent, proto, code


def activation_key(thread, ci, parent):
    return (thread, ci, parent)


class NativeEntry(gdb.Breakpoint):
    def stop(self):
        global SEQ
        try:
            thread = tid()
            L, ci = reg("x21"), reg("x25")
            next_pc, word = reg("x27"), reg("x20") & 0xFFFFFFFF
            root = validate_original_root(L, ci, next_pc, word)
            if root is None:
                return False
            pc, parent, proto, code = root
            key = activation_key(thread, ci, parent)
            if pc == 48:
                ACTIVATIONS[key] = {
                    "id": SESSION + "-root-" + str(SEQ + 1),
                    "L": L, "ci": ci, "parent": parent, "proto": proto,
                    "root_base": reg("x26"), "events": {},
                }
            ctx = ACTIVATIONS.get(key)
            if ctx is None:
                emit("R7_DIAGNOSTIC", {"status": "NO_ROOT_PC48_SAME_ACTIVATION",
                                      "pc": pc, "thread": thread})
                return False
            if ctx["L"] != L or ctx["root_base"] != reg("x26"):
                emit("R7_DIAGNOSTIC", {"status": "ROOT_FRAME_MISMATCH", "pc": pc})
                return False
            PENDING[thread] = {
                "pc": pc, "L": L, "ci": ci, "parent": parent,
                "root_base": reg("x26"), "result_slot": reg("x22"),
                "activation_id": ctx["id"], "root_key": key
            }
        except Exception as err:
            emit("R7_DIAGNOSTIC", {"stage": "closure-enter",
                                  "error": str(err)[:240]})
        return False


class NativePost(gdb.Breakpoint):
    def stop(self):
        global SEQ
        try:
            thread = tid()
            prior = PENDING.get(thread)
            if prior is None:
                return False
            # A nested/unrelated VM handler must not consume the pending
            # original-root sample. Ignore it until the right result slot.
            if reg("x22") != prior["result_slot"]:
                return False
            PENDING.pop(thread, None)
            pc = prior["pc"]
            expected_word, child_id, regnum = PC[pc]
            slot = prior["result_slot"]
            if u8(slot + 8) != 0x46:
                raise ValueError("result TValue is not a Lua closure")
            child_closure = u64(slot)
            child_proto = u64(child_closure + 0x18)
            if u32(child_proto + 0x18) <= 0:
                raise ValueError("child Proto has empty code")
            if u8(child_closure + 0xA) < 2:
                raise ValueError("child Lua closure has less than 2 UpVal slots")
            uv = u64(child_closure + 0x28)
            vptr = u64(uv + 0x10)  # critical native-vetted UpVal.v.p offset
            value_tag = u8(vptr + 8)
            value = u64(vptr)
            expected_slot = prior["root_base"] + 16 * regnum
            uv_state = ("open" if vptr == expected_slot
                        else "closed" if vptr == uv + 0x18 else "unknown")
            if uv_state == "unknown":
                raise ValueError("UpVal.v.p neither expected root stack slot nor closed storage")
            typ = "table" if value_tag == 0x45 else "lua_closure" if value_tag == 0x46 else "unknown"
            if typ != ("table" if pc != 12242 else "lua_closure"):
                raise ValueError("captured value TValue tag does not match expected Lua object")
            ctx = ACTIVATIONS[prior["root_key"]]
            SEQ += 1
            event = {
                "seq": SEQ, "kind": "closure", "pc": pc,
                "parent_proto": 0, "proto": child_id,
                "source_reg": regnum, "upvalue_slot": 1,
                "instruction_word": f"{expected_word:08X}",
                "lua_state": hx(prior["L"]), "root_frame": hx(prior["ci"]),
                "root_activation_id": prior["activation_id"],
                "closure": hx(child_closure), "upvalue": hx(uv),
                "value": hx(value), "value_type": typ,
                "upvalue_state": uv_state,
                "upvalue_v_ptr": hx(vptr), "root_stack_slot": hx(expected_slot),
                "child_proto_pointer": hx(child_proto), "thread": thread,
                "note": "READ_ONLY_GUEST_SAMPLED_NOT_INDEPENDENTLY_ATTESTED"
            }
            ctx["events"][pc] = event
            if pc == 12242:
                # This checks the actual captured R16 closure against this root
                # activation's PC50 closure (not arbitrary equal-address tables).
                prev = ctx["events"].get(50)
                event["same_PC50_LClosure"] = bool(prev and prev["closure"] == event["value"])
                if vm_entry_bp is not None:
                    vm_entry_bp.enabled = True
            emit("R7_EVENT", event)
        except Exception as err:
            emit("R7_DIAGNOSTIC", {"stage": "closure-finish", "error": str(err)[:240]})
        return False


class VMEnter(gdb.Breakpoint):
    def stop(self):
        global SEQ
        try:
            L, ci = reg("x0"), reg("x1")
            _, obj, proto, _ = lua_frame(L, ci)
            if u32(proto + 0x18) != 2071:
                return False
            for ctx in ACTIVATIONS.values():
                created = ctx["events"].get(12242)
                if not created or ctx["L"] != L or int(created["closure"], 16) != obj:
                    continue
                SEQ += 1
                emit("R7_EVENT", {
                    "seq": SEQ, "kind": "enter", "proto": 752,
                    "lua_state": hx(L), "root_frame": hx(ctx["ci"]),
                    "root_activation_id": ctx["id"], "closure": hx(obj),
                    "callinfo": hx(ci),
                    "note": "ENTRY_ONLY_VM_FUNC_BOUNDARY; intra-invocation transitions may be missed"
                })
                break
        except Exception as err:
            emit("R7_DIAGNOSTIC", {"stage": "VM-enter", "error": str(err)[:240]})
        return False


try:
    MAIN = reg("main")
except Exception as ex:
    raise gdb.GdbError("Set $main to real guest NSO base before sourcing: " + str(ex))
if MAIN <= 0 or MAIN >= (1 << 64):
    raise gdb.GdbError("Invalid $main runtime NSO base")
for rva, expected in WORDS_NATIVE.items():
    actual = u32(MAIN + rva)
    if actual != expected:
        raise gdb.GdbError(
            f"Violet 4.0.0 native codeword mismatch main+{rva:X}: "
            f"{actual:08X} != {expected:08X}; no breakpoints installed")
# Do not claim full guest Build ID is read merely because Native code words match.
emit("R7_SESSION", {
    "schema_version": 1, "source": "gdb-readonly",
    "capture_mode": "READ_ONLY", "session_id": SESSION,
    "elf_sha256": ELF_SHA, "build_id": BUILD_ID,
    "main_dynamic_sha256": BLUA_SHA,
    "main_base": hx(MAIN), "vm_dispatch_pc": hx(MAIN + 0x411EC),
    "pc_mapping": "savedpc-next",
    "verification": "NATIVE_CODEWORDS_AND_ROOT_PROTO_FINGERPRINTS_ONLY"
})
bp_post = NativePost("*" + hx(MAIN + POST_RVA))
bp_post.silent = True
bp_entry = NativeEntry("*" + hx(MAIN + ENTRY_RVA))
bp_entry.silent = True
vm_entry_bp = VMEnter("*" + hx(MAIN + VM_ENTRY_RVA))
vm_entry_bp.silent = True
vm_entry_bp.enabled = False
gdb.write("R7 read-only Native CLOSURE observer installed; VM entry initially disabled. "
          "No actual UpVal evidence until R7_EVENT appears.\n")
