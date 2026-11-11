#!/usr/bin/env python3
"""Read-only SV400 EncountPokeData.Version ARM64 candidate triage on existing Ghidra SQLite.
No Ghidra reanalysis. All hits are static candidates, NOT confirmed version filters.
"""
import argparse, bisect, hashlib, json, re, sqlite3, tempfile
from collections import Counter, defaultdict
from pathlib import Path

# FlatBuffers field #28 is at vtable offset 4 + 28*2 = 0x3c.
V28 = re.compile(r'(?<![\w])(?:#\s*)?(?:0x0*3c|60)(?![\w])', re.I)
VAB = re.compile(r'(?<![\w])(?:#\s*)?(?:0x0*[46]|[46])(?![\w])', re.I)
ANCHOR = re.compile(r'encount|pokedata|versiontable|union|wireless', re.I)

def digest(path):
    h = hashlib.sha256()
    with path.open('rb') as f:
        for block in iter(lambda:f.read(4<<20), b''):
            h.update(block)
    return h.hexdigest()

def assemble_sqlite(source, target):
    """Rebuild only published SQLite; do not restore 4GB NDJSON or native Ghidra project."""
    m = json.loads((source/'parts_manifest.json').read_text('utf-8'))
    if m['status'] != 'UNCOMPRESSED_SPLIT_VERIFIED':
        raise ValueError('Source manifest not verified')
    spec = m['sqlite']
    h, size = hashlib.sha256(), 0
    with target.open('xb') as out:
        try:
            for part in spec['parts']:
                rel = Path(part['path'])
                if rel.is_absolute() or '..' in rel.parts:
                    raise ValueError('Unsafe shard path')
                path = source/'database'/rel
                if path.stat().st_size != part['size'] or digest(path) != part['sha256']:
                    raise ValueError('Wrong original shard: '+str(path))
                with path.open('rb') as f:
                    for block in iter(lambda:f.read(4<<20), b''):
                        size += len(block); h.update(block); out.write(block)
            if size != spec['size'] or h.hexdigest() != spec['sha256']:
                raise ValueError('SQLite reassembly SHA/length mismatch')
        except BaseException:
            out.close()
            target.unlink(missing_ok=True)
            raise
    return {'original_elf_sha256':m['elf_sha256'],
            'source_run_id':m['source_run_id'], 'sqlite_sha256':h.hexdigest()}

def num(text):
    return int(str(text).removeprefix('0x'),16)

def function_for(addr, starts, functions):
    i=bisect.bisect_right(starts,addr)-1
    return functions[i] if i>=0 and addr<=functions[i]['end'] else None

