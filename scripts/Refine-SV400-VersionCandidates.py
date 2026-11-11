#!/usr/bin/env python3
"""Stage-2 read-only structural triage of SV400 VersionTable candidates.

Consumes existing, SHA-backed Ghidra candidate JSON. This does NOT identify native
EncountPokeData owners by itself; all classifications remain structural evidence.
"""
from __future__ import annotations
import argparse
from collections import Counter
import json
import re
from pathlib import Path

DIRECT = re.compile(r'^ldrh\\s+w(\\d+),\\s*\\[(x\\d+),\\s*#(?:0x0*3c|60)\\]', re.I)
STACK = re.compile(r'^ldrh\\s+w\\d+,\\s*\\[(?:sp|x29),\\s*#(?:0x0*3c|60)\\]', re.I)

def classify(item):
    display = item['access'].strip().lower()
    rows = item.get('nearby_assembly', [])
    center = next((i for i, row in enumerate(rows)
                   if row['addr'] == item['candidate_address']), None)
    if center is None:
        return 'NO_INSTRUCTION_WINDOW', []
    if STACK.match(display):
        return 'STACK_LOCAL_NOT_DIRECT_VTABLE_ACCESS', []
    m = DIRECT.match(display)
    if not m:
        return 'IMMEDIATE_OR_OTHER_OFFSET_NOT_DIRECT_FIELD28_ACCESS', []
    r = m.group(1)
    tail = rows[center+1:center+17]
    scalar = re.compile(r'\\bldrb\\s+w\\d+,\\s*\\[x\\d+,\\s*x'+r+r'\\s*\\]',re.I)
    field_uoffset = re.compile(r'\\bldr\\s+w\\d+,\\s*\\[x\\d+,\\s*x'+r+r'\\s*\\]',re.I)
    scalar_hits = [z['addr'] for z in tail if scalar.search(z.get('display', ''))]
    uoffset_hits = [z['addr'] for z in tail if field_uoffset.search(z.get('display', ''))]
    if scalar_hits and not uoffset_hits:
        return 'DIRECT_SCALAR_BYTE_READ_AFTER_FIELD28_OFFSET_NOT_VERSION_TABLE', scalar_hits
    if uoffset_hits:
        return 'POTENTIAL_TABLE_UOFFSET_REQUIRES_AB_AND_OBJECT_PROOF', uoffset_hits
    return 'DIRECT_LDRH_0X3C_BUT_NO_TABLE_POINTER_CHASE_SHOWN', []

def run(a,b):
    sa=a['candidates'];sb=b['candidates']
    ca={x['entry_rva']:x for x in sa}
    cb={x['entry_rva']:x for x in sb}
    entries=[]
    for rva in sorted(set(ca)|set(cb),key=lambda x:int(x,16)):
        left=ca.get(rva);right=cb.get(rva)
        x=left or right
        cls,proof=classify(x)
        entries.append({
          'rva':rva,'class':cls,'instruction':x['access'],
          'candidate_rva':x['candidate_rva'],
          'scarlet_present':left is not None,'violet_present':right is not None,
          'scarlet_violet_candidate_evidence_equal':left==right if left and right else None,
          'structural_evidence_addresses':proof,
          'status':'NOT_CONFIRMED_ENCOUNT_VERSION_FILTER'})
    return {
      'status':'STATIC_STRUCTURE_TRIAGE_NO_VERSION_BRANCH_CONFIRMED',
      'sample_scope':'candidates exported in BOTH original reports, not all native functions',
      'source_elf_sha256':[a['original_elf_sha256'],b['original_elf_sha256']],
      'input_candidate_count':[len(sa),len(sb)],
      'native_sqlite_provenance':[a.get('reconstruction_proof'),b.get('reconstruction_proof')],
      'category_counts':dict(sorted(Counter(z['class'] for z in entries).items())),
      'same_rva_count':sum(z['scarlet_present'] and z['violet_present'] for z in entries),
      'same_complete_candidate_evidence_count':sum(z['scarlet_violet_candidate_evidence_equal'] is True for z in entries),
      'pending':['prove EncountPokeData pointer provenance',
                 'prove field-28 uoffset and VersionTable A/B lookup',
                 'recover local/host version and allow-or-deny branch',
                 'observe behavior with read-only guest captures'],
      'entries':entries}

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--scarlet',type=Path,required=True)
    p.add_argument('--violet',type=Path,required=True)
    p.add_argument('--output',type=Path,required=True)
    x=p.parse_args()
    out=run(json.loads(x.scarlet.read_text('utf-8')),json.loads(x.violet.read_text('utf-8')))
    x.output.parent.mkdir(parents=True,exist_ok=True)
    x.output.write_text(json.dumps(out,ensure_ascii=False,indent=2)+'\\n','utf-8')
    lines=['# SV400 VersionTable phase-2 structural triage','',
       '> NOT a verified native version branch; object type and game context remain unresolved.','',
       f"- Scarlet candidate functions included: {out['input_candidate_count'][0]}",
       f"- Violet candidate functions included: {out['input_candidate_count'][1]}",
       f"- Shared RVAs: {out['same_rva_count']}",
       f"- Identical full candidate objects: {out['same_complete_candidate_evidence_count']}",'',
       '| Structural class | Count |','|---|---:|']
    lines += [f'| {k} | {v} |' for k,v in out['category_counts'].items()]
    lines += ['','## Candidate instructions by structural class','',
        '| RVA | Class | Instruction |','|---|---|---|']
    for e in out['entries']:
        if e['class'] != 'IMMEDIATE_OR_OTHER_OFFSET_NOT_DIRECT_FIELD28_ACCESS':
            lines.append(f"| \`{e['rva']}\` | {e['class']} | \`{e['instruction']}\` |")
    lines+=['','These are offset-access signatures, NOT a validated EncountPokeData.Version read.']
    x.output.with_suffix('.md').write_text('\\n'.join(lines)+'\\n','utf-8')
    print(json.dumps({k:v for k,v in out.items() if k not in ('entries','native_sqlite_provenance')},ensure_ascii=False,indent=2))
if __name__=='__main__':
    main()
