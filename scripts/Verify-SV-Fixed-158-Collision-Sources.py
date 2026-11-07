#!/usr/bin/env python3
"""Link original SV 4.0.0 FixedSymbol TableKeys and worldend 158 decisions to
the *actual* AreaInfo.Tag/Type, source TRSCN, HAVOK TRCOL SHA or BOX boundary.

Requires genuine completed native fixed-only JSONL, generated native manifest,
236 original source-selected rows from the independently verified worldend A/B.
Does not decide PKHeX legality and never modifies any native .pkl.
"""
from __future__ import annotations
import argparse
from collections import Counter,defaultdict
import csv
import hashlib
import json
from pathlib import Path

STATUS="SOURCE_VERIFIED_SV400_WORLDEND_AREAINFO_TRCOL_PER_FIXED_KEY_NOT_GAME_RNG"
KEY=("game","tableKey","tableIndex")

def load(p:Path)->dict:
    return json.loads(p.read_text("utf-8-sig"))

def digest(p:Path)->str:
    h=hashlib.sha256()
    with p.open("rb") as stream:
        for chunk in iter(lambda:stream.read(1024*1024),b""):
            h.update(chunk)
    return h.hexdigest().upper()

def norm(path:str)->str:
    return path.replace("\\","/").lstrip("./").lower()

def verify_source_path(source_map:dict,path:str,sha:str):
    if not path or not sha:
        raise ValueError("Missing original source path/SHA in fixed event")
    got=source_map.get(norm(path))
    if got is None or got["sha256"].upper()!=sha.upper() or not got["verifiedByOriginalM2Manifest"]:
        raise ValueError(f"Unverified original 4.0.0 TRSCN / TRCOL source: {path}")
    return True

def verify_collision(origin:dict,source_map:dict)->dict:
    if not isinstance(origin,dict) or not origin.get("TrscnPath"):
        raise ValueError("Native scene-to-collision provenance missing for this area")
    verify_source_path(source_map,origin["TrscnPath"],
                       source_map[norm(origin["TrscnPath"])]["sha256"])
    kind=origin["CollisionKind"]
    if kind=="HAVOK_TRCOL":
        if not origin.get("TrcolPath") or len(origin.get("TrcolSha256",""))!=64:
            raise ValueError("Havok source must identify exact original .trcol SHA")
        verify_source_path(source_map,origin["TrcolPath"],origin["TrcolSha256"])
    elif kind=="BOX":
        if origin.get("TrcolPath") or origin.get("TrcolSha256"):
            raise ValueError("Native Box collider cannot be passed off as a .trcol")
    else:
        raise ValueError(f"Unknown collision kind from actual scene: {kind}")
    return origin

