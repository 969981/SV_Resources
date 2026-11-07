#!/usr/bin/env python3
"""Source-attested forensics for native SV 4.0.0 Gen9 wild/fixed differences.

Uses actual previously published 30/10/0 source-generated comparison CSVs and
the independently SHA-proven original native fixed .pkl artifact. Emits auditable
candidate causes, NEVER mutates an encounter table or promotes any template
into official PKHeX legality data.
"""
from __future__ import annotations

import argparse
from collections import Counter, defaultdict
import csv
import hashlib
import json
from pathlib import Path
import struct

PIN="0660d1e1f4924b8478daec73281bb8071a82ad19"
SOURCE="ACTUAL_4_0_0_ORIGINAL_SHA_VERIFIED_61_PLUS_223"
WILD_FIELDS=("location_id","cross_from_id","species_national","form_raw",
             "gender_raw","level_min","level_max","time_forbidden_mask","weather_allowed_mask")
FIXED_FIELDS=("species_national","form_raw","level","flawless_iv_count",
              "tera_type_raw","gender_raw","ability_permission_raw",
              "move1","move2","move3","move4",
              "location0","location1","location2","location3")
FIXED_STRUCT=struct.Struct("<HBBBBBBHHHHBBBB")
KEYS_WITHOUT_LEVEL=tuple(x for x in WILD_FIELDS if x not in ("level_min","level_max"))


def sha(blob:bytes)->str:
    return hashlib.sha256(blob).hexdigest().upper()


def load_json(path:Path)->dict:
    return json.loads(path.read_text(encoding="utf-8-sig"))


def csv_rows(path:Path,fields:tuple[str,...])->list[dict[str,str]]:
    with path.open("r",newline="",encoding="utf-8-sig") as fp:
        reader=csv.DictReader(fp)
        if tuple(reader.fieldnames or ())!=fields:
            raise ValueError(f"Unexpected Gen9 CSV shape: {path}")
        return list(reader)


def signature(row:dict[str,str],fields:tuple[str,...])->tuple[str,...]:
    return tuple(row[k] for k in fields)


def pair_level_only(native:list[dict[str,str]], reference:list[dict[str,str]]):
    """One-to-one exact metadata match except two level endpoints.

    The deterministic nearest-endpoint pair is an audit interpretation, not a
    claim that pkNX point-level merging generated this individual reference.
    """
    pool=defaultdict(list)
    for row in native:
        pool[signature(row,KEYS_WITHOUT_LEVEL)].append(row)
    pairs=[]
    remaining=[]
    for reference_row in reference:
        candidates=pool.get(signature(reference_row,KEYS_WITHOUT_LEVEL),[])
        if not candidates:
            remaining.append(reference_row)
            continue
        idx=min(range(len(candidates)),key=lambda i:(
            abs(int(candidates[i]["level_min"])-int(reference_row["level_min"]))+
            abs(int(candidates[i]["level_max"])-int(reference_row["level_max"])),
            int(candidates[i]["level_min"]),int(candidates[i]["level_max"]),i))
        native_row=candidates.pop(idx)
        if native_row["level_min"]==reference_row["level_min"] and native_row["level_max"]==reference_row["level_max"]:
            raise ValueError("Matched fully equal wild entries among disjoint difference CSVs")
        pairs.append({
            **{k:native_row[k] for k in KEYS_WITHOUT_LEVEL},
            "native_level_min":native_row["level_min"],
            "native_level_max":native_row["level_max"],
            "pkhex_level_min":reference_row["level_min"],
            "pkhex_level_max":reference_row["level_max"],
            "delta_min":int(native_row["level_min"])-int(reference_row["level_min"]),
            "delta_max":int(native_row["level_max"])-int(reference_row["level_max"]),
            "evidence":"SAME_ID_FORM_GENDER_LOCATION_CROSS_SOURCE_WEATHER_TIME_DIFFERENT_LEVEL_ONLY",
        })
    return pairs, remaining


def strip_only_location_158(row:dict[str,str])->dict[str,str]:
    """A *counterfactual diagnostic* ONLY. Never writes back to original .pkl."""
    result=dict(row)
    locs=[int(row[f"location{i}"]) for i in range(4)]
    locs=[loc for loc in locs if loc not in (0,158)]
    locs += [0]*(4-len(locs))
    for i,loc in enumerate(locs):
        result[f"location{i}"]=str(loc)
    return result


