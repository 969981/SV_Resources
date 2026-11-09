"""Synthetic memory fixtures for two original Proto identity checks; no game data."""
from __future__ import annotations
import hashlib
import importlib.util
from pathlib import Path
import struct
import unittest

P=Path(__file__).resolve().parents[1]/"scripts"/"Inspect-SV400-Lua54-LiveFrame.py"
s=importlib.util.spec_from_file_location("sv400_liveframe",P)
vm=importlib.util.module_from_spec(s)
s.loader.exec_module(vm)

CI=0x7100001000
FUNC=0x7100002000
CLOSURE=0x7100003000
PROTO=0x7100004000
CODE=0x7100005000


def fixture(target="setup",pc=11):
    root=struct.pack("<I",0x12340000)*40
    setup=struct.pack("<I",0x56780000)*30
    records={
        "root":{"proto_id":0,"code_length_bytes":len(root),
                "code_sha256":hashlib.sha256(root).hexdigest(),"target_pcs":[9,10]},
        "setup":{"proto_id":17900,"code_length_bytes":len(setup),
                 "code_sha256":hashlib.sha256(setup).hexdigest(),"target_pcs":[7,11,20]},
    }
    code={"root":root,"setup":setup}[target]
    memory={
        CI:struct.pack("<Q",FUNC),
        CI+0x20:struct.pack("<Q",CODE+pc*4),
        FUNC:struct.pack("<Q",CLOSURE),
        CLOSURE+0x18:struct.pack("<Q",PROTO),
        PROTO+0x40:struct.pack("<Q",CODE),
        CODE:code,
    }
    seen=[]
    def reader(address,length):
        seen.append((address,length))
        return memory[address]
    return records,memory,reader,seen


class LiveFrameIdentityTests(unittest.TestCase):
    def test_setup_full_code_sha_and_pc_are_only_candidates(self):
        expected,mem,reader,seen=fixture()
        result=vm.inspect_frame(reader,CI,expected)
        self.assertEqual(result["status"],"ORIGINAL_PROTO_FULL_CODE_BYTES_MATCH")
        self.assertEqual(result["proto_scope"],"setup")
        self.assertEqual(result["proto_id"],17900)
        self.assertEqual(result["savedpc_index_candidate"],11)
        self.assertEqual(result["candidate_executing_pcs"],[10,11])
        self.assertEqual(result["target_pc_overlap"],[11])
        self.assertIsNone(result["upvalue_cells"])
        self.assertNotIn("candidate_addresses",result)
        self.assertFalse(result["runtime_behavior_verified"])

    def test_root_own_identity_and_target_match(self):
        expected,mem,reader,seen=fixture("root",10)
        result=vm.inspect_frame(reader,CI,expected)
        self.assertEqual(result["proto_scope"],"root")
        self.assertEqual(result["proto_id"],0)
        self.assertEqual(result["target_pc_overlap"],[9,10])

    def test_memory_tampering_never_promotes_identity(self):
        expected,mem,reader,seen=fixture()
        mem[CODE]=b"wrong"*24
        result=vm.inspect_frame(reader,CI,expected)
        self.assertEqual(result["status"],"UNVERIFIED_NATIVE_FRAME")
        self.assertIsNone(result["proto_id"])

    def test_invalid_savedpc_rejected_before_bulk_memory_read(self):
        expected,mem,reader,seen=fixture()
        mem[CI+0x20]=struct.pack("<Q", CODE-4)
        result=vm.inspect_frame(reader,CI,expected)
        self.assertEqual(result["status"],"UNVERIFIED_NATIVE_FRAME")
        self.assertFalse(any(address == CODE for address,length in seen))

    def test_short_memory_reads_do_not_verify(self):
        expected,mem,reader,seen=fixture()
        mem[CODE]=b"short"
        result=vm.inspect_frame(reader,CI,expected)
        self.assertEqual(result["status"],"UNVERIFIED_NATIVE_FRAME")
        self.assertIn("short",result["diagnostic"])

    def test_bad_or_unbounded_manifest_fails_closed(self):
        expected,mem,reader,seen=fixture()
        expected["root"]["code_length_bytes"]=8*1024*1024+4
        with self.assertRaisesRegex(ValueError,"bounded"):
            vm.inspect_frame(reader,CI,expected)

    def test_guest_pointer_unreadable_is_not_a_game_observation(self):
        expected,mem,reader,seen=fixture()
        result=vm.inspect_frame(lambda a,n: (_ for _ in ()).throw(OSError("not connected")),CI,expected)
        self.assertEqual(result["status"],"UNVERIFIED_NATIVE_FRAME")
        self.assertIn("not connected",result["diagnostic"])

if __name__=="__main__":
    unittest.main()
