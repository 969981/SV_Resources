#!/usr/bin/env python3
"""Quantify real 4.0.0 Gen9 native PointData level merging without modifying PKHeX.

Input MUST be the 666-case 61+223 SHA-authenticated source-trace CSV and its
strict source-verification JSON; never infer that native or pinned PKHeX is
universally correct merely because one premerge interval matches the reference.
"""
from __future__ import annotations
import argparse
from collections import Counter
import csv
import hashlib
import json
from pathlib import Path
import sys

def sha(path:Path)->str:
    return hashlib.sha256(path.read_bytes()).hexdigest().upper()

def classify(row:dict)->dict:
    original=json.loads(row["original_point_sources_json"])
    before=[tuple(map(int,r)) for r in json.loads(row["preconsolidation_level_ranges_json"])]
    after=[tuple(map(int,r)) for r in json.loads(row["postconsolidation_level_ranges_json"])]
    if int(row["candidate_point_count"])!=len(original) or not original:
        raise ValueError("PointData list length missing or inconsistent")
    if not before or not after:
        raise ValueError("Expected both before and after consolidation observations")
    ref=(int(row["pkhex_level_min"]),int(row["pkhex_level_max"]))
    native=(int(row["native_level_min"]),int(row["native_level_max"]))
    if native not in after:
        raise ValueError("Native serialized level not present in post-consolidation trace")
    if not all(len(v)==2 and 0<=v[0]<=v[1]<=100 for v in before+after):
        raise ValueError("Impossible source level range")
    paths=sorted({str(source[0]) for source in original})
    if not all("encount_data_" in p and p.endswith(".bin") for p in paths):
        raise ValueError("PointData provenance must originate from original source files")
    return {
        "location_id":row["location_id"],
        "cross_from_id":row["cross_from_id"],
        "species_national":row["species_national"],
        "form_raw":row["form_raw"],
        "native_level_min":native[0],
        "native_level_max":native[1],
        "pkhex_level_min":ref[0],
        "pkhex_level_max":ref[1],
        "delta_min":native[0]-ref[0],
        "delta_max":native[1]-ref[1],
        "original_point_count":len(original),
        "before_range_count":len(before),
        "after_range_count":len(after),
        "reference_range_present_before":int(ref in before),
        "native_range_present_after":int(native in after),
        "had_multiple_before_ranges":int(len(before)>1),
        "consolidation_reduced_range_count":int(len(before)>len(after)),
        "reference_before_and_native_after":int(ref in before and native in after),
        "original_point_files":";".join(paths),
        "sample_point_ids_json":json.dumps(
            [{"source":p[0],"index":p[1],"x":p[2],"y":p[3],"z":p[4]}
             for p in original[:3]],separators=(",",":"),ensure_ascii=False),
        "before_ranges_json":json.dumps(before,separators=(",",":")),
        "after_ranges_json":json.dumps(after,separators=(",",":")),
        "interpretation":"PREMERGE_MATCH_IS_NOT_PROOF_THE_REFERENCE_IS_GAME_CORRECT",
    }

