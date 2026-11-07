#!/usr/bin/env python3
"""Join real traced pkNX PointData/fixed-symbol events to 666/189 original-case CSV.

Fail closed on unverified baseline SHA, incomplete trace marker, mismatched
original 61+223 source evidence or mismatching output keys. Reports possible
source contributors, not a causal proof or an automatically patched legality db.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
from collections import Counter, defaultdict
from pathlib import Path


def load_json(path: Path):
    return json.loads(path.read_text("utf-8-sig"))


def rows(path: Path):
    with path.open(newline="", encoding="utf-8-sig") as fp:
        return list(csv.DictReader(fp))


def sha(path: Path):
    h = hashlib.sha256()
    with path.open("rb") as stream:
        for chunk in iter(lambda: stream.read(1024*1024), b""):
            h.update(chunk)
    return h.hexdigest().upper()


def wild_key(t):
    return tuple(int(t[k]) for k in ("location","crossFrom","species","form",
                                   "gender","minLevel","maxLevel","timeMask","weatherMask"))


def target_wild_key(t):
    return tuple(int(t[k]) for k in ("location_id","cross_from_id",
        "species_national","form_raw","gender_raw","native_level_min",
        "native_level_max","time_forbidden_mask","weather_allowed_mask"))


def base_wild_key(e):
    return tuple(int(e[k]) for k in ("location","crossFrom","species","form","gender","timeMask","weatherMask"))


def target_fixed_key(t):
    return (int(t["species_national"]),int(t["form_raw"]),int(t["level"]),
            tuple(int(t[f"native_location{i}"]) for i in range(4)))


def source_fixed_key(e):
    locs=list(map(int,e["finalLocations"]))
    if len(locs)>4:
        raise ValueError("Fixed .pkl cannot store more than four locations")
    return (int(e["species"]),int(e["form"]),int(e["level"]),
            tuple(locs+[0]*(4-len(locs))))


def point_identity(e):
    return (e.get("sourcePointAsset"),e.get("sourcePointIndex"),
            e.get("pointX"),e.get("pointY"),e.get("pointZ"))


def disjoint_trace_diagnostics(trace: Path, target_wild: list[dict], target_fixed: list[dict]):
    wild_keys = {target_wild_key(row) for row in target_wild}
    fixed_keys = {target_fixed_key(row) for row in target_fixed}
    if len(wild_keys)!=len(target_wild):
        raise ValueError("Duplicate wild case keys; multiplicity must be explicitly handled")
    # Individual fixed templates may legitimately share species+level+locations, so no
    # unique requirement here. Matching by this key alone can be ambiguous.
    wild_output=defaultdict(list)
    wild_weather=defaultdict(list)
    wild_candidate=defaultdict(list)
    wild_before=defaultdict(list)
    wild_after=defaultdict(list)
    fixed_output=defaultdict(list)
    fixed_wanders=defaultdict(list)
    fixed_primaries=defaultdict(list)
    event_counts=Counter()
    trace_complete=False
    with trace.open(encoding="utf-8-sig") as fp:
        for n,line in enumerate(fp,1):
            if not line.strip():
                continue
            event=json.loads(line)
            stage=event.get("stage","")
            event_counts[stage]+=1
            if stage=="wild_serialized":
                key=wild_key(event)
                if key in wild_keys:
                    wild_output[key].append(event)
            elif stage=="wild_weather_assigned":
                key=base_wild_key(event)
                if key in {t[:5]+t[7:] for t in wild_keys}: # 7 fields, without both level endpoints
                    wild_weather[key].append(event)
            elif stage=="wild_raw_candidate":
                wild_candidate[(int(event["location"]),int(event["species"]))].append(event)
            elif stage in ("wild_before_consolidate","wild_after_consolidate"):
                key=base_wild_key(event)
                if stage=="wild_before_consolidate":
                    wild_before[key].append(event)
                else:
                    wild_after[key].append(event)
            elif stage in ("fixed_serialized","fixed_serialized_adjusted"):
                key=source_fixed_key(event)
                if key in fixed_keys:
                    fixed_output[key].append(event)
            elif stage=="fixed_wander":
                fixed_wanders[(event["game"],event["tableKey"],int(event["tableIndex"]))].append(event)
            elif stage=="fixed_primary":
                fixed_primaries[(event["game"],event["tableKey"],int(event["tableIndex"]))].append(event)
            elif stage=="trace_finished":
                trace_complete=event.get("status")=="REAL_NATIVE_POINT_PROVENANCE_RECORDED_NOT_GAME_RUNTIME_PROVED"
    if not trace_complete:
        raise ValueError("pkNX trace is incomplete; original source generator did not finish successfully")
    return {
        "wild_output":wild_output,"wild_weather":wild_weather,"wild_candidate":wild_candidate,
        "wild_before":wild_before,"wild_after":wild_after,"fixed_output":fixed_output,
        "fixed_wanders":fixed_wanders,"fixed_primaries":fixed_primaries,
        "event_counts":event_counts,
    }


def analyze(trace:Path,target_dir:Path,native_dir:Path,original_bridge_manifest:Path,out:Path):
    trace,target_dir,native_dir,original_bridge_manifest,out=(
        Path(x).resolve() for x in (trace,target_dir,native_dir,original_bridge_manifest,out))
    if not trace.is_file() or not original_bridge_manifest.is_file():
        raise FileNotFoundError("Real completed trace and original native bridge SHA evidence required")
    report=load_json(original_bridge_manifest)
    if (report.get("status")!="NATIVE_SOURCE_VERIFIED_PKHEX_BINARY_COMPATIBLE_NOT_FULL_LEGALITY_PARITY"
        or report.get("provenance",{}).get("original_source_entries")!=61
        or report.get("provenance",{}).get("original_collision_entries")!=223):
        raise ValueError("Missing original 61+223 input authenticity")
    for kind,file in (("wild","encounter_wild_paldea.pkl"),
                      ("fixed","encounter_fixed_paldea.pkl"),
                      ("raid_paldea","encounter_gem_paldea.pkl"),
                      ("raid_kitakami","encounter_gem_kitakami.pkl"),
                      ("raid_blueberry","encounter_gem_blueberry.pkl")):
        if sha(native_dir/file)!=report["tables"][kind]["native_sha256"]:
            raise ValueError("Traced build changed an output .pkl from the original 30f reference: "+file)
    raw_wild=rows(target_dir/"wild_level_range_pairs.csv")
    raw_fixed=rows(target_dir/"fixed_158_counterfactual_pairs.csv")
    if len(raw_wild)!=666 or len(raw_fixed)!=189:
        raise ValueError("Expected source-attested 666/189 comparison target records")
    data=disjoint_trace_diagnostics(trace,raw_wild,raw_fixed)
    out.mkdir(parents=True,exist_ok=True)
    wild_result=[]
    fixed_result=[]
    wild_matched=0
    wild_points=0
    fixed_matched=0
    fixed_158_from_wander=0
    fixed_strict_false_158=0
    for t in raw_wild:
        key=target_wild_key(t)
        emitted=data["wild_output"].get(key,[])
        if emitted: wild_matched+=1
        base=key[:5]+key[7:]
        origin_events=[e for e in data["wild_weather"].get(base,[])
                       if int(e["minLevel"]) <= key[6]+1 and int(e["maxLevel"])>=key[5]-1]
        # Include all contributors that can have contributed to the merged
        # range: this is a candidate relation, not a unique parent pointer.
        sources=sorted({point_identity(e) for e in origin_events},key=str)
        if sources: wild_points+=1
        before_ranges=sorted({(int(e["minLevel"]),int(e["maxLevel"]))
                              for e in data["wild_before"].get(base,[])})
        after_ranges=sorted({(int(e["minLevel"]),int(e["maxLevel"]))
                              for e in data["wild_after"].get(base,[])})
        criterion_events=[
            e for e in data["wild_candidate"].get((int(t["location_id"]),int(t["species_national"])),[])
            if any((e.get("pointSource"),e.get("pointIndex"))==(src[0],src[1]) for src in sources)
        ]
        wild_result.append({
            **t,
            "serialized_match_count":len(emitted),
            "candidate_point_count":len(sources),
            "original_point_sources_json":json.dumps(sources,ensure_ascii=False),
            "preconsolidation_level_ranges_json":json.dumps(before_ranges),
            "postconsolidation_level_ranges_json":json.dumps(after_ranges),
            "point_criteria_json":json.dumps([
                {k:e.get(k) for k in ("pointSource","pointIndex","criteriaIndex","criteriaMinLevel",
                 "criteriaMaxLevel","rawPointMin","rawPointMax","clippedPointMin","clippedPointMax",
                 "areaLevelMin","areaLevelMax","areaAdjust","appliedBoost","band",
                 "minLevel","maxLevel")}
                for e in criterion_events[:80]
            ],ensure_ascii=False),
            "evidence_status":"TRACE_HAS_POSSIBLE_SOURCE_POINTS_NOT_UNIQUE_CAUSAL_PROOF" if sources
                else "TRACE_POINT_UNRESOLVED",
        })
    for t in raw_fixed:
        key=target_fixed_key(t)
        emitted=data["fixed_output"].get(key,[])
        if emitted: fixed_matched+=1
        events=[]
        for e in emitted:
            symbol=(e["game"],e["tableKey"],int(e["tableIndex"]))
            wander=data["fixed_wanders"].get(symbol,[])
            primary=data["fixed_primaries"].get(symbol,[])
            origin_158=[q for q in wander if int(q["targetLocation"])==158]
            if e.get("location158AddedByWander"): fixed_158_from_wander+=1
            if any(q.get("targetStrictContains") is False for q in origin_158):
                fixed_strict_false_158+=1
            events.append({
                "tableKey":e["tableKey"],"tableIndex":e["tableIndex"],"game":e["game"],
                "level":e["level"],"fieldIndex":e["fieldIndex"],
                "location158AddedByWander":e["location158AddedByWander"],
                "primaryPlacementLocations":e.get("primaryLocations"),
                "wanderedLocations":e.get("inferredWanderLocations"),
                "primaries":primary,"wanderTo158":origin_158,
            })
        fixed_result.append({**t,
            "serializations_found":len(emitted),
            "location158_inferred_wander_candidates":sum(
                bool(x["location158AddedByWander"]) for x in events),
            "original_table_key_evidence_json":json.dumps(events[:25],ensure_ascii=False),
            "evidence_status":"MATCHED_TABLEKEY_WITH_COLLISION_OBSERVATIONS" if emitted
                else "TRACE_FIXED_TABLEKEY_UNRESOLVED"
        })
    def write_csv(path,values):
        if not values: return
        with path.open("w",newline="",encoding="utf-8-sig") as fp:
            writer=csv.DictWriter(fp,fieldnames=values[0].keys(),lineterminator="\n")
            writer.writeheader();writer.writerows(values)
    write_csv(out/"SV400_666_wild_point_provenance.csv",wild_result)
    write_csv(out/"SV400_189_fixed_tablekey_wander_provenance.csv",fixed_result)
    result={
        "status":"ORIGINAL_NATIVE_30F_POINT_PROVENANCE_CORRELATED_NOT_GAME_RNG_VALIDATED",
        "wild_cases":len(raw_wild),"wild_exact_final_serializations":wild_matched,
        "wild_cases_with_candidate_original_points":wild_points,
        "fixed_cases":len(raw_fixed),"fixed_with_original_tablekey_link":fixed_matched,
        "fixed_158_wander_observations":fixed_158_from_wander,
        "fixed_158_wander_observations_with_no_strict_containment":fixed_strict_false_158,
        "trace_event_counts":dict(data["event_counts"]),
        "original_native_sha_five_tables":{k:v["native_sha256"] for k,v in report["tables"].items()},
        "interpretation":[
           "Raw PointData ordinals and fixed TableKey are source candidates, not yet uniquely proven causes of PKHeX-reference differences.",
           "Trace does not capture exact TRCOL file-to-collider mapping; the original 223 collision SHA manifests attest resource set, not individual collider body provenance.",
           "Matching 30f source output SHA ensures the diagnostic hook did not alter encounter templates.",
           "Only runtime game capture and matching PK9/EC/PID/IVs with native code closes RNG legality.",
        ],
    }
    (out/"SV400_Point_Trace_Validation.json").write_text(json.dumps(result,ensure_ascii=False,indent=2)+"\n","utf-8")
    print(json.dumps(result,ensure_ascii=False,indent=2))
    return result


def main():
    p=argparse.ArgumentParser(description=__doc__)
    for flag in ("trace","targets","native-output","bridge-manifest","output"):
        p.add_argument("--"+flag,required=True,type=Path)
    a=p.parse_args()
    analyze(a.trace,a.targets,a.native_output,a.bridge_manifest,a.output)


if __name__=="__main__":
    main()