def fixed_pair_remove158(native:list[dict[str,str]],reference:list[dict[str,str]]):
    pool=defaultdict(list)
    for row in reference:
        pool[signature(row,FIXED_FIELDS)].append(row)
    pairs=[]
    nonmatched=[]
    for row in native:
        adjusted=strip_only_location_158(row)
        candidates=pool.get(signature(adjusted,FIXED_FIELDS),[])
        if not candidates or signature(adjusted,FIXED_FIELDS)==signature(row,FIXED_FIELDS):
            nonmatched.append(row)
            continue
        matching=candidates.pop()
        pairs.append({
            **{key:row[key] for key in FIXED_FIELDS[:11]},
            **{f"native_location{i}":row[f"location{i}"] for i in range(4)},
            **{f"pkhex_location{i}":matching[f"location{i}"] for i in range(4)},
            "evidence":"SAME_FIXED_FIELDS_EXCEPT_158_LOCATION_COUNTERFACTUAL_NOT_GAME_PROOF",
        })
    remaining=[row for q in pool.values() for row in q]
    return pairs,nonmatched,remaining


def fixed_records(data:bytes)->list[dict[str,str]]:
    if not data or len(data)%FIXED_STRUCT.size:
        raise ValueError("Native Gen9 fixed .pkl is not valid 20-byte records")
    return [dict(zip(FIXED_FIELDS,map(str,values)))
            for values in FIXED_STRUCT.iter_unpack(data)]


def multiset(rows:list[dict[str,str]],fields:tuple[str,...])->Counter:
    return Counter(signature(r,fields) for r in rows)


def write_csv(path:Path,rows:list[dict],headers:list[str]):
    with path.open("w",newline="",encoding="utf-8-sig") as stream:
        writer=csv.DictWriter(stream,fieldnames=headers,lineterminator="\n")
        writer.writeheader()
        writer.writerows(rows)


def validate_evidence(tolerance:Path,bridge:Path):
    sweep=load_json(tolerance/"sv-400-collision-tolerance-report.json")
    native=load_json(bridge/"SV400_Native_To_PKHeX_Manifest.json")
    if (sweep.get("status")!="ACTUAL_NATIVE_TOLERANCE_SWEEP_NOT_GAME_CAPTURED"
        or sweep.get("source_version")!="SV 4.0.0"
        or native.get("status")!="NATIVE_SOURCE_VERIFIED_PKHEX_BINARY_COMPATIBLE_NOT_FULL_LEGALITY_PARITY"
        or native.get("pkhex_pinned_commit")!=PIN
        or native.get("provenance",{}).get("status")!="ORIGINAL_4_0_0_SOURCE_61_PLUS_223_SHA_VERIFIED_FROM_MANIFESTS"
        or native["provenance"].get("original_source_entries")!=61
        or native["provenance"].get("original_collision_entries")!=223):
        raise ValueError("Incompatible 4.0.0 original game / pinned PKHeX provenance")
    for key,table in (("wild","encounter_wild_paldea.pkl"),
                      ("fixed","encounter_fixed_paldea.pkl")):
        report=native["tables"][key]
        if (report["native_sha256"]!=sweep["baseline_sha256"][table]
            or report["native_records"]!=sweep["tolerances"]["30"]["tables"][key]["native_records"]
            or report["pkhex_reference_records"]!=sweep["tolerances"]["30"]["tables"][key]["reference_records"]):
            raise ValueError(f"30f source evidence mismatch: {key}")
    return sweep,native


