"""Synthetic Lua word watchpoint planning: no GDB or game execution."""
from __future__ import annotations
import importlib.util
from pathlib import Path
import struct
import unittest

PATH=Path(__file__).resolve().parents[1]/"scripts"/"Watch-SV400-Lua54-OpcodeReads-GDB.py"
SPEC=importlib.util.spec_from_file_location("sv400_r5_word_watch",PATH)
m=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(m)

ROOT_CODE=0x7100030000
SETUP_CODE=0x7100040000


class MockFrame:
    def __init__(self,scope="root",index=0,code_ptr=ROOT_CODE,match=True):
        self.scope,self.index,self.code_ptr,self.match=scope,index,code_ptr,match
    def inspect_frame(self,reader,ci,expected,redact_pointers):
        self.ci=ci
        self.redacted=redact_pointers
        return {
            "status":"ORIGINAL_PROTO_FULL_CODE_BYTES_MATCH" if self.match else "UNVERIFIED_NATIVE_FRAME",
            "proto_scope":self.scope,
            "savedpc_index_candidate":self.index,
            "candidate_addresses":{"code_ptr":hex(self.code_ptr)},
        }


def manifest():
    return {
        "root":{"proto_id":0,"code_length_bytes":4*(215523+1),
                "code_sha256":"1"*64,"target_pcs":[215522,215523]},
        "setup":{"proto_id":17900,"code_length_bytes":264*4,
                 "code_sha256":"2"*64,"target_pcs":[7,8,11,32,47,48,83]},
    }


class WatchPlanningTests(unittest.TestCase):
    def test_read_watch_import_does_not_attach(self):
        self.assertIsNone(m.gdb)
        self.assertEqual(m.ENTRY_RVA,0x41150)

    def test_root_target_pc_is_pinned_and_address_not_logged(self):
        frame=MockFrame()
        codeaddr=ROOT_CODE+4*215522
        def read(addr,n):
            self.assertEqual((addr,n),(codeaddr,4))
            return struct.pack("<I",79+(7<<7))
        data=m.create_watch_plan(read,0x7000001000,manifest(),"root",215522,frame)
        self.assertEqual(data["target_word_address"],codeaddr)
        self.assertEqual(data["lua_opcode"],"CLOSURE")
        self.assertEqual(data["native_handler_rva"],"0x453fc")
        self.assertFalse(data["vm_execution_observed"])
        safe=m.sanitized_watch_plan(data)
        self.assertNotIn("target_word_address",safe)
        self.assertNotIn("word_u32",safe)
        self.assertFalse(frame.redacted)

    def test_setup_call_and_seti_both_whitelisted(self):
        for pc in (7,8,11,32,47,48,83):
            frame=MockFrame("setup",0,SETUP_CODE)
            expected_op=m.WATCH_TARGETS["setup"][pc][1]
            def read(addr,n):
                self.assertEqual((addr,n),(SETUP_CODE+pc*4,4))
                return struct.pack("<I",expected_op)
            plan=m.create_watch_plan(read,0x7000001000,manifest(),"setup",pc,frame)
            self.assertEqual(plan["target_lua_pc"],pc)

    def test_already_executed_target_fails_closed(self):
        with self.assertRaisesRegex(ValueError,"already passed"):
            m.create_watch_plan(lambda a,n:struct.pack("<I",79),
                                0x7000001000,manifest(),"root",215522,
                                MockFrame(index=215523))

    def test_full_proto_sha_is_required(self):
        with self.assertRaisesRegex(ValueError,"full original"):
            m.create_watch_plan(lambda a,n:struct.pack("<I",79),
                                0x7000001000,manifest(),"root",215522,
                                MockFrame(match=False))

    def test_setup_frame_not_mislabeled_root(self):
        with self.assertRaisesRegex(ValueError,"full original"):
            m.create_watch_plan(lambda a,n:struct.pack("<I",79),
                                0x7000001000,manifest(),"root",215522,
                                MockFrame(scope="setup"))

    def test_unexpected_opcode_and_short_read_rejected(self):
        frame=MockFrame()
        for returned,expect in ((struct.pack("<I",68),"opcode"),(b"\x4f","cannot read")):
            with self.assertRaisesRegex(ValueError,expect):
                m.create_watch_plan(lambda a,n:returned,0x7000001000,
                                    manifest(),"root",215522,frame)

    def test_no_implicit_extra_proto_or_lua_pc(self):
        for scope,pc in (("root",7),("setup",215522),("main_dynamic",7)):
            with self.assertRaisesRegex(ValueError,"9 pinned"):
                m.create_watch_plan(lambda a,n:bytes(n),0x7000001000,
                                    manifest(),scope,pc,MockFrame())

if __name__=="__main__":
    unittest.main()
