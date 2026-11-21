"""Synthetic AArch64 ADRP/ADD/Lua-string xref tests, no game binary."""
from __future__ import annotations
import importlib.util
from pathlib import Path
import struct
import unittest

PATH=Path(__file__).resolve().parents[1]/"scripts"/"Locate-SV400-LuaVM-Xrefs.py"
SPEC=importlib.util.spec_from_file_location("sv400_luavm_xrefs",PATH)
locate=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(locate)


def adrp_word(page,targetpc,reg):
    imm=((page&~4095)-(targetpc&~4095))>>12
    return 0x90000000 | ((imm&3)<<29) | (((imm>>2)&0x7ffff)<<5) | reg


def add_word(reg,imm):
    return 0x91000000 | (imm<<10) | (reg<<5) | reg


class StaticXrefTests(unittest.TestCase):
    def test_adrp_immediate_and_add_64(self):
        pc=0x100004
        w=adrp_word(0x135000,pc,8)
        self.assertEqual(locate.adrp(w,pc),(0x135000,8))
        self.assertEqual(locate.add_x_imm(add_word(8,0xFED)),(8,8,0xFED))
        self.assertEqual(locate.adrp(0xD503201F,pc),None)

    def test_realistic_blua_xref_candidate_not_vm_entry(self):
        pc=0x100000
        target=0x130ABC
        code=[
            adrp_word(target,pc,8),
            0xD503201F,
            add_word(8,target&4095),
            0x94000004,  # BL from PC+12 to PC+28
            0xD503201F,
            0xD503201F,
            0xD503201F,
            0xD65F03C0,
        ]
        data=struct.pack("<"+"I"*len(code),*code)
        r=locate.find_xrefs(data,pc,target)
        self.assertEqual(len(r),1)
        self.assertEqual(r[0]["add_rva"],pc+8)
        self.assertEqual(r[0]["matched_data_vaddr"],target)
        self.assertEqual(r[0]["nearby_bl_candidates"][0],
                         {"bl_rva":pc+12,"target_rva":pc+28})
        self.assertEqual(r[0]["identity_status"],
                         "PC_RELATIVE_STRING_XREF_CANDIDATE")
        self.assertEqual(locate.find_xrefs(data,pc,target+1),[])

    def test_signextend_backward_bl(self):
        pc=0x100100
        delta=-12
        word=0x94000000 | ((delta>>2)&0x3ffffff)
        self.assertEqual(locate.bl_target(word,pc),pc+delta)


if __name__=="__main__":
    unittest.main()
