#!/usr/bin/env python3
"""Explain *observed* SV 4.0.0 native-vs-PKHeX differences without changing any .pkl.

Inputs must be the original full native-comparison.json and side-specific delta
CSVs from Compare-SV-Native-PKHeX-Encounters.py. Native SHA attestation and
output binary SHA are mandatory. Produces audit metadata, never copyrighted
native assets or synthetic "corrections" to PKHeX legality tables.
"""
from __future__ import annotations
import argparse
from collections import Counter, defaultdict
import csv
import hashlib
from itertools import permutations
import json
from pathlib import Path

FIXED_FIELDS = ("species_national","form_raw","level","flawless_iv_count",
                "tera_type_raw","gender_raw","ability_permission_raw",
                "move1","move2","move3","move4")
LOC_FIELDS = tuple(f"location{i}" for i in range(4))
WILD_SIG = ("location_id","cross_from_id","species_national","form_raw",
            "gender_raw","time_forbidden_mask","weather_allowed_mask")
WILD_NAME = "encounter_wild_paldea.pkl"
FIXED_NAME = "encounter_fixed_paldea.pkl"
REPORT_NAME = "sv-400-native-delta-diagnosis.json"


def load_delta(path: Path) -> list[dict]:
    if not path.is_file():
        raise FileNotFoundError(f"Native diff CSV is missing: {path}")
    with path.open("r", encoding="utf-8-sig", newline="") as fp:
        reader = csv.DictReader(fp)
        if not reader.fieldnames:
            raise ValueError(f"Missing delta CSV headers: {path}")
        out = []
        for num, row in enumerate(reader, 2):
            if any(not v or not v.isdecimal() for v in row.values()):
                raise ValueError(f"Non-integer or empty value in {path}:{num}")
            out.append({k:int(v) for k,v in row.items()})
        return out


def area(region_id: int) -> str:
    # The pinned pkNX AreaWeather9 enum groups the Paldea/Kitakami/Terarium
    # location IDs in these ranges. The ID 158 is Mossfell Confluence.
    if region_id < 132:
        return "Paldea"
    if region_id < 174:
        return "Kitakami"
    if region_id <= 196:
        return "Blueberry"
    return "Unknown"


def numbered(locations: dict) -> tuple[int,...]:
    return tuple(locations[k] for k in LOC_FIELDS)


def loc_cost(before: dict, after: dict) -> int:
    a, b = numbered(before), numbered(after)
    return 8 * len(set(a) ^ set(b)) + sum(x!=y for x,y in zip(a,b))


def pair_fixed(before: list[dict], after: list[dict]) -> dict:
    """Pair only identical non-location templates. Duplicate groups stay multiset-safe."""
    source=defaultdict(list)
    native=defaultdict(list)
    for row in before:
        source[tuple(row[k] for k in FIXED_FIELDS)].append(row)
    for row in after:
        native[tuple(row[k] for k in FIXED_FIELDS)].append(row)
    rows=[]
    ref_unmatched=[]
    native_unmatched=[]
    ambiguous_groups=0
    for key in sorted(source.keys() | native.keys()):
        x=sorted(source.get(key,[]),key=numbered)
        y=sorted(native.get(key,[]),key=numbered)
        if not x:
            native_unmatched.extend(y)
            continue
        if not y:
            ref_unmatched.extend(x)
            continue
        if len(x)!=len(y) or len(x)>7:
            ambiguous_groups+=1
            ref_unmatched.extend(x)
            native_unmatched.extend(y)
            continue
        candidate=min(permutations(y),key=lambda seq:
                      (sum(loc_cost(a,b) for a,b in zip(x,seq)),
                       tuple(numbered(b) for b in seq)))
        for a,b in zip(x,candidate):
            loc_a=[v for v in numbered(a) if v]
            loc_b=[v for v in numbered(b) if v]
            if a==b:
                # The complete comparison already subtracted all identical
                # rows, but fail closed if it was passed inconsistent deltas.
                raise ValueError("Identical fixed record incorrectly present in both difference CSVs")
            rows.append({
                "species":a["species_national"],"form":a["form_raw"],"level":a["level"],
                "pkhex_locations":"|".join(map(str,loc_a)),
                "native_locations":"|".join(map(str,loc_b)),
                "added_locations":"|".join(map(str,sorted(set(loc_b)-set(loc_a)))),
                "removed_locations":"|".join(map(str,sorted(set(loc_a)-set(loc_b)))),
                "native_has_location_158":158 in loc_b,
                "pkhex_has_location_158":158 in loc_a,
                "same_location_set":set(loc_a)==set(loc_b),
            })
    location158=sum(x["native_has_location_158"] and not x["pkhex_has_location_158"] for x in rows)
    return {
        "pkhex_only":len(before),"native_only":len(after),
        "non_location_template_matched_pairs":len(rows),
        "unmatched_pkhex_templates":len(ref_unmatched),
        "unmatched_native_templates":len(native_unmatched),
        "ambiguous_template_groups":ambiguous_groups,
        "matched_with_new_location_158":location158,
        "matched_other_location_changes":sum(not x["native_has_location_158"] for x in rows),
        "matched_same_location_set_different_order":sum(x["same_location_set"] for x in rows),
        "unmatched_pkhex_keys":[{k:v for k,v in r.items() if k in FIXED_FIELDS} for r in ref_unmatched[:15]],
        "unmatched_native_keys":[{k:v for k,v in r.items() if k in FIXED_FIELDS} for r in native_unmatched[:15]],
        "pairs":rows,
    }


