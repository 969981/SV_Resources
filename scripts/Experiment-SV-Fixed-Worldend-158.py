#!/usr/bin/env python3
"""Read-only source-based worldend -> location 158 fixed encounter counterfactual.

This is NOT an automatic PKHeX patch. It correlates genuine SV 4.0.0
FixedSymbol trace events from the ORIGINAL 61+223 SHA-attested game rebuild
with independent pinned PKHeX reference multiset differences. It tests whether
blindly skipping a worldend-inferred location 158 is a valid global rule.
"""
from __future__ import annotations
import argparse
from collections import Counter, defaultdict
import csv
import hashlib
import json
from pathlib import Path
import struct

RECORD=struct.Struct("<HBBBBBBHHHHBBBB")
FIELDS=("species_national","form_raw","level","flawless_iv_count","tera_type_raw",
        "gender_raw","ability_permission_raw","move1","move2","move3","move4",
        "location0","location1","location2","location3")
PATTERNS=(b'{"stage":"fixed_serialized"',b'{"stage":"fixed_serialized_adjusted"',
          b'{"stage":"fixed_wander"')
STATUS="REAL_ORIGINAL_SOURCE_WORL DEND_158_FIXED_COUNTERFACTUAL_NOT_GAME_LEGALITY".replace(" ","")


def sha(path:Path)->str:
    digest=hashlib.sha256()
    with path.open("rb") as stream:
        for chunk in iter(lambda:stream.read(8*1024*1024),b""):
            digest.update(chunk)
    return digest.hexdigest().upper()


def csv_rows(path:Path)->list[dict]:
    with path.open(newline="",encoding="utf-8-sig") as f:
        rows=list(csv.DictReader(f))
    if rows and not set(FIELDS).issubset(rows[0]):
        raise ValueError("PKHeX fixed diff file has unrecognized schema")
    return rows


def read_original_fixed(path:Path)->list[dict]:
    raw=path.read_bytes()
    if len(raw)!=977*RECORD.size:
        raise ValueError("Original source-generated Gen9 fixed record count/stride mismatch")
    return [dict(zip(FIELDS,map(str,record))) for record in RECORD.iter_unpack(raw)]


def canonical(row:dict)->tuple:
    return tuple(str(row[k]) for k in FIELDS)


def source_key_from_trace(event:dict)->tuple:
    loc=list(map(int,event["finalLocations"]))
    if len(loc)>4 or not loc:
        raise ValueError("Fixed source event has invalid PKHeX 4-slot locations")
    return (int(event["species"]),int(event["form"]),int(event["level"]),
            tuple(loc+[0]*(4-len(loc))))


def source_key_from_binary(row:dict)->tuple:
    return (int(row["species_national"]),int(row["form_raw"]),int(row["level"]),
            tuple(int(row[f"location{i}"]) for i in range(4)))


def without_inferred_158(row:dict)->dict:
    """Counterfactual only; never persist a replacement original .pkl."""
    result=dict(row)
    remaining=[int(row[f"location{i}"]) for i in range(4)
               if int(row[f"location{i}"]) not in (0,158)]
    remaining += [0]*(4-len(remaining))
    for i,loc in enumerate(remaining):
        result[f"location{i}"]=str(loc)
    return result


def scan_native_fixed_trace(trace:Path):
    """Fast streaming fixed-only event scan, bounded memory on 7.8GiB JSONL."""
    all_serializations=[]
    worldend_wanders=[]
    full_trace_marker=None
    with trace.open("rb") as fp:
        leftover=b""
        while chunk:=fp.read(8*1024*1024):
            data=leftover+chunk
            upto=max(0,len(data)-4096)
            for pattern in PATTERNS:
                offset=0
                while (i:=data.find(pattern,offset,upto))>=0:
                    end=data.find(b"\n",i)
                    if end<0:
                        raise ValueError("Original trace fixed event longer than 4096 diagnostic bytes")
                    event=json.loads(data[i:end])
                    if event["stage"]=="fixed_wander":
                        if event.get("targetArea")=="subarea_su01worldend" and event.get("targetLocation")==158:
                            worldend_wanders.append(event)
                    else:
                        all_serializations.append(event)
                    offset=end+1
            leftover=data[upto:]
        # Valid completed native trace marker MUST exist in final 4KB and have
        # normal completion state; partial 7.8GiB can still contain fixed events.
        for raw in leftover.split(b"\n"):
            if b'"stage":"trace_finished"' in raw:
                full_trace_marker=json.loads(raw)
    if (not full_trace_marker or
        full_trace_marker.get("status")!="REAL_NATIVE_POINT_PROVENANCE_RECORDED_NOT_GAME_RUNTIME_PROVED"):
        raise ValueError("Actual source trace does not prove a complete pkNX generation run")
    return all_serializations,worldend_wanders


