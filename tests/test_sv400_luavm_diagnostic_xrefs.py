"""Synthetic error text to guest VA AArch64 xref tests; no game code."""
from __future__ import annotations
import importlib.util
from pathlib import Path
import struct
import unittest

ROOT=Path(__file__).resolve().parents[1]
def local(name,filename):
    spec=importlib.util.spec_from_file_location(name, ROOT/"scripts"/filename)
    module=importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module

diag=local("sv400_diag", "Trace-SV400-Lua54-Diagnostic-Xrefs.py")
xref=local("sv400_xref", "Locate-SV400-LuaVM-Xrefs.py")


class DiagnosticTests(unittest.TestCase):
    def test_canonical_error_anchor_maps_to_rodata_vaddr(self):
        image=bytearray(b"\0"*0x2200)
        srcpc=0x100040
        target=0x200100
        diff=((target&~4095)-(srcpc&~4095))>>12
        adrp=0x90000000|((diff&3)<<29)|(((diff>>2)&0x7ffff)<<5)|3
        add=0x91000000|((target&4095)<<10)|(3<<5)|3
        struct.pack_into("<II",image,0x40,adrp,add)
        msg=b"attempt to compare two %s values"
        image[0x1100:0x1100+len(msg)]=msg
        segments=[
            {"file_offset":0,"file_end":0x1000,
             "elf_vaddr":0x100000,"flags":5},
            {"file_offset":0x1000,"file_end":0x2000,
             "elf_vaddr":0x200000,"flags":4},
        ]
        data=diag.scan_bytes(image,segments,xref)
        first=data[0]
        self.assertEqual(first["message"],msg.decode())
        self.assertEqual(first["occurrence_count_bounded"],1)
        entry=first["anchors"][0]
        self.assertEqual(entry["elf_vaddr"],target)
        self.assertEqual(entry["native_xref_candidates"][0]["adrp_rva"],srcpc)
        self.assertEqual(entry["candidate_xref_count"],1)
        self.assertEqual(entry["function_identity"],
                         "UNVERIFIED_STATIC_STRING_REFERENCES")

    def test_unreferenced_error_string_does_not_prove_vm_absence(self):
        image=bytearray(b"\0"*0x2200)
        image[0x1200:0x1200+len(b"C stack overflow")]=b"C stack overflow"
        segments=[
            {"file_offset":0,"file_end":0x1000,
             "elf_vaddr":0x100000,"flags":5},
            {"file_offset":0x1000,"file_end":0x2000,
             "elf_vaddr":0x200000,"flags":4},
        ]
        items=diag.scan_bytes(image,segments,xref)
        error=next(row for row in items if row["message"]=="C stack overflow")
        self.assertEqual(error["occurrence_count_bounded"],1)
        self.assertEqual(error["anchors"][0]["candidate_xref_count"],0)


if __name__=="__main__":
    unittest.main()