def build(source:Path,verified:Path,out:Path)->dict:
    source,verified,out=map(Path.resolve,(source,verified,out))
    if not source.is_file() or not verified.is_file():
        raise FileNotFoundError("Verified source-trace CSV and matching validation JSON required")
    if out==source.parent or out==verified.parent or out.is_relative_to(source.parent) or out.is_relative_to(verified.parent):
        raise ValueError("Report output must be outside input directory")
    evidence=json.loads(verified.read_text("utf-8-sig"))
    if (evidence.get("status")!="ORIGINAL_NATIVE_30F_POINT_PROVENANCE_CORRELATED_NOT_GAME_RNG_VALIDATED"
        or evidence.get("wild_cases")!=666 or evidence.get("wild_exact_final_serializations")!=666
        or evidence.get("wild_cases_with_candidate_original_points")!=666
        or evidence.get("wild_distinct_serialized_keys")!=606
        or evidence.get("fixed_with_original_tablekey_link")!=189
        or len(evidence.get("original_native_sha_five_tables",{}))!=5):
        raise ValueError("Not full 666+189 originally verified Gen9 source trace")
    out.mkdir(parents=True,exist_ok=True)
    summary=Counter()
    dirs=Counter()
    histogram=Counter()
    rows=[]
    with source.open(newline="",encoding="utf-8-sig") as fp:
        csv.field_size_limit(min(sys.maxsize,2147483647))
        for row in csv.DictReader(fp):
            result=classify(row)
            rows.append(result)
            for k in ("reference_range_present_before","native_range_present_after",
                      "had_multiple_before_ranges","consolidation_reduced_range_count",
                      "reference_before_and_native_after"):
                summary[k]+=result[k]
            histogram[(result["delta_min"],result["delta_max"])]+=1
            for name in result["original_point_files"].split(";"):
                dirs[Path(name).name]+=1
    if len(rows)!=666 or summary["native_range_present_after"]!=666:
        raise ValueError("Incomplete source trace rows")
    export=out/"SV400_666_Premerge_Level_Differences_Compact.csv"
    unresolved=[r for r in rows if not r["reference_range_present_before"]]
    if len(unresolved)!=115:
        raise ValueError(f"Expected 115 source-verified unresolved premerge intervals, got {len(unresolved)}")
    for path,items in ((export,rows),
                       (out/"SV400_115_Reference_Level_Not_Present_Premerge.csv",unresolved)):
        with path.open("w",newline="",encoding="utf-8-sig") as fp:
            writer=csv.DictWriter(fp,fieldnames=list(rows[0]),lineterminator="\n")
            writer.writeheader()
            writer.writerows(items)
    unresolved_files=Counter(name for r in unresolved for name in r["original_point_files"].split(";"))
    unresolved_species=Counter(r["species_national"] for r in unresolved)
    result={
        "status":"ACTUAL_ORIGINAL_666_GEN9_PREMERGE_LEVEL_RESEARCH_NOT_RNG_PROOF",
        "source_sha256":sha(source),
        "validation_sha256":sha(verified),
        "source_provenance_status":evidence["status"],
        "wild_cases":len(rows),
        "distinct_template_keys":evidence["wild_distinct_serialized_keys"],
        "pkhex_reference_interval_present_premerge":summary["reference_range_present_before"],
        "reference_interval_not_present_premerge":len(unresolved),
        "unresolved_by_original_point_file":dict(sorted(
            (Path(k).name,v) for k,v in unresolved_files.items())),
        "most_common_unresolved_species":[
            {"national_species":species,"count":count}
            for species,count in unresolved_species.most_common(20)],
        "multiple_intervals_premerge":summary["had_multiple_before_ranges"],
        "fewer_intervals_after_merge":summary["consolidation_reduced_range_count"],
        "native_interval_present_postmerge":summary["native_range_present_after"],
        "source_file_presence_by_case":dict(sorted(dirs.items())),
        "most_common_native_minus_pkhex_level_deltas":[
            {"min":low,"max":high,"count":count}
            for (low,high),count in histogram.most_common(30)],
        "interpretation":[
            "551 matching premerge reference level intervals would be compatible with overly broad merging, not proof of a specific bug.",
            "115 unmatched premerge reference intervals are a separately prioritized discrepancy queue; they need native PointData level, area and flags verification.",
            "Some differences may arise from flags, area weather, story state, version and PointData inclusion criteria.",
            "Do not disable all range merging or edit official PKHeX legality tables without original-game evidence.",
        ],
    }
    (out/"SV400_666_Gen9_Level_Merge_Audit.json").write_text(
        json.dumps(result,indent=2,ensure_ascii=False)+"\n","utf-8")
    print(json.dumps(result,ensure_ascii=False,indent=2))
    return result

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--source",type=Path,required=True)
    p.add_argument("--validation-json",type=Path,required=True)
    p.add_argument("--output",type=Path,required=True)
    x=p.parse_args()
    build(x.source,x.validation_json,x.output)

if __name__=="__main__":
    main()
