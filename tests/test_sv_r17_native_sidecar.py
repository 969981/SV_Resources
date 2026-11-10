"""R17 static ELF binding candidate links cannot promote Haxe game runtime."""
import json
import unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
WORK=ROOT/"tools/SV.Lua54/haxe/4.0.0"

class R17NativeBindingSidecar(unittest.TestCase):
    def test_original_proto_pc_and_static_runtime_boundary(self):
        side=json.loads((WORK/"r17-native-binding-candidates.json").read_text())
        methods=[json.loads(s) for s in (WORK/"methods.jsonl").read_text().splitlines() if s]
        self.assertEqual(len(methods),83)
        byname={(x["class_name"],x["method_name"]):x for x in methods}
        self.assertEqual(len(side["source_methods"]),2)
        for method in side["source_methods"]:
            row=byname[(method["haxe_class"],method["method"])]
            self.assertEqual(row["proto_id"],method["child_proto_id"])
            self.assertEqual(row["root_pc"],method["root_pc"])
            self.assertEqual(row["runtime_status"],"NOT_OBSERVED")
            self.assertEqual(method["runtime_child_type"],"NOT_OBSERVED")
            self.assertEqual(method["original_lua_call_instruction"],"CALL A3 B3 C1")
            self.assertEqual(method["lua_explicit_arguments"],1)
        self.assertFalse(side["runtime_registers_observed"])
        self.assertFalse(side["guest_lua_child_tvalue_observed"])
        self.assertFalse(side["guest_cclosure_cfunction_pointer_observed"])
        self.assertFalse(side["actual_cpp_argument_return_abi_verified"])
        self.assertEqual(side["game_runtime_status"],"NOT_OBSERVED")
        self.assertEqual(side["memory_ssa_status"],"CONSERVATIVE_MAY_WRITE_ONLY")

    def test_static_native_function_pointer_is_not_guest_cclosure(self):
        d=json.loads((WORK/"r17-native-binding-candidates.json").read_text())
        native=d["native_static_class_registration"]
        self.assertEqual(native["method_code_target_rva"],"0x1959e40")
        self.assertEqual(native["callback_table_rva"],"0x44b14e0")
        self.assertEqual(native["table_method_record_index_zero_based"],25)
        self.assertEqual(native["status"],
            "ELF_STATIC_CALL_SEQUENCE_AND_RELOCATION_PAIR_VERIFIED_NOT_RUNTIME_POINTER")
        self.assertNotEqual(native["method_code_target_rva"],
                            d["other_same_name_static_registry"]["code_target_rva"])
        self.assertEqual(d["upstream_haxe_extern_reference"]["explicit_arguments"],2)
        self.assertEqual(d["known_original_cpp_binding_argument_discrepancy"],
            "UPSTREAM_2_EXPLICIT_VS_SV400_LUA_1_EXPLICIT")
        self.assertFalse(d["actual_cpp_argument_return_abi_verified"])

if __name__=="__main__":unittest.main()
