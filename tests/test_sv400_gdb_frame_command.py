"""Synthetic GDB entry-gate checks, no emulator attached."""
import importlib.util
from pathlib import Path
import unittest

PATH=Path(__file__).resolve().parents[1]/"scripts"/"Inspect-SV400-Lua54-GDB.py"
SPEC=importlib.util.spec_from_file_location("sv400_vm_gdb_adapter",PATH)
module=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(module)


class FakeGDB:
    def __init__(self,pc):
        self.pc=pc
        self.reads=[]
    def selected_inferior(self):
        return self
    def parse_and_eval(self,reg):
        return self.pc if reg=="$pc" else 0x7100001000
    def read_memory(self,addr,count):
        self.reads.append((addr,count))
        return b"0"*count


class FakeNative:
    def __init__(self):self.calls=0
    def read_verified_elf(self):self.calls+=1;return b"ELF"
    def verify_live_bytes(self,data,base,reader):self.calls+=1;return []


class FakeFrame:
    def __init__(self):self.calls=0
    def validate_expected(self,expected):self.calls+=1
    def inspect_frame(self,reader,ci,expected,redact_pointers):
        self.calls+=1
        self.seen=(ci,redact_pointers)
        return {"status":"ORIGINAL_PROTO_FULL_CODE_BYTES_MATCH",
                "runtime_behavior_verified":False}


class GDBCommandTests(unittest.TestCase):
    def test_no_guessed_native_entry_allowed(self):
        base=0x7100000000
        gdb=FakeGDB(base+0x458A4)
        native,frame=FakeNative(),FakeFrame()
        with self.assertRaisesRegex(ValueError,"main\\+0x41150"):
            module.inspect_paused_frame(gdb,base,{},native,frame)
        self.assertEqual(gdb.reads,[])
        self.assertEqual(native.calls,0)

    def test_correct_native_entry_runs_only_readonly_checks(self):
        base=0x7100000000
        gdb=FakeGDB(base+0x41150)
        native,frame=FakeNative(),FakeFrame()
        result=module.inspect_paused_frame(gdb,base,{"root":1,"setup":2},native,frame)
        self.assertEqual(result["status"],"ORIGINAL_PROTO_FULL_CODE_BYTES_MATCH")
        self.assertEqual(native.calls,2)
        self.assertEqual(frame.calls,2)
        self.assertEqual(frame.seen,(0x7100001000,True))
        self.assertFalse(result["runtime_behavior_verified"])

if __name__=="__main__":
    unittest.main()