def scan(db, limit=100):
    meta=dict(db.execute('SELECT key,value FROM metadata'))
    if meta.get('analysis_completed')!='True':
        raise ValueError('Incomplete Ghidra analysis metadata')
    base=num(meta.get('image_base','00100000'))
    frows=list(db.execute('SELECT entry,name,min_addr,max_addr FROM functions ORDER BY min_addr'))
    functions=[{'entry':a,'name':b,'start':num(c),'end':num(d)} for a,b,c,d in frows]
    starts=[f['start'] for f in functions]
    by_entry={f['entry']:f for f in functions}
    width=max(8,max((len(f['entry']) for f in functions),default=8))
    grouped=defaultdict(list)
    for a,m,display in db.execute("""SELECT addr,mnemonic,display_text FROM instructions
        WHERE mnemonic IN ('LDRH','ldrh','MOV','mov','ADD','add')"""):
        if not V28.search(display or ''): continue
        if m.upper() in ('MOV','ADD') and not re.search(
            r'#\s*(?:0x0*3c|60)(?![\w])',display or '',re.I): continue
        owner=function_for(num(a),starts,functions)
        if owner: grouped[owner['entry']].append((a,m.upper(),display))
    strings=[]
    for a,value in db.execute('SELECT addr,preview FROM defined_data WHERE is_string=1'):
        if value and ANCHOR.search(value): strings.append((a,value[:180]))
    anchor_refs=defaultdict(list)
    for a,v in strings[:1000]:
        for (src,) in db.execute('SELECT from_addr FROM references_full WHERE to_addr=? LIMIT 200',(a,)):
            f=function_for(num(src),starts,functions)
            if f and v not in anchor_refs[f['entry']]:
                anchor_refs[f['entry']].append(v)
    ranked=[]
    for entry, points in grouped.items():
        for address,mnem,display in points:
            center=num(address)
            left,right=f'{max(0,center-0x90):0{width}x}',f'{center+0x90:0{width}x}'
            window=[{'addr':a,'mnemonic':m.upper(),'display':d,'bytes_hex':h}
                    for a,m,d,h in db.execute("""SELECT addr,mnemonic,display_text,bytes_hex
                      FROM instructions WHERE addr BETWEEN ? AND ? ORDER BY addr""",
                      (left,right))]
            near=[x for x in window if abs(num(x['addr'])-center)<=0x6c]
            mn=Counter(x['mnemonic'] for x in near)
            branch=sum(v for k,v in mn.items() if k in ('CBZ','CBNZ','TBZ','TBNZ') or k.startswith('B.'))
            nested=sum(1 for x in near if x['mnemonic']=='LDRH'
                       and VAB.search(x['display'] or ''))
            score=(12 if mnem=='LDRH' else 3)+min(6,branch)*2
            score+=min(3,mn['LDRSW'])*2+min(3,mn['SUB'])*2
            score+=min(4,mn['LDRB'])*2+min(4,nested)*3
            if entry in anchor_refs:score+=3
            ranked.append({'entry':entry,'name':by_entry[entry]['name'],
                'entry_rva':hex(num(entry)-base),'candidate_address':address,
                'candidate_rva':hex(center-base),'access':display,'score':score,
                'branch_count':branch,'byte_loads':mn['LDRB'],'nested_vtable_4_6':nested,
                'nearby_assembly':near,'direct_string_xrefs':anchor_refs.get(entry,[])[:5],
                'confidence':'STATIC_CANDIDATE_NOT_CONFIRMED_VERSION_FILTER'})
    ranked.sort(key=lambda x:(-x['score'],x['entry'],x['candidate_address']))
    winners=[]; seen=set()
    for c in ranked:
        if c['entry'] in seen:continue
        winners.append(c);seen.add(c['entry'])
        if len(winners)>=limit:break
    for c in winners:
        row=db.execute('SELECT status,c,error FROM decompilation WHERE entry=?',
                        (c['entry'],)).fetchone()
        c['decompile_status']=row[0] if row else 'NOT_INDEXED'
        c['decompile_excerpt']=(row[1] or '')[:12000] if row else ''
        c['callers']=[{'from':a,'kind':b} for a,b in db.execute(
           'SELECT from_addr,ref_type FROM references_full WHERE to_addr=? AND is_call=1 LIMIT 40',
           (c['entry'],))]
    return {'status':'STATIC_TRIAGE_ONLY_NOT_NATIVE_BRANCH_PROOF',
        'original_elf_sha256':meta.get('original_elf_sha256'),
        'image_base':meta.get('image_base'),'version_field_index':28,
        'version_vtable_offset':60,'inner_boolean_vtable_offsets':[4,6],
        'functions_scanned':len(functions),'functions_with_candidate_offsets':len(grouped),
        'candidate_instructions':len(ranked),'string_anchor_count':len(strings),
        'candidates':winners,
        'unresolved':['validate EncountPokeData object identity and pointer chase',
          'prove VersionTable A/B reads and condition branch',
          'resolve local versus union-host game version',
          'observe actual spawn decision in read-only guest trace']}

def markdown_report(report):
    lines=['# SV400 VersionTable ARM64 static candidates','','> Static heuristic ONLY. No function is yet a verified game version filter.','',
      f"- Source ELF: `{report['original_elf_sha256']}`",
      f"- Functions: {report['functions_scanned']:,}",
      f"- Candidate functions: {report['functions_with_candidate_offsets']:,}",'',
      '| Rank | RVA | Instruction | Score | Branches | LDRB | Nested vtable |',
      '|---:|---|---|---:|---:|---:|---:|']
    for i,c in enumerate(report['candidates'],1):
        lines.append(f"| {i} | `{c['entry_rva']}` | `{str(c['access']).replace('|',' ')}` | {c['score']} | {c['branch_count']} | {c['byte_loads']} | {c['nested_vtable_4_6']} |")
    lines+=['','Must prove object identity, A/B predicate and selected version context with CFG/assembly,','then validate with two opposite-version cases in a read-only guest trace.']
    return '\n'.join(lines)+'\n'

