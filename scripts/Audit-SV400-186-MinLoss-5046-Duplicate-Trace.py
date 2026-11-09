#!/usr/bin/env python3
"""Audits narrow original SV 4.0.0 focused native causal events. NOT gameplay legality.

Checks source attestation, real six-species 186<-176 serialized A/B outcomes,
the actual PointData candidate/merge witnesses, and that suppressing #5046
alone leaves two independent exact-original points producing criteria 110-113.
No PKHeX reference file is read by the original generator or this audit.
"""
from __future__ import annotations
import argparse
from collections import Counter, defaultdict
import csv
import hashlib
import json
from pathlib import Path

PROFILE = "sv400-186-from176-min-level-and-158-5046-duplicate"
SOURCE = "world/data/encount/point_data/point_data/encount_data_su1.bin"
WORLDEND = "subarea_su01worldend"
S186 = {88, 287, 335, 336, 546, 547}
LOSS4 = {88, 287, 546, 547}
NAMES = ("encounter_wild_paldea.pkl", "encounter_fixed_paldea.pkl",
         "encounter_gem_paldea.pkl", "encounter_gem_kitakami.pkl",
         "encounter_gem_blueberry.pkl")
MODES = ("baseline", "raw-min-only", "raw-max-only", "raw-both", "point5046-area")
LEVELS = {
    "baseline": "baseline",
    "raw-min-only": "terarium-176-194-raw-point-min-only",
    "raw-max-only": "terarium-176-194-raw-point-max-only",
    "raw-both": "terarium-176-194-raw-point-levels",
    "point5046-area": "baseline",
}
AREAS = {key: "baseline" for key in MODES}
AREAS["point5046-area"] = "kitakami-158-point5046-source-area-filter"


def sha256(path):
    h = hashlib.sha256()
    with Path(path).open("rb") as f:
        for block in iter(lambda: f.read(1024*1024), b""):
            h.update(block)
    return h.hexdigest().upper()


def read_native_manifest(folder, mode, baseline_shas=None):
    root = Path(folder)
    m = json.loads((root / "native-encounter-build.json").read_text("utf-8-sig"))
    if (m.get("status") != "GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES"
        or m.get("collisionBlocker") is not None or m.get("unverifiedExtraFiles")
        or m.get("originalTrcolEntries") != 223
        or len(m.get("sourceFilesActuallyRead", [])) != 276
        or any(not x.get("verifiedByOriginalM2Manifest") for x in m["sourceFilesActuallyRead"])
        or m.get("traceCausalProfile") != PROFILE
        or m.get("levelABMode") != LEVELS[mode]
        or m.get("areaFilterABMode") != AREAS[mode]
        or m.get("crossoverABMode") != "baseline"):
        raise ValueError("Exact original 61+223 SHA / focused native mode evidence missing: " + mode)
    entries = {x["name"]: x for x in m["generated"]}
    if set(entries) != set(NAMES):
        raise ValueError("Five original .pkl outputs missing")
    sums = {}
    for name in NAMES:
        val = sha256(root / name)
        if val != entries[name]["sha256"]:
            raise ValueError("Native .pkl SHA mismatch: " + mode + "/" + name)
        sums[name] = val
    if baseline_shas:
        for name in NAMES[1:]:
            if sums[name] != baseline_shas[name]:
                raise ValueError("Focused A/B changed fixed or ordinary raid: " + mode + "/" + name)
    return sums


def load_events(path):
    out = []
    first = None
    last = None
    with Path(path).open("r", encoding="utf-8-sig") as f:
        for line in f:
            x = json.loads(line)
            if first is None: first = x
            if x.get("stage") == "trace_finished": last = x
            if x.get("stage") in ("wild_raw_candidate", "wild_weather_assigned",
                                  "wild_before_consolidate", "wild_after_consolidate",
                                  "wild_serialized", "wild_186_causal_absorb"):
                out.append(x)
    if (first is None or first.get("stage") != "trace_start"
        or first.get("focusedProfile") != PROFILE
        or first.get("source") != "SV_4_0_0_original_game_pkNX"
        or last is None or last.get("status") != "REAL_NATIVE_POINT_PROVENANCE_RECORDED_NOT_GAME_RUNTIME_PROVED"):
        raise ValueError("Incomplete or wrong-profile original focused trace")
    return out


