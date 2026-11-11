#!/usr/bin/env python3
"""Targeted read-only search for consumers of candidate VersionTable A/B bytes.

The real Ghidra C parser at 0x0125D1C8 populates bytes +0xB0/+0xB1
after the 'versiontable' key. Search instructions for readers, adjacent
field access, branch paths and original callers, NOT generic field #28.
No matches are accepted as version filtering without object provenance.
"""
from __future__ import annotations
import bisect
from collections import defaultdict
import re

B0=re.compile(r'#(?:0x0*b0|176)(?![0-9a-f])',re.I)
B1=re.compile(r'#(?:0x0*b1|177)(?![0-9a-f])',re.I)
OPCODES=('LDRB','LDURB','LDRSB','LDURSB','LDRH','LDURH',
         'STRB','STURB','STRH','STURH','ADD','LDR','LDUR')
STACK=re.compile(r'\[(?:sp|x29)\s*,',re.I)
BRANCHES={'CBZ','CBNZ','TBZ','TBNZ','B','B.EQ','B.NE','B.HI','B.LO','B.CC','B.CS'}
SOURCE_PARSER='0125d1c8'
KEY_ADDRS=['03c925c4','03c5404d','03bdbe22']

def trace(db,top=100):
    meta=dict(db.execute('SELECT key,value FROM metadata'))
    base=int(meta.get('image_base','00100000'),16)
    fs=[{'entry':a,'name':n,'min':int(b,16),'max':int(c,16)}
        for a,n,b,c in db.execute('SELECT entry,name,min_addr,max_addr FROM functions ORDER BY min_addr')]
    starts=[f['min'] for f in fs]
    owners={f['entry']:f for f in fs}
    def belong(addr):
        x=int(addr,16);i=bisect.bisect_right(starts,x)-1
        return fs[i] if i>=0 and x<=fs[i]['max'] else None
    grouped=defaultdict(list)
    counts={'matched_instructions':0,'unowned':0,'stack_false_positives':0}
    for addr,mnem,line in db.execute(
        'SELECT addr,mnemonic,display_text FROM instructions WHERE mnemonic IN ('+
        ','.join('?' for _ in OPCODES)+')',OPCODES):
        line=line or ''
        fields=[n for n,pat in ((176,B0),(177,B1)) if pat.search(line)]
        if not fields:continue
        counts['matched_instructions']+=1
        if STACK.search(line) or re.search(r'\b(?:sp|x29),\s*#(?:0x0*b[01]|17[67])\b',line,re.I):
            counts['stack_false_positives']+=1
            continue
        f=belong(addr)
        if not f:counts['unowned']+=1;continue
        grouped[f['entry']].append({'address':addr,'mnemonic':mnem,
                                    'display':line,'field_offsets':fields})
    ranked=[]
    for entry,acc in grouped.items():
        reads=[h for h in acc if h['mnemonic'].startswith(('LDR','LDUR'))]
        addrs=[h for h in acc if h['mnemonic']=='ADD']
        writes=[h for h in acc if h['mnemonic'].startswith(('STR','STUR'))]
        n0=any(176 in h['field_offsets'] for h in reads)
        n1=any(177 in h['field_offsets'] for h in reads)
        score=(25 if n0 and n1 else 0)+4*len(reads)+2*len(addrs)
        score+=min(5,len(writes))
        if entry==SOURCE_PARSER:score-=100
        f=owners[entry]
        ranked.append({'entry':entry,'entry_rva':hex(int(entry,16)-base),
                       'name':f['name'],'score':score,
                       'reads_b0':n0,'reads_b1':n1,
                       'accesses':acc[:120],
                       'evidence':'STRUCTURAL_0XB0_0XB1_OWNER_NOT_VALIDATED'})
    ranked.sort(key=lambda r:(-r['score'],r['entry']))
    for r in ranked[:top]:
        f=owners[r['entry']]
        window=[]
        for h in r['accesses'][:8]:
            x=int(h['address'],16)
            for a,m,d,b in db.execute(
                 'SELECT addr,mnemonic,display_text,bytes_hex FROM instructions '
                 'WHERE addr BETWEEN ? AND ? ORDER BY addr',
                 (f'{max(f["min"],x-80):08x}',f'{min(f["max"],x+96):08x}')):
                if a not in {q['address'] for q in window}:
                    window.append({'address':a,'mnemonic':m,'display':d,'bytes_hex':b})
        r['assembly_context']=window[:250]
        row=db.execute('SELECT status,c FROM decompilation WHERE entry=?',(r['entry'],)).fetchone()
        r['decompile_status']=row[0] if row else 'NONE'
        c=row[1] or '' if row else ''
        # Retain specific C offsets plus the beginning for object identity.
        i=next((m.start() for m in re.finditer(r'0xb0|0xb1|0x16\b',c,re.I)),0)
        r['c_excerpt']=c[max(0,i-450):i+3700]
        r['callers']=[{'from':a,'ref_type':kind} for a,kind in db.execute(
            'SELECT from_addr,ref_type FROM references_full WHERE is_call=1 AND to_addr=? LIMIT 30',
            (r['entry'],))]
    source=owners.get(SOURCE_PARSER)
    parser_accesses=grouped.get(SOURCE_PARSER,[])
    xrefs=[]
    for addr in KEY_ADDRS:
        rows=list(db.execute(
            'SELECT addr,datatype,preview FROM defined_data WHERE addr BETWEEN ? AND ? LIMIT 6',
            (f'{int(addr,16)-8:08x}',f'{int(addr,16)+8:08x}')))
        xrefs.append({'expected_address':addr,'nearby_defined_data':
                      [{'addr':a,'type':t,'value':v} for a,t,v in rows]})
    return {'status':'STRUCTURAL_A_B_FIELD_CONSUMER_CANDIDATES_NOT_GAME_VERSION_FILTER',
            'original_elf_sha256':meta.get('original_elf_sha256'),
            'source_parser_entry':SOURCE_PARSER,
            'source_parser_rva':hex(int(SOURCE_PARSER,16)-base),
            'source_parser_recorded_offset_accesses':parser_accesses,
            'source_parser_name':source['name'] if source else 'NOT_FOUND',
            'source_literal_probes':xrefs,
            'field_byte_offsets':[176,177],
            **counts,'functions_with_any_direct_byte_offset_access':len(grouped),
            'functions_with_both_load_offsets':sum(r['reads_b0'] and r['reads_b1'] for r in ranked),
            'candidates':ranked[:top],
            'unresolved':['VersionTable object and A/B string identity',
             'copy/constructor consumers may use indexed byte load without immediate +0xB0',
             'field-consumer object provenance must be linked to source parser',
             'local game/union version predicate and final spawn admit/reject still pending']}
