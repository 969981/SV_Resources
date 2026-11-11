#!/usr/bin/env python3
"""PKHeX .pkl <-> JSON, lossless for all files; typed Gen9 adapters where proven.

Never claims that a .pkl is Python pickle. Resource binary format varies widely;
unknown layouts are represented explicitly as lossless, editable hex bytes.
"""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import re
import struct
import sys

SCHEMA = 'pkhex-pkl-json-v1'
PROFILE_NAMES = {
    'encounter_wild_paldea.pkl': 'gen9_wild',
    'encounter_fixed_paldea.pkl': 'gen9_fixed',
    'encounter_gem_paldea.pkl': 'gen9_raid',
    'encounter_gem_kitakami.pkl': 'gen9_raid',
    'encounter_gem_blueberry.pkl': 'gen9_raid',
    'encounter_outbreak_paldea.pkl': 'gen9_outbreak',
}
GEN9_PROFILE_PART = ('legality', 'wild', 'Gen9')
# Explicit < little-endian structs copied from the already audited native Gen9
# PKL read/write adapters in this repository, with additional 28-byte outbreak.
PROFILE_LAYOUTS = {
    'gen9_wild_slot': '<HBBBBBB',
    'gen9_fixed': '<HBBBBBBHHHHBBBB',
    'gen9_raid': '<HBBBBBBHHHHBBBBhh',
    'gen9_outbreak_prefix': '<HBBBBBBBBBB',
}
FIELDS = {
    'gen9_wild_slot': ('species','form','gender','level_min','level_max','time_forbidden_mask','weather_allowed_mask'),
    'gen9_fixed': ('species','form','level','flawless_iv','tera_type','gender','ability','move1','move2','move3','move4','location0','location1','location2','location3'),
    'gen9_raid': ('species','form','gender_raw_encoded','ability','flawless_iv','shiny_rule','level','move1','move2','move3','move4','tera_type','index','stars','rand_rate','rand_min_scarlet','rand_min_violet'),
    'gen9_outbreak_prefix': ('species','form','gender','level_min','level_max','ribbon','weather_allowed_mask','force_scale_range','scale_min','scale_max','is_shiny_forced'),
}
# Confirmed structure lengths; enforce so future schema changes fail closed.
assert struct.calcsize(PROFILE_LAYOUTS['gen9_wild_slot']) == 8
assert struct.calcsize(PROFILE_LAYOUTS['gen9_fixed']) == 20
assert struct.calcsize(PROFILE_LAYOUTS['gen9_raid']) == 24
assert struct.calcsize(PROFILE_LAYOUTS['gen9_outbreak_prefix']) == 12


