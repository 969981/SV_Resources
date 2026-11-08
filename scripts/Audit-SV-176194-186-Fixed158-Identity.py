#!/usr/bin/env python3
"""Auditable SV 4.0.0 176/194 level-bleed and WorldEnd-158 identity diagnostics.

Consumes ONLY the successful actual original 61+223 SHA-verified Actions
#42381948798 evidence; never rewrites game inputs or PKHeX legality data.
Provenance and evidence gates are intentionally strict: source changes require
an explicitly separately reviewed, newly pinned research experiment.
"""
from __future__ import annotations
import argparse
from collections import Counter, defaultdict
import csv
import hashlib
import json
from pathlib import Path

EVIDENCE_RUN = 42381948798
PKHEX = "0660d1e1f4924b8478daec73281bb8071a82ad19"
AB_SHA = "946755EB0B52F746C6309B97D5EB24982F1B4DDF736C43190E5EE0CC0F83EC80"
FIXED_SHA = "88E34659C1495E5CAC917FA3C80D7E4432D40EA2F5326DCA9349B0FA08B5719C"
FIXED_EVENTS_SHA = "9769CE2962EBA493264C42D75BD6C7DE0B058FE890315C1747C9EB0C4D74BBFA"
WORLDEND_TRCOL_SHA = "3515DC545D102FE824EB4162637CA04F28446DE27FF25F3070A433504AF5A944"
SOURCE_STATUS = "ORIGINAL_SV400_SOURCE_IDENTITY_DIAGNOSTICS_NOT_GAME_LEGALITY"
NO_ROM_REQUIRED = True


def sha256(p: Path) -> str:
    h = hashlib.sha256()
    with p.open("rb") as stream:
        for block in iter(lambda: stream.read(1024 * 1024), b""):
            h.update(block)
    return h.hexdigest().upper()


def load_json(p: Path) -> dict:
    return json.loads(p.read_text(encoding="utf-8-sig"))


def load_csv(p: Path) -> list[dict[str, str]]:
    with p.open(newline="", encoding="utf-8-sig") as stream:
        return list(csv.DictReader(stream))


def checked_sha(p: Path, expected: str, purpose: str) -> None:
    if not p.is_file() or sha256(p) != expected:
        raise ValueError(f"{purpose}: missing or modified original Actions evidence: {p}")