def slot186(x):
    return (x.get("location") == 186 and x.get("crossFrom") == 176
            and x.get("species") in S186)


def serialized_counter(events):
    return Counter((int(x["species"]), int(x["form"]), int(x["gender"]),
                    int(x["minLevel"]), int(x["maxLevel"]), int(x["timeMask"]),
                    int(x["weatherMask"]))
                   for x in events if x.get("stage") == "wild_serialized" and slot186(x))


def raw313(events):
    return Counter((int(x["species"]), int(x["criteriaIndex"]), x["pointSource"],
                    int(x["pointIndex"]), x["sourceCollisionArea"], x["areaName"],
                    int(x["minLevel"]), int(x["maxLevel"]), int(x["timeMask"]),
                    int(x["form"]), int(x["gender"]))
                   for x in events if x.get("stage") == "wild_raw_candidate"
                   and x.get("location") == 158
                   and x.get("species") in (313, 314)
                   and x.get("criteriaIndex") in (110, 111, 112, 113)
                   and (x.get("minLevel"), x.get("maxLevel")) == (7, 60))


def close_causal_evidence(folders, traces, output):
    if set(folders) != set(MODES) or set(traces) != set(MODES):
        raise ValueError("Five original source-defined focused modes required")
    target = Path(output).resolve()
    for path in [*folders.values(), *traces.values()]:
        rp = Path(path).resolve()
        if target == rp or target.is_relative_to(rp):
            raise ValueError("Audit output cannot overwrite original source or trace")
    builds = {}
    events = {}
    for mode in MODES:
        builds[mode] = read_native_manifest(folders[mode], mode,
                                            builds["baseline"] if mode != "baseline" else None)
        events[mode] = load_events(traces[mode])
    src = {mode: serialized_counter(events[mode]) for mode in MODES}
    if not src["baseline"] or any(not src[mode] for mode in MODES):
        raise ValueError("186<-176 source trace is empty")

    lost4 = {}
    for mode in ("raw-min-only", "raw-max-only", "raw-both"):
        losses = src["baseline"] - src[mode]
        gains = src[mode] - src["baseline"]
        lost4[mode] = {"lost": sum(losses.values()), "gained": sum(gains.values()),
                       "species_lost": sorted({x[0] for x in losses})}
    if (lost4["raw-min-only"]["lost"] != 4
        or set(lost4["raw-min-only"]["species_lost"]) != LOSS4
        or lost4["raw-max-only"]["lost"] != 0
        or lost4["raw-max-only"]["gained"] != 0
        or lost4["raw-both"]["lost"] != 8):
        raise ValueError("Original 186<-176 4/0/8 true-serialized slot losses changed")

    # Cross-mode source candidates and real Absorb witnesses.
    row_changes = []
    for mode in ("baseline", "raw-min-only", "raw-max-only", "raw-both"):
        for x in events[mode]:
            if (x.get("stage") != "wild_weather_assigned" or not slot186(x)):
                continue
            row_changes.append({
                "mode": mode, "species": x["species"],
                "point_asset": x["sourcePointAsset"], "point_index": x["sourcePointIndex"],
                "source_collision_area": x["sourceCollisionArea"],
                "raw_min": x["pointRawMin"], "raw_max": x["pointRawMax"],
                "effective_min": x["effectivePointMin"], "effective_max": x["effectivePointMax"],
                "area_min": x["clippingMin"], "area_max": x["clippingMax"],
                "slot_min": x["minLevel"], "slot_max": x["maxLevel"],
                "time_mask": x["timeMask"], "weather_mask": x["weatherMask"],
            })
    if not row_changes:
        raise ValueError("Cannot link 186<-176 serialized slots to original point ordinals")

    # Native 158 source: #5046 is not unique. Original point #5072 and #5257
    # produce the same criteria, level and time before consolidation.
    before = raw313(events["baseline"])
    after = raw313(events["point5046-area"])
    points = defaultdict(set)
    for species, crit, asset, idx, area, storage, lo, hi, time, form, gender in before:
        if (asset == SOURCE and area == WORLDEND and storage == "a_su0108"
            and lo == 7 and hi == 60 and time == 9
            and ((species == 313 and crit in (110, 111))
                 or (species == 314 and crit in (112, 113)))):
            points[(species, crit)].add(idx)
    if any(not {5046, 5072, 5257}.issubset(points[(sp, cr)])
           for sp, cr in ((313, 110), (313, 111), (314, 112), (314, 113))):
        raise ValueError("Two real independent WorldEnd duplicate sources missing")

    diff = before - after
    newly = after - before
    if (newly or not diff or {key[3] for key in diff} != {5046}
        or {key[1] for key in diff} != {110, 111, 112, 113}):
        raise ValueError("One-point source-area switch did not isolate only #5046 raw candidates")
    if builds["baseline"][NAMES[0]] != builds["point5046-area"][NAMES[0]]:
        raise ValueError("One-point experiment changed final wild .pkl despite duplicate witnesses")

    target.mkdir(parents=True, exist_ok=True)
    file = target / "SV400_186_Original_Point_Spawner_Witnesses.csv"
    with file.open("w", newline="", encoding="utf-8-sig") as f:
        w = csv.DictWriter(f, fieldnames=list(row_changes[0]))
        w.writeheader()
        # Deduplicate repeated area-pair observational probes; preserve each
        # original point+criteria level tuple once for inspectable evidence.
        for row in dict.fromkeys(tuple(r.values()) for r in row_changes):
            w.writerow(dict(zip(row_changes[0], row)))
    dups = []
    for (sp, crit), ordinals in sorted(points.items()):
        for idx in sorted(ordinals):
            dups.append({"species": sp, "criteria_index": crit, "point_index": idx,
                         "source_asset": SOURCE, "source_collision_area": WORLDEND,
                         "raw_level": "1-99", "candidate_level": "7-60", "time_mask": 9,
                         "baseline_observations": sum(v for k,v in before.items()
                             if k[0]==sp and k[1]==crit and k[3]==idx),
                         "point5046_mode_observations": sum(v for k,v in after.items()
                             if k[0]==sp and k[1]==crit and k[3]==idx)})
    with (target / "SV400_158_313314_Duplicate_WorldEnd_Source_Points.csv").open(
            "w", newline="", encoding="utf-8-sig") as f:
        w=csv.DictWriter(f, fieldnames=list(dups[0]));w.writeheader();w.writerows(dups)
    report = {
        "status": "ORIGINAL_SV400_FOCUSED_186_MIN_AND_5046_DUPLICATE_CAUSAL_TRACE_NOT_GAME_LEGALITY",
        "provenance": "five separate original 61 M2 + 223 TRCOL SHA-verified native parser runs",
        "focus": "Location 186 CrossFrom 176 six species; Location 158 species 313/314 criteria 110-113",
        "lost_source_slots": lost4,
        "original_186_weather_candidate_evidence_rows": len(row_changes),
        "original_186_distinct_source_records": len({
            (x["point_asset"], x["point_index"], x["source_collision_area"])
            for x in row_changes}),
        "actual_186_absorb_events": {mode: sum(
            x["stage"] == "wild_186_causal_absorb" for x in events[mode])
            for mode in MODES},
        "point5046_original_raw_candidate_removals": sum(diff.values()),
        "point5046_independent_source_point_indices": sorted(
            set.union(*[points[x] for x in points])),
        "point5046_final_wild_pkl_sha_unchanged": True,
        "source_cautions": [
            "Preconsolidation candidate repetition is not serialized slot multiplicity.",
            "All traces and A/B are source-derived investigations, not Game PK9 RNG/legal encounter proof.",
            "Normal unmodified native exporter remains baseline and is never overwritten."
        ],
    }
    (target / "SV400_186_Min_Loss_5046_Duplicate_Causal_Manifest.json").write_text(
        json.dumps(report, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    return report


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--build", action="append", required=True,
                   help="MODE=directory of original generated five pkl + manifest")
    p.add_argument("--trace", action="append", required=True,
                   help="MODE=original compact focused native JSONL")
    p.add_argument("--output", type=Path, required=True)
    a = p.parse_args()
    builds = dict(v.split("=", 1) for v in a.build)
    traces = dict(v.split("=", 1) for v in a.trace)
    if len(builds) != len(a.build) or len(traces) != len(a.trace):
        raise ValueError("Every original native A/B mode must be supplied exactly once")
    result = close_causal_evidence(builds, traces, a.output)
    print(json.dumps(result, ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()
