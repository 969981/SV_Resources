#!/usr/bin/env python3
"""Synthetic no-ROM regression tests for the immutable PKL reference A/B gates."""
import importlib.util
from pathlib import Path
import struct
import tempfile
import unittest

ROOT=Path(__file__).resolve().parents[1]
spec=importlib.util.spec_from_file_location("sv400_release",ROOT/"scripts/Verify-SV400-PKL-Release.py")
module=importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)

def packed_areas(entries):
    # entry: (location,cross, [(species,form,gender,min,max,time,weather),...])
    blocks=[struct.pack("<HH",loc,cross)+b"".join(struct.pack("<HBBBBBB",*slot) for slot in slots)
            for loc,cross,slots in entries]
    offset=4+4*(len(blocks)+1)
    offsets=[offset]
    for block in blocks:
        offset+=len(block)
        offsets.append(offset)
    return b"sv"+struct.pack("<H",len(blocks))+struct.pack("<"+"I"*len(offsets),*offsets)+b"".join(blocks)

class OwnerMultisetGateTest(unittest.TestCase):
    def setUp(self):
        self.dir=tempfile.TemporaryDirectory()
        root=Path(self.dir.name)
        self.baseline=root/"baseline";self.owner=root/"owner";self.reference=root/"reference"
        for p in (self.baseline,self.owner,self.reference):p.mkdir()
        for name in module.EXPECTED:
            if "wild" not in name:
                (self.baseline/name).write_bytes(b"identical-base-resource")
                (self.owner/name).write_bytes(b"identical-base-resource")
    def tearDown(self):self.dir.cleanup()
    def write(self,where,parts):
        (where/"encounter_wild_paldea.pkl").write_bytes(packed_areas(parts))
    def test_reference_gain_no_loss(self):
        normal=(80,0,[(25,0,255,5,10,0,31)])
        broad=(178,0,[(74,0,255,59,74,0,31)])
        isolated=(178,0,[(74,0,255,59,74,0,31),(74,0,255,59,70,0,31)])
        reference=(178,0,[(74,0,255,59,70,0,31)])
        self.write(self.baseline,[normal,broad])
        self.write(self.owner,[normal,isolated])
        self.write(self.reference,[normal,reference])
        result=module.owner_compare(self.baseline,self.owner,self.reference)
        self.assertEqual((result["retained"],result["lost"],result["added"]),(1,0,1))
        self.assertEqual(result["non_target_changed"],0)
    def test_detect_old_matching_slot_lost_even_if_new_slot_gained(self):
        normal=(80,0,[(25,0,255,5,10,0,31)])
        old=(178,0,[(74,0,255,59,74,0,31)])
        new=(178,0,[(74,0,255,59,70,0,31)])
        self.write(self.baseline,[normal,old])
        self.write(self.owner,[normal,new])
        self.write(self.reference,[normal,(178,0,old[2]+new[2])])
        result=module.owner_compare(self.baseline,self.owner,self.reference)
        self.assertEqual((result["retained"],result["lost"],result["added"]),(1,1,1))
    def test_fail_on_non_target_changed(self):
        old=(80,0,[(25,0,255,5,10,0,31)])
        new=(80,0,[(25,0,255,5,11,0,31)])
        self.write(self.baseline,[old])
        self.write(self.owner,[new])
        self.write(self.reference,[old])
        report=module.owner_compare(self.baseline,self.owner,self.reference)
        self.assertEqual(report["non_target_changed"],2)
        self.assertEqual(report["lost"],1)
    def test_fail_on_fixed_resource_sha_change(self):
        old=(178,0,[(74,0,255,59,70,0,31)])
        self.write(self.baseline,[old]);self.write(self.owner,[old]);self.write(self.reference,[old])
        (self.owner/"encounter_fixed_paldea.pkl").write_bytes(b"changed")
        report=module.owner_compare(self.baseline,self.owner,self.reference)
        self.assertEqual(report["changed_fixed_or_raid_tables"],["encounter_fixed_paldea.pkl"])
        self.assertEqual(report["retained"],1)

if __name__=="__main__":unittest.main()