def main():
    p=argparse.ArgumentParser(description=__doc__)
    g=p.add_mutually_exclusive_group(required=True)
    g.add_argument('--source',type=Path)
    g.add_argument('--db',type=Path)
    p.add_argument('--out',type=Path,required=True)
    p.add_argument('--top',type=int,default=100)
    p.add_argument('--owners-out',type=Path,help='Also export encounter source-string XREF owners on the SAME validated SQLite')
    p.add_argument('--consumers-out',type=Path,help='Also scan native direct A/B candidate struct fields +0xB0/+0xB1')
    a=p.parse_args()
    if not 1<=a.top<=500:p.error('--top must be 1..500')
    with tempfile.TemporaryDirectory(prefix='sv400-version-') as temp:
        if a.source:
            database=Path(temp)/'sv400_main.sqlite'
            proof=assemble_sqlite(a.source,database)
        else:
            database=a.db
            proof={}
        with sqlite3.connect('file:'+str(database.resolve())+'?mode=ro',uri=True) as db:
            db.execute('PRAGMA query_only=ON')
            if db.execute('PRAGMA quick_check').fetchone()[0]!='ok':
                raise ValueError('SQLite quick_check failed')
            report=scan(db,a.top)
            if a.owners_out:
                from importlib.util import module_from_spec, spec_from_file_location
                owners_script=Path(__file__).with_name('Trace-SV400-EncounterOwners.py')
                spec=spec_from_file_location('sv400_owner_roots', owners_script)
                if spec is None or spec.loader is None:
                    raise RuntimeError('Missing owner tracer')
                owner_module=module_from_spec(spec)
                spec.loader.exec_module(owner_module)
                owner_report=owner_module.analyze(db)
            if a.consumers_out:
                from importlib.util import module_from_spec, spec_from_file_location
                consumer_script=Path(__file__).with_name('Trace-SV400-VersionFieldConsumers.py')
                spec=spec_from_file_location('sv400_version_consumers',consumer_script)
                if spec is None or spec.loader is None:
                    raise RuntimeError('Missing field consumer tracer')
                consumer_module=module_from_spec(spec)
                spec.loader.exec_module(consumer_module)
                consumer_report=consumer_module.trace(db,top=100)
        if proof and proof['original_elf_sha256']!=report['original_elf_sha256']:
            raise ValueError('ELF SHA mismatch between manifest and SQLite')
        report['reconstruction_proof']=proof
        a.out.parent.mkdir(parents=True,exist_ok=True)
        a.out.write_text(json.dumps(report,ensure_ascii=False,indent=2)+'\n','utf-8')
        a.out.with_suffix('.md').write_text(markdown_report(report),'utf-8')
        if a.owners_out:
            a.owners_out.parent.mkdir(parents=True,exist_ok=True)
            owner_report['original_elf_sha256']=report['original_elf_sha256']
            owner_report['reconstruction_proof']=proof
            a.owners_out.write_text(json.dumps(owner_report,ensure_ascii=False,indent=2)+'\n','utf-8')
            print('lexical owner roots:',owner_report['matched_function_owners'])
        if a.consumers_out:
            a.consumers_out.parent.mkdir(parents=True,exist_ok=True)
            consumer_report['reconstruction_proof']=proof
            a.consumers_out.write_text(json.dumps(consumer_report,ensure_ascii=False,indent=2)+'\n','utf-8')
            print('A/B field consumer candidates:',consumer_report['functions_with_any_direct_byte_offset_access'])
        print('status:',report['status'],'functions:',report['functions_scanned'],
              'candidates:',report['functions_with_candidate_offsets'])
        print('reports:',a.out,a.out.with_suffix('.md'))

if __name__=='__main__':
    main()
