#!/usr/bin/env python3
"""SV 4.0.0 non-Trinity native extraction: Wwise BNK/PCK and NSO sections.
Source files are read-only; unknown TRMDD/Bink2 formats are indexed, not faked.
"""
import argparse, hashlib, json, mmap, re, struct
from pathlib import Path

ROOT=Path("4.0.0")
DEST=Path("Unpack/4.0.0")

def u32(data,p,order="<"):
    if p < 0 or p+4 > len(data): raise ValueError(f"u32 out of bounds: {p}")
    return struct.unpack_from(order+"I",data,p)[0]
def digest(data): return hashlib.sha256(data).hexdigest().upper()
def emit(out,name,data,offset,limit):
    rec={"path":name,"offset":offset,"bytes":len(data),"sha256":digest(data)}
    if len(data)>limit:
        rec["status"]="SKIPPED_LARGE"
        return rec
    dest=out/"extracted"/name
    dest.parent.mkdir(parents=True,exist_ok=True)
    if dest.exists():
        if dest.stat().st_size!=len(data) or digest(dest.read_bytes())!=rec["sha256"]:
            raise ValueError(f"Existing output differs: {dest}")
    else: dest.write_bytes(data)
    rec["status"]="EXTRACTED"
    return rec

def bnk(data,out,limit):
    if data[:4]!=b"BKHD": raise ValueError("Not a Wwise BKHD bank")
    chunks=[]; pos=0
    while pos<len(data):
        if pos+8>len(data): raise ValueError("Truncated BNK chunk header")
        tag=bytes(data[pos:pos+4]).decode("ascii","replace")
        size=u32(data,pos+4)
        if pos+8+size>len(data): raise ValueError(f"Truncated {tag}")
        chunks.append({"id":tag,"offset":pos+8,"bytes":size})
        pos+=8+size
    didx=next((x for x in chunks if x["id"]=="DIDX"),None)
    dat=next((x for x in chunks if x["id"]=="DATA"),None)
    exports=[]
    if didx:
        if not dat or didx["bytes"]%12: raise ValueError("Invalid DIDX/DATA pair")
        for p in range(didx["offset"],didx["offset"]+didx["bytes"],12):
            media_id,off,size=struct.unpack_from("<III",data,p)
            if off+size>dat["bytes"]: raise ValueError(f"WEM outside DATA: {media_id}")
            start=dat["offset"]+off
            exports.append(emit(out,f"{media_id}.wem",data[start:start+size],start,limit))
    objects=[]
    for ch in (x for x in chunks if x["id"]=="HIRC"):
        pos=ch["offset"]; end=pos+ch["bytes"]; count=u32(data,pos); pos+=4
        if count>1_000_000: raise ValueError("Unreasonable HIRC count")
        for _ in range(count):
            if pos+9>end: raise ValueError("Truncated HIRC object")
            kind,size=struct.unpack_from("<BI",data,pos)
            if size<4 or pos+5+size>end: raise ValueError("Invalid HIRC size")
            objects.append({"type":kind,"id":u32(data,pos+5),"offset":pos,"bytes":size+5})
            pos+=5+size
        if pos!=end: raise ValueError("Unexpected HIRC tail")
    return {"format":"Wwise BNK","bankVersion":u32(data,8),"bankId":u32(data,12),
            "chunks":chunks,"hircObjects":objects,"exports":exports}

