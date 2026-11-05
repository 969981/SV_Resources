#!/usr/bin/env python3
"""SV 4.0.0 Lua whole-file continuation: C static/registration and F callbacks.

Never mutates, divides, decompiles, republishes or rewrites .blua files.
Depends on Analyze-SV-Lua54.py for Lua 5.4 parse and instruction decoder.
All symbolic C/F/S names must hash to the exact 64-bit target before inclusion.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import importlib.util
import io
import json
import re
from collections import Counter, defaultdict
from pathlib import Path

HERE = Path(__file__).resolve().parent
SCRIPT = HERE / 'Analyze-SV-Lua54.py'
SPEC = importlib.util.spec_from_file_location('sv_4_lua_core', SCRIPT)
if SPEC is None or SPEC.loader is None:
    raise RuntimeError(f'Cannot load whole-file Lua 5.4 core from {SCRIPT}')
CORE = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(CORE)
H64 = re.compile(rb'^S[0-9A-F]{16}$')
ALL_KINDS = ('c', 'f', 's')
OP_CASED = ('LOADK','GETFIELD','GETTABUP','SETFIELD','SETTABUP','SELF','EQK')


def fnv64(value: str):
    acc = 0xCBF29CE484222645
    for byte in value.encode('utf-8'):
        acc = ((acc ^ byte) * 0x100000001B3) & 0xFFFFFFFFFFFFFFFF
    return f'{acc:016X}'


def read_hashlist(path: Path):
    known={}; missing=set()
    for line in path.read_text(encoding='utf-8-sig').splitlines():
        match=CORE.HASH_ROW.fullmatch(line)
        if not match:
            if line.strip():raise ValueError(f'Unexpected hashlist entry in {path}: {line[:80]}')
            continue
        key=match[1].upper()
        if match[2]:
            if fnv64(match[2])!=key:raise ValueError(f'Known mapping hash mismatch: {path}, {key}')
            known[key]=match[2]
        else:missing.add(key)
    return known,missing


def save_tsv(rows,fields):
    sio=io.StringIO()
    writer=csv.DictWriter(sio,delimiter='\t',fieldnames=fields,lineterminator='\n',extrasaction='ignore')
    writer.writeheader()
    for row in rows:writer.writerow(row)
    return sio.getvalue().encode('utf-8')


def hkey(p, i, opcode):
    """Get the *constant-table index* referenced by a particular instruction."""
    name,a,b,c,k,bx,ax = i
    if name=='LOADK':return bx
    if name in ('GETFIELD','GETTABUP'):return c
    if name in ('SETFIELD','SETTABUP','EQK'):return b
    if name=='SELF' and k==1:return c
    if name=='LOADKX':return None # must be followed by EXTRAARG (handled below)
    return None


def candidate_names(native_method):
    """Finite, auditable transformations of a *known source method name*."""
    if not native_method or native_method[0] != 'O' or not native_method.startswith('On'):
        return []
    tail = native_method[2:]
    options = {('on'+tail,'lower_On_prefix')}
    for original in ('Model','Effect'):
        if tail.startswith(original) and len(tail)>len(original):
            options.add(('on'+tail[len(original):],'drop_'+original+'_source_scope'))
    if tail == 'ModeChangedButton':
        for prefix in ('Model','Effect'):
            options.add(('on'+prefix+tail,'add_'+prefix+'_scope'))
    return sorted(options)


def count_references(lua, target_cls, owner_by_pid, source, stats):
    """Count real constant index usage, not raw string presence.

    Reference classification is intentionally separate from method ownership.
    """
    for proto in lua.protos:
        d={i:k.decode() for i,k in enumerate(proto['constants'])
           if k and CORE.HEX_C.fullmatch(k) and k.decode() in target_cls}
        if not d:continue
        ins=CORE.instructions(lua.raw,proto)
        for pc,word in enumerate(ins):
            key=hkey(proto,word,word[0])
            if word[0]=='LOADKX' and pc+1<len(ins) and ins[pc+1][0]=='EXTRAARG':
                key=ins[pc+1][6]
            if key not in d:continue
            h=d[key];item=stats[h]
            if proto['id']==0:item['root_refs']+=1
            else:item['nested_refs']+=1
            item['ref_opcodes'][word[0]]+=1
            owner=owner_by_pid.get((source,proto['id']))
            if owner:item['caller_methods'].add(owner)
            if len(item['examples'])<5:
                item['examples'].append(f'{source}:{proto["id"]}:{pc}:{word[0]}')


def build(main, dynamic, hashdir, prior, baseline):
    c_known,c_missing=read_hashlist(hashdir/'lua_c_hashes.txt')
    f_known,f_missing=read_hashlist(hashdir/'lua_f_hashes.txt')
    s_known,s_missing=read_hashlist(hashdir/'lua_s_hashes.txt')
    if len(c_missing)!=1375 or len(f_missing)!=116:
        raise ValueError('PokeDocs Lua Hashlist counts have changed; review source provenance')
    previous=CORE.read_candidates(prior)
    previous['s']={}
    with prior.open(encoding='utf-8',newline='') as fh:
        for row in csv.DictReader(fh,delimiter='\t'):
            if row['kind']=='s':previous['s'][row['hash'][2:].upper()]=row['candidate_name']
    baseline_dir=baseline
    cr=list(csv.DictReader((baseline_dir/'native-unknown-c.tsv').open(encoding='utf-8'),delimiter='\t'))
    fcall=list(csv.DictReader((baseline_dir/'native-unknown-f-calls.tsv').open(encoding='utf-8'),delimiter='\t'))
    old_methods=list(csv.DictReader((baseline_dir/'native-class-method-edges.tsv').open(encoding='utf-8'),delimiter='\t'))
    direct={r['class_hash'] for r in cr if int(r['native_direct_methods'])}
    remaining={'C'+c for c in c_missing if 'C'+c not in direct}
    if len(remaining)!=299:raise ValueError(f'Baseline C method count changed: {len(remaining)}')
    owner_by_pid={(r['source'],int(r['child_proto_id'])):r['class_hash']+'.'+r['function_hash']
                  for r in old_methods}
    registration=defaultdict(list)
    statics=defaultdict(list)
    class_refstats=defaultdict(lambda:{'root_refs':0,'nested_refs':0,'ref_opcodes':Counter(),
                                       'caller_methods':set(),'examples':[]})
    callback_rows=[]
    fassigns={}
    for source,path in (('main',main),('main_dynamic',dynamic)):
        raw=path.read_bytes();sha=hashlib.sha256(raw).hexdigest()
        if sha!=CORE.SOURCE_SHA[source]:raise ValueError(f'Not pinned SV 4.0.0 original: {source} {sha}')
        lua=CORE.Lua54(raw);lua.parse();root=lua.protos[0]; K=root['constants']; ins=CORE.instructions(raw,root)
        for pc in range(len(ins)-4):
            seg=ins[pc:pc+5]
            op=tuple(x[0] for x in seg)
            if op==('LOADK','GETTABLE','LOADK','CLOSURE','SETTABLE'):
                a=seg[1][1]
                if (seg[0][1]!=a+1 or seg[1][3]!=a+1 or seg[2][1]!=a+1 or
                    seg[3][1]!=a+2 or seg[4][1:4]!=(a,a+1,a+2)):
                    continue
                cls=K[seg[0][5]] if seg[0][5]<len(K) else None
                field=K[seg[2][5]] if seg[2][5]<len(K) else None
                if not(cls and cls.decode(errors='ignore') in remaining and
                       field and H64.fullmatch(field)):continue
                child=seg[3][5]
                if child>=len(root['children']):raise ValueError('CLOSURE child out of range')
                item={'source':source,'class_hash':cls.decode(),'s_field_hash':field.decode(),
                      's_field_name':s_known.get(field.decode()[1:],'') or previous['s'].get(field.decode()[1:],''),
                      'root_pc':pc,'settable_pc':pc+4,'closure_child_index':child,
                      'closure_proto_id':root['children'][child],
                      'table_base_register':seg[1][2],
                      'evidence':'NATIVE_ROOT_CLASS_S_CLOSURE_ASSIGNMENT'}
                statics[cls.decode()].append(item)
            if op==('GETUPVAL','LOADK','MOVE','CALL','SETTABLE'):
                a=seg[0][1]
                if (seg[0][2]!=0 or seg[1][1]!=a+1 or seg[2][1]!=a+2 or
                    seg[3][1]!=a+2 or seg[4][1:4]!=(a,a+1,a+2)):
                    continue
                cls=K[seg[1][5]] if seg[1][5]<len(K) else None
                if cls and cls.decode(errors='ignore') in remaining:
                    registration[cls.decode()].append({'source':source,'class_hash':cls.decode(),
                     'root_pc':pc,'assignment_pc':pc+4,'evidence':'NATIVE_ENV_CLASS_TABLE_REGISTRATION'})
        count_references(lua,remaining,owner_by_pid,source,class_refstats)
        # Inspect native callbacks: previously verified manager Setup has two scopes
        if source!='main':continue
        callers=[r for r in fcall
                 if r['source']==source and r['caller_class_hash']=='C850E69B34478276C' and
                 r['caller_function_hash']=='F7C68FEDB79AB6396' and r['usage_op']=='SETFIELD']
        for caller in callers:
            pid=int(caller['caller_proto_id'])
            p=lua.protos[pid];words=CORE.instructions(raw,p);k=p['constants']
            pc=int(caller['usage_pc']); dest=caller['unknown_f_hash']
            idx=next((j for j in range(pc-1,max(-1,pc-10),-1)
                      if words[j][0]=='GETFIELD' and words[j][2]==0),None)
            if idx is None:continue
            source_method=k[words[idx][3]]
            if not(source_method and CORE.HEX_F.fullmatch(source_method)):continue
            native=source_method.decode()
            known=f_known.get(native[1:],'')
            for name,rule in candidate_names(known):
                if fnv64(name)==dest[1:]:
                    callback_rows.append({'target_hash':dest,'candidate_name':name,
                     'source_method_hash':native,'source_method_name':known,
                     'source_proto_id':pid,'source_method_getfield_pc':idx,
                     'instance_setfield_pc':pc,'rule':rule,
                     'evidence':'HASH_EXACT_PLUS_NATIVE_SOURCE_HANDLER_BINDING'})
        # Generic F self-field assignment class is proved for known methods
        for u in fcall:
            if u['source']!=source or u['usage_op']!='SETFIELD' or not u['caller_class_hash']:continue
            pid=int(u['caller_proto_id']);pc=int(u['usage_pc']);p=lua.protos[pid]
            words=CORE.instructions(raw,p)
            if words[pc][0]=='SETFIELD' and words[pc][1]==0:
                fassigns[(u['unknown_f_hash'],pid,pc)]={'function_hash':u['unknown_f_hash'],
                 'receiver_class_hash':u['caller_class_hash'],
                 'receiver_class_name':c_known.get(u['caller_class_hash'][1:],'') or previous['c'].get(u['caller_class_hash'][1:],''),
                 'setter_function_hash':u['caller_function_hash'],
                 'setter_function_name':f_known.get(u['caller_function_hash'][1:],'') or previous['f'].get(u['caller_function_hash'][1:],''),
                 'proto_id':pid,'pc':pc,'evidence':'NATIVE_SELF_INSTANCE_FIELD_SET'}
    # If multiple native source callbacks yield same name, keep all evidence edges.
    callback_rows.sort(key=lambda r:(r['target_hash'],r['instance_setfield_pc']))
    static_rows=sorted([r for group in statics.values() for r in group],key=lambda x:(x['source'],x['root_pc']))
    reg_rows=sorted([r for group in registration.values() for r in group],key=lambda x:(x['source'],x['root_pc']))
    crows=[]
    for h in sorted(remaining):
        state=class_refstats[h]
        crows.append({'class_hash':h,'prior_name_candidate':previous['c'].get(h[1:],'') or '',
         'static_s_closures':len(statics.get(h,[])),
         'static_s_named':sum(bool(r['s_field_name']) for r in statics.get(h,[])),
         'root_class_registrations':len(registration.get(h,[])),
         'root_ref_ops':state['root_refs'],'nested_ref_ops':state['nested_refs'],
         'consumer_known_method_count':len(state['caller_methods']),
         'consumer_examples':';'.join(sorted(state['caller_methods'])[:5]),
         'reference_examples':';'.join(state['examples']),
         'status':('NATIVE_CLASS_S_CLOSURE' if h in statics else
                   'NATIVE_CLASS_REGISTRATION_ONLY' if h in registration else
                   'NATIVE_REFERENCED_NOT_STATIC_OR_REGISTERED' if (state['root_refs'] or state['nested_refs']) else
                   'UNREFERENCED_BY_INDEXED_OPS')})
    c_fields=list(crows[0].keys())
    f_rows=sorted(fassigns.values(),key=lambda r:(r['function_hash'],r['pc']))
    candidates={}
    for r in callback_rows:candidates.setdefault(r['target_hash'],set()).add(r['candidate_name'])
    genuine={k:next(iter(v)) for k,v in candidates.items() if len(v)==1 and k[1:] in f_missing and k[1:] not in previous['f']}
    # Rebuild a separate augmented F list: original PokeDocs + prior exact names +
    # the new native-context candidates. Never overwrite the source Hashlist.
    f_merged_names={**previous['f'], **{h[1:]:name for h,name in genuine.items()}}
    old_lines=(hashdir/'lua_f_hashes.txt').read_text(encoding='utf-8-sig').splitlines()
    merged_lines=[]
    for line in old_lines:
        match=CORE.HASH_ROW.fullmatch(line)
        if not match:raise ValueError(f'Invalid original F line: {line!r}')
        key=match[1].upper()
        if key in f_merged_names and not match[2]:
            name=f_merged_names[key]
            if fnv64(name)!=key:raise ValueError(f'Wrong augmented F hash {key} {name}')
            merged_lines.append(f'0x{key} {name}')
        else:merged_lines.append(line)
    fresh=[{'function_hash':hashvalue,'candidate_name':name,
            'exact_native_source_bindings':sum(r['target_hash']==hashvalue for r in callback_rows),
            'evidence':'HASH_EXACT_PLUS_NATIVE_SOURCE_HANDLER_BINDING'}
           for hashvalue,name in sorted(genuine.items())]
    report={'game_version':'4.0.0','originals_split':False,'originals_modified':False,
     'source_sha256':dict(CORE.SOURCE_SHA),'pokedocs_source_sha256':{
      k:hashlib.sha256((hashdir/f'lua_{k}_hashes.txt').read_bytes()).hexdigest() for k in ALL_KINDS},
     'original_unknown_c':len(c_missing),'original_unknown_f':len(f_missing),
     'original_remaining_c_without_direct_F_methods':len(remaining),
     'remaining_c_with_native_static_S_closures':len(statics),
     'native_static_S_closure_edges':len(static_rows),
     'native_static_S_closure_edges_with_known_field':sum(bool(r['s_field_name']) for r in static_rows),
     'remaining_c_with_native_env_registration':len(registration),
     'remaining_c_both_static_and_registered':len(set(statics)&set(registration)),
     'remaining_c_neither_pattern':len(remaining-(set(statics)|set(registration))),
     'remaining_c_with_any_root_or_nested_opcode_reference':sum(bool(r['root_ref_ops'] or r['nested_ref_ops']) for r in crows),
     'new_F_exact_name_candidates':len(genuine),
     'prior_F_candidates':len(previous['f']),
     'combined_F_candidates':len(f_merged_names),
     'remaining_F_missing_names_after_context':len(f_missing)-len(f_merged_names),
     'new_F_names':genuine,
     'new_F_source_binding_edges':len([x for x in callback_rows if x['target_hash'] in genuine]),
     'native_self_instance_field_assignments':len(f_rows),
     'native_self_instance_field_unique_F':len({r['function_hash'] for r in f_rows}),
     'raw_class_and_static_field_names_from_PokeDocs_only':True,
     'evidence_note':'Native C S closures and global registration are separate from prototype[F] methods; F native binding names remain HASH_EXACT_CANDIDATE until formal semantic proof.'}
    outputs={
      'followup-summary.json':(json.dumps(report,indent=2,sort_keys=True,ensure_ascii=False)+'\n').encode(),
      'followup-unknown-c.tsv':save_tsv(crows,c_fields),
      'followup-c-static-s-closures.tsv':save_tsv(static_rows,['source','class_hash','s_field_hash','s_field_name','root_pc','settable_pc','closure_child_index','closure_proto_id','table_base_register','evidence']),
      'followup-c-global-registrations.tsv':save_tsv(reg_rows,['source','class_hash','root_pc','assignment_pc','evidence']),
      'followup-f-callback-name-evidence.tsv':save_tsv(callback_rows,['target_hash','candidate_name','source_method_hash','source_method_name','source_proto_id','source_method_getfield_pc','instance_setfield_pc','rule','evidence']),
      'followup-f-self-field-assignments.tsv':save_tsv(f_rows,['function_hash','receiver_class_hash','receiver_class_name','setter_function_hash','setter_function_name','proto_id','pc','evidence']),
      'followup-f-new-exact-candidates.tsv':save_tsv(fresh,['function_hash','candidate_name','exact_native_source_bindings','evidence']),
      'lua_f_hashes.native-merged.txt':('\n'.join(merged_lines)+'\n').encode('utf-8')
    }
    return outputs,report


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--main',required=True,type=Path)
    parser.add_argument('--dynamic',required=True,type=Path)
    parser.add_argument('--hashlists',type=Path,required=True)
    parser.add_argument('--prior',type=Path,required=True)
    parser.add_argument('--baseline',type=Path,required=True)
    parser.add_argument('--output',type=Path,required=True)
    parser.add_argument('--verify-only',action='store_true')
    args=parser.parse_args()
    files,report=build(args.main,args.dynamic,args.hashlists,args.prior,args.baseline)
    args.output.mkdir(parents=True,exist_ok=True)
    for name,data in files.items():
        dst=args.output/name
        if args.verify_only:
            if not dst.is_file() or dst.read_bytes()!=data:raise ValueError(f'Failed roundtrip: {dst}')
        elif not dst.exists() or dst.read_bytes()!=data:dst.write_bytes(data)
    print(json.dumps(report,ensure_ascii=False,indent=2))

if __name__=='__main__':main()