def inspect(events:Path,manifest:Path,case_csv:Path,out:Path)->dict:
    events,manifest,case_csv,out=map(Path.resolve,(events,manifest,case_csv,out))
    for item in (events,manifest,case_csv):
        if not item.is_file():
            raise FileNotFoundError(item)
        if out==item.parent or out.is_relative_to(item.parent):
            raise ValueError("Cannot overwrite original game source evidence")
    info=load(manifest)
    if (info.get("status")!="GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES"
        or info.get("originalTrcolEntries")!=223
        or info.get("unverifiedExtraFiles") or info.get("collisionBlocker") is not None
        or info.get("levelABMode")!="baseline"):
        raise ValueError("Incomplete original game 61+223 SHA verified native baseline")
    files=info["sourceFilesActuallyRead"]
    if not files or any(not x["verifiedByOriginalM2Manifest"] for x in files):
        raise ValueError("Original native input has unverified source bytes")
    source_map={norm(x["path"]):x for x in files}
    # The original fixed symbol table is a game source, not generated metadata.
    table_key="world/data/field/fixed_symbol/fixed_symbol_table/fixed_symbol_table_array.bin"
    if norm(table_key) not in source_map:
        raise ValueError("Original fixed symbol source table was not read")

    with case_csv.open(newline="",encoding="utf-8-sig") as f:
        cases=list(csv.DictReader(f))
    if len(cases)!=236:
        raise ValueError("236 original source-selected worldend fixed cases mandatory")
    required={
      tuple((str(sym[0]),str(sym[1]),int(sym[2])))
      for row in cases for sym in json.loads(row["source_fixed_symbol_keys_json"])
    }
    primaries=defaultdict(list)
    worldend=defaultdict(list)
    serialization=defaultdict(list)
    completed=False
    with events.open(encoding="utf-8-sig") as f:
        for raw in f:
            if not raw.strip():continue
            event=json.loads(raw)
            kind=event.get("stage")
            if kind=="trace_start" and not event.get("fixedOnly",False):
                raise ValueError("Expected fixed-only native source trace, not a truncated full one")
            if kind=="trace_finished":
                completed=event.get("status")=="REAL_NATIVE_POINT_PROVENANCE_RECORDED_NOT_GAME_RUNTIME_PROVED"
                continue
            if kind not in ("fixed_primary","fixed_wander","fixed_serialized","fixed_serialized_adjusted"):
                continue
            key=(str(event["game"]),str(event["tableKey"]),int(event["tableIndex"]))
            if key not in required:
                continue
            if kind=="fixed_primary":primaries[key].append(event)
            elif kind=="fixed_wander" and event.get("targetArea")=="subarea_su01worldend" and int(event.get("targetLocation",0))==158:
                worldend[key].append(event)
            elif kind.startswith("fixed_serialized"):serialization[key].append(event)
    if not completed:
        raise ValueError("Original 4.0.0 fixed-only trace incomplete")
    summarized=[]
    by_class=Counter()
    tag_pairs=Counter()
    source_trees=Counter()
    strict_counts=Counter()
    checked=0
    primary_missing=0
    for row in cases:
        symbols=[(str(v[0]),str(v[1]),int(v[2])) for v in json.loads(row["source_fixed_symbol_keys_json"])]
        selected=[w for key in symbols for w in worldend.get(key,[])]
        if not selected:
            raise ValueError("Original selected WorldEnd TableKey missing actual worldend->158 event")
        fixed_origins=[]
        seen_areas=set()
        for ev in selected:
            origin=verify_collision(ev["targetCollisionOrigin"],source_map)
            if ev.get("targetAreaTag") is None or ev.get("targetAreaType") is None:
                raise ValueError("Target WorldEnd source AreaInfo.Tag/Type not captured")
            verify_source_path(source_map,ev["placementTrscn"],ev["placementTrscnSha"])
            verify_source_path(source_map,table_key,ev["fixedSymbolTableSha256"])
            signature=(origin["CollisionKind"],origin["TrcolPath"],origin["TrcolSha256"])
            fixed_origins.append(signature)
            seen_areas.add((ev["targetAreaTag"],ev["targetAreaType"],
                            ev.get("targetAreaLocationName",""),
                            int(ev["targetAreaActualMinLevel"]),
                            int(ev["targetAreaActualMaxLevel"]),
                            int(ev["candidateAreaAdjust"])))
            source_trees[signature]+=1
            strict_counts[ev["targetStrictContains"]]+=1
            checked+=1
        associated_primary=[v for key in symbols for v in primaries.get(key,[])]
        primary_missing+=not associated_primary
        for ev in associated_primary:
            if ev.get("primaryAreaTag") is None or ev.get("primaryAreaType") is None:
                raise ValueError("Original primary AreaInfo fields missing")
            verify_source_path(source_map,ev["placementTrscn"],ev["placementTrscnSha"])
            if ev.get("primaryCollisionOrigin"):
                verify_collision(ev["primaryCollisionOrigin"],source_map)
        this_type=row["source_group"]
        class_name=row["exclusive_source_class"]
        by_class[(this_type,class_name)]+=1
        for flag in seen_areas:
            tag_pairs[(class_name,this_type,*flag)]+=1
        summarized.append({
          "case":row["case"],"source_group":this_type,
          "tablekey_class":class_name,
          "species_national":row["species_national"],
          "level":row["level"],"original_locations":row["original_locations"],
          "hypothetical_locations":row["hypothetical_locations"],
          "source_symbols_json":row["source_fixed_symbol_keys_json"],
          "worldend_wander_events":len(selected),
          "worldend_strict_contains_true":sum(bool(v["targetStrictContains"]) for v in selected),
          "worldend_strict_contains_false":sum(not bool(v["targetStrictContains"]) for v in selected),
          "worldend_tag_type_levels_json":json.dumps(sorted(seen_areas),ensure_ascii=False),
          "worldend_collision_sources_json":json.dumps(sorted(set(fixed_origins)),ensure_ascii=False),
          "primary_area_metadata_json":json.dumps([
             {"tag":ev["primaryAreaTag"],"type":ev["primaryAreaType"],
              "locationName":ev.get("primaryAreaLocationName",""),
              "area":ev["areaName"],"adjust":ev["areaAdjust"],
              "origin":ev.get("primaryCollisionOrigin")}
             for ev in associated_primary[:8]
           ],ensure_ascii=False),
          "evidence":"ORIGINAL_GAME_SOURCE_AREA_INFO_AND_BOUND_COLLIDER_NOT_REFERENCE_RULE",
        })
    if primary_missing:
        raise ValueError(f"{primary_missing} original fixed TableKeys missing primary placement source")
    if len(summarized)!=236:
        raise ValueError("Incomplete original 236 source cases")
    out.mkdir(parents=True,exist_ok=True)
    with (out/"SV400_236_Worldend_158_AreaInfo_TRCOL_Source_Proof.csv").open(
            "w",newline="",encoding="utf-8-sig") as f:
        writer=csv.DictWriter(f,fieldnames=list(summarized[0]),lineterminator="\n")
        writer.writeheader();writer.writerows(summarized)
    summary={
      "status":STATUS,"source_provenance":"ORIGINAL_SV_4_0_0_NATIVE_61_PLUS_223_SOURCE_VERIFIED",
      "original_native_manifest_sha256":digest(manifest),
      "original_fixed_only_trace_sha256":digest(events),
      "original_236_case_csv_sha256":digest(case_csv),
      "cases_linked":len(summarized),
      "fixed_wander_worldend_events_verified":checked,
      "primary_tablekeys_with_missing_source":primary_missing,
      "strict_contains_counts":{str(k):v for k,v in strict_counts.items()},
      "source_collision_kinds":dict(Counter(
          {key[0]:sum(v for k,v in source_trees.items() if k[0]==key[0])
           for key in source_trees}).items()),
      "distinct_collision_sources":[
          {"kind":kind,"trcol":path,"sha256":sha,"events":count}
          for (kind,path,sha),count in source_trees.most_common()],
      "outcome_by_tablekey_class":[
          {"row_group":group,"key_family":family,"cases":n}
          for (group,family),n in by_class.most_common()],
      "area_tag_type_level_groups":[
          {"key_family":family,"row_group":group,"area_tag":tag,
           "area_type":typ,"location_name":loc,"area_min":mn,
           "area_max":mx,"level_adjust":adj,"cases":count}
          for (family,group,tag,typ,loc,mn,mx,adj),count in tag_pairs.most_common()],
      "limits":[
        "TRSCN/TRCOL SHA values come from the exact bytes parsed by pkNX and are checked against the original NativeVirtualFileSystem consumed verified SHA manifest.",
        "BOX colliders have no .trcol; they are recorded as BOX rather than fabricating a TRCOL source.",
        "One matched row may refer to multiple Scarlet/Violet source TableKeys and geometries.",
        "Cross-region location 158 from geometry does not itself prove in-game capture legality; no PK9 or RNG was captured.",
      ],
    }
    (out/"SV400_236_Worldend_158_Original_AreaInfo_Collision_Manifest.json").write_text(
        json.dumps(summary,indent=2,ensure_ascii=False)+"\n","utf-8")
    print(json.dumps({"status":STATUS,"cases_linked":len(summarized),
                      "events_verified":checked,"collision_sources":len(source_trees)},
                     ensure_ascii=False))
    return summary

def main():
    p=argparse.ArgumentParser(description=__doc__)
    for k in ("events","manifest","cases","output"):
        p.add_argument("--"+k,type=Path,required=True)
    a=p.parse_args()
    inspect(a.events,a.manifest,a.cases,a.output)

if __name__=="__main__":
    main()
