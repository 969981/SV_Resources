#!/usr/bin/env python3
"""Fail-closed ROM->PKL release certificate and independent reference multiset A/B."""
from __future__ import annotations
import argparse, hashlib, importlib.util, json
from collections import Counter
from pathlib import Path

ROOT=Path(__file__).resolve().parent
spec=importlib.util.spec_from_file_location("sv400_pkl_audit",ROOT/"Audit-SV-PKHeX-Encounters.py")
AUDIT=importlib.util.module_from_spec(spec)
spec.loader.exec_module(AUDIT)
STATUS="GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES"
EXPECTED={
 "encounter_wild_paldea.pkl":"01F78F4F8DE93176642B1837A5FEC65483003424DE80A20115E72E8C3187C187",
 "encounter_fixed_paldea.pkl":"F902A1955042E031B494FD52028B79241B98D61925ADDCC30A75856017CDD6C8",
 "encounter_gem_paldea.pkl":"B24C54559D8B5D676B8EB77DFBDC36ED82DFD1AD2D3E3125DAFDCF048C804552",
 "encounter_gem_kitakami.pkl":"14F376DDDD53A02C41E782FB634BFF44DF50D88253F99924669CEC3734E4BC18",
 "encounter_gem_blueberry.pkl":"DE925A11509B6DB1FD0F40D1102277A2A248AE7BEECBD2DF0A410EDF50AE9B51",
}
IDENTITY=tuple(AUDIT.WILD_COLUMNS[1:3])+tuple(AUDIT.WILD_COLUMNS[4:])
def digest(data:bytes)->str:return hashlib.sha256(data).hexdigest().upper()
def load(path):return json.loads(Path(path).read_text("utf-8-sig"))
def audited_build(folder:Path, required_owner:str):
    proof=load(folder/"native-encounter-build.json")
    if (proof.get("status")!=STATUS or proof.get("collisionBlocker") is not None
        or proof.get("unverifiedExtraFiles") or proof.get("originalTrcolEntries")!=223
        or proof.get("ownerABMode")!=required_owner):
        raise ValueError("Incompatible/partial native generator provenance or A/B mode")
    source=proof.get("sourceFilesActuallyRead",[])
    if len(source)!=276 or any(not x.get("verifiedByOriginalM2Manifest") for x in source):
        raise ValueError("Not all original consumed M2 and TRCOL sources SHA-attested")
    files=proof.get("generated",[])
    if len(files)!=5 or {x["name"] for x in files}!=set(EXPECTED):
        raise ValueError("Native generator must produce exactly five output files")
    verified={}
    for entry in files:
        p=folder/entry["name"]
        raw=p.read_bytes()
        sha=digest(raw)
        if not raw or len(raw)!=entry["bytes"] or sha!=entry["sha256"]:
            raise ValueError("Tampered or missing native pkl: "+p.name)
        verified[p.name]={"sha256":sha,"bytes":len(raw)}
    return verified
def intersect(a:Counter,b:Counter)->int:
    return sum((a&b).values())
def normalized(rows):
    return Counter(tuple(int(row[f]) for f in IDENTITY) for row in rows)
def owner_compare(base:Path, owner:Path, reference:Path):
    basewild=(base/"encounter_wild_paldea.pkl").read_bytes()
    ownerwild=(owner/"encounter_wild_paldea.pkl").read_bytes()
    refwild=(reference/"encounter_wild_paldea.pkl").read_bytes()
    a=normalized(AUDIT.read_wild(basewild))
    b=normalized(AUDIT.read_wild(ownerwild))
    ref=normalized(AUDIT.read_wild(refwild))
    original_matches=a & ref
    revised_matches=b & ref
    retained=intersect(original_matches,revised_matches)
    lost=sum((original_matches-revised_matches).values())
    added=sum((revised_matches-original_matches).values())
    untouched=[]
    for key in set(a)|set(b):
        if key[:2] not in {(178,0),(192,178),(180,178)} and a[key]!=b[key]:
            untouched.append(key)
    changed_tables=[name for name in EXPECTED
                    if name!="encounter_wild_paldea.pkl" and
                    (base/name).read_bytes()!=(owner/name).read_bytes()]
    return {"baseline_reference_matches":sum(original_matches.values()),
            "retained":retained,"lost":lost,"added":added,
            "total_reference_matches":sum(revised_matches.values()),
            "baseline_wild_records":sum(a.values()),"owner_wild_records":sum(b.values()),
            "non_target_changed":len(untouched),
            "changed_fixed_or_raid_tables":changed_tables}
