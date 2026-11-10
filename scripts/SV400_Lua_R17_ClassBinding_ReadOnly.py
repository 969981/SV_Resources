"""Offline GDB observer for original SV 4.0.0 native class bindings.

Usage in already-connected AArch64 guest GDB:
  set $main = 0xACTUAL_LOADED_MAIN_NSO_BASE
  set $r17_game = 1  # 0 Scarlet, 1 Violet
  set logging file r17-local-private-gdb.log
  set logging enabled on
  source scripts/SV400_Lua_R17_ClassBinding_ReadOnly.py
  continue

This observes native class registration and direct code-pointer hits only.
It does not yet identify the child TValue from original Lua Setup.
Software GDB breakpoints alter code and guest timing while installed.
Do not upload the local pointer-containing log to a public repository.
"""
import json
import struct
import uuid
import gdb

GAME_SHAS={
  0:"53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f",
  1:"84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30",
}
GAME_NAMES={0:"scarlet_main",1:"violet_main"}
BASE=0
GAME=0
SESSION=str(uuid.uuid4())
SEQ=0

def mem(address,n):
    if not 0<address<2**64 or not 0<n<=128:
        raise ValueError("invalid bounded guest memory read")
    return bytes(gdb.selected_inferior().read_memory(address,n))

def u64(address):
    return struct.unpack("<Q",mem(address,8))[0]

def reg(name):
    return int(gdb.parse_and_eval("$"+name))

def emit(kind,**values):
    global SEQ
    SEQ+=1
    record={"source":"guest-gdb-readonly-self-reported",
            "session":SESSION,"seq":SEQ,"kind":kind,
            "game":GAME_NAMES[GAME],
            "elf_sha256_claim":GAME_SHAS[GAME],
            "runtime_attestation":"NOT_INDEPENDENTLY_VERIFIED",
            **values}
    gdb.write("R17_EVENT "+json.dumps(record,sort_keys=True)+"\n")

def require(off,expected):
    if mem(BASE+off,len(expected)//2)!=bytes.fromhex(expected):
        raise ValueError("wrong main ELF guest instruction at +0x%x"%off)

class Observer(gdb.Breakpoint):
    def __init__(self,off,kind):
        super().__init__("*0x%x"%(BASE+off),internal=False)
        self.kind=kind
    def stop(self):
        try:
            if self.kind=="CLASS_BEFORE_BL":
                x0,x1,x2,x3=reg("x0"),reg("x1"),reg("x2"),reg("x3")
                valid=(x1==BASE+0x3b04bcb and x2==BASE+0x1600050 and x3==1
                       and mem(x1,9)==b"cE35B3EB3")
                emit(self.kind,pc=hex(reg("pc")),x0=hex(x0),
                     name_ptr=hex(x1),callback_ptr=hex(x2),
                     flag=x3,exact_original_registers=valid)
            elif self.kind=="TABLE_BEFORE_BL":
                x0,x1,x2=reg("x0"),reg("x1"),reg("x2")
                name=u64(BASE+0x44b1670)
                callback=u64(BASE+0x44b1678)
                valid=(x1==BASE+0x44b14e0
                       and name==BASE+0x3ae83c2
                       and callback==BASE+0x1959e40
                       and mem(name,9)==b"f558733FC")
                emit(self.kind,pc=hex(reg("pc")),ctx_x0=hex(x0),
                     method_table_x1=hex(x1),mode_x2=hex(x2),
                     method_name_ptr=hex(name),method_callback_ptr=hex(callback),
                     relocated_table_pair_matches_static=valid)
            elif self.kind=="NATIVE_METHOD_ENTRY":
                emit(self.kind,pc=hex(reg("pc")),x0=hex(reg("x0")),
                     x1=hex(reg("x1")),x2=hex(reg("x2")),
                     x3=hex(reg("x3")),x4=hex(reg("x4")),
                     lr=hex(reg("x30")),sp=hex(reg("sp")),
                     lua_child_object_identity="NOT_OBSERVED",
                     cclosure_function_mapping="NOT_PROVEN",
                     native_parameter_types="NOT_PROVEN",
                     native_return_type="NOT_PROVEN")
        except Exception as ex:
            emit("DIAGNOSTIC",stage=self.kind,error=str(ex)[:220])
        return False

try:
    BASE=reg("main")
    GAME=int(gdb.parse_and_eval("$r17_game"))
    if GAME not in GAME_SHAS:raise ValueError("$r17_game must be 0 or 1")
    if BASE<=0 or BASE%0x1000:
        raise ValueError("$main must be real nonzero page-aligned NSO base")
    # Verify original GDB guest instructions before installing breakpoints.
    for off,code in {
        0x13fe21c:"213801D0212C2F91",
        0x13fe234:"F3FBE997",
        0x1600088:"817501B021801391",
        0x1959e40:"FFC300D1",
    }.items():require(off,code)
    if mem(BASE+0x3b04bcb,9)!=b"cE35B3EB3":
        raise ValueError("native class name wrong in guest")
    emit("SESSION",main_base=hex(BASE),
         loaded_elf_identity="CODEWORD_AND_CLASS_LITERAL_ONLY",
         guest_full_elf_sha256_independently_verified=False,
         game_runtime_abi_equivalence="NOT_OBSERVED")
    Observer(0x13fe234,"CLASS_BEFORE_BL")
    Observer(0x1600098,"TABLE_BEFORE_BL")
    Observer(0x1959e40,"NATIVE_METHOD_ENTRY")
    gdb.write("R17 guest observer armed; no game call observed yet\n")
except Exception as ex:
    gdb.write("R17_OBSERVER_REFUSED "+str(ex)+"\n")
    raise