def classify_level_rows(rows: list[dict], report: dict) -> dict:
    """Respect record multiplicity, including crossover 186/176 losses."""
    scores = {item["mode"]: item for item in report["reference_parity_comparison"]}
    raw = scores["terarium-176-194-raw-point-levels"]
    baseline = scores["baseline"]
    if (report["status"] != "ACTUAL_ORIGINAL_SV400_ISOLATED_NATIVE_WILD_LEVEL_AB_REFERENCE_DIAGNOSTICS"
            or report["reference_commit"] != PKHEX
            or report["source"] != "SHA_VERIFIED_ORIGINAL_SV_4_0_0_M2_61_PLUS_223_TRCOL"
            or report["changed_rows_count"] != 92
            or len(rows) != 92
            or baseline["matched_occurrences"] != 389
            or raw["matched_occurrences"] != 431
            or not raw["wild_non_target_unchanged"]
            or not raw["fixed_and_3_raids_SHA_match_original"]):
        raise ValueError("Cannot prove source-attested original 176/194 A/B baseline")
    locations = defaultdict(lambda: Counter())
    identity_deltas = Counter()
    row_details = []
    for row in rows:
        if row["mode"] != "terarium-176-194-raw-point-levels":
            raise ValueError("Unexpected source experiment mode")
        loc, cross = int(row["location_id"]), int(row["cross_from_id"])
        if (loc, cross) not in {(176, 0), (194, 176), (186, 176)}:
            raise ValueError("Unexpected non-target location or crossover change")
        native, variant = int(row["native_baseline_count"]), int(row["variant_count"])
        reference = int(row["pkhex_pinned_reference_count"])
        delta = variant - native
        if min(native, variant, reference) < 0 or delta != int(row["delta"]) or delta == 0:
            raise ValueError("Bad original counted Gen9 wild slot delta")
        gained = max(min(variant, reference) - min(native, reference), 0)
        lost = max(min(native, reference) - min(variant, reference), 0)
        key = (loc, cross, row["species_national"], row["form_raw"], row["gender_raw"],
               row["time_forbidden_mask"], row["weather_allowed_mask"])
        identity_deltas[key] += delta
        counters = locations[(loc, cross)]
        counters["gained"] += gained
        counters["lost"] += lost
        counters["added_native_occurrences"] += max(delta, 0)
        counters["removed_native_occurrences"] += max(-delta, 0)
        counters["rows"] += 1
        row_details.append({
            "location_id": loc, "cross_from_id": cross,
            "species_national": int(row["species_national"]),
            "form": int(row["form_raw"]), "gender": int(row["gender_raw"]),
            "level_min": int(row["level_min"]), "level_max": int(row["level_max"]),
            "baseline_count": native, "raw_count": variant, "reference_count": reference,
            "source_count_change": delta, "reference_match_gained": gained,
            "reference_match_lost": lost,
        })
    if any(identity_deltas.values()):
        raise ValueError("Raw A/B illegally changes more than level intervals")
    grouped = [dict(location_id=loc, cross_from_id=cross, **{k:int(v) for k,v in c.items()},
                    net_reference_match=c["gained"]-c["lost"])
               for (loc, cross), c in sorted(locations.items())]
    expected = {(176, 0): (25, 0, 38), (194, 176): (25, 0, 38), (186, 176): (0, 8, 16)}
    if set(locations) != set(expected) or any(
            (locations[k]["gained"], locations[k]["lost"], locations[k]["rows"]) != v
            for k, v in expected.items()):
        raise ValueError("Actual original 176/194/186 cross-zone results changed")
    if sum(c["gained"]-c["lost"] for c in locations.values()) != raw["matched_occurrences"]-baseline["matched_occurrences"]:
        raise ValueError("Original reference multiset score cannot be reconstructed")
    return {
        "by_location_and_cross_from": grouped,
        "baseline_reference_matches": baseline["matched_occurrences"],
        "actual_raw_point_reference_matches": raw["matched_occurrences"],
        "counterfactual_hybrid_reference_matches": baseline["matched_occurrences"] + 50,
        "counterfactual_hybrid_note": "439 is a binary-record postselection upper diagnostic, NOT a new game-native .pkl, and NOT a legal encounter rule.",
        "affected_distinct_slot_rows": len(rows),
        "affected_slot_occurrences": sum(max(int(r["delta"]), 0) + max(-int(r["delta"]), 0) for r in rows),
        "details": row_details,
    }


def normalized_symbols(row: dict) -> tuple[tuple[str, str, int], ...]:
    symbols = json.loads(row["source_symbols_json"])
    if not symbols or any(len(x)!=3 for x in symbols):
        raise ValueError("Fixed source 4.0.0 TableKey identities missing")
    return tuple(sorted(set((str(x[0]),str(x[1]),int(x[2])) for x in symbols)))


def fixed_fingerprint(row: dict) -> tuple:
    """Only fields *actually* present in source report; not a PKHeX 20B identity."""
    return (int(row["species_national"]), int(row["level"]), row["original_locations"], normalized_symbols(row))


def contradiction_groups(rows: list[dict]) -> list[dict]:
    by_identity = defaultdict(list)
    for row in rows:
        by_identity[fixed_fingerprint(row)].append(row)
    contradictions = []
    for ident, cases in by_identity.items():
        labels = {item["source_group"] for item in cases}
        if "MATCHED_TO_REFERENCE_LOSS" in labels and "NATIVE_ONLY_TO_MATCHED" in labels:
            contradictions.append({
                "species_national": ident[0], "level": ident[1],
                "original_locations": ident[2],
                "original_symbol_keys": [list(v) for v in ident[3]],
                "case_numbers": sorted(int(c["case"]) for c in cases),
                "row_outcomes": sorted(labels),
                "warning": "Same complete observed source fingerprint has opposed reference-only labels. Must resolve original fixed 20-byte serialized fields and multiset ordinals.",
            })
    return sorted(contradictions, key=lambda x:(x["species_national"],x["level"]))


