#!/usr/bin/env python3
"""Evidence-gated triage of the remaining 115 DLC wild level discrepancies and
the WorldEnd->158 236-variant fixed counterfactual.

Works exclusively on provenance-checked REAL SV 4.0.0 point / fixed research
reports. Never alters native PKHeX .pkl nor elevates apparent reference parity
to a claim about game runtime RNG or actual legal encounters.
"""
from __future__ import annotations
import argparse
from collections import Counter
import csv
import hashlib
import json
import re
from pathlib import Path


IDENTITY=("location_id","cross_from_id","species_national","form_raw",
          "native_level_min","native_level_max","pkhex_level_min","pkhex_level_max")
STATUS="SV400_REAL_SOURCE_115_WILD_236_WORLDEND_DIAGNOSTICS_NOT_GENERATOR_PATCH"


def load(path:Path)->dict:
    return json.loads(path.read_text("utf-8-sig"))


def rows(path:Path)->list[dict[str,str]]:
    with path.open(newline="",encoding="utf-8-sig") as f:
        return list(csv.DictReader(f))


def digest(path:Path)->str:
    sha=hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda:f.read(1024*1024),b""):
            sha.update(chunk)
    return sha.hexdigest().upper()


def key(row:dict)->tuple:
    return tuple(str(row[k]) for k in IDENTITY)


def interval_relation(nlo:int,nhi:int,plo:int,phi:int)->str:
    if not(0<=nlo<=nhi<=100 and 0<=plo<=phi<=100):
        raise ValueError("Out-of-bounds original Gen9 level endpoints")
    if nlo<=plo and phi<=nhi:
        return "REFERENCE_INSIDE_NATIVE"
    if plo<=nlo and nhi<=phi:
        return "NATIVE_INSIDE_REFERENCE"
    if phi<nlo:
        return "REFERENCE_COMPLETELY_BELOW_NATIVE"
    if plo>nhi:
        return "REFERENCE_COMPLETELY_ABOVE_NATIVE"
    return "PARTIAL_OVERLAP"


def parse_original_fixed_area(tablekey:str)->tuple[str,str]:
    """Recognize both real fixed symbol families: su1_ and t_su1_."""
    match=re.fullmatch(r"(t_)?su1_(area\d+)_\d+(_dun)?",tablekey)
    if match is None:
        raise ValueError(f"Unexpected original North Kitakami fixed TableKey: {tablekey}")
    kind=("T_PREFIX" if match.group(1) else
          "DUN_SUFFIX" if match.group(3) else "NORMAL")
    return match.group(2),kind


def write_csv(path:Path,table:list[dict]):
    if not table:
        raise ValueError("Refusing empty original evidence report")
    with path.open("w",newline="",encoding="utf-8-sig") as f:
        writer=csv.DictWriter(f,fieldnames=list(table[0]),lineterminator="\n")
        writer.writeheader()
        writer.writerows(table)