def investigate(tolerance_dir:Path,bridge_dir:Path,out:Path)->dict:
    tolerance_dir=tolerance_dir.resolve()
    bridge_dir=bridge_dir.resolve()
    out=out.resolve()
    for protected in (tolerance_dir,bridge_dir):
        if out==protected or out.is_relative_to(protected) or protected.is_relative_to(out):
            raise ValueError("Cannot write diagnostics into original evidence")
    sweep,meta=validate_evidence(tolerance_dir,bridge_dir)
    folder=tolerance_dir/"T30"/"comparison"
    wild_n=csv_rows(folder/"wild_native_only.csv",WILD_FIELDS)
    wild_r=csv_rows(folder/"wild_pkhex_only.csv",WILD_FIELDS)
    fix_n=csv_rows(folder/"fixed_native_only.csv",FIXED_FIELDS)
    fix_r=csv_rows(folder/"fixed_pkhex_only.csv",FIXED_FIELDS)
    if (len(wild_n),len(wild_r),len(fix_n),len(fix_r))!=(3655,676,203,203):
        raise ValueError("Real pinned reference differential table no longer matches original run")
    wild_level, wild_ref_other=pair_level_only(wild_n,wild_r)
    fix_158,fix_native_other,fix_ref_other=fixed_pair_remove158(fix_n,fix_r)
    if len(wild_level)+len(wild_ref_other)!=len(wild_r):
        raise ValueError("Not all PKHeX-only wild templates accounted for")
    if len(fix_158)+len(fix_ref_other)!=len(fix_r):
        raise ValueError("Not all PKHeX-only fixed templates accounted for")
    fixed_path=bridge_dir/"PKHeX_Source_Overlay"/"PKHeX.Core"/"Resources"/"legality"/"wild"/"Gen9"/"encounter_fixed_paldea.pkl"
    original_bytes=fixed_path.read_bytes()
    if sha(original_bytes)!=meta["tables"]["fixed"]["native_sha256"]:
        raise ValueError("Actual native fixed .pkl mismatches proven original SHA")
    full_fixed=fixed_records(original_bytes)
    if len(full_fixed)!=977:
        raise ValueError("Expected 977 originally generated fixed encounter templates")
    original=multiset(full_fixed,FIXED_FIELDS)
    native_only=multiset(fix_n,FIXED_FIELDS)
    reference_only=multiset(fix_r,FIXED_FIELDS)
    if any(original[key] < count for key,count in native_only.items()):
        raise ValueError("PKHeX comparison claims native-only records not present in original .pkl")
    inferred_reference=original-native_only+reference_only
    if sum(inferred_reference.values())!=977:
        raise ValueError("Cannot reconstruct independent PKHeX fixed reference multiset")
    matched_original=original & inferred_reference
    if sum(matched_original.values())!=meta["tables"]["fixed"]["identical_records"]:
        raise ValueError("Original native-PKHeX template intersection is inconsistent")
    projected=multiset([strip_only_location_158(r) for r in full_fixed],FIXED_FIELDS)
    original_matched_containing_158=sum(
        count for key,count in matched_original.items()
        if "158" in key[-4:])
    no_location_after_projection=sum(
        all(int(strip_only_location_158(r)[f"location{i}"])==0 for i in range(4))
        for r in full_fixed
    )
    projected_matched=sum((projected & inferred_reference).values())
    by_tol={}
    for tol in (30,10,0):
        key=str(tol)
        detail=sweep["tolerances"][key]
        by_tol[key]={
            "wild_native_records":detail["tables"]["wild"]["native_records"],
            "wild_reference_records":detail["tables"]["wild"]["reference_records"],
            "wild_native_only":detail["tables"]["wild"]["native_only"],
            "wild_reference_only":detail["tables"]["wild"]["reference_only"],
            "fixed_native_only":detail["tables"]["fixed"]["native_only"],
            "fixed_reference_only":detail["tables"]["fixed"]["reference_only"],
            "wild_native_only_cross_source_158":detail["location_158"]["wild_native_only_cross_from_158"],
            "wild_native_only_156_from_158":detail["location_158"]["wild_native_only_location_156_cross_from_158"],
            "fixed_native_only_with_158":detail["location_158"]["fixed_native_only_with_location_158"],
        }
    summary={
      "status":"ACTUAL_ORIGINAL_NATIVE_REFERENCE_FORENSIC_TRIAGE_NOT_AN_AUTOMATIC_LEGALITY_PATCH",
      "source":SOURCE,"pkhex_commit":PIN,
      "native_original_source_manifest_sha256":meta["provenance"]["original_source_manifest_sha256"],
      "native_original_collision_manifest_sha256":meta["provenance"]["original_collision_manifest_sha256"],
      "native_fixed_file_sha256":sha(original_bytes),
      "wild":{
        "native_only":len(wild_n),"pkhex_only":len(wild_r),
        "pkhex_only_with_exact_metadata_except_level":len(wild_level),
        "pkhex_only_other_after_level_pairing":len(wild_ref_other),
        "native_only_cross_from_158":sum(r["cross_from_id"]=="158" for r in wild_n),
        "native_only_location_156_cross_from_158":sum(
            r["location_id"]=="156" and r["cross_from_id"]=="158" for r in wild_n),
        "most_frequent_level_endpoint_delta": [
            {"delta_min":a,"delta_max":b,"count":n}
            for (a,b),n in Counter((r["delta_min"],r["delta_max"]) for r in wild_level).most_common(15)],
      },
      "fixed":{
        "native_only":len(fix_n),"pkhex_only":len(fix_r),
        "native_only_with_location_158":sum(
            "158" in [r[f"location{i}"] for i in range(4)] for r in fix_n),
        "native_only_158_removal_would_match_pkhex_only":len(fix_158),
        "native_only_unexplained_by_158_removal":len(fix_native_other),
        "original_native_all_templates_with_158":sum(
            "158" in [r[f"location{i}"] for i in range(4)] for r in full_fixed),
        "original_exactly_matched_templates_with_158":original_matched_containing_158,
        "unsafe_global_remove_158_projected_pkhex_matches":projected_matched,
        "baseline_pkhex_matches":sum(matched_original.values()),
        "unsafe_global_remove_158_empty_location_templates":no_location_after_projection,
      },
      "tolerance_comparison":by_tol,
      "hypotheses_not_verified":[
        {"code":"WILD_LEVEL_RANGE","path":"tools/pkNX/pkNX.WinForms/Dumping/Gen9/Location/LocationStorage.cs",
         "review":["GetCompositePoint areaMin/areaMax clipping","GetEncounters optional AdjustEncLv","Consolidate/Absorb adjacent level overlap"],"status":"CANDIDATE"},
        {"code":"MISTY_158_CROSSOVER","path":"tools/pkNX/pkNX.WinForms/Dumping/Gen9/BoxCollision9.cs",
         "review":["ContainsPoint Y interval uses y-10000 to y+1, not symmetric 3D box","30/10/0 XYZ tests already show global tolerance alone not enough"],"status":"CANDIDATE"},
        {"code":"FIXED_158_WANDER","path":"tools/pkNX/pkNX.WinForms/Dumping/Gen9/Encounter/FixedSymbolDumper9.cs",
         "review":["TryGetBleedArea uses tolerated ContainsPoint","Kitakami filters AreaInfo.AdjustEncLv != 0","distinguish actual initial points from wandered secondary areas"],"status":"CANDIDATE"},
        {"code":"FLAGS_AND_VERSION","path":"tools/pkNX/pkNX.WinForms/Dumping/Gen9/Location/LocationStorage.cs",
         "review":["IsAbleToSpawnAt explicitly assumes flag, enable table and timetable valid","Version considered valid for wireless Union Circle"],"status":"CANDIDATE"},
      ],
      "safety":[
         "Never remove all location 158: many original exactly matched fixed templates include it.",
         "Wild 666 level pairs are not a proof of one specific formula fault; individual PointData evidence is still required.",
         "No actual game runtime RNG, PID, EC, IV or shiny restriction was tested.",
         "No code, .pkl or PKHeX legal resource was modified by this forensics tool.",
      ],
    }
    out.mkdir(parents=True,exist_ok=True)
    write_csv(out/"wild_level_range_pairs.csv",wild_level,[
        *KEYS_WITHOUT_LEVEL,"native_level_min","native_level_max","pkhex_level_min","pkhex_level_max",
        "delta_min","delta_max","evidence"])
    write_csv(out/"wild_remaining_pkhex_only.csv",wild_ref_other,list(WILD_FIELDS))
    write_csv(out/"fixed_158_counterfactual_pairs.csv",fix_158,[
        *FIXED_FIELDS[:11],*(f"native_location{i}" for i in range(4)),
        *(f"pkhex_location{i}" for i in range(4)),"evidence"])
    write_csv(out/"fixed_remaining_native_only.csv",fix_native_other,list(FIXED_FIELDS))
    write_csv(out/"fixed_remaining_pkhex_only.csv",fix_ref_other,list(FIXED_FIELDS))
    (out/"SV400_Native_Encounter_Difference_Root_Cause_Triage.json").write_text(
        json.dumps(summary,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    print(json.dumps({k:summary[k] for k in ("status","wild","fixed")},indent=2,ensure_ascii=False))
    return summary


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--tolerance-dir",type=Path,required=True)
    p.add_argument("--native-bridge-dir",type=Path,required=True)
    p.add_argument("--output",type=Path,required=True)
    args=p.parse_args()
    investigate(args.tolerance_dir,args.native_bridge_dir,args.output)


if __name__=="__main__":
    main()