def classify_fixed_rows(rows: list[dict], events: Path, manifest: dict) -> dict:
    if (manifest["status"] != "SOURCE_VERIFIED_SV400_WORLDEND_AREAINFO_TRCOL_PER_FIXED_KEY_NOT_GAME_RNG"
            or manifest["cases_linked"] != 236 or len(rows) != 236
            or manifest["fixed_wander_worldend_events_verified"] != 512
            or manifest["primary_tablekeys_with_missing_source"] != 0
            or manifest["source_collision_kinds"] != {"HAVOK_TRCOL": 512}
            or manifest["strict_contains_counts"] != {"True": 512}
            or manifest["distinct_collision_sources"][0]["sha256"] != WORLDEND_TRCOL_SHA):
        raise ValueError("Original 4.0.0 WorldEnd 158 source/collision baseline not validated")
    keys = set()
    for row in rows:
        keys.update(normalized_symbols(row))
    event_seen = defaultdict(Counter)
    started = finished = False
    with events.open(encoding="utf-8-sig") as stream:
        for line in stream:
            if not line.strip():
                continue
            ev = json.loads(line)
            stage = ev.get("stage")
            if stage == "trace_start":
                started = bool(ev.get("fixedOnly"))
            if stage == "trace_finished":
                finished = ev.get("status") == "REAL_NATIVE_POINT_PROVENANCE_RECORDED_NOT_GAME_RUNTIME_PROVED"
            if stage not in ("fixed_primary", "fixed_wander", "fixed_serialized", "fixed_serialized_adjusted"):
                continue
            key = str(ev["game"]),str(ev["tableKey"]),int(ev["tableIndex"])
            if key not in keys:
                continue
            if stage == "fixed_primary":
                event_seen[key]["primary"] += 1
            if stage == "fixed_wander" and ev["targetArea"] == "subarea_su01worldend" and ev["targetLocation"] == 158:
                origin = ev["targetCollisionOrigin"]
                if (origin.get("CollisionKind") != "HAVOK_TRCOL"
                        or origin.get("TrcolSha256") != WORLDEND_TRCOL_SHA
                        or not ev.get("targetStrictContains", False)
                        or str(ev.get("targetAreaTag")) != "None"
                        or str(ev.get("targetAreaType")) != "Field"):
                    raise ValueError("Actual original WorldEnd TRCOL provenance/strict collision changed")
                event_seen[key]["worldend"] += 1
            if stage.startswith("fixed_serialized"):
                event_seen[key]["serialized"] += 1
    if not started or not finished or any(
            event_seen[k]["primary"] == 0 or event_seen[k]["worldend"] == 0 or event_seen[k]["serialized"] == 0
            for k in keys):
        raise ValueError("Incomplete original FixedSymbol source-side identity trace")
    conflicts = contradiction_groups(rows)
    if len(conflicts) != 4 or sum(len(x["case_numbers"]) for x in conflicts) != 8:
        raise ValueError("Original 4.0.0 opposed fixed-row fingerprint count changed")
    outcomes = Counter(row["source_group"] for row in rows)
    if outcomes != {"MATCHED_TO_REFERENCE_LOSS":46, "NATIVE_ONLY_TO_MATCHED":189,
                    "ROW_MATCHED_BOTH_MULTIPLICITY_AMBIGUOUS":1}:
        raise ValueError("Original fixed multiset counterfactual drift")
    by_family = Counter((r["tablekey_class"],r["source_group"]) for r in rows)
    return {
        "cases":len(rows),"original_source_key_triplets":len(keys),
        "original_worldend_events":manifest["fixed_wander_worldend_events_verified"],
        "source_unique_collision_sha256":WORLDEND_TRCOL_SHA,
        "observed_row_labels":dict(outcomes),
        "opposed_labels_same_observed_source_identity_groups":conflicts,
        "opposed_label_groups":len(conflicts),
        "opposed_label_rows":sum(len(c["case_numbers"]) for c in conflicts),
        "family_row_label_counts":[{"family":f,"row_label":label,"count":n}
                                   for (f,label),n in sorted(by_family.items())],
        "source_proven_keep_158":[],
        "reason_no_source_proven_keep": "Reference multiset row labels lack full 20B identity and runtime fixed activation / movement / encounter PK9 proof.",
        "status":"OBSERVED_TABLEKEY_IDENTITY_CONTRADICTIONS_REQUIRES_FULL_FIXED_BYTES_AND_GAMEPLAY_PROOF",
    }


