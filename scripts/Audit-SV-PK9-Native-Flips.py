#!/usr/bin/env python3
"""Audit actual SV 4.0.0 native-vs-reference PKHeX PK9 verdicts.

Consumes THREE pinned GitHub Actions ZIP artifacts. This is not a legality
rule patch: it verifies original source SHA, native five-table injection,
identical synthetic PK9 SHA, and encounter-class changes (not just Valid).
Never publishes source .pkl, .trcol or generated .pk9 files.
"""
from __future__ import annotations
import argparse
from collections import Counter
import csv
import hashlib
import io
import json
from pathlib import Path
from zipfile import ZipFile

NAMES = {
    "original": "SV-400-actual-native-pkhex-comparison",
    "forensics": "SV-400-original-PKHeX-native-delta-forensics",
    "pk9": "SV-400-genuine-PKHeX-two-build-PK9-legality",
}
CATEGORIES = {
    "fixed_added_location_158": 32,
    "wild_kitakami_native_only_crossover": 32,
    "wild_native_new_max_level": 24,
}

def member(z: ZipFile, suffix: str) -> bytes:
    names = [n for n in z.namelist() if n == suffix or n.endswith("/" + suffix)]
    if len(names) != 1:
        raise ValueError(f"Expected exactly one {suffix}; found {len(names)}")
    return z.read(names[0])

def doc(z: ZipFile, suffix: str) -> dict:
    return json.loads(member(z, suffix).decode("utf-8-sig"))

def csvrows(z: ZipFile, suffix: str) -> list[dict]:
    return list(csv.DictReader(io.StringIO(member(z, suffix).decode("utf-8-sig"))))

def check(cond: bool, reason: str) -> None:
    if not cond:
        raise ValueError(reason)

