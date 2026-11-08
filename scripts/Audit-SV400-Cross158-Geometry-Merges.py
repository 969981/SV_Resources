#!/usr/bin/env python3
"""Source-gated SV 4.0.0 CrossFrom=158 native-collision and six-interval audit.

A location-to-location area-pair probe is NOT a unique point or a valid game
encounter. PKHeX reference equality is a diagnostic, NOT runtime legality.
"""
from __future__ import annotations

import argparse
from collections import Counter, defaultdict
import csv
import hashlib
import json
from pathlib import Path

PIN_NATIVE_SHA = "A59709B5CF49B12AD147F022E29F8E7DC793299F1A568FAB2D779FC36DD80E34"
PIN_COMMIT = "0660d1e1f4924b8478daec73281bb8071a82ad19"
TARGETS = {(140, 158, 163), (140, 158, 532), (158, 0, 129),
           (158, 0, 313), (158, 0, 314), (158, 0, 744)}
STATUS = "ORIGINAL_SV400_CROSS158_COLLIDER_PAIR_AND_SIX_ABSORB_AUDIT_NOT_RUNTIME_LEGALITY"


def digest(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for block in iter(lambda: f.read(1 << 20), b""):
            h.update(block)
    return h.hexdigest().upper()


def source_counts(native_csv: Path, *, strict=True):
    if strict and digest(native_csv) != PIN_NATIVE_SHA:
        raise ValueError("Original source-verifiable native bridge CSV SHA drift")
    counts = defaultdict(Counter)
    with native_csv.open(encoding="utf-8-sig", newline="") as file:
        reader = csv.DictReader(file)
        required = {"source_table", "location_id", "cross_from_id", "reference_match"}
        if not required.issubset(reader.fieldnames or ()):
            raise ValueError("Native bridge columns changed")
        for row in reader:
            if row["source_table"] != "wild" or row["cross_from_id"] != "158":
                continue
            status = row["reference_match"]
            if status not in {"ONLY_IN_NATIVE_GENERATION", "SAME_AS_PINNED_PKHEX"}:
                raise ValueError("Unrecognized reference status for CrossFrom=158")
            counts[int(row["location_id"])][status] += 1
    counts = {k: dict(v) for k, v in sorted(counts.items())}
    if strict and (sum(v.get("ONLY_IN_NATIVE_GENERATION", 0) for v in counts.values()),
                   sum(v.get("SAME_AS_PINNED_PKHEX", 0) for v in counts.values())) != (2337, 808):
        raise ValueError("Original CrossFrom=158 2337/808 counts changed")
    return counts


def verify_bridge(manifest: Path, *, strict=True):
    obj = json.loads(manifest.read_text(encoding="utf-8-sig"))
    p = obj.get("provenance", {})
    if strict and (obj.get("status") != "NATIVE_SOURCE_VERIFIED_PKHEX_BINARY_COMPATIBLE_NOT_FULL_LEGALITY_PARITY"
                   or obj.get("pkhex_pinned_commit") != PIN_COMMIT
                   or p.get("original_source_entries") != 61
                   or p.get("original_collision_entries") != 223
                   or p.get("consumed_input_files") != 276):
        raise ValueError("Original 61+223 ROM/pkNX bridge provenance missing")
    return obj


def audit_events(events_path: Path):
    pair_rows = []
    merges = Counter()
    merge_steps = []
    start = finish = False
    with events_path.open(encoding="utf-8-sig") as f:
        for line in f:
            if not line.strip():
                continue
            obj = json.loads(line)
            stage = obj.get("stage")
            if stage == "trace_start":
                start = obj.get("source") == "SV_4_0_0_original_game_pkNX" and not obj.get("fixedOnly")
            elif stage == "trace_finished":
                finish = obj.get("status") == "REAL_NATIVE_POINT_PROVENANCE_RECORDED_NOT_GAME_RUNTIME_PROVED"
            elif stage == "wild_cross158_area_pair":
                if obj.get("sourceLocation") != 158 or obj.get("fieldIndex") != "Kitakami":
                    raise ValueError("Non-Kitakami source in CrossFrom=158 original area probe")
                strict = int(obj["strictHits"])
                tolerated = int(obj["tolerantHits"])
                total = int(obj["sourceLocalCount"])
                origins = obj["acceptedSourceCollisionAreas"]
                if not (0 <= strict <= tolerated <= total and
                        obj["toleranceOnlyHits"] == tolerated-strict and
                        sum(origins.values()) == tolerated):
                    raise ValueError("Strict/30f original collider area-pair counts inconsistent")
                if len(obj.get("sampleAcceptedPoints", [])) > 8:
                    raise ValueError("Unbounded original PointData sample trace")
                for field in ("sourceLookupCollider", "targetCollider"):
                    origin = obj.get(field)
                    if not isinstance(origin, dict) or not origin.get("TrscnPath"):
                        raise ValueError("Original collision TRSCN attribution missing: " + field)
                    if origin.get("CollisionKind") == "HAVOK_TRCOL" and (
                        len(origin.get("TrcolSha256", "")) != 64 or not origin.get("TrcolPath")
                    ):
                        raise ValueError("Original Havok TRCOL SHA attribution missing")
                pair_rows.append(obj)
            elif stage == "wild_six_group_absorb":
                key = (int(obj["location"]), int(obj["crossFrom"]), int(obj["species"]))
                if key not in TARGETS:
                    raise ValueError("Unexpected wild merge identity in pinned six groups")
                left_min, left_max = int(obj["leftMin"]), int(obj["leftMax"])
                right_min, right_max = int(obj["rightMin"]), int(obj["rightMax"])
                if (int(obj["resultMin"]) != min(left_min, right_min) or
                    int(obj["resultMax"]) != max(left_max, right_max)):
                    raise ValueError("Absorb level-range witness cannot be reproduced")
                if obj["actualOverlap"] != (left_max >= right_min and right_max >= left_min):
                    raise ValueError("Absorb overlap classification drift")
                merges[key] += 1
                merge_steps.append(obj)
    if not start or not finish:
        raise ValueError("Original traced native build incomplete")
    if not pair_rows:
        raise ValueError("No actual CrossFrom=158 source collider area-pair events found")
    if not merge_steps:
        raise ValueError("No original six-group Absorb merge events found")
    return pair_rows, merges, merge_steps


def combine(counts, pairs, merges):
    probed = defaultdict(lambda: {"pairs": 0, "strict": 0, "tolerated": 0,
                                   "extra": 0, "original_source_collision_areas": set()})
    for obj in pairs:
        dest = int(obj["targetLocation"])
        d = probed[dest]
        d["pairs"] += 1
        d["strict"] += obj["strictHits"]
        d["tolerated"] += obj["tolerantHits"]
        d["extra"] += obj["toleranceOnlyHits"]
        d["original_source_collision_areas"].update(obj["acceptedSourceCollisionAreas"])
    result = []
    for dest in sorted(set(counts) | set(probed)):
        c = counts.get(dest, {})
        p = probed[dest]
        same = c.get("SAME_AS_PINNED_PKHEX", 0)
        only = c.get("ONLY_IN_NATIVE_GENERATION", 0)
        result.append({
            "target_location": dest,
            "native_only_slots_cross158": only,
            "reference_matching_slots_cross158": same,
            "reference_status": "MIXED" if same and only else ("ALL_NATIVE_ONLY" if only else "ALL_MATCHED"),
            "original_area_pair_probes": p["pairs"],
            "original_30f_point_area_pair_hits": p["tolerated"],
            "strict_zero_tolerance_point_area_pair_hits": p["strict"],
            "30f_only_point_area_pair_hits": p["extra"],
            "original_source_collision_areas": ";".join(sorted(p["original_source_collision_areas"])),
        })
    return result


def write_report(counts, pairs, merges, steps, dest: Path, native_sha: str):
    dest.mkdir(parents=True, exist_ok=True)
    rows = combine(counts, pairs, merges)
    name = "SV400_Cross158_Original_AreaPair_30f_vs_Strict.csv"
    with (dest/name).open("w", encoding="utf-8-sig", newline="") as f:
        writer = csv.DictWriter(f, fieldnames=list(rows[0]))
        writer.writeheader()
        writer.writerows(rows)
    report = {
        "status": STATUS, "native_original_sha256": native_sha,
        "pkhex_pinned_commit": PIN_COMMIT,
        "source_original": "61 raw source files + 223 original TRCOL; not gameplay runtime",
        "native_only_cross158": sum(r["native_only_slots_cross158"] for r in rows),
        "already_reference_matching_cross158": sum(r["reference_matching_slots_cross158"] for r in rows),
        "collider_area_pair_probe_count": len(pairs),
        "six_interval_group_absorb_observation_count": sum(merges.values()),
        "six_interval_group_absorb_by_identity": [
            {"location": k[0], "crossFrom": k[1], "species": k[2], "merge_steps": merges[k]}
            for k in sorted(TARGETS)
        ],
        "warnings": [
            "Area-pair probe hits repeat whenever the same source point is checked against several collision areas; do not call them unique points or PKHeX slots.",
            "30f-only contains observations diagnose geometry sensitivity, not a game-runtime legality rule.",
            "Location 158 reference-matching records must not be deleted by a blanket workaround.",
            "Some broad wild intervals exist before final Consolidate; source spawn and parent-area assignment also require attribution.",
        ],
    }
    (dest/"SV400_Cross158_Source_Collider_and_Merge_Manifest.json").write_text(
        json.dumps(report, ensure_ascii=False, indent=2)+"\n", encoding="utf-8")
    with (dest/"SV400_Six_Original_Interval_Absorb_Witnesses.jsonl").open("w", encoding="utf-8") as f:
        for obj in steps:
            f.write(json.dumps(obj, ensure_ascii=False, separators=(",", ":"))+"\n")
    return report


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--native-csv", type=Path, required=True)
    p.add_argument("--bridge", type=Path, required=True)
    p.add_argument("--events", type=Path, required=True)
    p.add_argument("--output", type=Path, required=True)
    a = p.parse_args()
    sources = (a.native_csv, a.bridge, a.events)
    out = a.output.resolve()
    if any(out == x.parent.resolve() or out.is_relative_to(x.parent.resolve()) for x in sources):
        raise ValueError("Never write an output inside an original input evidence directory")
    verify_bridge(a.bridge)
    counts = source_counts(a.native_csv)
    pairs, merges, steps = audit_events(a.events)
    report = write_report(counts, pairs, merges, steps, out, digest(a.native_csv))
    if report["native_only_cross158"] != 2337 or report["already_reference_matching_cross158"] != 808:
        raise ValueError("Original pinned 158 source counts drifted")
    print(json.dumps({"status": STATUS, "area_pairs": len(pairs),
                      "six_merge_steps": len(steps), "locations": len(counts)}))


if __name__ == "__main__":
    main()
