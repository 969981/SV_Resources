"""R16 original Lua->ELF / cppbindings audit has no invented engine pointers."""
import hashlib
import struct
import sys
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools/SV.Lua54/src"))
from sv_lua54.chunk import Constant,Proto
from sv_lua54.emit_haxe.r16_engine_bridge import (
    EXPECTED_ELF,LUA_K,R15_METHODS,static_memory_effects,
    inspect_elf,inspect_cppbindings,compare_candidate_arity,
)

NATIVE=("00008094","020200C4","000000C2","800003B8",
 "0A00008D","0C00010D","02010092","02028194",
 "0301028E","010301C4","00000187","000201C8",
 "00000085","000200C8","000100C7")

def original(id=12930):
    words=list(NATIVE)
    if id==13197:
        words[4]="0200008D"
        words[5]="0400010D"
    return Proto(
        id=id,parent_id=0,start=0,code_offset=100,end=0,
        source=None,line_defined=0,last_line_defined=0,
        num_params=1,is_vararg=0,max_stack_size=6,
        code=b"".join(int(x,16).to_bytes(4,"little") for x in words),
        constants=[Constant(4,k.encode()) for k in LUA_K],
    )

def minimal_elf(needle=b"f558733FC"):
    b=bytearray(0x200)
    b[:6]=b"\x7fELF\x02\x01"
    struct.pack_into("<H",b,18,183)
    struct.pack_into("<Q",b,32,64)
    struct.pack_into("<H",b,54,56)
    struct.pack_into("<H",b,56,1)
    struct.pack_into("<IIQQQQQQ",b,64,1,4,0x100,0x71000100,0,
                     0x100,0x100,0x1000)
    b[0x115:0x115+len(needle)] = needle
    return bytes(b)

class R16StaticEngineEvidence(unittest.TestCase):
    def test_two_original_methods_have_distinct_geti_slots_and_opaque_calls(self):
        for name,m in R15_METHODS.items():
            d=static_memory_effects(original(m["proto"]),name)
            self.assertEqual((d["original_proto"],d["original_root_pc"]),
                             (m["proto"],m["root_pc"]))
            self.assertEqual(d["field_transfer"]["owner_source"],
                             f'self[{m["owner_slot"]}]')
            self.assertFalse(d["field_transfer"]["proven_alias_after_write"])
            self.assertEqual(d["pc_events"][6]["effect"],"MAY_INVOKE_NEWINDEX")
            self.assertEqual([d["pc_events"][i]["effect"] for i in (1,9)],
                             ["UNKNOWN_EXTERNAL_HEAP_EFFECTS"]*2)
            self.assertEqual([d["pc_events"][i]["heap_before"] for i in (1,9)],
                             ["M?1","M?7"])
            self.assertEqual(d["exit_merge"]["memory_versions"],["M?2","M?8"])
            self.assertIsNone(d["second_callable"]["callee_entry_address"])
            self.assertEqual(d["game_runtime_status"],"NOT_OBSERVED")

    def test_reject_opcode_drift_before_memory_assertions(self):
        p=original()
        w=list(NATIVE)
        w[6]="02010112"
        p.code=b"".join(int(x,16).to_bytes(4,"little") for x in w)
        with self.assertRaises(Exception):
            static_memory_effects(p,"main.field.action.base.IAction.Setup")

    def test_elf_literal_rva_is_not_a_cpp_call_address(self):
        b=minimal_elf()
        with tempfile.TemporaryDirectory() as tmp:
            f=Path(tmp)/"violet_main.elf"
            f.write_bytes(b)
            with patch.dict(EXPECTED_ELF,{"violet_main":hashlib.sha256(b).hexdigest()}):
                d=inspect_elf(f,"violet_main")
            match=[m for m in d["literal_occurrences"] if m["literal"]=="f558733FC"][0]
            self.assertEqual(match["exact_ascii_matches_first_16"][0]["file_offset"],0x115)
            self.assertEqual(match["exact_ascii_matches_first_16"][0]["mapped_segments"][0]["rva"],"0x71000115")
            self.assertEqual(d["abi_status"],"NOT_RESOLVED")
            self.assertIsNone(d["symbol_to_cpp_entry"])

    def test_reject_unpinned_and_wrong_architecture_elf(self):
        with tempfile.TemporaryDirectory() as tmp:
            f=Path(tmp)/"violet_main.elf"
            f.write_bytes(minimal_elf())
            with self.assertRaisesRegex(ValueError,"unverified"):
                inspect_elf(f,"violet_main")
            b=bytearray(minimal_elf())
            struct.pack_into("<H",b,18,62)
            f.write_bytes(b)
            with patch.dict(EXPECTED_ELF,{"violet_main":hashlib.sha256(b).hexdigest()}):
                with self.assertRaisesRegex(ValueError,"AArch64"):
                    inspect_elf(f,"violet_main")

    def test_upstream_two_uint_parameters_do_not_prove_native_lua_call_abi(self):
        with tempfile.TemporaryDirectory() as tmp:
            p=Path(tmp)/"CE35B3EB3.hx"
            p.write_text('@:native("cE35B3EB3")\n'
                         'public function f558733FC(interval:UInt, part_interval:UInt):Void;\n',
                         "utf-8")
            evidence=inspect_cppbindings(Path(tmp))
            arity=compare_candidate_arity(evidence)
            self.assertEqual(arity["upstream_declared_explicit_argument_count"],2)
            self.assertEqual(arity["original_lua_explicit_argument_count_excluding_self"],1)
            self.assertEqual(arity["declared_minus_lua_explicit"],1)
            self.assertEqual(arity["declaring_haxe_native_class"],"cE35B3EB3")
            self.assertEqual(arity["classification"],
                             "UPSTREAM_EXTERN_ARITY_DIFFERS_FROM_SV400_LUA_CALL")
            self.assertEqual(arity["abi_status"],"NOT_RESOLVED")

    def test_cppbinding_missing_or_unparseable_is_never_a_native_entry(self):
        info={"matches":{"f558733FC":[]}}
        self.assertEqual(compare_candidate_arity(info)["classification"],
                         "NO_UNIQUE_UPSTREAM_DECLARATION")
        info["matches"]["f558733FC"]=[
            {"file":"test.hx","line":1,"snippet":'@:native("f558733FC")'}]
        self.assertEqual(compare_candidate_arity(info)["classification"],
                         "UPSTREAM_DECLARATION_NOT_PARSEABLE")

    def test_cppbinding_exact_case_linenumbers_are_version_scoped(self):
        with tempfile.TemporaryDirectory() as tmp:
            p=Path(tmp)/"C123456.hx"
            p.write_text("// no\n@:native(\"f558733FC\")\n"
                         "function x() {}\n","utf-8")
            report=inspect_cppbindings(Path(tmp))
            self.assertEqual(report["files_scanned"],1)
            self.assertEqual(len(report["matches"]["f558733FC"]),1)
            self.assertEqual(report["matches"]["f558733FC"][0]["line"],2)
            self.assertEqual(report["original_game_native_entry_mapping"],"NOT_RESOLVED")
            self.assertEqual(report["runtime_status"],"NOT_OBSERVED")

if __name__=="__main__":
    unittest.main()