def diagnose_wild(reference: list[dict], generated: list[dict]) -> dict:
    """Do NOT claim a new signature is legitimate without PK9 and native RNG proof."""
    ref_sigs={tuple(r[k] for k in WILD_SIG) for r in reference}
    nat_sigs={tuple(r[k] for k in WILD_SIG) for r in generated}
    changed_ref=[r for r in reference if tuple(r[k] for k in WILD_SIG) in nat_sigs]
    changed_nat=[r for r in generated if tuple(r[k] for k in WILD_SIG) in ref_sigs]
    entirely_new=[r for r in generated if tuple(r[k] for k in WILD_SIG) not in ref_sigs]
    unrepresented_ref=[r for r in reference if tuple(r[k] for k in WILD_SIG) not in nat_sigs]

    def stats(rows: list[dict]):
        return {
            "rows":len(rows),
            "direct":sum(r["cross_from_id"]==0 for r in rows),
            "crossover":sum(r["cross_from_id"]!=0 for r in rows),
            "by_region":dict(sorted(Counter(area(r["location_id"]) for r in rows).items())),
            "top_capture_locations":[{"location_id":l,"rows":n} for l,n in
                    Counter(r["location_id"] for r in rows).most_common(20)],
        }
    changes_by_area=defaultdict(lambda:{"pkhex_only":0,"native_only":0,
                                         "native_entirely_new_signature":0})
    for row in reference:
        changes_by_area[row["location_id"]]["pkhex_only"]+=1
    for row in generated:
        changes_by_area[row["location_id"]]["native_only"]+=1
        if tuple(row[k] for k in WILD_SIG) not in ref_sigs:
            changes_by_area[row["location_id"]]["native_entirely_new_signature"]+=1
    places=[{"location_id":p,"region":area(p),**counts,
             "net_native_minus_pkhex":counts["native_only"]-counts["pkhex_only"]}
            for p,counts in sorted(changes_by_area.items())]
    return {
        "pkhex_only":stats(reference),
        "native_only":stats(generated),
        "level_range_signature_present_on_both_sides":{
            "pkhex_rows":len(changed_ref),"native_rows":len(changed_nat),
            "distinct_signatures":len(ref_sigs&nat_sigs),
            "explanation":"Same location, crossover, species, form, gender, time and weather; remaining differing values are level bounds. This is not one-to-one pairing when a signature has multiple records.",
        },
        "entirely_new_native_signature":stats(entirely_new),
        "reference_without_same_native_signature":stats(unrepresented_ref),
        "net_native_minus_pkhex":len(generated)-len(reference),
        "by_location":places,
    }


def digest(path:Path) -> str:
    with path.open("rb") as file:
        return hashlib.file_digest(file,"sha256").hexdigest().upper()