def sha256(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def hex_bytes(value: str, name: str = 'hex') -> bytes:
    if not isinstance(value, str) or len(value) % 2 or not re.fullmatch('[0-9a-fA-F]*',value):
        raise ValueError(f'Invalid {name} byte-hex string')
    return bytes.fromhex(value)


def pack_fields(profile: str, values: dict) -> bytes:
    expected = FIELDS[profile]
    if not isinstance(values, dict) or set(values) != set(expected):
        raise ValueError(f'{profile} requires fields {expected}')
    args=[]
    for i,kind in enumerate(PROFILE_LAYOUTS[profile][1:]):
        # Format uses only one-character size codes, no repetition counts.
        name = expected[i]
        v = values[name]
        if type(v) is not int:
            raise ValueError(f'{name} must be an integer')
        bounds = {'B':(0,255),'H':(0,65535),'h':(-32768,32767)}
        if not bounds[kind][0]<=v<=bounds[kind][1]:
            raise ValueError(f'{name}={v} exceeds {kind} bounds')
        args.append(v)
    return struct.pack(PROFILE_LAYOUTS[profile],*args)


def unpack_fields(profile: str, raw: bytes) -> dict:
    return dict(zip(FIELDS[profile],struct.unpack(PROFILE_LAYOUTS[profile],raw),strict=True))


def inspect_binlinker(data: bytes, width: int):
    if len(data)<8 or not all(32<=b<127 for b in data[:2]):
        return None
    count = int.from_bytes(data[2:4], 'little')
    # Reject implausible count; count zero is legal but ambiguous on raw data.
    table_end=4+(count+1)*width
    if count==0 or table_end>len(data):
        return None
    tag='H' if width==2 else 'I'
    offsets=list(struct.unpack_from('<'+tag*(count+1), data,4))
    if offsets[0] < table_end or offsets[-1]>len(data) or any(b<a for a,b in zip(offsets,offsets[1:])):
        return None
    # We preserve gaps before first chunk and trailing bytes after the last.
    # Avoid falsely treating arbitrary raw arrays as BinLinker: require last
    # offset to reach file end (or tiny alignment trailer).
    if len(data)-offsets[-1]>3:
        return None
    return {'width':width,'identifier_hex':data[:2].hex(),
            'before_hex':data[table_end:offsets[0]].hex(),
            'after_hex':data[offsets[-1]:].hex(),
            'chunks':[data[a:b] for a,b in zip(offsets,offsets[1:])],
            'original_offsets':offsets}


def find_binlinker(data: bytes):
    a=inspect_binlinker(data,4)
    b=inspect_binlinker(data,2)
    if a and b:
        # Do not guess when the bytes satisfy both layouts; opaque still roundtrips.
        return None
    return a or b


def profile_for(rel: Path) -> str | None:
    if len(rel.parts)==1 or (len(rel.parts)>=4 and tuple(rel.parts[-4:-1]) == GEN9_PROFILE_PART):
        return PROFILE_NAMES.get(rel.name)
    return None


def parse_records(data:bytes,profile:str):
    if profile=='gen9_outbreak':
        size=28
        if len(data)%size:raise ValueError('Gen9 outbreak data length is not a multiple of 28')
        out=[]
        for off in range(0,len(data),size):
            raw=data[off:off+size]
            fields=unpack_fields('gen9_outbreak_prefix',raw[:12])
            packed=int.from_bytes(raw[12:],'little')
            fields['met_base']=packed&255
            fields['met_flags_hex']=f'{packed>>8:030x}'
            out.append(fields)
        return out
    fmt=PROFILE_LAYOUTS[profile]
    sz=struct.calcsize(fmt)
    if len(data)%sz:raise ValueError(f'{profile}: length is not multiple of {sz}')
    return [unpack_fields(profile,data[i:i+sz]) for i in range(0,len(data),sz)]


def build_records(records:list,profile:str)->bytes:
    if not isinstance(records,list):raise ValueError('records must be a list')
    if profile=='gen9_outbreak':
        out=bytearray()
        for f in records:
            if not isinstance(f,dict) or set(f)!=(set(FIELDS['gen9_outbreak_prefix'])|{'met_base','met_flags_hex'}):
                raise ValueError('Invalid Gen9 outbreak record schema')
            pre=pack_fields('gen9_outbreak_prefix',{k:f[k] for k in FIELDS['gen9_outbreak_prefix']})
            n=f['met_base']; flags=f['met_flags_hex']
            if type(n) is not int or not 0<=n<=255 or type(flags) is not str or not re.fullmatch('[0-9a-fA-F]{30}',flags):
                raise ValueError('Invalid outbreak met_base / 120-bit flags')
            out.extend(pre)
            out.extend(((int(flags,16)<<8)|n).to_bytes(16,'little'))
        return bytes(out)
    return b''.join(pack_fields(profile,f) for f in records)


def decode(raw:bytes,rel:Path,raw_only:bool=False)->dict:
    prof = None if raw_only else profile_for(rel)
    doc={'schema':SCHEMA,'source':{'path':rel.as_posix(),'bytes':len(raw),'sha256':sha256(raw)}}
    if prof in ('gen9_fixed','gen9_raid','gen9_outbreak'):
        doc['container']={'type':'record_array','profile':prof,'records':parse_records(raw,prof)}
        return doc
    parsed=find_binlinker(raw) if not raw_only else None
    if prof=='gen9_wild':
        if parsed is None or parsed['width']!=4:
            raise ValueError('Gen9 Wild is expected to have a valid BinLinker32 header')
    if parsed:
        chunks=[]
        for i,segment in enumerate(parsed['chunks']):
            if prof=='gen9_wild':
                if len(segment)<4 or (len(segment)-4)%8:
                    raise ValueError(f'Wild area {i} is not header(4)+N*8')
                location,cross=struct.unpack_from('<HH',segment)
                chunks.append({'index':i,'kind':'gen9_wild_area','location':location,
                               'cross_from':cross,'slots':parse_records(segment[4:],'gen9_wild_slot')})
            else:
                chunks.append({'index':i,'kind':'bytes','data_hex':segment.hex()})
        doc['container']={'type':'binlinker','offset_width':parsed['width'],
                          'identifier_hex':parsed['identifier_hex'],
                          'before_hex':parsed['before_hex'],'after_hex':parsed['after_hex'],
                          'chunks':chunks}
    else:
        doc['container']={'type':'opaque','data_hex':raw.hex(),
                          'note':'Lossless raw bytes; semantic layout is not currently certified'}
    return doc


def encode(doc:dict)->bytes:
    if not isinstance(doc,dict) or doc.get('schema')!=SCHEMA or not isinstance(doc.get('source'),dict):
        raise ValueError('Not a pkhex-pkl-json-v1 document')
    container=doc.get('container',{})
    typ=container.get('type')
    if typ=='opaque':
        data=hex_bytes(container['data_hex'],'data_hex')
    elif typ=='record_array':
        if container.get('profile') not in ('gen9_fixed','gen9_raid','gen9_outbreak'):
            raise ValueError('Unsupported semantic record layout')
        data=build_records(container['records'],container['profile'])
    elif typ=='binlinker':
        width=container['offset_width']
        if type(width) is not int or width not in (2,4):raise ValueError('Bad offset_width')
        ident=hex_bytes(container['identifier_hex'],'identifier_hex')
        if len(ident)!=2:raise ValueError('BinLinker identifier must be two bytes')
        chunks=container['chunks']
        if not isinstance(chunks,list) or not 1<=len(chunks)<=65535:
            raise ValueError('BinLinker requires 1..65535 chunks')
        values=[]
        for i,item in enumerate(chunks):
            if type(item.get('index')) is not int or item['index']!=i:
                raise ValueError('Chunk indices must be consecutive and preserve ordering')
            if item.get('kind')=='bytes':
                segment=hex_bytes(item['data_hex'],f'chunk {i} data_hex')
            elif item.get('kind')=='gen9_wild_area':
                loc,cross=item['location'],item['cross_from']
                if any(type(x) is not int or not 0<=x<=65535 for x in (loc,cross)):
                    raise ValueError(f'Invalid wild area location {i}')
                segment=struct.pack('<HH',loc,cross)+build_records(item['slots'],'gen9_wild_slot')
            else:raise ValueError(f'Unknown chunk kind {item.get("kind")}')
            values.append(segment)
        before=hex_bytes(container['before_hex'],'before_hex')
        after=hex_bytes(container['after_hex'],'after_hex')
        header_size=4+(len(values)+1)*width
        offsets=[header_size+len(before)]
        for segment in values:offsets.append(offsets[-1]+len(segment))
        maxoff=(1<<(width*8))-1
        if offsets[-1]>maxoff:raise ValueError('Offset overflow for BinLinker width')
        fmt='<'+('H' if width==2 else 'I')*(len(values)+1)
        data=ident+struct.pack('<H',len(values))+struct.pack(fmt,*offsets)+before+b''.join(values)+after
    else:
        raise ValueError('Unknown PKL container type')
    return data


def iter_pkl(root:Path):
    if root.is_file():
        if root.suffix.lower()!='.pkl':raise ValueError('Input file is not .pkl')
        yield root,Path(root.name)
    else:
        for p in sorted(root.rglob('*.pkl')):
            if p.is_file():yield p,p.relative_to(root)


def iter_json(root:Path):
    if root.is_file():
        if not root.name.endswith('.pkl.json'):raise ValueError('Input must end with .pkl.json')
        yield root,Path(root.name.removesuffix('.json'))
    else:
        for p in sorted(root.rglob('*.pkl.json')):
            if p.is_file():yield p,p.relative_to(root).with_suffix('')


def protected_output(source:Path,out:Path):
    src=source.resolve();dst=out.resolve()
    if src==dst or src in dst.parents or dst in src.parents:
        # Files sibling can be allowed; directory ancestors cannot.
        raise ValueError('Input/output paths must be separated; refusing any in-place overwrite')


def write_json(p:Path,doc):
    p.parent.mkdir(parents=True,exist_ok=True)
    p.write_text(json.dumps(doc,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')


def convert_export(src:Path,dest:Path,verify=True,raw_only=False):
    protected_output(src,dest)
    result=[]
    for f,rel in iter_pkl(src):
        data=f.read_bytes(); doc=decode(data,rel,raw_only=raw_only)
        rebuilt=encode(doc)
        exact=rebuilt==data
        if verify and not exact:raise ValueError(f'Roundtrip mismatch: {rel}')
        out=dest/Path(rel.as_posix()+'.json')
        write_json(out,doc)
        result.append({'path':rel.as_posix(),'bytes':len(data),'sha256':sha256(data),
                       'layout':doc['container']['type'],'profile':doc['container'].get('profile'),
                       'chunks':len(doc['container'].get('chunks',[])),'byte_exact':exact})
    if not result:raise ValueError('No .pkl found')
    manifest={'schema':SCHEMA,'status':'ALL_INPUT_PKL_ROUNDTRIP_BYTE_EXACT' if all(r['byte_exact'] for r in result) else 'PARTIAL',
              'count':len(result),'files':result,'total_source_bytes':sum(r['bytes'] for r in result),
              'opaque_count':sum(r['layout']=='opaque' for r in result)}
    write_json(dest/'pkl-json-manifest.json',manifest)
    return manifest


def convert_import(src:Path,dest:Path,reference:Path|None=None):
    protected_output(src,dest)
    if reference:protected_output(reference,dest)
    result=[]
    for p,rel in iter_json(src):
        doc=json.loads(p.read_text(encoding='utf-8'))
        if doc['source']['path'] != rel.as_posix():
            raise ValueError(f'Wrong original path in JSON: {p}')
        raw=encode(doc)
        matched=None
        if reference:
            rp=reference/rel
            if not rp.is_file():raise ValueError(f'Missing reference {rel}')
            matched=raw==rp.read_bytes()
            if not matched:raise ValueError(f'Byte mismatch vs original reference {rel}')
        out=dest/rel;out.parent.mkdir(parents=True,exist_ok=True);out.write_bytes(raw)
        result.append({'path':rel.as_posix(),'bytes':len(raw),'sha256':sha256(raw),
                       'unchanged_from_original':sha256(raw)==doc['source']['sha256'],
                       'reference_byte_exact':matched})
    if not result:raise ValueError('No *.pkl.json found')
    return {'schema':SCHEMA,'count':len(result),'files':result,
            'status':'REBUILT_FROM_JSON','all_original_sha_exact':all(x['unchanged_from_original'] for x in result)}


def main():
    p=argparse.ArgumentParser(description=__doc__)
    sub=p.add_subparsers(dest='command',required=True)
    exp=sub.add_parser('export',help='Convert all .pkl into lossless JSON')
    exp.add_argument('--input',type=Path,required=True)
    exp.add_argument('--output',type=Path,required=True)
    exp.add_argument('--raw',action='store_true',help='Force opaque bytes-only JSON')
    imp=sub.add_parser('import',help='Convert .pkl.json back into .pkl')
    imp.add_argument('--input',type=Path,required=True)
    imp.add_argument('--output',type=Path,required=True)
    imp.add_argument('--reference',type=Path,help='Require exact bytes vs original .pkl tree')
    args=p.parse_args()
    if args.command=='export':
        report=convert_export(args.input,args.output,raw_only=args.raw)
        print(json.dumps({k:v for k,v in report.items() if k!='files'},indent=2))
    else:
        report=convert_import(args.input,args.output,args.reference)
        print(json.dumps({k:v for k,v in report.items() if k!='files'},indent=2))


if __name__=='__main__':main()
