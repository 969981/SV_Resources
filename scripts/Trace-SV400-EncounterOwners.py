#!/usr/bin/env python3
"""Trace native lexical anchors to their Ghidra callers without assuming semantics.

Input is the already restored and verified SV400 SQLite. Returns reproducible
string XREFs, containing functions, direct callers/callees and Ghidra C excerpts.
A literal 'Encount' can refer to bonus-rate settings, NOT the wild generator.
"""
from __future__ import annotations
from bisect import bisect_right
from collections import defaultdict
import re

TOKENS = [
    (r'pokedata', 20, 'POKEDATA_NAME'),
    (r'world/data/encount', 18, 'ENCOUNTER_ASSET_PATH'),
    (r'encount', 8, 'ENCOUNT_LEXICAL'),
    (r'spawn', 7, 'SPAWN_LEXICAL'),
    (r'versiontable', 16, 'VERSION_TABLE_NAME'),
    (r'\.bfbs', 5, 'BFBS_SCHEMA_PATH'),
    (r'flatbuffer', 4, 'FLATBUFFERS_LEXICAL'),
]
PATTERNS=[(re.compile(p,re.I),w,label) for p,w,label in TOKENS]

def analyze(db,limit=120):
    funcs=[{'entry':a,'name':n,'min':int(b,16),'max':int(c,16)}
           for a,n,b,c in db.execute(
               'SELECT entry,name,min_addr,max_addr FROM functions ORDER BY min_addr')]
    starts=[f['min'] for f in funcs]
    def owner(addr):
        i=bisect_right(starts,int(addr,16))-1
        if i<0 or int(addr,16)>funcs[i]['max']:return None
        return funcs[i]
    anchored=defaultdict(lambda:{'score':0,'strings':[], 'data_xrefs':[]})
    matched_literals=[]
    for addr,value in db.execute('SELECT addr,preview FROM defined_data WHERE is_string=1'):
        if not value:continue
        hits=[(score,name) for pat,score,name in PATTERNS if pat.search(value)]
        if not hits:continue
        kind=sorted({kind for _,kind in hits})
        matched_literals.append({'data_address':addr,'preview':value[:300],'categories':kind})
        importance=max(w for w,_ in hits)
        for src,typ in db.execute(
          'SELECT from_addr,ref_type FROM references_full WHERE to_addr=? LIMIT 1000',(addr,)):
            f=owner(src)
            if not f:continue
            obj=anchored[f['entry']]
            obj['score']+=importance
            if len(obj['strings'])<30 and value not in obj['strings']:
                obj['strings'].append(value[:300])
            if len(obj['data_xrefs'])<50:
                obj['data_xrefs'].append({'from':src,'to':addr,'kind':typ})
    ranked=[]
    for ent,hit in anchored.items():
        f=next(x for x in funcs if x['entry']==ent)
        calls=[{'from':a,'kind':typ}
               for a,typ in db.execute(
                   'SELECT from_addr,ref_type FROM references_full WHERE is_call=1 AND to_addr=? LIMIT 40',(ent,))]
        outgoing=[]
        for a,to,typ in db.execute(
            'SELECT from_addr,to_addr,ref_type FROM references_full WHERE is_call=1 AND from_addr BETWEEN ? AND ? LIMIT 120',
            (f'{f["min"]:08x}',f'{f["max"]:08x}')):
            outgoing.append({'from':a,'to':to,'kind':typ})
        row=db.execute('SELECT status,c,error FROM decompilation WHERE entry=?',(ent,)).fetchone()
        ranked.append({'function_entry':ent,'function_rva':hex(int(ent,16)-int(dict(db.execute('SELECT key,value FROM metadata')).get('image_base','00100000'),16)),
            'function_name':f['name'],'score':hit['score'],
            'matching_strings':hit['strings'],'data_xrefs':hit['data_xrefs'],
            'direct_callers':calls,'direct_callees':outgoing,
            'decompile_status':row[0] if row else 'NONE',
            'decompiled_excerpt':(row[1] or '')[:6000] if row else '',
            'interpretation':'LEXICAL_ROOT_CANDIDATE_NOT_NATIVE_GAMEPLAY_VERIFIED'})
    ranked.sort(key=lambda x:(-x['score'],x['function_entry']))
    return {'status':'STATIC_STRING_XREFS_NOT_VALIDATED_ENCOUNTPOKEDATA_OWNER',
        'functions_scanned':len(funcs),'matched_strings':len(matched_literals),
        'matched_function_owners':len(ranked),
        'literal_samples':matched_literals[:300],
        'roots':ranked[:limit],
        'limitations':['Many asset paths may be stored only as 64-bit hashes, with no source literal.',
            'Lexical Encount may be a sandwich buff or another unrelated mechanic.',
            'Call edges contain compiler and vtable indirection gaps.',
            'No runtime version predicate or spawn output has been validated.']}
