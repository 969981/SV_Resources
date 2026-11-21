"""Synthetic target root PC215523 created Closure/UpVal link tests."""
from __future__ import annotations
import hashlib
import importlib.util
from pathlib import Path
import struct
import unittest

ROOT=Path(__file__).resolve().parents[1]/"scripts"
def load(path,name):
    spec=importlib.util.spec_from_file_location(name,ROOT/path)
    m=importlib.util.module_from_spec(spec)
    spec.loader.exec_module(m)
    return m

p=load("Inspect-SV400-Lua54-ClosureCapture.py","sv400_r5_capture")
vm=load("Inspect-SV400-Lua54-OpcodeContext.py","sv400_r5_vm")
BASE=0x7100000000
END=BASE+0x160000
STACK=BASE+0x1000
CHILD=BASE+0x6000
PROTO=BASE+0x8000
CODE=BASE+0xa000
CELL0=BASE+0x12000
CELL1=BASE+0x13000
CELL2=BASE+0x14000
SALT=b"R5 synthetic only session 123456"


class Mem:
    def __init__(self): self.blocks={}
    def put(self,addr,buf):self.blocks[addr]=bytes(buf)
    def ptr(self,addr,value):self.put(addr,struct.pack("<Q",value))
    def __call__(self,addr,n):
        for base,buf in self.blocks.items():
            if base<=addr and addr+n<=base+len(buf):
                return buf[addr-base:addr-base+n]
        raise OSError(f"synthetic unmapped address {addr:#x}")


def fixture():
    mem=Mem()
    prev=79+(70<<7)
    curr=16+(70<<24)
    mem.put(END-8,struct.pack("<II",prev,curr))
    mem.put(STACK+70*16,struct.pack("<QB7x",CHILD,6))
    mem.put(STACK+58*16,struct.pack("<qB7x",1111,3))
    mem.put(STACK+55*16,struct.pack("<QB7x",0x7100024000,5))
    mem.ptr(CHILD+0x18,PROTO)
    mem.ptr(PROTO+0x40,CODE)
    original=struct.pack("<I",68)*264
    mem.put(CODE,original)
    for slot,cell,valueptr in (
            (0,CELL0,BASE+0x20000),
            (1,CELL1,STACK+58*16),
            (2,CELL2,STACK+55*16)):
        mem.ptr(CHILD+0x20+slot*8,cell)
        mem.ptr(cell+0x10,valueptr)
    mem.put(BASE+0x20000,struct.pack("<QB7x",0,0))
    expect={"setup":{"code_length_bytes":1056,
                     "code_sha256":hashlib.sha256(original).hexdigest()}}
    context={"status":"ORIGINAL_PROTO_HANDLER_WORD_AND_SHA_MATCH",
             "proto_scope":"root","lua_pc":215523,"opcode":"SETTABLE"}
    return mem,expect,context


class ClosureCaptureTests(unittest.TestCase):
    def setUp(self):
        self.sha=p.SETUP_SHA
        memory,expected,context=fixture()
        self.mem,self.expected,self.ctx=memory,expected,context
        p.SETUP_SHA=expected["setup"]["code_sha256"]
    def tearDown(self):
        p.SETUP_SHA=self.sha

    def test_after_root_closure_matches_upvals_and_code(self):
        out=p.inspect_completed_setup_capture(
            self.mem,self.ctx,STACK,END,self.expected,vm,SALT)
        self.assertEqual(out["status"],"NEW_SETUP_CLOSURE_CODE_AND_PARENT_UPVAL_LINK_MATCH")
        self.assertTrue(out["both_parent_stack_links_confirmed"])
        self.assertEqual(out["new_closure_register"],70)
        self.assertEqual(out["parent_root_register_58"]["value"],1111)
        self.assertEqual(out["upval_slots"][1]["value_tvalue_id"],
                         out["parent_root_register_58"]["tvalue_addr_id"])
        self.assertEqual(out["upval_slots"][2]["value_tvalue_id"],
                         out["parent_root_register_55"]["tvalue_addr_id"])
        self.assertFalse(out["semantic_equivalence_verified"])

    def test_no_root_pc_or_wrong_handler_rejected(self):
        with self.assertRaisesRegex(ValueError,"root SETTABLE"):
            p.inspect_completed_setup_capture(
                self.mem,{**self.ctx,"lua_pc":215522},STACK,END,self.expected,vm,SALT)

    def test_previous_closure_result_must_be_r70(self):
        self.mem.put(END-8,struct.pack("<II",79+(69<<7),16+(70<<24)))
        with self.assertRaisesRegex(ValueError,"CLOSURE A"):
            p.inspect_completed_setup_capture(
                self.mem,self.ctx,STACK,END,self.expected,vm,SALT)

    def test_settable_rhs_must_be_r70(self):
        self.mem.put(END-8,struct.pack("<II",79+(70<<7),16+(69<<24)))
        with self.assertRaisesRegex(ValueError,"SETTABLE"):
            p.inspect_completed_setup_capture(
                self.mem,self.ctx,STACK,END,self.expected,vm,SALT)

    def test_wrong_child_proto_code_rejected(self):
        self.mem.put(CODE,struct.pack("<I",12345)*264)
        with self.assertRaisesRegex(ValueError,"original Setup Proto"):
            p.inspect_completed_setup_capture(
                self.mem,self.ctx,STACK,END,self.expected,vm,SALT)

    def test_root_stack_pointer_link_failure_is_not_silently_verified(self):
        self.mem.ptr(CELL1+0x10,BASE+0x30000)
        self.mem.put(BASE+0x30000,struct.pack("<qB7x",444,3))
        out=p.inspect_completed_setup_capture(
            self.mem,self.ctx,STACK,END,self.expected,vm,SALT)
        self.assertEqual(out["status"],"NEW_SETUP_CLOSURE_CODE_MATCH_LINK_NOT_CONFIRMED")
        self.assertFalse(out["slot1_v_points_to_root_R58"])
        self.assertFalse(out["both_parent_stack_links_confirmed"])

    def test_not_a_function_tvalue_rejected(self):
        self.mem.put(STACK+70*16,struct.pack("<QB7x",CHILD,5))
        with self.assertRaisesRegex(ValueError,"not a Lua function"):
            p.inspect_completed_setup_capture(
                self.mem,self.ctx,STACK,END,self.expected,vm,SALT)

if __name__=="__main__":
    unittest.main()