def pck(data,out,limit):
    if data[:4]!=b"AKPK": raise ValueError("Not Wwise AKPK")
    order="<" if u32(data,8)==1 else (">" if u32(data,8,">")==1 else None)
    if order is None: raise ValueError("Unknown AKPK endian")
    header,flag,s1,s2,s3=struct.unpack_from(order+"5I",data,4)
    has_s4=(s1+s2+s3+16<header)
    s4=u32(data,24,order) if has_s4 else 0
    pos=28 if has_s4 else 24
    if pos+s1+s2+s3+s4>len(data): raise ValueError("AKPK tables out of bounds")
    langs={0:"SFX"}; base=pos
    if s1>=4:
        count=u32(data,pos,order)
        if 4+8*count>s1: raise ValueError("Invalid AKPK languages")
        for i in range(count):
            off,lang_id=struct.unpack_from(order+"II",data,pos+4+i*8)
            start=base+off
            if start>=base+s1: raise ValueError("Language name out of bounds")
            chunk=bytes(data[start:base+s1])
            if len(chunk)>1 and (chunk[0]==0 or chunk[1]==0):
                raw=chunk[:512]; enc="utf-16-le" if order=="<" else "utf-16-be"
                end=next((j for j in range(0,len(raw)-1,2) if raw[j:j+2]==b"\0\0"),len(raw)&~1)
                name=raw[:end].decode(enc,"replace")
            else: name=chunk.split(b"\0",1)[0].decode("utf8","replace")
            langs[lang_id]=re.sub(r"[^A-Za-z0-9_-]","_",name) or f"lang_{lang_id}"
    pos+=s1; tables=[]; exports=[]
    for section_size,extension,section_name in ((s2,"bnk","banks"),(s3,"wem","sounds"),(s4,"wem","externals")):
        start=pos; pos+=section_size
        if not section_size: continue
        count=u32(data,start,order)
        if count>1_000_000 or (count==0 and section_size!=4): raise ValueError("Bad AKPK count")
        itemsize=(section_size-4)//count if count else 0
        if count and ((section_size-4)%count or itemsize not in (20,24)):
            raise ValueError(f"Unsupported {section_name} entry size {itemsize}")
        tables.append({"name":section_name,"count":count,"entrySize":itemsize})
        for i in range(count):
            p=start+4+i*itemsize
            if itemsize==24 and section_name=="externals":
                file_id=struct.unpack_from(order+"Q",data,p)[0]
                block=u32(data,p+8,order)
                size,off,lang=struct.unpack_from(order+"III",data,p+12)
            else:
                file_id=u32(data,p,order); block=u32(data,p+4,order)
                if itemsize==24:
                    size=struct.unpack_from(order+"Q",data,p+8)[0]
                    off,lang=struct.unpack_from(order+"II",data,p+16)
                else: size,off,lang=struct.unpack_from(order+"III",data,p+8)
            actual=off*block if block else off
            if actual+size>len(data): raise ValueError(f"AKPK {section_name} {i} bounds")
            name=f"{file_id}.{extension}"
            if lang: name=f"{langs.get(lang,f'lang_{lang}')}/{name}"
            if section_name=="externals": name="externals/"+name
            exports.append(emit(out,name,data[actual:actual+size],actual,limit))
    return {"format":"Wwise AKPK","endian":"little" if order=="<" else "big",
            "headerSize":header,"languages":langs,"tables":tables,"exports":exports}

def nso(data,out,limit):
    if data[:4]!=b"NSO0" or len(data)<256: raise ValueError("Not NSO0")
    import lz4.block
    flags=u32(data,12)
    result={"format":"NSO0","buildId":bytes(data[0x40:0x60]).hex().upper(),
            "flags":flags,"bssBytes":u32(data,0x3c),"segments":[]}
    for i,name in enumerate(("text","rodata","data")):
        off=u32(data,0x10+i*16); mem=u32(data,0x14+i*16)
        length=u32(data,0x18+i*16)
        stored=u32(data,0x60+i*4) if flags&(1<<i) else length
        if off+stored>len(data): raise ValueError("NSO segment out of range")
        content=bytes(data[off:off+stored])
        if flags&(1<<i): content=lz4.block.decompress(content,uncompressed_size=length)
        if len(content)!=length: raise ValueError("NSO size mismatch")
        expected=bytes(data[0xa0+i*32:0xc0+i*32]).hex().upper()
        actual=digest(content)
        if flags&(1<<(3+i)) and actual!=expected: raise ValueError("NSO SHA mismatch")
        entry=emit(out,name+".bin",content,off,limit)
        entry.update({"memoryOffset":mem,"compressed":bool(flags&(1<<i)),
                      "storedBytes":stored,"headerSha256":expected,
                      "headerHashRequired":bool(flags&(1<<(3+i)))})
        result["segments"].append(entry)
    return result

def opaque(data,suffix):
    if suffix==".bk2":
        return {"format":"Bink2 (not decoded)","fourcc":bytes(data[:4]).decode("latin1"),
                "fileSizeField":u32(data,4),"frameCountCandidate":u32(data,8),
                "widthCandidate":u32(data,20),"heightCandidate":u32(data,24),
                "fpsNumCandidate":u32(data,28),"fpsDenCandidate":u32(data,32)}
    return {"format":"NPDM/unknown (header only)",
            "headerHex":bytes(data[:128]).hex()}

