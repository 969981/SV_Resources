#!/usr/bin/env python3
"""Audit exact original SV4.0.0 Terarium 178/180/192 pre/post level merges.

Consumes only SHA-verified 666-case original PointData provenance and original
build validation; PKHeX reference intervals are used for DIFFERENCE DIAGNOSIS
ONLY, never to generate game encounters or alter default .pkl data.
"""
from __future__ import annotations
import argparse, csv, hashlib, json, sys
from collections import Counter
from pathlib import Path

SOURCE_SHA="DF89744F7C484F7EBA0C1BB395D5E2B91287DCBD85EB3E4FDF01540F3E0777CA"
NATIVE_WILD_SHA="01F78F4F8DE93176642B1837A5FEC65483003424DE80A20115E72E8C3187C187"
SOURCE_ASSET="world/data/encount/point_data/point_data/encount_data_su2.bin"
FOCUS={(178,0):57,(192,178):57,(180,178):28}
STATUS="ORIGINAL_SV400_TERARIUM_178_142_PRE_AND_POST_CONSOLIDATION_WITNESSES_NOT_GAME_LEGALITY"

def evaluate_intervals(pre,post,reference,native):
    pre={tuple(int(v) for v in x) for x in pre}
    post={tuple(int(v) for v in x) for x in post}
    ref=tuple(int(v) for v in reference)
    gen=tuple(int(v) for v in native)
    return {
        "pre_has_max74_and_max70or71":
            any(hi==74 for lo,hi in pre) and any(hi in (70,71) for lo,hi in pre),
        "reference_exact_in_pre":ref in pre,
        "reference_exact_in_post":ref in post,
        "native_wide_in_post":gen in post and gen[1]==74,
    }

def verify_source(csvpath:Path,validation:Path):
    if hashlib.sha256(csvpath.read_bytes()).hexdigest().upper()!=SOURCE_SHA:
        raise ValueError("Original 666-case source CSV SHA drift")
    m=json.loads(validation.read_text(encoding="utf-8-sig"))
    if (m.get("status")!="ORIGINAL_NATIVE_30F_POINT_PROVENANCE_CORRELATED_NOT_GAME_RNG_VALIDATED"
        or m.get("wild_cases")!=666 or m.get("wild_exact_final_serializations")!=666
        or m.get("original_native_sha_five_tables",{}).get("wild")!=NATIVE_WILD_SHA):
        raise ValueError("Original ROM/PKHeX source provenance failed closed")
    return m

