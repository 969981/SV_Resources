"""Synthetic AArch64 Lua opcode dispatch-shape tests, NOT VM signatures."""
from __future__ import annotations
import importlib.util
from pathlib import Path
import struct
import unittest

SRC=Path(__file__).resolve().parents[1]/"scripts"/"Scan-SV400-Lua54-DispatchShapes.py"
SPEC=importlib.util.spec_from_file_location("sv400_dispatch_shapes",SRC)
scanner=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(scanner)


def insmask(rd,rn):
    return 0x12001800 | (rn<<5) | rd


def inscmp(rn,imm):
    return 0x7100001f | (rn<<5) | (imm<<10)


class ShapeTests(unittest.TestCase):
    def test_7bit_and_w_and_ubfm_decoder(self):
        self.assertEqual(scanner.extract_opmask(insmask(8,3)),
                         {"kind":"AND_W_IMM_7BIT","register_dst":8,"register_src":3})
        self.assertEqual(scanner.extract_opmask(0x53001800|(7<<5)|9),
                         {"kind":"UBFM_W_LOW_7BIT","register_dst":9,"register_src":7})
        self.assertIsNone(scanner.extract_opmask(0x12001c00))

    def test_cmp_upper_bound_exactly_register(self):
        self.assertEqual(scanner.cmp_imm_w(inscmp(8,82)),
                         {"register":8,"immediate":82})
        self.assertEqual(scanner.br_register(0xd61f0200),16)
        self.assertIsNone(scanner.cmp_imm_w(0x9100001f))

    def test_ranked_static_dispatch_does_not_prove_vm(self):
        words=[
            insmask(8,3), inscmp(8,82),
            0x54000088,   # conditional branch placeholder
            0xD503201F,
            0xD61F0200,   # br x16
            0x14000000 | 0x3fffffb, # backwards branch
            0xD65F03C0,
        ]
        content=struct.pack("<"+"I"*len(words),*words)
        scan=scanner.static_candidates(content,text_base=0x1000)
        self.assertEqual(scan["summary"]["mask_total"],1)
        self.assertEqual(scan["candidate_count_unbounded"],1)
        row=scan["candidates"][0]
        self.assertEqual(row["mask_rva"],0x1000)
        self.assertEqual(row["nearby_opcode_upper_bound_cmps"][0]["immediate"],82)
        self.assertEqual(row["nearby_indirect_br"][0]["register"],16)
        self.assertEqual(row["vm_identity"],"UNVERIFIED_STATIC_PATTERN")

    def test_negative_mismatched_cmp_register_and_range(self):
        words=[insmask(8,3),inscmp(9,82),0xd61f0200,0xd65f03c0]
        scan=scanner.static_candidates(struct.pack("<IIII",*words))
        self.assertEqual(scan["candidate_count_unbounded"],0)
        self.assertEqual(scan["summary"]["mask_with_indirect_br"],1)
        words[1]=inscmp(8,12)
        scan=scanner.static_candidates(struct.pack("<IIII",*words))
        self.assertEqual(scan["candidate_count_unbounded"],0)


if __name__=="__main__":
    unittest.main()
