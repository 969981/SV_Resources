#!/usr/bin/env python3
"""Verified native Havok TRCOL extraction for SV 4.0.0 encounter legality.

Consumes ONLY paths recovered from real, SHA-attested Trinity TRSCN union
Havok.TrcolFilePath and resolved against native TRPFD. Never infers a TRCOL
path from PKHeX or a filename pattern.
"""
from __future__ import annotations
import argparse
from collections import defaultdict
import csv
import hashlib
import json
from pathlib import Path
import runpy
import subprocess
import sys

TRPFS=Path("Unpack/4.0.0/romfs/arc/data.trpfs")
TRPFD=Path("Unpack/4.0.0/romfs/arc/data.trpfd/_index")
PROOF=TRPFS/"_index/encounter-trcol-extraction.json"
DEPENDENCIES=TRPFS/"_index/encounter-trcol-dependencies.json"


def digest(file:Path)->str:
    h=hashlib.sha256()
    with file.open("rb") as f:
        for block in iter(lambda:f.read(4*1024*1024),b""):
            h.update(block)
    return h.hexdigest().upper()


def safe_file(root:Path,rel:str)->Path:
    if not rel or rel.startswith("/") or "\\" in rel or ":" in rel or any(x in ("",".","..") for x in rel.split("/")):
        raise ValueError(f"Unsafe native collision path: {rel!r}")
    out=(root/rel).resolve()
    if not out.is_relative_to(root.resolve()) or not rel.lower().endswith(".trcol"):
        raise ValueError(f"Invalid or non-TRCOL native path {rel}")
    return out


def prepare(report:dict,pack_index:Path,*,max_packs=256,max_packed_mib=1024)->tuple[list[int],dict]:
    if report.get("source")!="4.0.0-original-native-TRSCN-Havok-flatbuffer":
        raise ValueError("Not an original 4.0.0 Trinity TRSCN manifest")
    if report.get("unresolved_count") or report.get("status")!="RESOLVED_NATIVE_TRCOL_PACKS":
        raise ValueError("Some original Havok TRCOL native files could not be resolved")
    references=report.get("havok_references",[])
    if not references:
        # Valid all-Box scenario; no extra files required.
        return [],{}
    by_path={}
    for entry in references:
        if entry.get("status")!="FOUND_ONE_NATIVE_FILE" or len(entry.get("native_matches",[]))!=1:
            raise ValueError("Native TRPFD path not uniquely resolved")
        match=entry["native_matches"][0]
        name=match["source_virtual_path"]
        if entry["trcol_path"].casefold()!=name.casefold():
            raise ValueError("TRSCN Havok link and original TRPFD path disagree")
        safe_file(Path("."),name)
        sha=match["hash"].upper()
        if len(sha)!=16 or any(c not in "0123456789ABCDEF" for c in sha):
            raise ValueError("Original source TRPFD hash malformed")
        index=int(match["pack_index"])
        if name in by_path:
            if by_path[name]!=(sha,index):
                raise ValueError("Same native TRCOL path mapped to conflicting hash or pack")
        by_path[name]=(sha,index)
    packs=sorted({i for _,i in by_path.values()})
    if packs!=report.get("selected_pack_indices"):
        raise ValueError("Source TRPFD pack selection changed")
    sizes={}
    with pack_index.open("r",encoding="utf-8-sig",newline="") as f:
        for row in csv.DictReader(f,delimiter="\t"):
            i=int(row["pack_index"])
            if i in packs:
                sizes[i]=int(row["packed_bytes"])
    if len(sizes)!=len(packs):
        raise ValueError("Original TRPFD pack metadata missing")
    if len(packs)>max_packs or sum(sizes.values())>max_packed_mib*1024*1024:
        raise ValueError(f"TRCOL source exceeds bounded pack budget: {len(packs)} packs, {sum(sizes.values())} bytes")
    return packs,by_path


