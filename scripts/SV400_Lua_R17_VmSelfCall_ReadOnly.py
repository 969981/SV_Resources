"""R17 original SV400 Lua VM SELF/CALL read-only guest GDB observer.

Requires already-connected OFFLINE AArch64 GDB:
  set $main = 0xACTUAL_NSO_BASE
  set $r17_game = 1       # 0 Scarlet, 1 Violet
  set logging file r17-private-vm.log
  set logging enabled on
  source scripts/SV400_Lua_R17_VmSelfCall_ReadOnly.py
  continue

Original ELF source bytes and VM opcode relocation targets are verified
before breakpoint install. NO game memory writes or game API calls.
Software breakpoints still perturb instruction memory and timing.
Not run in a guest by ChatGPT; any logged guest events are self-reported.
"""
import json,struct,uuid,gdb
BASE=0
SESSION=str(uuid.uuid4())
SEQ=0
GAME=0
PENDING={}
GAMES={0:"scarlet_main",1:"violet_main"}
SHA={0:"53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f",
     1:"84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30"}
ACTION=("00008094","020200C4","000000C2","800003B8","0A00008D",
        "0C00010D","02010092","02028194","0301028E","010301C4",
        "00000187","000201C8","00000085","000200C8","000100C7")
AUTO=("00008094","020200C4","000000C2","800003B8","0200008D",
      "0400010D","02010092","02028194","0301028E","010301C4",
      "00000187","000201C8","00000085","000200C8","000100C7")
PATTERNS={
 "IAction.Setup":(12930,160285,b"".join(int(w,16).to_bytes(4,"little") for w in ACTION)),
 "IAutoAction.Setup":(13197,163143,b"".join(int(w,16).to_bytes(4,"little") for w in AUTO)),
}
OPCODES={0:"SELF",1:"CALL",7:"SELF",9:"CALL"}

def read(ptr,n):
    if not 0<ptr<(1<<64) or not 0<n<=128:raise ValueError("invalid GDB bounded memory read")
    return bytes(gdb.selected_inferior().read_memory(ptr,n))
def u64(ptr):return struct.unpack("<Q",read(ptr,8))[0]
def u8(ptr):return read(ptr,1)[0]
def reg(name):return int(gdb.parse_and_eval("$"+name))
def thread():
    t=gdb.selected_thread()
    return repr(t.ptid) if t is not None else "NO_THREAD"
def event(kind,**kw):
    global SEQ
    SEQ+=1
    obj=dict(kind=kind,session=SESSION,seq=SEQ,
             source="guest-gdb-readonly-self-reported",
             game=GAMES[GAME],elf_sha256_claim=SHA[GAME],
             engine_runtime_status="NOT_INDEPENDENTLY_ATTESTED",**kw)
    gdb.write("R17_VM_EVENT "+json.dumps(obj,sort_keys=True)+"\n")
def bounded_value(base,n):
    a=base+16*n
    return {"slot":n,"tag":hex(u8(a+8)),"value":hex(u64(a)),
            "tvalue_address":hex(a)}
def validate_instruction():
    word=reg("x20")&0xffffffff
    nextpc=reg("x27")
    if nextpc<0x40 or struct.unpack("<I",read(nextpc-4,4))[0]!=word:
        return None
    for pc,typ in OPCODES.items():
        if (word&0x7f)!=(20 if typ=="SELF" else 68):
            continue
        start=nextpc-4*(pc+1)
        try:code=read(start,60)
        except Exception:continue
        for name,(proto,root_pc,known) in PATTERNS.items():
            if code==known and word==int.from_bytes(known[pc*4:pc*4+4],"little"):
                return (name,proto,root_pc,pc,start,word)
    return None