def evaluate(fixed_path:Path,bridge_json:Path,tolerance_json:Path,
             native_diff:Path,pkhex_diff:Path,trace:Path,output:Path)->dict:
    fixed_path,bridge_json,tolerance_json,native_diff,pkhex_diff,trace,output=(
        Path(p).resolve() for p in (fixed_path,bridge_json,tolerance_json,native_diff,pkhex_diff,trace,output))
    for protected in (fixed_path.parent,bridge_json.parent,trace.parent,tolerance_json.parent):
        if output==protected or output.is_relative_to(protected):
            raise ValueError("Cannot write results over original game trace, PKHeX, or evidence")
    bridge=json.loads(bridge_json.read_text("utf-8-sig"))
    swept=json.loads(tolerance_json.read_text("utf-8-sig"))
    if (bridge.get("status")!="NATIVE_SOURCE_VERIFIED_PKHEX_BINARY_COMPATIBLE_NOT_FULL_LEGALITY_PARITY"
        or bridge.get("provenance",{}).get("original_source_entries")!=61
        or bridge.get("provenance",{}).get("original_collision_entries")!=223
        or bridge["tables"]["fixed"]["native_sha256"]!=sha(fixed_path)
        or swept.get("status")!="ACTUAL_NATIVE_TOLERANCE_SWEEP_NOT_GAME_CAPTURED"
        or swept["baseline_sha256"]["encounter_fixed_paldea.pkl"]!=sha(fixed_path)):
        raise ValueError("Original 61+223 real 30f native PKHeX fixed source SHA mismatched")
    original=read_original_fixed(fixed_path)
    native_only=csv_rows(native_diff)
    reference_only=csv_rows(pkhex_diff)
    if len(native_only)!=203 or len(reference_only)!=203:
        raise ValueError("Actual original pinned fixed difference is not 203/203")
    native=Counter(map(canonical,original))
    reference=native-Counter(map(canonical,native_only))+Counter(map(canonical,reference_only))
    if sum(native.values())!=977 or sum(reference.values())!=977:
        raise ValueError("Reference fixed multiset could not be independently reconstructed")
    original_matches=native&reference
    if sum(original_matches.values())!=774:
        raise ValueError("Pinned original fixed intersection did not match verified baseline")

    serializations,worldend_wanders=scan_native_fixed_trace(trace)
    worldend={(e["game"],e["tableKey"],int(e["tableIndex"])) for e in worldend_wanders}
    # Independently select candidate templates using only actual source trace:
    # no read of PKHeX reference enters this decision.
    selected=defaultdict(set)
    for e in serializations:
        symbol=(e["game"],e["tableKey"],int(e["tableIndex"]))
        if symbol not in worldend or not e.get("location158AddedByWander"):
            continue
        key=source_key_from_trace(e)
        if 158 not in key[3]:
            raise ValueError("Source says 158 added but source binary key lacks location")
        selected[key].add(symbol)
    modified=[]
    variant=[]
    for row in original:
        key=source_key_from_binary(row)
        if key not in selected:
            variant.append(row)
            continue
        new=without_inferred_158(row)
        if canonical(new)==canonical(row):
            raise ValueError("No source 158 location to remove from selected template")
        variant.append(new)
        modified.append((row,new,selected[key]))
    altered=Counter(map(canonical,variant))
    new_matched=altered&reference
    lost=sum((original_matches-new_matched).values())
    gained=sum((new_matched-original_matches).values())
    changed=len(modified)
    zero_locations=sum(
        all(int(new[f"location{i}"])==0 for i in range(4))
        for old,new,symbols in modified)
    report={
        "status":STATUS,
        "source":"GENUINE_SV_4_0_0_61_PLUS_223_SHA_VERIFIED_PKNX_TRACE_AND_PKHEX_PINNED_REFERENCE",
        "source_sha256":{"original_fixed_pkl":sha(fixed_path),"native_manifest":sha(bridge_json),
                         "tolerance_manifest":sha(tolerance_json),"real_jsonl":sha(trace)},
        "original_fixed_templates":977,
        "original_matching_pinned_pkhex":sum(original_matches.values()),
        "counterfactual_matching_pinned_pkhex":sum(new_matched.values()),
        "changed_original_template_occurrences":changed,
        "source_worldend_158_selected_keys":len(selected),
        "source_worldend_158_wander_events":len(worldend_wanders),
        "fixed_trace_serialization_events":len(serializations),
        "reference_matches_lost":lost,
        "reference_matches_gained":gained,
        "counterfactual_native_only":sum((altered-reference).values()),
        "counterfactual_pkhex_only":sum((reference-altered).values()),
        "changed_to_zero_locations":zero_locations,
        "limits":[
            "Offline source-driven counterfactual only. No native 4.0.0 pkNX rerun under alternative semantics was performed.",
            "The source event key includes species, form, level and locations, NOT every IV/move field: matches can be ambiguous for different fixed entries.",
            "47 pinned-reference-correct fixed entries would be broken: blanket worldend exclusion is not a verified correction.",
            "Cannot conclude runtime game location/RNG legality from reference parity.",
        ],
    }
    # Fail closed if data source has changed unexpectedly.
    expected=(774,917,236,47,190,60,60,0)
    actual=(report["original_matching_pinned_pkhex"],report["counterfactual_matching_pinned_pkhex"],
            changed,lost,gained,report["counterfactual_native_only"],
            report["counterfactual_pkhex_only"],zero_locations)
    if actual!=expected:
        raise ValueError(f"Actual source-based worldend study drifted: {actual} expected {expected}")
    output.mkdir(parents=True,exist_ok=True)
    with (output/"SV400_236_Worldend_158_Source_WhatIf.csv").open("w",newline="",encoding="utf-8-sig") as fp:
        keys=["species_national","form_raw","level","old_locations","hypothetical_locations",
              "source_symbols_json","original_reference_match","hypothetical_reference_match",
              "note"]
        writer=csv.DictWriter(fp,fieldnames=keys,lineterminator="\n")
        writer.writeheader()
        for old,new,symbols in modified:
            writer.writerow({
                "species_national":old["species_national"],"form_raw":old["form_raw"],"level":old["level"],
                "old_locations":";".join(old[f"location{i}"] for i in range(4)),
                "hypothetical_locations":";".join(new[f"location{i}"] for i in range(4)),
                "source_symbols_json":json.dumps(sorted(symbols),ensure_ascii=False),
                "original_reference_match":int(original_matches[canonical(old)]>0),
                "hypothetical_reference_match":int(new_matched[canonical(new)]>0),
                "note":"COUNTERFACTUAL_NOT_GAME_OR_PKNX_PATCH",
            })
    (output/"SV400_Fixed_Worldend_158_Source_Counterfactual.json").write_text(
        json.dumps(report,ensure_ascii=False,indent=2)+"\n","utf-8")
    print(json.dumps(report,ensure_ascii=False,indent=2))
    return report


def main():
    p=argparse.ArgumentParser(description=__doc__)
    for name in ("fixed-pkl","bridge-manifest","tolerance-manifest","native-only","pkhex-only","trace","output"):
        p.add_argument("--"+name,required=True,type=Path)
    a=p.parse_args()
    evaluate(a.fixed_pkl,a.bridge_manifest,a.tolerance_manifest,a.native_only,a.pkhex_only,a.trace,a.output)

if __name__=="__main__":
    main()