def run(repo,src,restored,limit,manifest):
    rel=src.relative_to(repo)
    out=repo/DEST/("exefs" if rel.parts[1]=="0" else "romfs")/Path(*rel.parts[2:]).parent/rel.name
    path=(restored/rel) if restored and (restored/rel).is_file() else src
    with path.open("rb") as f:
        if f.seek(0,2)==0: raise ValueError("Empty input")
        f.seek(0)
        with mmap.mmap(f.fileno(),0,access=mmap.ACCESS_READ) as data:
            source_hash=digest(data)
            expected=manifest.get(rel.as_posix())
            if expected and (expected["sourceBytes"]!=len(data) or expected["sourceSha256"].upper()!=source_hash):
                raise ValueError(f"Original manifest mismatch: {rel}")
            ext=src.suffix.lower()
            if ext==".bnk": result=bnk(data,out,limit)
            elif ext==".pck": result=pck(data,out,limit)
            elif data[:4]==b"NSO0" and rel.parts[1]=="0": result=nso(data,out,limit)
            else: result=opaque(data,ext)
            results=result.get("exports",result.get("segments",[]))
            result.update({"source":rel.as_posix(),"sourceBytes":len(data),
                "sourceSha256":source_hash,"parser":"scripts/Unpack-SV-Remaining.py",
                "status":"PARTIAL" if any(x["status"]=="SKIPPED_LARGE" for x in results)
                         else "EXTRACTED" if any(x["status"]=="EXTRACTED" for x in results)
                         else "INDEXED_ONLY"})
    index=out/"_index"/"provenance.json"
    index.parent.mkdir(parents=True,exist_ok=True)
    payload=json.dumps(result,ensure_ascii=False,indent=2,sort_keys=True)+"\n"
    if index.exists() and index.read_text("utf8")!=payload:
        raise ValueError(f"Existing provenance differs: {index}")
    index.write_text(payload,encoding="utf8")
    return result

def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--repo",type=Path,default=Path(__file__).resolve().parent.parent)
    ap.add_argument("--restored-root",type=Path)
    ap.add_argument("--category",choices=("small","packages","movies","all"),default="small")
    ap.add_argument("--max-output-file-bytes",type=int,default=95_000_000)
    args=ap.parse_args()
    repo=args.repo.resolve()
    manifest_path=repo/"violet_4.0.0_romfs_transfer_manifest.json"
    manifest={}
    if manifest_path.exists():
        raw=json.loads(manifest_path.read_text(encoding="utf-8-sig"))
        manifest={"4.0.0/1/"+r["relativePath"]:r for r in raw["files"]}
    sources=[]
    if args.category in ("small","all"):
        sources.extend(p for p in (repo/ROOT/"0").iterdir() if p.is_file())
        sources.extend((repo/ROOT/"1"/"audio").rglob("*.bnk"))
        sources.extend((repo/ROOT/"1"/"audio").rglob("*.trmdd"))
        sources.extend((repo/ROOT/"1"/"audio").rglob("*.pck"))
    if args.category in ("packages","all"):
        sources.extend(p.with_name(p.name.removesuffix(".7z.001")) for p in
                       (repo/ROOT/"1"/"audio").rglob("*.pck.7z.001"))
    if args.category in ("movies","all"):
        sources.extend(p.with_name(p.name.removesuffix(".7z.001")) for p in
                       (repo/ROOT/"1"/"demo"/"movie").rglob("*.bk2.7z.001"))
    failed=0
    for src in sorted(set(sources)):
        try:
            result=run(repo,src,args.restored_root,args.max_output_file_bytes,manifest)
            print(json.dumps({"source":result["source"],"status":result["status"],
                              "entries":len(result.get("exports",result.get("segments",[])))}),flush=True)
        except Exception as exc:
            failed+=1
            relative=src.relative_to(repo)
            out=repo/DEST/("exefs" if relative.parts[1]=="0" else "romfs")/Path(*relative.parts[2:]).parent/relative.name/"_index"
            out.mkdir(parents=True,exist_ok=True)
            issue={"source":relative.as_posix(),"status":"FAILED","error":str(exc)}
            (out/"error.json").write_text(json.dumps(issue,ensure_ascii=False,indent=2)+"\\n",encoding="utf8")
            print(json.dumps(issue),flush=True)
    print(f"PROCESSED={len(set(sources))} FAILED={failed}")

if __name__=="__main__": main()