class Vm(gdb.Breakpoint):
    def __init__(self,pc,kind):
        super().__init__("*0x%x"%(BASE+pc),internal=False)
        self.kind=kind
    def stop(self):
        try:
            match=validate_instruction()
            if match is None:return False
            name,proto,root_pc,pc,code,word=match
            root=reg("x26")
            key=(thread(),root,code)
            if pc==0:
                PENDING[key]={"self":bounded_value(root,0)}
            elif pc==7:
                owner=bounded_value(root,1)
                child=bounded_value(root,2)
                x=PENDING.setdefault(key,{})
                x["owner"]=owner;x["child"]=child
                event("VM_SELF_CHILD_PRE",thread=thread(),method=name,
                      original_proto_code_matches=proto,original_root_pc=root_pc,
                      code_address=hex(code),pc=pc,word=f"{word:08X}",
                      owner=owner,child=child,
                      guest_type_identity="TAG_AND_POINTER_SAMPLED_NOT_CPP_TYPE_PROVEN")
            elif pc==9:
                callable_=bounded_value(root,3)
                receiver=bounded_value(root,4)
                interval=bounded_value(root,5)
                previous=PENDING.pop(key,{})
                prior_child=previous.get("child")
                aliases=(prior_child is not None and
                         receiver["value"]==prior_child["value"] and
                         receiver["tag"]==prior_child["tag"])
                fptr=None
                try:
                    if callable_["tag"]=="0x66":
                        fptr=u64(int(callable_["value"],16)+0x18)
                    elif callable_["tag"]=="0x16":
                        fptr=int(callable_["value"],16)
                except Exception:pass
                event("VM_CALL_CHILD_PRE",thread=thread(),method=name,
                      original_proto_code_matches=proto,original_root_pc=root_pc,
                      code_address=hex(code),pc=pc,word=f"{word:08X}",
                      callable=callable_,receiver=receiver,
                      explicit_argument=interval,
                      self_receiver_matches_prior_child=aliases,
                      lua_method_function_pointer_candidate=hex(fptr) if fptr else None,
                      matches_class_method_wrapper=(fptr==BASE+0x1959e40 if fptr else False),
                      matches_other_table_wrapper=(fptr==BASE+0x194e910 if fptr else False),
                      pointer_field_read_status="TENTATIVE_LUA54_CCLOSURE_F_AT_PLUS_0x18_NOT_GAME_CPP_ATTESTED",
                      child_cpp_object_layout="NOT_VERIFIED",
                      cpp_parameter_and_return_types="NOT_VERIFIED")
            elif pc==1:
                event("VM_FIRST_CALL_PRE",method=name,original_proto_code_matches=proto,
                      pc=pc,callable=bounded_value(root,1),
                      receiver=bounded_value(root,2))
        except Exception as ex:
            event("DIAGNOSTIC",handler=self.kind,error=str(ex)[:240])
        return False

try:
    BASE=reg("main")
    GAME=reg("r17_game")
    if GAME not in GAMES or BASE<=0 or BASE%0x1000:
        raise ValueError("require real page-aligned $main and $r17_game 0/1")
    guards={
      0x41150:"FF8303D1",
      0x411cc:"744740B8",
      0x411e4:"881A0012",
      0x411ec:"085B68F8",
      0x411f0:"00011FD6",
      0x42088:"E91340F9885E1053",
      0x4487c:"897E1853885E1053",
    }
    for offset,hexword in guards.items():
        if read(BASE+offset,len(hexword)//2)!=bytes.fromhex(hexword):
            raise ValueError("native Lua VM source word mismatch at +0x%x"%offset)
    for table_offset,target in ((0x4383438,0x42088),(0x43835b8,0x4487c)):
        if u64(BASE+table_offset)!=BASE+target:
            raise ValueError("original VM opcode table not relocated to expected handler")
    event("SESSION",main_base=hex(BASE),
          native_vm_dispatch_code_words="ORIGINAL_ELF_FINGERPRINT_MATCH",
          guest_full_elf_sha256_verified=False,
          guest_lua_child_observed=False)
    Vm(0x42088,"SELF")
    Vm(0x4487c,"CALL")
    gdb.write("R17 VM source-fingerprinted SELF/CALL breakpoints armed; NO guest hits yet\n")
except Exception as exc:
    gdb.write("R17_VM_OBSERVER_REFUSED "+str(exc)+"\n")
    raise
