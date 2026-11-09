#!/usr/bin/env python3
"""Verify isolated REAL original 4.0.0 native Gen9 level A/B against pinned PKHeX.

The baseline is freshly generated from SHA-verified 61+223 game files.
The reference multi-set is reconstructed independently from the original
pinned-PKHeX 30f differential CSVs. Alternative .pkl outputs must remain
restricted to Terarium location 176/194 (met OR cross source), with other Gen9
wild locations and ALL fixed/raid tables byte-for-byte unchanged.

Reference parity is an *analysis metric*, not game encounter/RNG proof.
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
BASE_SHAS={
  "wild":"encounter_wild_paldea.pkl",
  "fixed":"encounter_fixed_paldea.pkl",
  "raid_paldea":"encounter_gem_paldea.pkl",
  "raid_kitakami":"encounter_gem_kitakami.pkl",
  "raid_blueberry":"encounter_gem_blueberry.pkl",
}
MODES=(
 "terarium-176-194-unadjusted-only",
 "terarium-176-194-adjusted-only",
 "terarium-176-194-strict-overlap",
 "terarium-176-194-raw-point-levels",
 "terarium-176-194-raw-point-min-only",
 "terarium-176-194-raw-point-max-only",
)
STATUS="ACTUAL_ORIGINAL_SV400_ISOLATED_NATIVE_WILD_LEVEL_AB_REFERENCE_DIAGNOSTICS"

def hashfile(path:Path)->str:
    h=hashlib.sha256()
    with path.open("rb") as stream:
        for chunk in iter(lambda:stream.read(1024*1024),b""):
            h.update(chunk)
    return h.hexdigest().upper()

def import_gen9_auditor(path:Path):
    spec=importlib.util.spec_from_file_location("original_sv_pkhex_binary_decoder",path)
    obj=importlib.util.module_from_spec(spec)
    spec.loader.exec_module(obj)
    return obj

def slot_key(row:dict)->tuple[int,...]:
    return tuple(int(row[k]) for k in SLOTS)

def is_focal(key:tuple[int,...])->bool:
    return key[0] in (176,194) or key[1] in (176,194)

def filtered_total(table:Counter,pred)->int:
    return sum(count for row,count in table.items() if pred(row))

def load_csv(path:Path)->list[dict]:
    with path.open(newline="",encoding="utf-8-sig") as f:
        rows=list(csv.DictReader(f))
    if rows and tuple(rows[0])!=SLOTS:
        raise ValueError("Expected pinned Gen9 wild differential CSV field layout")
    return rows

def mode_count(table:Counter,reference:Counter)->dict:
    matched=sum((table&reference).values())
    only_src=sum((table-reference).values())
    only_ref=sum((reference-table).values())
    return {"native":sum(table.values()),"reference":sum(reference.values()),
            "matched_occurrences":matched,"native_only":only_src,"reference_only":only_ref}

def match_retention(baseline:Counter,variant:Counter,reference:Counter)->dict:
    """Count baseline-matching slot occurrences retained, lost and newly recovered."""
    old=baseline&reference
    new=variant&reference
    retained=old&new
    return {
        "baseline_reference_matches_retained":sum(retained.values()),
        "baseline_reference_matches_lost":sum((old-retained).values()),
        "new_reference_matches_recovered":sum((new-retained).values()),
    }

def verify_build(directory:Path,expected_mode:str,original:dict)->dict:
    report=json.loads((directory/"native-encounter-build.json").read_text("utf-8-sig"))
    if (report.get("status")!="GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES"
        or report.get("collisionBlocker") is not None
        or report.get("originalTrcolEntries")!=223
        or report.get("unverifiedExtraFiles")
        or report.get("levelABMode")!=expected_mode
        or report.get("areaFilterABMode")!="baseline"
        or report.get("crossoverABMode")!="baseline"):
        raise ValueError(f"Not independently SHA-verified original 4.0.0 generation for {expected_mode}")
    mapping={item["name"]:item for item in report["generated"]}
    for kind,name in BASE_SHAS.items():
        if name not in mapping:
            raise ValueError(f"Missing {kind} native table")
        if mapping[name]["sha256"]!=hashfile(directory/name):
            raise ValueError(f"Actual {name} .pkl SHA does not match generation manifest")
        if kind!="wild" or expected_mode=="baseline":
            if mapping[name]["sha256"]!=original["tables"][kind]["native_sha256"]:
                raise ValueError(f"Native {kind} unexpectedly modified in isolated A/B {expected_mode}")
    return report

def compare(baseline:Path,manifest:Path,tolerance:Path,variant_dirs:dict[str,Path],
            auditor_script:Path,output:Path)->dict:
    baseline,manifest,tolerance,output=(
        Path(p).resolve() for p in (baseline,manifest,tolerance,output))
    for root in [baseline,manifest.parent,tolerance]:
        if output==root or output.is_relative_to(root):
            raise ValueError("A/B report cannot modify original native evidence")
    original=json.loads(manifest.read_text("utf-8-sig"))
    if (original.get("status")!="NATIVE_SOURCE_VERIFIED_PKHEX_BINARY_COMPATIBLE_NOT_FULL_LEGALITY_PARITY"
        or original.get("provenance",{}).get("original_source_entries")!=61
        or original.get("provenance",{}).get("original_collision_entries")!=223
        or original.get("pkhex_pinned_commit")!="0660d1e1f4924b8478daec73281bb8071a82ad19"):
        raise ValueError("Invalid source-verified original Gen9 reference manifest")
    verify_build(baseline,"baseline",original)
    decoder=import_gen9_auditor(auditor_script)
    base_rows=decoder.read_wild((baseline/BASE_SHAS["wild"]).read_bytes())
    native=Counter(slot_key(row) for row in base_rows)
    source_only=Counter(slot_key(row) for row in load_csv(tolerance/"T30/comparison/wild_native_only.csv"))
    pkhex_only=Counter(slot_key(row) for row in load_csv(tolerance/"T30/comparison/wild_pkhex_only.csv"))
    if (sum(native.values()),sum(source_only.values()),sum(pkhex_only.values()))!=(29840,3655,676):
        raise ValueError("Original native/pinned reference 30f diff drift")
    if any(native[k]<count for k,count in source_only.items()):
        raise ValueError("A pinned native-only row was not actually generated")
    reference=native-source_only+pkhex_only
    if sum(reference.values())!=26861 or sum((native&reference).values())!=26185:
        raise ValueError("Independent PKHeX 4.0.0 pinned reference multiset no longer valid")
    focus_native=Counter({k:v for k,v in native.items() if is_focal(k)})
    focus_reference=Counter({k:v for k,v in reference.items() if is_focal(k)})
    unaffected_native=Counter({k:v for k,v in native.items() if not is_focal(k)})
    stats=[]
    deltas=[]
    per_location=[]
    for mode in ("baseline",*MODES):
        directory=baseline if mode=="baseline" else variant_dirs[mode].resolve()
        verify_build(directory,mode,original)
        content=(directory/BASE_SHAS["wild"]).read_bytes()
        rows=decoder.read_wild(content)
        current=Counter(slot_key(row) for row in rows)
        outside=Counter({k:v for k,v in current.items() if not is_focal(k)})
        if outside!=unaffected_native:
            raise ValueError(f"Isolated Terarium A/B modified non-target wild locations: {mode}")
        focal=Counter({k:v for k,v in current.items() if is_focal(k)})
        score=mode_count(focal,focus_reference)
        retention=match_retention(focus_native,focal,focus_reference)
        if (retention["new_reference_matches_recovered"]-retention["baseline_reference_matches_lost"]
            != score["matched_occurrences"]-sum((focus_native&focus_reference).values())):
            raise ValueError(f"Terarium A/B matched-template retention does not reconcile for {mode}")
        score.update({
            **retention,
            "baseline_matched_occurrences":sum((focus_native&focus_reference).values()),
            "match_delta":score["matched_occurrences"]-sum((focus_native&focus_reference).values()),
            "mode":mode,
            "wild_sha256":hashfile(directory/BASE_SHAS["wild"]),
            "wild_total_rows":len(rows),
            "wild_target_rows":sum(focal.values()),
            "wild_non_target_unchanged":True,
            "wild_different_occurrences_from_baseline":sum((focal-focus_native).values())
                                                 +sum((focus_native-focal).values()),
            "fixed_and_3_raids_SHA_match_original":True,
            "status":"COMPARED_WITH_PINNED_PKHEX_REFERENCE_NOT_GAME_RNG",
        })
        stats.append(score)
        location_pairs=sorted({(k[0],k[1]) for k in set(focal)|set(focus_native)|set(focus_reference)})
        for location,cross_from in location_pairs:
            before=Counter({k:v for k,v in focus_native.items() if k[0]==location and k[1]==cross_from})
            after=Counter({k:v for k,v in focal.items() if k[0]==location and k[1]==cross_from})
            ref=Counter({k:v for k,v in focus_reference.items() if k[0]==location and k[1]==cross_from})
            per_location.append({
                "mode":mode,"location_id":location,"cross_from_id":cross_from,
                "baseline_matched":sum((before&ref).values()),
                "variant_matched":sum((after&ref).values()),
                "match_delta":sum((after&ref).values())-sum((before&ref).values()),
                **match_retention(before,after,ref),
                "baseline_native_only":sum((before-ref).values()),
                "variant_native_only":sum((after-ref).values()),
                "baseline_reference_only":sum((ref-before).values()),
                "variant_reference_only":sum((ref-after).values()),
            })
        if mode!="baseline":
            for key in sorted(set(focal)|set(focus_native)):
                delta=focal[key]-focus_native[key]
                if delta:
                    deltas.append(dict(zip(SLOTS,key))|{
                        "mode":mode,"native_baseline_count":focus_native[key],
                        "variant_count":focal[key],"delta":delta,
                        "pkhex_pinned_reference_count":focus_reference[key],
                        "flag":"AB_HYPOTHETICAL_NATIVE_OUTPUT_NOT_OFFICIAL_LEGALITY",
                    })
    output.mkdir(parents=True,exist_ok=True)
    with (output/"SV400_Terarium_176_194_AB_By_Location.csv").open(
            "w",newline="",encoding="utf-8-sig") as f:
        fields=list(per_location[0])
        writer=csv.DictWriter(f,fieldnames=fields,lineterminator="\n")
        writer.writeheader()
        writer.writerows(per_location)
    with (output/"SV400_Terarium_176_194_AB_True_Native_Changes.csv").open(
            "w",newline="",encoding="utf-8-sig") as f:
        fields=["mode",*SLOTS,"native_baseline_count","variant_count","delta",
                "pkhex_pinned_reference_count","flag"]
        writer=csv.DictWriter(f,fieldnames=fields,lineterminator="\n")
        writer.writeheader()
        writer.writerows(deltas)
    report={
        "status":STATUS,
        "source":"SHA_VERIFIED_ORIGINAL_SV_4_0_0_M2_61_PLUS_223_TRCOL",
        "reference_commit":original["pkhex_pinned_commit"],
        "baseline_pkl_shas":{k:original["tables"][k]["native_sha256"] for k in BASE_SHAS},
        "baseline_total_wild_rows":sum(native.values()),
        "pinned_reference_total_wild_rows":sum(reference.values()),
        "baseline_full_multiset_match_count":sum((native&reference).values()),
        "focus":"met or cross_from location 176 or 194",
        "reference_parity_comparison":stats,
        "reference_match_retention_by_location":per_location,
        "changed_rows_count":len(deltas),
        "limits":[
            "A/B modes are source-driven experimental branches of pkNX, not automatically correct official PKHeX legality.",
            "Any difference of non-target wild slots or fixed/ordinary raid SHA fails the experiment.",
            "The pinned PKHeX reference is independently reconstructed from previously verified native-only/reference-only 30f CSVs and original source SHA.",
            "A Pokemon produced by actual game logic must still be validated for PID, EC, IVs, shiny and applicable story/runtime flags.",
        ]
    }
    (output/"SV400_Terarium_176_194_Native_AB_vs_PKHeX_Reference.json").write_text(
        json.dumps(report,indent=2,ensure_ascii=False)+"\n","utf-8")
    print(json.dumps({"status":STATUS,"comparison":stats},indent=2,ensure_ascii=False))
    return report

def main():
    p=argparse.ArgumentParser(description=__doc__)
    for field in ("baseline","manifest","tolerance","auditor","output"):
        p.add_argument("--"+field,type=Path,required=True)
    p.add_argument("--variant",action="append",required=True,
                   help="mode=path for all six actual source-generated variants")
    a=p.parse_args()
    variants={}
    for spec in a.variant:
        mode,sep,path=spec.partition("=")
        if not sep or mode in variants:
            raise ValueError("Duplicate/bad native A/B mode=path")
        variants[mode]=Path(path)
    if set(variants)!=set(MODES):
        raise ValueError("Exactly the six original-data native level A/B modes required")
    compare(a.baseline,a.manifest,a.tolerance,variants,a.auditor,a.output)

if __name__=="__main__":
    main()
