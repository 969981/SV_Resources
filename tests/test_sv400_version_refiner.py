#!/usr/bin/env python3
"""Synthetic-only checks for pointer-chain classifier (no game bytes)."""
from pathlib import Path
import importlib.util
p=Path(__file__).resolve().parents[1]/'scripts'/'Refine-SV400-VersionCandidates.py'
s=importlib.util.spec_from_file_location('refiner',p)
m=importlib.util.module_from_spec(s);s.loader.exec_module(m)

def check(access, tail, expected):
    base='01000100'
    instructions=[{'addr':base,'display':access}]
    for i,line in enumerate(tail,1):
        instructions.append({'addr':f'{0x1000100+i*4:08x}','display':line})
    cls,_=m.classify({'access':access,'candidate_address':base,
                       'nearby_assembly':instructions})
    assert cls==expected,(cls,expected)

check('ldrh w8,[x8, #0x3c]',
      ['cbz x8,0x01000120','ldrb w2,[x23, x8]'],
      'DIRECT_SCALAR_BYTE_READ_AFTER_FIELD28_OFFSET_NOT_VERSION_TABLE')
check('ldrh w9,[x10, #0x3c]',
      ['cbz x9,0x01000120','ldr w7,[x23, x9]','add x7,x23,x7'],
      'POTENTIAL_TABLE_UOFFSET_REQUIRES_AB_AND_OBJECT_PROOF')
check('add x7,sp,#0x3c',[],
      'IMMEDIATE_OR_OTHER_OFFSET_NOT_DIRECT_FIELD28_ACCESS')
check('ldrh w7,[sp, #0x3c]',[],
      'STACK_LOCAL_NOT_DIRECT_VTABLE_ACCESS')
print('PASS: scalar, table pointer, stack, and immediate-only structures')