def audit(original: Path, forensics: Path, pk9: Path) -> tuple[dict, list[dict]]:
    for path in (original, forensics, pk9):
        check(path.is_file(), f"Missing original Actions artifact: {path}")
    with ZipFile(original) as game, ZipFile(forensics) as classification, ZipFile(pk9) as legality:
        built = doc(game, "native-encounter-build.json")
        comparison = doc(game, "native-comparison.json")
        collisions = doc(game, "encounter-trcol-extraction.json")
        breakdown = doc(classification, "sv-400-native-delta-diagnosis.json")
        result = doc(legality, "verdict-differences.json")
        stage = doc(legality, "embedded-proof.json")
        fixtures = doc(legality, "delta-source-proof.json")

        check(built.get("status") == "GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES"
              and built.get("collisionBlocker") is None, "Unverified original native encounter build")
        check(built.get("originalTrcolEntries") == 223 and
              collisions.get("status") == "TRCOL_ORIGINAL_SHA256_VERIFIED" and
              collisions.get("unique_trcol_paths") == 223, "223 original .trcol dependencies not closed")
        check(comparison.get("all_generated_from_native_not_reference") is True,
              "Original native build used reference as input")
        check(breakdown.get("native_build_status") == built["status"] and
              breakdown.get("status") == "ACTUAL_NATIVE_SHA_VERIFIED_DIFF_CLASSIFIED_NOT_YET_FIXED",
              "Classification not sourced from the same original build")
        check(stage.get("status") == "FIVE_NATIVE_GEN9_TABLES_EMBEDDED_IN_ISOLATED_PKHEX" and
              stage.get("source") == "SV-4.0.0-original-TRPFD-TRPFS", "Five table injection not attested")
        products = {x["name"]: x for x in built["generated"]}
        injections = {x["name"]: x for x in stage["resources"]}
        check(len(products) == 5 and products.keys() == injections.keys(), "Native PKHeX resource list differs")
        for name, prod in products.items():
            raw = member(game, name)
            sha = hashlib.sha256(raw).hexdigest().upper()
            check(len(raw) == prod["bytes"] and sha == prod["sha256"] == injections[name]["native_sha256"],
                  f"Original native .pkl SHA mismatch: {name}")
        for table, name in (("fixed", "encounter_fixed_paldea.pkl"),
                            ("wild", "encounter_wild_paldea.pkl")):
            check(comparison["tables"][table]["native_sha256"] == products[name]["sha256"],
                  f"Original compare SHA mismatch: {table}")
        check(result.get("status") == "REAL_PKHEX_LEGALITYANALYSIS_REFERENCE_VS_NATIVE_EMBEDDED_COMPARED"
              and result.get("official_pk9_compared") >= 6 and
              result.get("changed_official_pk9") == 0, "Independent official PK9 control failed")
        check(fixtures.get("status") == "NATIVE_PKNX_DIFF_SOURCE_PK9_FIXTURES_NOT_GAME_CAPTURED",
              "PK9 provenance is not identified as synthetic")
        cases = result["targeted_native_delta_case_differences"]
        sources = fixtures["cases"]
        check(len(cases) == 88 == len(sources) == result["targeted_native_delta_pk9_compared"],
              "88 original differential PK9 are missing")
        by_name = {x["name"]: x for x in sources}
        check(len(by_name) == len(sources) == len({x['name'] for x in cases}), "Duplicate PK9 case names")
        rows = []
        for case in cases:
            name = case["name"]
            src = by_name.get(name)
            check(src is not None and src["sha256"] == case["sha256"]
                  and all(src[k] == case[k] for k in ("species", "metLocation", "metLevel")),
                  f"Source-generated PK9 SHA or identity mismatch: {name}")
            check(case["category"] in CATEGORIES and src["category"] == case["category"],
                  f"Unrecognized PK9 source category: {name}")
            old, new = case["reference_valid"], case["native_valid"]
            a, b = case["reference_encounter_type"], case["native_encounter_type"]
            verdict = "reference_rejected_native_valid" if not old and new else (
                "reference_valid_native_rejected" if old and not new else (
                    "both_valid_different_encounter_class" if old and new and a != b else (
                        "both_valid_same_encounter_class" if old and new else "both_invalid")))
            rows.append({
                "name": name, "family": case["category"], "pk9_sha256": case["sha256"],
                "species": case["species"], "met_location": case["metLocation"],
                "met_level": case["metLevel"], "reference_valid": old,
                "native_valid": new, "reference_encounter_type": a,
                "native_encounter_type": b, "classification": verdict,
                "source": src["pk9Source"],
            })
        check({k: sum(x["family"] == k for x in rows) for k in CATEGORIES} == CATEGORIES,
              "Unexpected per-category specimen counts")
        counts = Counter(x["classification"] for x in rows)
        flips = counts["reference_rejected_native_valid"] + counts["reference_valid_native_rejected"]
        check(flips == result["targeted_native_delta_verdict_flips"], "Verdict flip count does not match run")

        nat_wild = csvrows(game, "wild_native_only.csv")
        ref_wild = csvrows(game, "wild_pkhex_only.csv")
        nat_fixed = csvrows(game, "fixed_native_only.csv")
        ref_fixed = csvrows(game, "fixed_pkhex_only.csv")
        check((len(nat_wild), len(ref_wild), len(nat_fixed), len(ref_fixed)) == (3655,676,203,203),
              "Native-original encounter delta CSV record counts have changed")
        c158 = sum(int(x["cross_from_id"]) == 158 for x in nat_wild)
        l158 = sum(int(x["location_id"]) == 158 for x in nat_wild)
        c156 = sum(int(x["location_id"]) == 156 and int(x["cross_from_id"]) == 158 for x in nat_wild)
        c158ref = sum(int(x["cross_from_id"]) == 158 for x in ref_wild)
        c156ref = sum(int(x["location_id"]) == 156 and int(x["cross_from_id"]) == 158 for x in ref_wild)
        f158 = sum(any(int(x[f"location{i}"]) == 158 for i in range(4)) for x in nat_fixed)
        check(c158 > 0 and c156 > 0 and f158 >= 191,
              "Original location-158 signature no longer reproduces")
        check(breakdown["fixed"]["matched_with_new_location_158"] == 191,
              "Independent fixed-location evidence changed")
        groups = {}
        for key in CATEGORIES:
            subset = [x for x in rows if x["family"] == key]
            groups[key] = dict(Counter(x["classification"] for x in subset))
        check(flips == 24 and counts["reference_valid_native_rejected"] == 0,
              "Fixed baseline 24 verdict flips changed; rerun/review expected before publishing")
        report = {
            "status": "ACTUAL_SHA_ATTESTED_PK9_VERDICT_ROOT_CAUSE_TRIAGE_NOT_RUNTIME_PROOF",
            "runs": {"native": 42336889324, "forensics": 42351493782, "pk9": 42352435765},
            "pkhex_source": result["pkhexSource"],
            "native_generated_sha256": {k:v["sha256"] for k,v in sorted(products.items())},
            "verified_collision_trcol": built["originalTrcolEntries"],
            "official_pk9_controls": result["official_pk9_compared"],
            "official_pk9_changed": result["changed_official_pk9"],
            "candidate_count": len(rows), "verdict_flips": flips,
            "overall_classifications": dict(counts), "by_family": groups,
            "wild_delta": {"native_only": len(nat_wild), "reference_only": len(ref_wild),
                           "native_cross_from_158": c158, "reference_cross_from_158": c158ref,
                           "native_location_158": l158,
                           "native_location_156_cross_from_158": c156,
                           "reference_location_156_cross_from_158": c156ref},
            "fixed_delta": {"native_only": len(nat_fixed), "reference_only": len(ref_fixed),
                            "matched_new_location_158": breakdown["fixed"]["matched_with_new_location_158"],
                            "raw_native_rows_containing_location_158": f158},
            "investigation": [
                "Audit pkNX EncounterDumperSV 30f XYZ tolerance and IsCrossoverAllowed policy on native collision geometry.",
                "Trace location 158 <- collision subarea -> nearby spawn points; compare 0/10/30 tolerance only in isolated diagnostic builds.",
                "Investigate valid-but-different encounter-class matches; matching Valid=true alone hides alternate wildcard matches.",
                "Capture independent genuine SV 4.0.0 PK9 encounters with location/level and determine PID EC shiny RNG separately.",
            ],
            "limitations": ["All 88 targeted PK9 were generated from original-game encounter templates, not real captured Pokémon.",
                            "A reference-vs-native PKHeX verdict flip shows database sensitivity, not that the game can create the specimen.",
                            "No TRCOL geometry modification or PKHeX legality policy change was applied."],
        }
        return report, rows

def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    for flag in ("original-zip", "forensics-zip", "pk9-zip", "output"):
        p.add_argument("--" + flag, required=True, type=Path)
    args = p.parse_args()
    report, rows = audit(args.original_zip, args.forensics_zip, args.pk9_zip)
    args.output.mkdir(parents=True, exist_ok=True)
    (args.output/"sv-400-pk9-verdict-root-cause-audit.json").write_text(
        json.dumps(report, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    with (args.output/"sv-400-pk9-cases.csv").open("w", encoding="utf-8-sig", newline="") as fp:
        writer = csv.DictWriter(fp, rows[0].keys(), lineterminator="\n")
        writer.writeheader(); writer.writerows(rows)
    print(json.dumps({k:v for k,v in report.items() if k in ("status", "verdict_flips", "overall_classifications", "wild_delta", "fixed_delta")}, ensure_ascii=False, indent=2))
    return 0

if __name__ == "__main__":
    raise SystemExit(main())