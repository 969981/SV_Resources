#!/usr/bin/env python3
"""Bind original SV 4.0.0 fixed encounter 20-byte values to Source TableKeys.

This read-only audit requires original .pkl SHA and original native build proof.
It does not infer actual in-game location legality from reference parity.
"""
from collections import Counter,defaultdict
from pathlib import Path
import argparse,csv,hashlib,json

STATUS="SV400_ORIGINAL_FSYM20_PER_TABLEKEY_SOURCE_VERIFIED_CASE_ROW_IDS_REMAIN_AMBIGUOUS"
FIXED_SHA="F902A1955042E031B494FD52028B79241B98D61925ADDCC30A75856017CDD6C8"

def digest(path):
    h=hashlib.sha256()
    with Path(path).open('rb') as f:
        for block in iter(lambda:f.read(1<<20), b''):h.update(block)
    return h.hexdigest().upper()

def audit(events,manifest,source_audit,fixed_pkl,output):
    events,manifest,source_audit,fixed_pkl,output=map(Path,(events,manifest,source_audit,fixed_pkl,output))
    for src in (events,manifest,source_audit,fixed_pkl):
        if output.resolve()==src.parent.resolve() or output.resolve().is_relative_to(src.parent.resolve()):
            raise ValueError('Do not write original source evidence')
    m=json.loads(manifest.read_text('utf-8-sig'))
    if (m.get('status')!='GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES'
        or m.get('levelABMode')!='baseline' or m.get('originalTrcolEntries')!=223
        or m.get('collisionBlocker') is not None or m.get('unverifiedExtraFiles')
        or len(m.get('sourceFilesActuallyRead',[]))!=276
        or any(not f.get('verifiedByOriginalM2Manifest') for f in m['sourceFilesActuallyRead'])):
        raise ValueError('Original 61+223 source proof missing')
    table={i['name']:i['sha256'] for i in m['generated']}
    if (table.get('encounter_fixed_paldea.pkl')!=FIXED_SHA or digest(fixed_pkl)!=FIXED_SHA
        or len(table)!=5):
        raise ValueError('5 generated tables / fixed output SHA mismatch')
    raw=fixed_pkl.read_bytes()
    if len(raw)!=977*20:
        raise ValueError('Reference fixed native stride/count drift')
    fixed=Counter(raw[i:i+20].hex().upper() for i in range(0,len(raw),20))
    a=json.loads(source_audit.read_text('utf-8-sig'))
    if (a.get('status')!='SV400_ORIGINAL_FULL20_SOURCE_PINNED_PKHEX_REFERENCE_DISAMBIGUATION_NOT_RUNTIME'
        or len(a.get('cases',[]))!=236
        or a.get('identity_status_counts',{}).get('UNIQUE_FULL20_REFERENCE_MATCH')!=232
        or a.get('identity_status_counts',{}).get('AMBIGUOUS_FULL20_SOURCE_IDENTITY')!=4
        or a.get('verified_source_sha256',{}).get('native')!=FIXED_SHA):
        raise ValueError('Independent full20 original/PKHeX source reference proof drift')
    lookup=defaultdict(list)
    completed=False
    stage=Counter()
    with events.open('r',encoding='utf-8-sig') as f:
        for line in f:
            if not line.strip():continue
            e=json.loads(line);st=e.get('stage');stage[st]+=1
            if st=='trace_start' and not e.get('fixedOnly'):
                raise ValueError('Missing full original fixed-only source trace')
            if st=='trace_finished':
                completed=(e.get('status')=='REAL_NATIVE_POINT_PROVENANCE_RECORDED_NOT_GAME_RUNTIME_PROVED')
            if st not in ('fixed_serialized','fixed_serialized_adjusted'):
                continue
            value=e.get('originalFixed20Hex','')
            if len(value)!=40 or fixed[value]==0 or int(e.get('species',-1))!=int.from_bytes(bytes.fromhex(value[:4]),'little'):
                raise ValueError('Original source event full20 absent from native .pkl')
            if (len(e.get('finalLocations',[]))>4 or 'originalFixed20SourceInsertIndex' not in e):
                raise ValueError('Invalid original fixed serialization metadata')
            lookup[(e['game'],e['tableKey'],int(e['tableIndex']))].append(e)
    if not completed or stage['fixed_serialized']<200 or stage['fixed_serialized_adjusted']<100:
        raise ValueError('Incomplete original runtime source trace')
    keys=defaultdict(dict)
    statuses=Counter()
    all_candidates=set()
    for item in a['cases']:
        cands={x['original_native_20b_hex'] for x in item['full20_candidates_matching_source_and_reference']}
        sources=[tuple(k) for k in item['source_symbols']]
        hits=[]
        for key in sources:
            for e in lookup[key]:
                if e['originalFixed20Hex'] in cands and e.get('location158AddedByWander') is True:
                    hits.append(e)
                    key_name=(e['game'],e['tableKey'],int(e['tableIndex']),int(e['level']))
                    # S/V records are kept distinct; dedup repeated source labels only.
                    existing=keys[key_name].get(e['originalFixed20Hex'])
                    if existing is not None and existing['originalFixed20Hex']!=e['originalFixed20Hex']:
                        raise ValueError('Conflicting per-TableKey original byte identities')
                    keys[key_name][e['originalFixed20Hex']]=e
        match_hex={x['originalFixed20Hex'] for x in hits}
        if match_hex!=cands or not hits:
            raise ValueError(f'Original source trace missing 20B candidate for case {item["case"]}')
        all_candidates.update(match_hex)
        statuses[(item['identity_status'],len(match_hex))]+=1
    # Enforce all four old ambiguous cases are distinguished by exact original source keys.
    source_map={}
    for s in ('su1_area02_07','t_su1_area02_08'):
        x={}
        for (game,key,index,level),events_for_hex in keys.items():
            if game=='sl' and key==s:
                if len(events_for_hex)!=1:raise ValueError('Ambiguous 840 source hex for original TableKey')
                x[level]=next(iter(events_for_hex.values()))
        source_map[s]=x
    if (set(source_map['su1_area02_07'])!=set([15,59])
        or set(source_map['t_su1_area02_08'])!=set([15,59])
        or any(source_map['su1_area02_07'][level]['originalFixed20Hex']==source_map['t_su1_area02_08'][level]['originalFixed20Hex'] for level in (15,59))):
        raise ValueError('Source ownership for old 840 cases not fully resolved')
    result=[]
    for key,item in sorted(keys.items()):
        for raw20,e in sorted(item.items()):
            result.append({
                'game':key[0],'tableKey':key[1],'tableIndex':key[2], 'level':key[3],
                'originalFixed20Hex':raw20,
                'actionId':e['actionId'],'flawlessIVCount':bytes.fromhex(raw20)[4],
                'teraType':bytes.fromhex(raw20)[5],
                'sourceInsertIndex':e['originalFixed20SourceInsertIndex'],
                'sourceWasNewInGlobalList':e['originalFixed20WasNew'],
                'originalLevel':e['originalLevel'],'adjust':e['adjust'],
                'originalPlacementTrscn':e['placementTrscn'],
                'sourceEvidence':'NATIVE_FIXED20_FROM_SHA_VERIFIED_ORIGINAL_GAME_TABLEKEY',
            })
    output.mkdir(parents=True,exist_ok=True)
    with (output/'SV400_236_Source_Cases_TableKey_Fixed20_Resolved.csv').open('w',newline='',encoding='utf-8-sig') as f:
        w=csv.DictWriter(f,fieldnames=list(result[0]));w.writeheader();w.writerows(result)
    summary={
        'status':STATUS,'source_actions_run':42447774923,
        'native_fixed_sha256':FIXED_SHA,
        'native_trace_sha256':digest(events),'original_build_manifest_sha256':digest(manifest),
        'original_full20_reference_audit_sha256':digest(source_audit),
        'source_case_count':236,'old_unique_cases_source_traced':statuses[('UNIQUE_FULL20_REFERENCE_MATCH',1)],
        'old_ambiguous_cases_with_both_distinct_sources':statuses[('AMBIGUOUS_FULL20_SOURCE_IDENTITY',2)],
        'distinct_source_key_level_rows':len(result),
        'species_840_original_sources':{
            key:{str(lev):{
                'fixed20':e['originalFixed20Hex'],'action':e['actionId'],
                'flawlessIV':bytes.fromhex(e['originalFixed20Hex'])[4],
                'tera':bytes.fromhex(e['originalFixed20Hex'])[5],
            } for lev,e in levels.items()} for key,levels in source_map.items()},
        'limits':['The old 236 counterfactual case row IDs 198/199 and 202/203 are interchangeable: original cases did not assign the exact source TableKey at row level.',
                  'New original TableKeys each uniquely map to raw 20-byte full Gen9 templates, distinguishing 840 variant configurations.',
                  'No official PKHeX resources modified; PK9 runtime ability, PID/EC/IV, event flags and movement require independent game observation.']
    }
    (output/'SV400_Original_Fixed20_SourceOwnership.json').write_text(json.dumps(summary,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
    return summary


def main():
    p=argparse.ArgumentParser(description=__doc__)
    for k in ('events','manifest','source-audit','fixed-pkl','output'):
        p.add_argument('--'+k,type=Path,required=True)
    a=p.parse_args()
    print(json.dumps(audit(a.events,a.manifest,a.source_audit,a.fixed_pkl,a.output),ensure_ascii=False,indent=2))

if __name__=='__main__':main()