def extract(repo:Path,workspace:Path,deps:dict,*,seven_zip:Path,max_packs=256,max_packed_mib=1024):
    if workspace==repo or workspace.is_relative_to(repo):
        raise RuntimeError("Original ROM must be restored outside the repo")
    if not all((workspace/"arc"/x).is_file() for x in ("data.trpfd","data.trpfs")):
        raise FileNotFoundError("Verified original Trinity TRPFD/TRPFS missing")
    packs,by_path=prepare(deps,repo/TRPFD/"pack_index.tsv",max_packs=max_packs,max_packed_mib=max_packed_mib)
    originals=repo/TRPFS/"_index/encounter-native-extraction.json"
    if json.loads(originals.read_text("utf-8"))["status"]!="61_NATIVE_TARGETS_EXTRACTED_SHA256_VERIFIED":
        raise ValueError("61 native input checksum evidence absent")
    if packs:
        for req in ("tools/_local/GFPAKHashCache.bin","tools/_local/oo2core_8_win64.dll"):
            if not (repo/req).is_file():
                raise FileNotFoundError(req)
        if not seven_zip.is_file():
            raise FileNotFoundError(seven_zip)
        subprocess.run(["dotnet","build","tools/SV.TrinityDump/SV.TrinityDump.csproj",
                        "-c","Release","--nologo"],cwd=repo,check=True)
        process=runpy.run_path(str(repo/"scripts/Run-SV-FullExtract.py"))["process_batch"]
    reports=[]
    for pack in packs:
        summary,_=process(repo,str(workspace),repo/TRPFS,repo/TRPFD,
                          str(repo/"tools/_local/GFPAKHashCache.bin"),
                          str(repo/"tools/_local/oo2core_8_win64.dll"),
                          str(seven_zip),pack,pack+1,dry_run=False,
                          report_prefix="manual-pack")
        if summary.get("failed") or summary.get("decoderExitCode") or not summary.get("success"):
            raise RuntimeError(f"Native Havok pack {pack} failed original source SHA audit")
        reports.append(summary["report"])
    hashes=defaultdict(list)
    for rel in reports:
        with (repo/rel).open("r",encoding="utf-8-sig") as f:
            for line in f:
                if line.strip():
                    row=json.loads(line)
                    hashes[row["Hash"].upper()].append(row)
    evidence=[]
    for name,(source_hash,pack) in sorted(by_path.items()):
        candidates=[r for r in hashes[source_hash]
                    if r["Name"].casefold()==name.casefold() and r.get("Status")=="OK"]
        if len(candidates)!=1:
            raise ValueError(f"Missing or ambiguous decoded native Havok hash {source_hash}: {name}")
        item=candidates[0]
        output=safe_file(repo/TRPFS/"virtual",name)
        if not output.is_file() or output.stat().st_size!=item["Size"] or digest(output)!=item["Sha256"]:
            raise ValueError(f"Original native TRCOL was not written or SHA-verified: {name}")
        evidence.append({"source_virtual_path":name,"trpfd_hash":source_hash,
                         "pack_index":pack,"native_sha256":item["Sha256"],
                         "native_bytes":item["Size"],"status":"TRCOL_ORIGINAL_SHA256_VERIFIED"})
    result={"status":"TRCOL_ORIGINAL_SHA256_VERIFIED",
            "source":"SV-4.0.0-original-TRPFD-TRPFS",
            "dependency_manifest":str(DEPENDENCIES),
            "dependency_manifest_sha256":digest(repo/DEPENDENCIES),
            "unique_trcol_paths":len(by_path),"selected_native_packs":packs,
            "targets":evidence,"per_pack_reports":reports,
            "limitations":["Havok parse/point containment still requires actual pkNX runtime.",
                           "TRCOL SHA-valid does not imply matching PKHeX encounter legality."]}
    out=repo/PROOF
    out.parent.mkdir(parents=True,exist_ok=True)
    out.write_text(json.dumps(result,ensure_ascii=False,indent=2)+"\n","utf-8")
    return result


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--repo",type=Path,default=Path("."))
    p.add_argument("--workspace",type=Path,required=True)
    p.add_argument("--manifest",type=Path,default=DEPENDENCIES)
    p.add_argument("--seven-zip",type=Path,default=Path(r"C:\Program Files\7-Zip\7z.exe"))
    p.add_argument("--max-packs",type=int,default=256)
    p.add_argument("--max-packed-mib",type=int,default=1024)
    a=p.parse_args()
    repo=a.repo.resolve()
    deps=json.loads((repo/a.manifest).resolve().read_text("utf-8-sig"))
    result=extract(repo,a.workspace.resolve(),deps,seven_zip=a.seven_zip,
                   max_packs=a.max_packs,max_packed_mib=a.max_packed_mib)
    print(json.dumps({"status":result["status"],"trcol":result["unique_trcol_paths"],
                      "packs":result["selected_native_packs"]},indent=2))
    return 0


if __name__=="__main__":
    try:
        raise SystemExit(main())
    except Exception as e:
        print(f"NATIVE_TRCOL_EXTRACTION_BLOCKED: {type(e).__name__}: {e}",file=sys.stderr)
        raise SystemExit(2)
