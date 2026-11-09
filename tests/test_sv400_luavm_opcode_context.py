"""Synthetic memory-only Lua handler PC and UpVal tests, no game target."""
import hashlib
import importlib.util
from pathlib import Path
import struct
import unittest

PATH=Path(__file__).resolve().parents[1]/"scripts"/"Inspect-SV400-Lua54-OpcodeContext.py"
SPEC=importlib.util.spec_from_file_location("sv400_opcode_context",PATH)
m=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(m)

CI=0x7000001000
FUNC=0x7000002000
CLOSURE=0x7000003000
PROTO=0x7000004000
CODE=0x7000005000
BASE=FUNC+0x10
SALT=b"SYNTHETIC_ONLY_SESSION_SALT_32BYTES"


class Memory:
    def __init__(self):self.blocks={}
    def put(self,addr,data):self.blocks[addr]=bytes(data)
    def pointer(self,addr,value):self.put(addr,struct.pack("<Q",value))
    def __call__(self,addr,n):
        for start,block in self.blocks.items():
            if start<=addr and addr+n<=start+len(block):
                return block[addr-start:addr-start+n]
        raise OSError("guest memory is not mapped")


def fixture(scope="setup",pc=7,opcode=68):
    memory=Memory()
    root=bytearray(struct.pack("<I",0)* (215522+1))
    struct.pack_into("<I",root,215522*4,79)
    setup=bytearray(struct.pack("<I",0)*264)
    if scope=="setup":
        struct.pack_into("<I",setup,pc*4,opcode)
    manifest={
        "root":{"proto_id":0,"code_length_bytes":len(root),
                "code_sha256":hashlib.sha256(root).hexdigest(),
                "target_pcs":[215522,215523 if len(root)//4>215523 else 215522]},
        "setup":{"proto_id":17900,"code_length_bytes":len(setup),
                 "code_sha256":hashlib.sha256(setup).hexdigest(),
                 "target_pcs":[7,8,11,32,47,48,83]},
    }
    data=root if scope=="root" else setup
    memory.pointer(CI,FUNC)
    memory.pointer(FUNC,CLOSURE)
    memory.pointer(CLOSURE+0x18,PROTO)
    memory.pointer(PROTO+0x40,CODE)
    memory.put(CODE,data)
    return memory,manifest,CODE+(pc+1)*4


class HandlerFrameTests(unittest.TestCase):
    def test_call_handler_nextpc_exact(self):
        memory,manifest,nextpc=fixture()
        result=m.inspect_handler_entry(memory,CI,BASE,nextpc,68,0x4487C,manifest)
        self.assertEqual(result["status"],"ORIGINAL_PROTO_HANDLER_WORD_AND_SHA_MATCH")
        self.assertEqual(result["proto_scope"],"setup")
        self.assertEqual(result["lua_pc"],7)
        self.assertTrue(result["is_target_pc"])
        self.assertFalse(result["game_runtime_authenticated"])

    def test_current_opcode_word_mismatch_rejected(self):
        memory,manifest,nextpc=fixture()
        result=m.inspect_handler_entry(memory,CI,BASE,nextpc,68|(2<<16),0x4487C,manifest)
        self.assertEqual(result["status"],"UNVERIFIED_OPCODE_CONTEXT")
        self.assertIn("w20 opcode",result["diagnostic"])

    def test_wrong_handler_and_bad_register_base_rejected(self):
        memory,manifest,nextpc=fixture()
        self.assertEqual(m.inspect_handler_entry(memory,CI,BASE,nextpc,68,0x453FC,manifest)["status"],
                         "UNVERIFIED_OPCODE_CONTEXT")
        result=m.inspect_handler_entry(memory,CI,BASE+16,nextpc,68,0x4487C,manifest)
        self.assertIn("x26",result["diagnostic"])

    def test_wrong_proto_code_sha_rejected(self):
        memory,manifest,nextpc=fixture()
        manifest["setup"]["code_sha256"]="0"*64
        result=m.inspect_handler_entry(memory,CI,BASE,nextpc,68,0x4487C,manifest)
        self.assertEqual(result["status"],"UNVERIFIED_OPCODE_CONTEXT")
        self.assertIsNone(result["proto_id"])

    def test_root_capture_tvalues_only_at_exact_pc(self):
        memory,manifest,nextpc=fixture("root",215522,79)
        memory.put(BASE+55*16,struct.pack("<QB7x",0xAABBCCDD,5))
        memory.put(BASE+58*16,struct.pack("<qB7x",123,3))
        result=m.inspect_handler_entry(memory,CI,BASE,nextpc,79,0x453FC,manifest)
        self.assertEqual((result["proto_id"],result["lua_pc"]),(0,215522))
        snap=m.snapshot_root_regs_if_confirmed(memory,result,BASE,SALT)
        self.assertEqual(snap["root_R58"]["value"],123)
        self.assertEqual(snap["root_R55"]["base_type"],"table")
        self.assertTrue(snap["root_R55"]["opaque_payload_id"])
        self.assertFalse(snap["cells_already_captured"])
        with self.assertRaisesRegex(ValueError,"requires verified"):
            m.snapshot_root_regs_if_confirmed(memory,{**result,"lua_pc":215521},BASE)

    def test_upval_cell_open_and_closed_value(self):
        memory=Memory()
        child=0x7000100000
        c1=0x7000101000
        c2=0x7000102000
        open_value=0x7000103000
        memory.pointer(child+0x28,c1)
        memory.pointer(child+0x30,c2)
        memory.pointer(c1+0x10,open_value)
        memory.put(open_value,struct.pack("<qB7x",42,3))
        memory.pointer(c2+0x10,c2+0x18)
        memory.put(c2+0x18,struct.pack("<QB7x",0,0))
        a=m.snapshot_upval(memory,child,1,SALT)
        b=m.snapshot_upval(memory,child,2,SALT)
        self.assertEqual(a["storage_kind_candidate"],"open_or_external")
        self.assertEqual(b["storage_kind_candidate"],"closed_internal")
        self.assertEqual(a["tvalue"]["value"],42)
        self.assertEqual(b["tvalue"]["value"],"nil")
        self.assertNotEqual(a["cell_id"],b["cell_id"])
        self.assertFalse(a["runtime_cell_identity_verified_in_game"])

    def test_shared_upval_identity_correlates_by_salt(self):
        mem=Memory()
        first=0x7000200000
        second=0x7000300000
        cell=0x7000400000
        val=0x7000500000
        mem.pointer(first+0x28,cell)
        mem.pointer(second+0x30,cell)
        mem.pointer(cell+0x10,val)
        mem.put(val,struct.pack("<QB7x",0,0))
        a=m.snapshot_upval(mem,first,1,SALT)
        b=m.snapshot_upval(mem,second,2,SALT)
        self.assertEqual(a["cell_id"],b["cell_id"])
        self.assertIsNotNone(a["cell_id"])
        self.assertIsNone(m.snapshot_upval(mem,first,1,None)["cell_id"])

    def test_guessed_upval_slot_and_small_address_refused(self):
        with self.assertRaisesRegex(ValueError,"only original Setup"):
            m.snapshot_upval(lambda a,n:b"\x00"*n,0x7000000000,7)
        with self.assertRaisesRegex(ValueError,"untrusted"):
            m.read_tvalue(lambda a,n:b"\x00"*n,0x100)

if __name__=="__main__":
    unittest.main()