def audit(csvpath:Path,validation:Path,out:Path):
    csvpath=csvpath.resolve();validation=validation.resolve();out=out.resolve()
    if (out==csvpath or out==validation or out.is_relative_to(csvpath.parent)
        or out.is_relative_to(validation.parent)):
        raise ValueError("Cannot overwrite actual original source evidence")
    verify_source(csvpath,validation)
    csv.field_size_limit(sys.maxsize)
    stats=Counter();wide=set();narrow=set();source_assets=set();area_shapes=Counter();rows=[]
    with csvpath.open("r",encoding="utf-8-sig",newline="") as fp:
        for original in csv.DictReader(fp):
            loc=(int(original["location_id"]),int(original["cross_from_id"]))
            if loc not in FOCUS:continue
            pre=json.loads(original["preconsolidation_level_ranges_json"])
            post=json.loads(original["postconsolidation_level_ranges_json"])
            reference=(original["pkhex_level_min"],original["pkhex_level_max"])
            native=(original["native_level_min"],original["native_level_max"])
            flags=evaluate_intervals(pre,post,reference,native)
            stats[loc]+=1
            for flag,yes in flags.items():stats[flag]+=bool(yes)
            criteria=json.loads(original["point_criteria_json"])
            for candidate in criteria:
                asset=candidate["pointSource"]
                index=int(candidate["pointIndex"])
                source_assets.add(asset)
                identity=(asset,index)
                maximum=int(candidate["maxLevel"])
                if maximum==74:wide.add(identity)
                if maximum in (70,71):narrow.add(identity)
                shape=tuple(int(candidate[key]) for key in (
                    "minLevel","maxLevel","rawPointMin","rawPointMax",
                    "areaLevelMin","areaLevelMax"))
                area_shapes[shape]+=1
            rows.append({
                "location_id":loc[0],"cross_from_id":loc[1],
                "species_national":int(original["species_national"]),
                "reference_min":int(reference[0]),"reference_max":int(reference[1]),
                "native_min":int(native[0]),"native_max":int(native[1]),
                **{k:int(v) for k,v in flags.items()},
                "source_criteria_count":len(criteria),
                "source_trace_status":original["evidence_status"]
            })
    if ({loc:stats[loc] for loc in FOCUS}!=FOCUS or
        stats["pre_has_max74_and_max70or71"]!=142 or
        stats["reference_exact_in_pre"]!=127 or
        stats["reference_exact_in_post"]!=2 or
        stats["native_wide_in_post"]!=142 or
        source_assets!={SOURCE_ASSET} or
        (len(wide),len(narrow),len(wide & narrow),len(wide|narrow))!=(334,378,83,629)):
        raise ValueError("Original 142 source pre/post interval or PointData identity drift: "+str(dict(stats)))
    report={
        "status":STATUS,
        "source":"SV 4.0.0 original 61 M2 and 223 SHA-verified TRCOL (read-only derived provenance)",
        "source_original_csv_sha256":SOURCE_SHA,
        "native_wild_pkl_sha256":NATIVE_WILD_SHA,
        "original_point_asset":SOURCE_ASSET,
        "source_178_reference_only_occurrences":len(rows),
        "by_location_cross_from":{f"{a}_{b}":stats[(a,b)] for a,b in FOCUS},
        "pre_has_max74_and_max70or71":stats["pre_has_max74_and_max70or71"],
        "reference_exact_in_pre":stats["reference_exact_in_pre"],
        "reference_exact_in_post":stats["reference_exact_in_post"],
        "native_wide_in_post":stats["native_wide_in_post"],
        "source_point_ordinals_max74":len(wide),
        "source_point_ordinals_max70or71":len(narrow),
        "source_point_ordinals_in_both_groups":len(wide & narrow),
        "source_point_ordinals_union":len(wide|narrow),
        "original_area_shapes":[
            {"candidate_min":a,"candidate_max":b,"raw_point_min":c,
             "raw_point_max":d,"area_min":e,"area_max":f,"observations":n}
            for (a,b,c,d,e,f),n in area_shapes.most_common()
        ],
        "limitations":[
            "127/142 premerge reference intervals are candidate identities, not game legality proof.",
            "A PointData can contribute multiple criteria/area traversal observations; source association is not a unique causal owner.",
            "No rule to disable Absorb is inferred solely from a PKHeX reference interval.",
            "Do not mutate native source, baseline pkl, or pinned PKHeX legality resources."
        ],
    }
    out.mkdir(parents=True,exist_ok=True)
    (out/"SV400_178_142_Original_PrePost_Merge_Evidence.json").write_text(
        json.dumps(report,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    with (out/"SV400_178_142_PrePost_Reference_Intervals.csv").open(
        "w",encoding="utf-8-sig",newline="") as fp:
        writer=csv.DictWriter(fp,fieldnames=list(rows[0]))
        writer.writeheader();writer.writerows(rows)
    print(json.dumps({k:report[k] for k in (
        "source_178_reference_only_occurrences","pre_has_max74_and_max70or71",
        "reference_exact_in_pre","reference_exact_in_post","source_point_ordinals_in_both_groups"
    )},indent=2))
    return report

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--source-csv",type=Path,required=True)
    p.add_argument("--validation",type=Path,required=True)
    p.add_argument("--output",type=Path,required=True)
    args=p.parse_args()
    audit(args.source_csv,args.validation,args.output)

if __name__=="__main__":
    main()
