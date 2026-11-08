#!/usr/bin/env python3
"""Compare the one-point Kitakami PointData #5046 area-filter counterfactual.

The original 61+223 inputs are verified by the native CLI manifest. PKHeX is
used only as an independent post-generation reference. The experimental
filter switches AreaInfo context to SourceCollisionArea for this one point
inside LocationStorage 158; all other native wild slots and fixed/raid bytes
must remain unchanged.
"""
from __future__ import annotations
import argparse
from collections import Counter
import csv
import hashlib
import importlib.util
import json
from pathlib import Path

SLOTS=("location_id","cross_from_id","species_national","form_raw","gender_raw",
       "level_min","level_max","time_forbidden_mask","weather_allowed_mask")
NAMES=("encounter_wild_paldea.pkl","encounter_fixed_paldea.pkl",
       "encounter_gem_paldea.pkl","encounter_gem_kitakami.pkl",
       "encounter_gem_blueberry.pkl")
PIN="0660d1e1f4924b8478daec73281bb8071a82ad19"
MODE="kitakami-158-point5046-source-area-filter"
STATUS="ORIGINAL_SV400_POINT5046_SOURCE_AREA_FILTER_AB_NOT_GAME_LEGALITY"

def digest(path:Path)->str:
    h=hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda:f.read(1<<20),b""):
            h.update(chunk)
    return h.hexdigest().upper()

def import_reader(path:Path):
    spec=importlib.util.spec_from_file_location("sv400_point5046_readonly_gen9",path)
    mod=importlib.util.module_from_spec(spec);spec.loader.exec_module(mod);return mod

def read_build(root:Path, original:dict, expected_area_mode:str)->dict:
    d=json.loads((root/"native-encounter-build.json").read_text("utf-8-sig"))
    if (d.get("status")!="GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES"
        or d.get("collisionBlocker") is not None or d.get("unverifiedExtraFiles")
        or d.get("originalTrcolEntries")!=223 or len(d.get("sourceFilesActuallyRead",[]))!=276
        or any(not x.get("verifiedByOriginalM2Manifest") for x in d["sourceFilesActuallyRead"])
        or d.get("levelABMode")!="baseline" or d.get("crossoverABMode")!="baseline"
        or d.get("areaFilterABMode")!=expected_area_mode):
        raise ValueError("Native PointData 5046 A/B source/mode manifest invalid")
    entries={x["name"]:x for x in d["generated"]}
    if set(entries)!=set(NAMES): raise ValueError("Original five Gen9 tables missing")
    for name in NAMES:
        actual=digest(root/name)
        if actual!=entries[name]["sha256"]: raise ValueError("Native output SHA mismatch: "+name)
        if name!=NAMES[0] and actual!=original["tables"][{
            NAMES[1]:"fixed",NAMES[2]:"raid_paldea",NAMES[3]:"raid_kitakami",NAMES[4]:"raid_blueberry"
        }[name]]["native_sha256"]:
            raise ValueError("PointData 5046 A/B modified fixed/raid table: "+name)
    return d

def key(row): return tuple(int(row[k]) for k in SLOTS)
def scopes(k):
    return {
        "location158_or_cross_from158": k[0]==158 or k[1]==158,
        "cross_from158": k[1]==158,
        "local_location158": k[0]==158 and k[1]==0,
    }
def tally(a:Counter,b:Counter):
    return {"native":sum(a.values()),"reference":sum(b.values()),
            "matched":sum((a&b).values()),"native_only":sum((a-b).values()),
            "pkhex_only":sum((b-a).values())}
def retention(a:Counter,b:Counter,ref:Counter):
    old=a&ref;new=b&ref;kept=old&new
    return {"baseline_reference_matches_retained":sum(kept.values()),
            "baseline_reference_matches_lost":sum((old-kept).values()),
            "new_reference_matches_recovered":sum((new-kept).values())}

def load_diff(path:Path):
    with path.open(newline="",encoding="utf-8-sig") as f:
        r=csv.DictReader(f)
        if tuple(r.fieldnames or ())!=SLOTS: raise ValueError("Pinned PKHeX diff schema mismatch")
        return Counter(key(x) for x in r)