def run(diff:Path, native:Path, evidence:Path, output:Path)->dict:
    if not diff.is_dir() or not native.is_dir():
        raise FileNotFoundError("Original full native difference CSV and .pkl output folders required")
    if output==diff or output.is_relative_to(diff) or output==native or output.is_relative_to(native):
        raise ValueError("Report output must be separate from original native files and source differences")
    reference=json.loads((diff/"native-comparison.json").read_text("utf-8-sig"))
    built=json.loads(evidence.read_text("utf-8-sig"))
    if built.get("status")!="GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES" or built.get("collisionBlocker"):
        raise ValueError("Full original 4.0.0 native rebuild and collision closure are mandatory")
    if reference.get("all_generated_from_native_not_reference") is not True:
        raise ValueError("No independently attested original game source")
    results=built.get("generated",[])
    products={p["name"]:p for p in results}
    for t, name in (("wild",WILD_NAME),("fixed",FIXED_NAME)):
        if t not in reference["tables"] or reference["tables"][t]["status"]!="FIELD_LEVEL_DIFFERENCES":
            raise ValueError(f"Expected real, not fabricated, unresolved {t} table differences")
        product=products[name]
        raw=native/name
        if raw.stat().st_size!=product["bytes"] or digest(raw)!=product["sha256"] or \
                product["sha256"]!=reference["tables"][t]["native_sha256"]:
            raise ValueError(f"Original game generated {name} SHA or size mismatch")
    pairs={}
    for t in ("wild","fixed"):
        a=load_delta(diff/f"{t}_pkhex_only.csv")
        b=load_delta(diff/f"{t}_native_only.csv")
        q=reference["tables"][t]
        if len(a)!=q["reference_only"] or len(b)!=q["native_only"]:
            raise ValueError(f"Expected native comparison row counts differ: {t}")
        pairs[t]=(a,b)

    fixed=pair_fixed(*pairs["fixed"])
    wild=diagnose_wild(*pairs["wild"])
    report={
        "status":"ACTUAL_NATIVE_SHA_VERIFIED_DIFF_CLASSIFIED_NOT_YET_FIXED",
        "source":"SV-4.0.0-original-TRPFD-TRPFS + pinned PKHeX",
        "native_build_status":built["status"],
        "game_original_collision_files_verified":built.get("originalTrcolEntries"),
        "native_binary_sha256":{name:products[name]["sha256"] for name in (WILD_NAME,FIXED_NAME)},
        "fixed":{k:v for k,v in fixed.items() if k!="pairs"},
        "wild":{k:v for k,v in wild.items() if k!="by_location"},
        "limitations":[
            "Same template with different locations does not prove either location is reachable in-game.",
            "Extra native wild signatures may be true SV 4.0.0 changes or overbroad pkNX geometry/adjacency approximations.",
            "PKHeX reference is a pinned historical legality snapshot, not a runtime 4.0.0 source.",
            "Actual Game Boy / Switch captures and independent RNG checks still needed for changed locations or encounter templates.",
        ],
    }
    output.mkdir(parents=True,exist_ok=True)
    (output/REPORT_NAME).write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    def write_csv(path:Path, rows:list[dict], headers:list[str]):
        with path.open("w",encoding="utf-8-sig",newline="") as fp:
            writer=csv.DictWriter(fp,fieldnames=headers,lineterminator="\n")
            writer.writeheader()
            writer.writerows(rows)
    write_csv(output/"sv-400-fixed-location-pairs.csv",fixed["pairs"],
              list(fixed["pairs"][0]) if fixed["pairs"] else
              ["species","form","level","pkhex_locations","native_locations",
               "added_locations","removed_locations","native_has_location_158",
               "pkhex_has_location_158","same_location_set"])
    write_csv(output/"sv-400-wild-deltas-by-location.csv",wild["by_location"],
              ["location_id","region","pkhex_only","native_only","native_entirely_new_signature","net_native_minus_pkhex"])
    return report


def main()->int:
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--diff",required=True,type=Path)
    parser.add_argument("--native",required=True,type=Path)
    parser.add_argument("--evidence",required=True,type=Path)
    parser.add_argument("--output",required=True,type=Path)
    a=parser.parse_args()
    report=run(a.diff.resolve(),a.native.resolve(),a.evidence.resolve(),a.output.resolve())
    print(json.dumps({"status":report["status"],"fixed":report["fixed"],
        "wild":{k:report["wild"][k] for k in ("net_native_minus_pkhex",
             "level_range_signature_present_on_both_sides")}},
        ensure_ascii=False,indent=2))
    return 0

if __name__=="__main__":
    raise SystemExit(main())
