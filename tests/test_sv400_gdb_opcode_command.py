"""GDB opcode command safety test using only fake guest interfaces."""
import importlib.util
from pathlib import Path
import unittest

FILE=Path(__file__).resolve().parents[1]/"scripts"/"Inspect-SV400-Lua54-GDB.py"
SPEC=importlib.util.spec_from_file_location("sv400_opcode_gdb_adapter",FILE)
adapter=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(adapter)

MAIN=0x7100000000
NATIVE_BYTES=b"0000111122223333"


class FakeGuest:
    def __init__(self):self.calls=[]
    def read_memory(self,addr,n):
        self.calls.append((addr,n))
        if n==16:return NATIVE_BYTES
        return b"\x00"*n


class FakeGDB:
    def __init__(self,native_rva):
        self.pc=MAIN+native_rva
        self.guest=FakeGuest()
        self.regs={"pc":self.pc,"x25":0x7000010000,
                   "x26":0x7000020000,"x27":0x7000030000,
                   "x20":68}
    def selected_inferior(self):return self.guest
    def parse_and_eval(self,reg):return self.regs[reg.removeprefix("$")]


class NativeVerifier:
    def __init__(self):self.count=0
    def read_verified_elf(self):self.count+=1;return b"PINNED_ELF"
    def verify_live_bytes(self,elf,base,reader):self.count+=1;return []
    def code_bytes_at_rva(self,elf,rva,n):
        self.count+=1
        return NATIVE_BYTES


class MockOpcode:
    TARGET_HANDLERS={"CALL":(0x4487C,68),"CLOSURE":(0x453FC,79),
                     "SETI":(0x41D14,17)}
    def __init__(self,scope="setup",pc=11,op="CALL"):
        self.scope,self.pc,self.op=scope,pc,op
        self.calls=[]
    def pseudonym(self,address,salt):return "synthetic-identity"+hex(address)
    def inspect_handler_entry(self,reader,ci,base,nextpc,word,handler,expected):
        self.calls.append(("handler",handler))
        return {"status":"ORIGINAL_PROTO_HANDLER_WORD_AND_SHA_MATCH",
                "proto_scope":self.scope,"lua_pc":self.pc,"opcode":self.op}
    def snapshot_root_regs_if_confirmed(self,reader,context,base,salt):
        self.calls.append(("root",base))
        return {"root_R55":{"base_type":"table"},"root_R58":{"base_type":"number"}}
    def read_tvalue(self,reader,addr,salt):
        self.calls.append(("value",addr))
        return {"base_type":"function","tag_byte":0x46}
    def read_u64(self,reader,addr):
        self.calls.append(("pointer",addr))
        return 0x7000A00000
    def snapshot_upval(self,reader,closure,slot,salt):
        self.calls.append(("upval",slot))
        return {"slot":slot,"runtime_cell_identity_verified_in_game":False}


class GDBOpcodeCommandTests(unittest.TestCase):
    def test_string_diagnostic_rva_is_not_allowed(self):
        gdb=FakeGDB(0x458A4)
        native=NativeVerifier()
        with self.assertRaisesRegex(ValueError,"handler entry"):
            adapter.inspect_paused_opcode(gdb,MAIN,{},native,MockOpcode())
        self.assertFalse(gdb.guest.calls)
        self.assertEqual(native.count,0)

    def test_root_CLOSURE_captures_both_parent_stack_values(self):
        gdb=FakeGDB(0x453FC)
        gdb.regs["x20"]=79
        native,opcode=NativeVerifier(),MockOpcode("root",215522,"CLOSURE")
        result=adapter.inspect_paused_opcode(gdb,MAIN,{"root":1,"setup":2},native,opcode)
        self.assertIn("before_closure_parent_R55_R58",result)
        self.assertIn(("root",gdb.regs["x26"]),opcode.calls)
        self.assertNotIn("setup_upval_snapshots",result)
        self.assertFalse(result["real_callee_proto_or_c_rva_verified"])
        self.assertFalse(result["runtime_guest_source_attested_by_ci"])

    def test_SETUP_CALL_reads_callable_receiver_and_upvalues(self):
        gdb=FakeGDB(0x4487C)
        # CALL A=2, opcode 68
        gdb.regs["x20"]=68+(2<<7)
        opcode=MockOpcode("setup",11,"CALL")
        result=adapter.inspect_paused_opcode(gdb,MAIN,{"root":1,"setup":2},
                                             NativeVerifier(),opcode)
        self.assertEqual(result["callee_register"],2)
        self.assertEqual(result["actual_callable_tvalue"]["base_type"],"function")
        self.assertIn("actual_receiver_tvalue",result)
        self.assertEqual([row["slot"] for row in result["setup_upval_snapshots"]],[0,1,2])
        self.assertFalse(result["behavior_equivalence_verified"])

    def test_root_SETTable_after_closure_invokes_exact_R70_capture(self):
        import os
        from unittest.mock import patch
        gdb=FakeGDB(0x41B9C)
        gdb.regs["x20"]=16
        opcode=MockOpcode("root",215523,"SETTABLE")
        class FakeCapture:
            def inspect_completed_setup_capture(self,*args):
                self.called=True
                return {"status":"NEW_SETUP_CLOSURE_CODE_AND_PARENT_UPVAL_LINK_MATCH",
                        "new_closure_register":70,"new_setup_closure_id":"synthetic-cell",
                        "actual_game_runtime_source_attested":False}
        fake=FakeCapture()
        with patch.dict(os.environ,{"SV400_CLOSURE_CAPTURE_HELPER":"/mock/capture.py"}):
            with patch.object(adapter,"_load_source",return_value=fake):
                out=adapter.inspect_paused_opcode(gdb,MAIN,{"root":1,"setup":2},
                                                  NativeVerifier(),opcode)
        self.assertTrue(fake.called)
        self.assertEqual(out["after_closure_setup_and_upval_cells"]["new_closure_register"],70)
        self.assertFalse(out["behavior_equivalence_verified"])

    def test_SETUP_SETI_reads_return_tvalue_and_not_wrong_receiver(self):
        gdb=FakeGDB(0x41D14)
        gdb.regs["x20"]=17
        opcode=MockOpcode("setup",48,"SETI")
        result=adapter.inspect_paused_opcode(gdb,MAIN,{"root":1,"setup":2},
                                             NativeVerifier(),opcode)
        self.assertEqual(result["factory_return_register"],4)
        self.assertIn("factory_return_tvalue",result)
        self.assertNotIn("actual_receiver_tvalue",result)


if __name__=="__main__":
    unittest.main()