def analyze(wild_115:Path,wild_666:Path,wild_report:Path,fixed_236:Path,
            fixed_report:Path,output:Path)->dict:
    wild_115,wild_666,wild_report,fixed_236,fixed_report,output=map(
        lambda p:Path(p).resolve(),(wild_115,wild_666,wild_report,fixed_236,fixed_report,output))
    for p in (wild_115,wild_666,wild_report,fixed_236,fixed_report):
        if not p.is_file():
            raise FileNotFoundError(f"Original source research artifact missing: {p}")
        if output==p.parent or output.is_relative_to(p.parent):
            raise ValueError("Output cannot modify the original source evidence")
    raw_wild=rows(wild_115)
    all_wild=rows(wild_666)
    raw_fixed=rows(fixed_236)
    wild_status=load(wild_report)
    fixed_status=load(fixed_report)
    if (wild_status.get("status")!="ACTUAL_ORIGINAL_666_GEN9_PREMERGE_LEVEL_RESEARCH_NOT_RNG_PROOF"
        or wild_status.get("wild_cases")!=666
        or wild_status.get("distinct_template_keys")!=606
        or wild_status.get("pkhex_reference_interval_present_premerge")!=551
        or wild_status.get("reference_interval_not_present_premerge")!=115
        or wild_status.get("native_interval_present_postmerge")!=666
        or fixed_status.get("status")!="REAL_ORIGINAL_SOURCE_WORLDEND_158_FIXED_COUNTERFACTUAL_NOT_GAME_LEGALITY"
        or fixed_status.get("original_fixed_templates")!=977
        or fixed_status.get("original_matching_pinned_pkhex")!=774
        or fixed_status.get("counterfactual_matching_pinned_pkhex")!=917
        or fixed_status.get("changed_original_template_occurrences")!=236
        or fixed_status.get("reference_matches_lost")!=47
        or fixed_status.get("reference_matches_gained")!=190):
        raise ValueError("Not the independently verified original 4.0.0 PKHeX comparison")
    if len(raw_wild)!=115 or len(all_wild)!=666 or len(raw_fixed)!=236:
        raise ValueError("Original source datasets have unexpected row counts")
    all_key_count=Counter(map(key,all_wild))
    selected_count=Counter(map(key,raw_wild))
    if any(count>all_key_count[k] for k,count in selected_count.items()):
        raise ValueError("115 exceptions cannot be proven as an exact subset of 666 original cases")
    if any(str(row["reference_range_present_before"])!="0" for row in raw_wild):
        raise ValueError("Exception queue contains reference intervals present before merging")
    classification=Counter()
    source_files=Counter()
    location_counts=Counter()
    minior=0
    triage=[]
    for number,row in enumerate(raw_wild,1):
        old=(int(row["native_level_min"]),int(row["native_level_max"]))
        ref=(int(row["pkhex_level_min"]),int(row["pkhex_level_max"]))
        mode=interval_relation(*old,*ref)
        source=Path(row["original_point_files"]).name
        if source not in ("encount_data_su1.bin","encount_data_su2.bin"):
            raise ValueError(f"Unproven DLC origin: {source}")
        source_files[source]+=1
        classification[mode]+=1
        location_counts[str(row["location_id"])]+=1
        species=int(row["species_national"])
        minior+=species==774
        source_points=json.loads(row["sample_point_ids_json"])
        if not source_points or len(source_points)>3:
            raise ValueError("Missing original PointData index sample")
        for point in source_points:
            if Path(point["source"]).name!=source or not isinstance(point["index"],int):
                raise ValueError("Original PointData point index or source filename mismatch")
        priority="P1_BLUEBERRY_SHARED_AREA" if source=="encount_data_su2.bin" and row["location_id"] in ("176","194") \
            else "P1_MINIOR_FORM_AND_LVL" if species==774 \
            else "P2_KITAKAMI_AREA" if source=="encount_data_su1.bin" else "P2_OTHER_DLC"
        triage.append({
            "case":number,"priority":priority,"source_point_file":source,
            "source_region":"Blueberry" if source=="encount_data_su2.bin" else "Kitakami",
            "location_id":row["location_id"],"cross_from_id":row["cross_from_id"],
            "species_national":species,"form_raw":row["form_raw"],
            "native_level_min":old[0],"native_level_max":old[1],
            "pkhex_level_min":ref[0],"pkhex_level_max":ref[1],
            "level_relation":mode,"original_point_count":int(row["original_point_count"]),
            "premerge_range_count":int(row["before_range_count"]),
            "postmerge_range_count":int(row["after_range_count"]),
            "first_three_real_point_keys_json":json.dumps(source_points,separators=(",",":"),ensure_ascii=False),
            "premerge_ranges":row["before_ranges_json"],
            "postmerge_ranges":row["after_ranges_json"],
            "evidence":"REAL_ORIGINAL_POINTDATA_CANDIDATES_NOT_SINGLE_CAUSAL_SOURCE",
        })
    if (source_files!=Counter({"encount_data_su1.bin":22,"encount_data_su2.bin":93})
        or classification!=Counter({"REFERENCE_INSIDE_NATIVE":58,
                                    "NATIVE_INSIDE_REFERENCE":54,
                                    "REFERENCE_COMPLETELY_BELOW_NATIVE":3})
        or location_counts["176"]+location_counts["194"]!=78
        or minior!=35):
        raise ValueError("Original 115 DLC discrepancy pattern changed unexpectedly")

    fixed_types=Counter()
    affected_areas=Counter()
    source_classes=Counter()
    exclusive_source_classes=Counter()
    fixed_split=[]
    gained=[]
    lost=[]
    source_symbols=Counter()
    for i,row in enumerate(raw_fixed,1):
        origin,variant=(int(row["original_reference_match"]),
                        int(row["hypothetical_reference_match"]))
        if (origin,variant) not in ((0,1),(1,0),(1,1),(0,0)):
            raise ValueError("Invalid source event reference match outcome")
        symbols=json.loads(row["source_symbols_json"])
        if not symbols or any(len(x)!=3 for x in symbols):
            raise ValueError("WorldEnd change lacks actual FixedSymbol.TableKey evidence")
        parsed=[parse_original_fixed_area(str(item[1])) for item in symbols]
        prefixes=sorted({area for area,cls in parsed})
        classes=sorted({cls for area,cls in parsed})
        typ="NATIVE_ONLY_TO_MATCHED" if (origin,variant)==(0,1) else (
            "MATCHED_TO_REFERENCE_LOSS" if (origin,variant)==(1,0) else
            "ROW_MATCHED_BOTH_MULTIPLICITY_AMBIGUOUS" if (origin,variant)==(1,1) else
            "UNMATCHED_BOTH")
        fixed_types[typ]+=1
        exclusive_class=("DUN_SUFFIX" if "DUN_SUFFIX" in classes else
                         "T_PREFIX" if "T_PREFIX" in classes else "NORMAL")
        exclusive_source_classes[(typ,exclusive_class)]+=1
        for cls in classes:
            source_classes[(typ,cls)]+=1
        for area in prefixes:
            affected_areas[(typ,area)]+=1
        for sym in symbols:
            source_symbols[(typ,str(sym[1]))]+=1
        obj={
            "case":i,"source_group":typ,
            "species_national":row["species_national"],"form_raw":row["form_raw"],
            "level":row["level"],"area_keys":";".join(prefixes),
            "tablekey_prefix_classes":";".join(classes),
            "exclusive_source_class":exclusive_class,
            "original_locations":row["old_locations"],
            "hypothetical_locations":row["hypothetical_locations"],
            "source_fixed_symbol_keys_json":row["source_symbols_json"],
            "row_level_reference_match_before":origin,
            "row_level_reference_match_after":variant,
            "warning":"ROW_BOOLEAN_IS_NOT_ONE_TO_ONE_MULTISET_MATCH",
        }
        fixed_split.append(obj)
        if typ=="MATCHED_TO_REFERENCE_LOSS": lost.append(obj)
        if typ=="NATIVE_ONLY_TO_MATCHED": gained.append(obj)
    if fixed_types!=Counter({
        "NATIVE_ONLY_TO_MATCHED":189,
        "MATCHED_TO_REFERENCE_LOSS":46,
        "ROW_MATCHED_BOTH_MULTIPLICITY_AMBIGUOUS":1,
    }):
        raise ValueError("Unexpected WorldEnd 236 source event row outcome groups")
    expected_exclusive=Counter({
        ("NATIVE_ONLY_TO_MATCHED","NORMAL"):147,
        ("NATIVE_ONLY_TO_MATCHED","T_PREFIX"):28,
        ("NATIVE_ONLY_TO_MATCHED","DUN_SUFFIX"):14,
        ("MATCHED_TO_REFERENCE_LOSS","NORMAL"):38,
        ("MATCHED_TO_REFERENCE_LOSS","T_PREFIX"):8,
        ("ROW_MATCHED_BOTH_MULTIPLICITY_AMBIGUOUS","NORMAL"):1,
    })
    if exclusive_source_classes!=expected_exclusive:
        raise ValueError(f"Exclusive original fixed source-key classification drifted: {exclusive_source_classes}")

    output.mkdir(parents=True,exist_ok=True)
    write_csv(output/"SV400_115_DLC_Level_Relation_Source_Review.csv",triage)
    write_csv(output/"SV400_236_Worldend_158_Fixed_Source_Area_Grouped.csv",fixed_split)
    write_csv(output/"SV400_46_RowLabeled_Worldend_158_Reference_Regressions.csv",lost)
    write_csv(output/"SV400_189_RowLabeled_Worldend_158_Reference_Improvements.csv",gained)
    report={
        "status":STATUS,
        "validation":"REAL_SV_4_0_0_ORIGINAL_POINTDATA_AND_FIXED_SYMBOL_TABLEKEY_READONLY",
        "provenance":{
            "wild_level_audit":wild_status["status"],
            "fixed_worldend_reference":fixed_status["status"],
            "input_sha256":{k:digest(v) for k,v in (
                ("115_dlc_wild",wild_115),("666_all_wild",wild_666),
                ("wild_verified_summary",wild_report),
                ("236_worldend_fixed",fixed_236),
                ("fixed_verified_summary",fixed_report))},
        },
        "wild":{
            "cases":len(triage),"su1_kitakami":source_files["encount_data_su1.bin"],
            "su2_blueberry":source_files["encount_data_su2.bin"],
            "location_176_plus_194":location_counts["176"]+location_counts["194"],
            "species_774_minior":minior,
            "reference_within_native":classification["REFERENCE_INSIDE_NATIVE"],
            "native_within_reference":classification["NATIVE_INSIDE_REFERENCE"],
            "reference_completely_below_native":classification["REFERENCE_COMPLETELY_BELOW_NATIVE"],
            "top_capture_locations":location_counts.most_common(12),
        },
        "fixed":{
            "cases":len(fixed_split),"row_boolean_gained":len(gained),
            "row_boolean_lost":len(lost),
            "row_boolean_matched_on_both_sides":fixed_types["ROW_MATCHED_BOTH_MULTIPLICITY_AMBIGUOUS"],
            "true_multiset_reference_gained":fixed_status["reference_matches_gained"],
            "true_multiset_reference_lost":fixed_status["reference_matches_lost"],
            "baseline_matches":fixed_status["original_matching_pinned_pkhex"],
            "whatif_matches":fixed_status["counterfactual_matching_pinned_pkhex"],
            "exclusive_key_prefix_groups":[
                {"row_outcome":typ,"prefix":cls,"count":count}
                for (typ,cls),count in exclusive_source_classes.most_common()],
            "key_prefix_groups_nonexclusive":[
                {"row_outcome":typ,"prefix":cls,"count":count}
                for (typ,cls),count in source_classes.most_common()],
            "most_common_loss_area_keys":[
                {"area_key":area,"count":count}
                for (typ,area),count in affected_areas.most_common()
                if typ=="MATCHED_TO_REFERENCE_LOSS"
            ][:20],
        },
        "limits":[
            "115 is an exhaustive subset of 666 already validated PointData candidate cases; individual candidate points are not confirmed as unique causes.",
            "WorldEnd 236 row labels are NOT a one-to-one reference alignment; row labels show 189 gains/46 losses/1 both but the independently computed multiset counts are 190 gains/47 losses.",
            "Some rows have source symbols in multiple key families. exclusive_key_prefix_groups prioritizes DUN_SUFFIX over T_PREFIX over NORMAL, while key_prefix_groups_nonexclusive may overlap.",
            "This report cannot infer which 47 original encounters should be kept using only source TableKeys and PKHeX reference consistency.",
            "Original game story flags, original AreaInfo.Tag/Type, per-TRCOL-body provenance, and in-game RNG were not verified.",
            "DO NOT change official PKHeX legality resources or native .pkl based on these read-only classifications.",
        ],
    }
    (output/"SV400_115_and_Worldend_46_Area_Diagnostic_Manifest.json").write_text(
        json.dumps(report,ensure_ascii=False,indent=2)+"\n","utf-8")
    print(json.dumps(report,ensure_ascii=False,indent=2))
    return report


def main():
    p=argparse.ArgumentParser(description=__doc__)
    for arg in ("wild-115","wild-666","wild-report","fixed-236","fixed-report","output"):
        p.add_argument("--"+arg,type=Path,required=True)
    a=p.parse_args()
    analyze(a.wild_115,a.wild_666,a.wild_report,a.fixed_236,a.fixed_report,a.output)


if __name__=="__main__":
    main()