def write_csv(path: Path, rows: list[dict]):
    with path.open("w",newline="",encoding="utf-8-sig") as stream:
        if not rows:
            raise ValueError("Refuse empty audit export")
        writer = csv.DictWriter(stream,fieldnames=list(rows[0]),lineterminator="\n")
        writer.writeheader();writer.writerows(rows)


def audit(ab_csv: Path, ab_report: Path, fixed_csv: Path, fixed_events: Path,
          fixed_manifest: Path, output: Path) -> dict:
    paths = [Path(p).resolve() for p in (ab_csv,ab_report,fixed_csv,fixed_events,fixed_manifest)]
    output=Path(output).resolve()
    for p in paths:
        if output==p or output==p.parent or output.is_relative_to(p.parent):
            raise ValueError("Do not write to original evidence directory")
    checked_sha(paths[0],AB_SHA,"Native 176/194 source delta")
    checked_sha(paths[2],FIXED_SHA,"Native WorldEnd 236 source cases")
    checked_sha(paths[3],FIXED_EVENTS_SHA,"Original fixed-only JSONL trace")
    fixed_manifest_data=load_json(paths[4])
    if (fixed_manifest_data["original_fixed_only_trace_sha256"]!=sha256(paths[3])
            or fixed_manifest_data["original_236_case_csv_sha256"]!="86048F5C742B6E27B0E8CE8D67306537FFDBED9E0A9BF9684C488D5C406EFC74"):
        # source case CSV is the *input* to the collision verifier, not its 236-row output.
        # The output proof CSV is pinned separately above; these are different layers.
        raise ValueError("Original fixed collision manifest attestation differs from input bytes")
    ab=classify_level_rows(load_csv(paths[0]),load_json(paths[1]))
    fixed=classify_fixed_rows(load_csv(paths[2]),paths[3],fixed_manifest_data)
    result={
        "status":SOURCE_STATUS,
        "source_run_id":EVIDENCE_RUN,
        "pinned_pkhex_commit":PKHEX,
        "evidence_input_sha256":{p.name:sha256(p) for p in paths},
        "level_ab":{k:v for k,v in ab.items() if k!="details"},
        "fixed_158":fixed,
        "limits":[
            "439 matches is only post-selection counterfactual; 431 is the true original-game raw-level variant result.",
            "Fixed source identity contradiction uses observed fields, not the original complete 20B fixed template identity.",
            "The 47 multiset fixed losses do not identify 47 unique runtime encounters.",
            "Game runtime Area/Flag/PK9 PID EC IV shiny legality is not verified.",
            "Never patch PKHeX reference or source encounter generator based on a better reference score alone.",
        ],
    }
    output.mkdir(parents=True,exist_ok=True)
    (output/"SV400_176194_186_Fixed158_Identity_Audit.json").write_text(
        json.dumps(result,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    write_csv(output/"SV400_176194_186_Original_Level_AB_Changed_Slots.csv",ab["details"])
    print(json.dumps({"status":SOURCE_STATUS,
                      "levels":ab["by_location_and_cross_from"],
                      "fixed_contradictions":fixed["opposed_label_groups"]},ensure_ascii=False))
    return result


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    for arg in ("ab-csv","ab-report","fixed-csv","fixed-events","fixed-manifest","output"):
        ap.add_argument("--"+arg,required=True,type=Path)
    ns=ap.parse_args()
    audit(ns.ab_csv,ns.ab_report,ns.fixed_csv,ns.fixed_events,ns.fixed_manifest,ns.output)

if __name__=="__main__":
    main()