def compare(baseline:Path,manifest:Path,diff_root:Path,variant:Path,auditor:Path,
            probe_path:Path,output:Path)->dict:
    for p in (baseline,manifest.parent,diff_root,variant,probe_path):
        p=Path(p).resolve()
        if output.resolve()==p or output.resolve().is_relative_to(p):
            raise ValueError("Comparison output must not overwrite native or reference evidence")
    original=json.loads(manifest.read_text("utf-8-sig"))
    if (original.get("status")!="NATIVE_SOURCE_VERIFIED_PKHEX_BINARY_COMPATIBLE_NOT_FULL_LEGALITY_PARITY"
        or original.get("pkhex_pinned_commit")!=PIN
        or original.get("provenance",{}).get("original_source_entries")!=61
        or original.get("provenance",{}).get("original_collision_entries")!=223):
        raise ValueError("Pinned original SV 4.0.0 source manifest drift")
    base_build=read_build(baseline,original,"baseline")
    variant_build=read_build(variant,original,MODE)
    probe=json.loads(probe_path.read_text("utf-8-sig"))
    expected={40,41,74,110,111,112,113}
    probes=probe.get("probes",[])
    if (probe.get("status")!="ORIGINAL_SV400_POINT5046_SOURCE_AREA_FILTER_PROBES_NOT_GAME_LEGALITY"
        or probe.get("sourcePointIndex")!=5046 or probe.get("sourceLocation")!=158
        or probe.get("probeCount")!=7 or {x.get("criteriaIndex") for x in probes}!=expected):
        raise ValueError("Original PointData #5046 area-filter probe evidence incomplete")

    reader=import_reader(auditor)
    native=Counter(key(x) for x in reader.read_wild((baseline/NAMES[0]).read_bytes()))
    only_native=load_diff(diff_root/"T30/comparison/wild_native_only.csv")
    only_pkhex=load_diff(diff_root/"T30/comparison/wild_pkhex_only.csv")
    if (sum(native.values()),sum(only_native.values()),sum(only_pkhex.values()))!=(29840,3655,676):
        raise ValueError("Original native/PKHeX 30f reference counts drift")
    if any(native[k]<v for k,v in only_native.items()):
        raise ValueError("Pinned native-only difference is not a subset of actual native output")
    reference=(native-only_native)+only_pkhex
    if (sum(reference.values()),sum((native&reference).values()))!=(26861,26185):
        raise ValueError("Cannot reproduce pinned independent PKHeX multiset")

    changed=Counter(key(x) for x in reader.read_wild((variant/NAMES[0]).read_bytes()))
    focal=lambda c:Counter({k:v for k,v in c.items() if scopes(k)["location158_or_cross_from158"]})
    base_focus=focal(native);variant_focus=focal(changed)
    base_out=Counter({k:v for k,v in native.items() if not scopes(k)["location158_or_cross_from158"]})
    variant_out=Counter({k:v for k,v in changed.items() if not scopes(k)["location158_or_cross_from158"]})
    if base_out!=variant_out:
        raise ValueError("One-point area-filter A/B modified wild records outside Location/CrossFrom 158")
    ref_focus=focal(reference)
    scope_results={}
    for name in ("location158_or_cross_from158","cross_from158","local_location158"):
        pred=lambda k:scopes(k)[name]
        a=Counter({k:v for k,v in native.items() if pred(k)})
        b=Counter({k:v for k,v in changed.items() if pred(k)})
        ref=Counter({k:v for k,v in reference.items() if pred(k)})
        scope_results[name]={"baseline":tally(a,ref),"variant":tally(b,ref),**retention(a,b,ref),
                             "match_delta":sum((b&ref).values())-sum((a&ref).values())}
    delta=[]
    for k in sorted(set(native)|set(changed)):
        diff=changed[k]-native[k]
        if diff:
            delta.append(dict(zip(SLOTS,k))|{"delta":diff,
                "pkhex_reference_count":reference[k],
                "scope":"location158_or_cross_from158" if scopes(k)["location158_or_cross_from158"] else "OUT_OF_SCOPE_ERROR"})
    if any(x["scope"]=="OUT_OF_SCOPE_ERROR" for x in delta):
        raise ValueError("A/B emitted a change outside the single source location 158 scope")
    output.mkdir(parents=True,exist_ok=True)
    with (output/"SV400_Point5046_AreaFilter_AB_Changes.csv").open("w",newline="",encoding="utf-8-sig") as f:
        fields=[*SLOTS,"delta","pkhex_reference_count","scope"]
        w=csv.DictWriter(f,fieldnames=fields,lineterminator="\n");w.writeheader();w.writerows(delta)
    report={"status":STATUS,"mode":MODE,"original_sources":"61 M2 + 223 TRCOL SHA verified",
        "baseline_wild_sha256":digest(baseline/NAMES[0]),
        "variant_wild_sha256":digest(variant/NAMES[0]),
        "probe_report":probe,"scopes":scope_results,
        "changed_slot_rows":len(delta),"all_non_location158_and_non_crossfrom158_wild_unchanged":True,
        "fixed_and_three_raid_sha_unchanged":True,
        "limitations":[
            "PointData #5046 source collision area is not proof of gameplay spawn ownership.",
            "This changes only the area-filter context for that one original PointData ordinal in LocationStorage 158.",
            "PKHeX reference parity is diagnostic only; game-captured PK9/runtime evidence is still required."
        ]}
    (output/"SV400_Point5046_AreaFilter_AB.json").write_text(json.dumps(report,indent=2,ensure_ascii=False)+"\n","utf-8")
    return report

def main():
    p=argparse.ArgumentParser(description=__doc__)
    for x in ("baseline","manifest","tolerance","variant","auditor","probe-report","output"):
        p.add_argument("--"+x,type=Path,required=True)
    a=p.parse_args()
    d=compare(a.baseline,a.manifest,a.tolerance,a.variant,a.auditor,a.probe_report,a.output)
    print(json.dumps({"scopes":d["scopes"],"changed_slot_rows":d["changed_slot_rows"]},indent=2))

if __name__=="__main__": main()