def verify(base:Path,source:Path,collision:Path,owner:Path|None,reference:Path|None,out:Path):
    s=load(source);c=load(collision)
    if s.get("status")!="61_NATIVE_TARGETS_EXTRACTED_SHA256_VERIFIED" or len(s.get("targets",[]))!=61:
        raise ValueError("Original 61 M2 proof missing")
    if c.get("status")!="TRCOL_ORIGINAL_SHA256_VERIFIED" or c.get("unique_trcol_paths")!=223:
        raise ValueError("Original 223 TRCOL proof missing")
    baseline=audited_build(base,"baseline")
    for name,expected in EXPECTED.items():
        if baseline[name]["sha256"]!=expected:
            raise ValueError(f"BASELINE SHA DRIFT: {name}")
    result={"status":"SOURCE_VERIFIED_FIVE_NATIVE_PKLS_BASELINE_RELEASE_ELIGIBLE",
            "source":"Original SV 4.0.0 TRPFD/TRPFS, 61 M2 and 223 TRCOL",
            "baseline_files":baseline,"native_build_sha256":digest((base/"native-encounter-build.json").read_bytes()),
            "owner_ab":"NOT_RUN","pk9_runtime_legality":"NOT_OBSERVED",
            "limits":"Reference parity is not PK9 runtime legality; five files exclude historical BCAT."}
    owner_error=None
    if owner is not None:
        if reference is None:raise ValueError("Independent PKHeX reference mandatory for owner experiment")
        experiment=audited_build(owner,"terarium-178-source-collider")
        try:
            result["owner_ab"]=owner_compare(base,owner,reference)
            result["owner_ab"]["source_files"]=experiment
            if result["owner_ab"]["non_target_changed"] or result["owner_ab"]["changed_fixed_or_raid_tables"]:
                owner_error="Owner experiment changed non-target wild or fixed/raid resources"
            elif result["owner_ab"]["lost"]!=0 or result["owner_ab"]["retained"]!=26185:
                owner_error="Owner experiment lost original PKHeX matches"
            elif result["owner_ab"]["added"]<=0:
                owner_error="Owner AB recovered no reference occurrence; do not promote"
        except ValueError as exc:
            owner_error=str(exc)
            result["owner_ab"]={"error":owner_error,"source_files":experiment}
        result["owner_ab_gate"]="PASS" if owner_error is None else "FAIL"
    out.parent.mkdir(parents=True,exist_ok=True)
    out.write_text(json.dumps(result,ensure_ascii=False,indent=2)+"\n","utf-8")
    if owner_error:
        raise ValueError(owner_error+"; inspect persisted evidence JSON")
    return result
def main():
    p=argparse.ArgumentParser()
    p.add_argument("--baseline",required=True,type=Path)
    p.add_argument("--source-manifest",required=True,type=Path)
    p.add_argument("--trcol-manifest",required=True,type=Path)
    p.add_argument("--owner",type=Path)
    p.add_argument("--reference",type=Path)
    p.add_argument("--output",required=True,type=Path)
    a=p.parse_args()
    print(json.dumps(verify(a.baseline,a.source_manifest,a.trcol_manifest,a.owner,a.reference,a.output),ensure_ascii=False,indent=2))
if __name__=="__main__":main()
