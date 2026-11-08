#!/usr/bin/env python3
"""Independent original SV 4.0.0 DLC PointData-level formula A/B on traced events.

A = actual pkNX AreaInfo-clipped PointData level.
B = retain raw PointData level (counterfactual).
Controls = only unadjusted or adjusted candidates.
This is a SAMPLE-BASED formula replay (up to 80 traced criteria per case);
it NEVER claims to be a regenerated full .pkl encounter database.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import io
import json
from pathlib import Path
from collections import Counter, defaultdict
import sys

KEY=("location_id","cross_from_id","species_national","form_raw",
     "native_level_min","native_level_max","pkhex_level_min","pkhex_level_max")
STATUS="ORIGINAL_SV400_176_194_POINT_CRITERIA_LEVEL_FORMULA_AB_NOT_FULL_PKL_RERUN"

def hashfile(path:Path)->str:
    h=hashlib.sha256()
    with path.open("rb") as stream:
        for chunk in iter(lambda:stream.read(1024*1024),b""):
            h.update(chunk)
    return h.hexdigest().upper()

def rows(path:Path):
    csv.field_size_limit(min(sys.maxsize,2147483647))
    with path.open(newline="",encoding="utf-8-sig") as stream:
        yield from csv.DictReader(stream)

def identity(row):
    return tuple(str(row[k]) for k in KEY)

def recompute(ev:dict,raw_min:bool=False,raw_max:bool=False)->tuple[int,int]:
    lo=ev["rawPointMin"] if raw_min else ev["clippedPointMin"]
    hi=ev["rawPointMax"] if raw_max else ev["clippedPointMax"]
    shift=int(ev["appliedBoost"])
    low=int(max(lo,ev["criteriaMinLevel"])+shift)
    high=int(min(hi,ev["criteriaMaxLevel"])+shift)
    # Source GetNew clamps max >100, while GetBand does not.
    if high>100 and not ev["band"]:
        high=100
    return low,high

def evaluate(linked:Path,validation:Path,remaining:Path,review:Path,out:Path)->dict:
    linked,validation,remaining,review,out=map(
        lambda p:Path(p).resolve(),(linked,validation,remaining,review,out))
    for p in (linked,validation,remaining,review):
        if not p.is_file():
            raise FileNotFoundError(f"Original source-attested asset missing: {p}")
        if out==p.parent or out.is_relative_to(p.parent):
            raise ValueError("Refuse to write into original source evidence")
    evidence=json.loads(validation.read_text("utf-8-sig"))
    review_status=json.loads(review.read_text("utf-8-sig"))
    if (evidence.get("status")!="ORIGINAL_NATIVE_30F_POINT_PROVENANCE_CORRELATED_NOT_GAME_RNG_VALIDATED"
        or evidence.get("wild_cases")!=666 or evidence.get("wild_exact_final_serializations")!=666
        or evidence.get("wild_cases_with_candidate_original_points")!=666
        or evidence.get("fixed_with_original_tablekey_link")!=189
        or len(evidence.get("original_native_sha_five_tables",{}))!=5
        or review_status.get("status")!="SV400_REAL_SOURCE_115_WILD_236_WORLDEND_DIAGNOSTICS_NOT_GENERATOR_PATCH"
        or review_status.get("wild",{}).get("cases")!=115
        or review_status.get("wild",{}).get("location_176_plus_194")!=78
        # The manifest's "115_dlc_wild" is the INPUT compact-level CSV;
        # the 115-case review CSV is an enriched OUTPUT with its own SHA.
        # Pin both authentic master artifacts, never compare different layers.
        or hashfile(remaining)!="499DB0E4BD93C0A34E3C4BCBFACB889DF5C8EB7807E2EAA6866ABBB9F19971CF"
        or review_status["provenance"]["input_sha256"]["115_dlc_wild"]!="B48027923F34FAE2E7736031EEDE11C3FEE63B1AAF903BA9B8BE2BC006C46C33"
        or hashfile(review)!="3FE77945608ABC6B7D152646022B65267022B0B236B31F82EA9008E9E1176C4B"):
        raise ValueError("Not the original SHA-verified SV 4.0.0 666/115 linked source evidence")

    remaining_rows=list(rows(remaining))
    if len(remaining_rows)!=115:
        raise ValueError("Not 115 unique original case occurrences")
    requested=Counter(identity(r) for r in remaining_rows)
    linked_by_identity=defaultdict(list)
    total_linked=0
    for row in rows(linked):
        total_linked+=1
        key=identity(row)
        if key in requested:
            linked_by_identity[key].append(row)
    if total_linked!=666:
        raise ValueError("Trace is not original 666-case linked source list")
    for k,count in requested.items():
        if len(linked_by_identity[k])<count:
            raise ValueError("Some 115 original rows not in source-complete 666 dataset")

    output=[]
    stats=defaultdict(Counter)
    locus_stats=defaultdict(Counter)
    for target in remaining_rows:
        key=identity(target)
        actual=linked_by_identity[key].pop(0)
        candidate=json.loads(actual["point_criteria_json"])
        if len(candidate)>80:
            raise ValueError("Original trace joins are only expected to retain <=80 candidates")
        focus=target["location_id"] in ("176","194")
        category="TARGET_176_194" if focus else "OTHER_DLC_CONTROL"
        different=0
        raw_min_different=0
        raw_max_different=0
        boost_count=0
        baseline_mismatch=0
        outside=0
        clipping_bounds=Counter()
        criteria_ranges=Counter()
        for ev in candidate:
            low,high=recompute(ev)
            min_low,min_high=recompute(ev,raw_min=True)
            max_low,max_high=recompute(ev,raw_max=True)
            raw_low,raw_high=recompute(ev,raw_min=True,raw_max=True)
            if (low,high)!=(int(ev["minLevel"]),int(ev["maxLevel"])):
                baseline_mismatch+=1
            raw_min_different += (low,high)!=(min_low,min_high)
            raw_max_different += (low,high)!=(max_low,max_high)
            if (low,high)!=(raw_low,raw_high):
                different+=1
            boost_count+=int(ev["appliedBoost"])!=0
            clipping_bounds[(ev["areaLevelMin"],ev["areaLevelMax"])]+=1
            criteria_ranges[(ev["criteriaMinLevel"],ev["criteriaMaxLevel"])]+=1
            if focus and (ev["areaAdjust"]!=0 or ev["appliedBoost"]!=0):
                outside+=1
        if baseline_mismatch:
            raise ValueError("Exact pkNX GetNew/GetBand level formula failed to reproduce traced original levels")
        if focus and outside:
            raise ValueError("176/194 focus unexpectedly has nonzero AdjustEncLv in original sample")
        if focus and actual["candidate_point_count"]=="0":
            raise ValueError("Original source proof lacks PointData candidates")
        stats[category]["cases"]+=1
        stats[category]["candidate_criteria_samples"]+=len(candidate)
        stats[category]["raw_point_min_range_changes"]+=raw_min_different
        stats[category]["raw_point_max_range_changes"]+=raw_max_different
        stats[category]["raw_point_range_changes"]+=different
        stats[category]["cases_with_raw_point_min_range_changes"]+=raw_min_different>0
        stats[category]["cases_with_raw_point_max_range_changes"]+=raw_max_different>0
        stats[category]["cases_with_raw_point_range_changes"]+=different>0
        stats[category]["nonzero_applied_boost_samples"]+=boost_count
        stats[category]["cases_with_nonzero_boost_samples"]+=boost_count>0
        stats[category]["cases_at_80_sample_limit"]+=len(candidate)==80
        locus_stats[target["location_id"]]["case_count"]+=1
        locus_stats[target["location_id"]]["sample_count"]+=len(candidate)
        locus_stats[target["location_id"]]["raw_range_change_count"]+=different
        output.append({
            "case":target["case"],"category":category,
            "location_id":target["location_id"],"cross_from_id":target["cross_from_id"],
            "species_national":target["species_national"],"form_raw":target["form_raw"],
            "native_min":target["native_level_min"],"native_max":target["native_level_max"],
            "reference_min":target["pkhex_level_min"],"reference_max":target["pkhex_level_max"],
            "baseline_clipped_recomputed_exact":baseline_mismatch==0,
            "criteria_sample_count":len(candidate),"criteria_sample_limit":80,
            "nonzero_boost_candidates":boost_count,
            "raw_point_min_changed_candidates":raw_min_different,
            "raw_point_max_changed_candidates":raw_max_different,
            "raw_point_range_changed_candidates":different,
            "raw_point_range_changes_this_case":bool(different),
            "source_area_bounds_sample_json":json.dumps(
                [{"min":a,"max":b,"samples":n} for (a,b),n in clipping_bounds.most_common(15)],
                ensure_ascii=False,separators=(",",":")),
            "criterion_level_range_sample_json":json.dumps(
                [{"min":a,"max":b,"samples":n} for (a,b),n in criteria_ranges.most_common(15)],
                ensure_ascii=False,separators=(",",":")),
            "source_point_file":target["source_point_file"],
            "source_point_candidates":target["original_point_count"],
            "confidence":"SOURCE_FORMULA_SAMPLE_NOT_COMPLETE_GEN9_ENCOUNTER_REBUILD",
        })
    assert len(output)==115
    focal=stats["TARGET_176_194"]
    control=stats["OTHER_DLC_CONTROL"]
    if (focal["cases"],focal["candidate_criteria_samples"],focal["raw_point_range_changes"],
        focal["cases_with_raw_point_range_changes"],focal["nonzero_applied_boost_samples"])!=(78,6003,3227,74,0):
        raise ValueError(f"Actual source 176/194 level experiment unexpected: {dict(focal)}")
    if (control["cases"],control["candidate_criteria_samples"],control["nonzero_applied_boost_samples"],
        control["cases_with_nonzero_boost_samples"])!=(37,2402,279,9):
        raise ValueError(f"Actual other DLC source control unexpected: {dict(control)}")

    out.mkdir(parents=True,exist_ok=True)
    with (out/"SV400_115_Sourced_PointData_Level_Formula_AB.csv").open("w",newline="",encoding="utf-8-sig") as f:
        w=csv.DictWriter(f,fieldnames=list(output[0]),lineterminator="\n")
        w.writeheader()
        w.writerows(output)
    summary={
        "status":STATUS,
        "provenance":{
            "source_trace_status":evidence["status"],
            "source_trace_native_five_pkl_sha":evidence["original_native_sha_five_tables"],
            "linked_666_csv_sha256":hashfile(linked),
            "linked_validation_sha256":hashfile(validation),
            "remaining_115_sha256":hashfile(remaining),
            "review_manifest_sha256":hashfile(review)},
        "focus":dict(focal),
        "non_focus_control":dict(control),
        "by_location":{key:dict(v) for key,v in sorted(locus_stats.items())},
        "a_b_policy":[
            {"variant":"A_CLIPPED","description":"Existing pkNX Math.Max(point.min,area.min), Math.Min(point.max,area.max) then criteria intersection"},
            {"variant":"B_RAW_POINT_MIN_ONLY","description":"Retain raw PointData minimum while keeping the original AreaInfo maximum clip"},
            {"variant":"B_RAW_POINT_MAX_ONLY","description":"Retain raw PointData maximum while keeping the original AreaInfo minimum clip"},
            {"variant":"B_RAW_POINT_BOTH","description":"Counterfactual no AreaInfo bound clipping, same candidate criteria and boost"},
            {"variant":"NEGATIVE_ADJUST_CONTROL","description":"No nonzero AdjustEncLv found in retained 176/194 criteria samples"},
        ],
        "limits":[
            "Each source-linked wild case stores first <=80 original criteria records, not all possible spawn point rows.",
            "This script tests candidate-level formulas ONLY; it does not run BinLinker serialization, weather crossover or full consolidation.",
            "On-disk PKHeX and native original .pkl, source TRSCN/TRCOL and official legality are never edited.",
        ],
    }
    (out/"SV400_176_194_Original_Source_Level_Formula_AB.json").write_text(
        json.dumps(summary,indent=2,ensure_ascii=False)+"\n","utf-8")
    print(json.dumps({k:summary[k] for k in ("status","focus","non_focus_control")},
                     ensure_ascii=False,indent=2))
    return summary


def main():
    p=argparse.ArgumentParser(description=__doc__)
    for k in ("linked","validation","remaining","review","output"):
        p.add_argument("--"+k,type=Path,required=True)
    a=p.parse_args()
    evaluate(a.linked,a.validation,a.remaining,a.review,a.output)

if __name__=="__main__":
    main()
