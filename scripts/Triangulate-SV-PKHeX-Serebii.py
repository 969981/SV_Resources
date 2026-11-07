#!/usr/bin/env python3
"""Corroborate authentic 88-case PKHeX legality deltas with attributed Serebii location facts.

The source-of-truth PK9 verdicts are from the actual original/native PKHeX
LegalityAnalysis run. Serebii provides region species-presence evidence only.
No website observation here changes validity, spawn reachability, or RNG claims.
"""
import argparse
import csv
from collections import Counter
import json
from pathlib import Path

FAMILIES = {"fixed_added_location_158":32,
            "wild_kitakami_native_only_crossover":32,
            "wild_native_new_max_level":24}
EXTERNAL = ("capture_area", "source_area", "serebii_standard_at_capture",
            "serebii_standard_at_source", "serebii_fixed_at_capture",
            "serebii_evidence", "serebii_urls", "evidence_limit")


def load_facts(path):
    doc = json.loads(Path(path).read_text(encoding="utf-8"))
    if doc.get("status") != "HAND_CURATED_SEREBII_SPECIES_LEVEL_AUDIT_NOT_COMPLETE_DATABASE":
        raise ValueError("Serebii evidence manifest is missing provenance declaration")
    locations = {}
    for key, area in doc["locations"].items():
        if not area["url"].startswith("https://www.serebii.net/pokearth/kitakami/"):
            raise ValueError("Serebii fact must link to the reviewed geographic page")
        if not area.get("reviewed_at") or not area.get("name"):
            raise ValueError("Missing attribution")
        for kind in ("standard", "fixed"):
            reviewed, listed = area[kind]["reviewed_species"], area[kind]["listed_species"]
            if len(set(reviewed)) != len(reviewed) or len(set(listed)) != len(listed) or not set(listed).issubset(reviewed):
                raise ValueError("Missing or duplicate species coverage")
        locations[int(key)] = area
    return doc, locations


def member(locations, loc, species, kind):
    if loc not in locations or species not in locations[loc][kind]["reviewed_species"]:
        return "NOT_REVIEWED"
    if species in locations[loc][kind]["listed_species"]:
        return "LISTED"
    return "NOT_LISTED"


def classify(row, locations):
    species = int(row["species"])
    loc = int(row["met_location"])
    family = row["family"]
    if family not in FAMILIES:
        raise ValueError("Unrecognized PKHeX delta family")
    source = 158 if family == "wild_kitakami_native_only_crossover" else None
    local = member(locations, loc, species, "standard")
    from_source = member(locations, source, species, "standard") if source else "NOT_APPLICABLE"
    fixed = member(locations, loc, species, "fixed")
    if source:
        if local == "LISTED" and from_source == "LISTED":
            label = "BOTH_AREA_ROSTERS_LIST_SPECIES_CROSSOVER_NOT_VERIFIED"
        elif local == "NOT_LISTED" and from_source == "LISTED":
            label = "ONLY_SOURCE_AREA_ROSTER_LISTS_SPECIES_CROSSOVER_NOT_VERIFIED"
        elif local == "LISTED" and from_source == "NOT_LISTED":
            label = "ONLY_CAPTURE_AREA_ROSTER_LISTS_SPECIES_CROSSOVER_NOT_VERIFIED"
        else:
            label = "SEREBII_CROSSOVER_EVIDENCE_INCOMPLETE"
    elif family == "fixed_added_location_158":
        if fixed == "LISTED":
            label = "SEREBII_FIXED_SPECIES_PRESENT_EXACT_TEMPLATE_NOT_VERIFIED"
        elif local == "LISTED" and fixed == "NOT_LISTED":
            label = "SEREBII_STANDARD_LISTED_BUT_NOT_IN_REVIEWED_FIXED_LIST"
        elif local == "NOT_LISTED" and fixed == "NOT_LISTED":
            label = "NO_LISTING_FOR_REVIEWED_SPECIES_NOT_PROOF_OF_ILLEGALITY"
        else:
            label = "SEREBII_FIXED_EVIDENCE_INCOMPLETE"
    else:
        label = "SEREBII_SPECIES_PRESENT_LEVEL_NOT_CHECKED" if local == "LISTED" else "SEREBII_LEVEL_EVIDENCE_INCOMPLETE"
    urls = [locations[i]["url"] for i in (loc, source) if i is not None and i in locations]
    return {
        "capture_area": locations.get(loc, {}).get("name", "UNMAPPED"),
        "source_area": locations.get(source, {}).get("name", "NOT_APPLICABLE") if source else "NOT_APPLICABLE",
        "serebii_standard_at_capture": local,
        "serebii_standard_at_source": from_source,
        "serebii_fixed_at_capture": fixed,
        "serebii_evidence": label,
        "serebii_urls": "|".join(dict.fromkeys(urls)),
        "evidence_limit": "SPECIES_LISTING_ONLY_NO_FORM_WEATHER_CROSSOVER_LEVEL_OR_RNG_PROOF",
    }


def analyze(cases, audit, facts, output):
    audit = json.loads(Path(audit).read_text(encoding="utf-8-sig"))
    if (audit.get("status") != "ACTUAL_SHA_ATTESTED_PK9_VERDICT_ROOT_CAUSE_TRIAGE_NOT_RUNTIME_PROOF"
        or audit.get("candidate_count") != 88 or audit.get("verdict_flips") != 24
        or audit.get("verified_collision_trcol") != 223):
        raise ValueError("This audit requires authentic 88-case PKHeX/223-TRCOL source provenance")
    fact_doc, locations = load_facts(facts)
    with Path(cases).open(encoding="utf-8-sig", newline="") as f:
        rows = list(csv.DictReader(f))
    if len(rows) != 88 or Counter(x["family"] for x in rows) != Counter(FAMILIES):
        raise ValueError("Actual 88-case source fixture shape changed")
    c = Counter(x["classification"] for x in rows)
    if (c["reference_rejected_native_valid"] != 24 or
        c["both_valid_different_encounter_class"] != 16 or
        c["both_valid_same_encounter_class"] != 48 or
        any(x["source"] != "generated from actual game-native encounter template (not captured)" for x in rows)):
        raise ValueError("Original real LegalityAnalysis verdicts/provenance changed")
    result = [{**r, **classify(r, locations)} for r in rows]
    out = Path(output)
    out.mkdir(parents=True, exist_ok=True)
    with (out/"sv-400-pkhex-serebii-88-triangulation.csv").open("w", encoding="utf-8-sig", newline="") as f:
        w = csv.DictWriter(f, fieldnames=list(rows[0])+list(EXTERNAL), lineterminator="\n")
        w.writeheader()
        w.writerows(result)
    flips = [r for r in result if r["classification"] == "reference_rejected_native_valid"]
    summary = {
        "status": "PKHEX_SEREBII_CROSS_SOURCE_TRIAGE_NOT_GAME_RUNTIME_LEGALITY",
        "original_pk9_cases": len(rows),
        "original_pkhex_verdict_flips": len(flips),
        "pkhex_source": audit["pkhex_source"],
        "external_source": fact_doc["status"],
        "locations": [{"id":k, "name":v["name"], "url":v["url"], "reviewed_at":v["reviewed_at"]}
                      for k,v in sorted(locations.items())],
        "all_evidence_counts": dict(Counter(r["serebii_evidence"] for r in result)),
        "flipped_evidence_counts": dict(Counter(r["serebii_evidence"] for r in flips)),
        "five_crossover_flips": [{
            "name":r["name"],"species":int(r["species"]),"serebii_evidence":r["serebii_evidence"]
        } for r in flips if r["family"] == "wild_kitakami_native_only_crossover"],
        "limitations": [
            "Approximate geographic map presence is not exact encounter legality or generated PK9 proof.",
            "A missing map listing is not proof of impossible encounter. This manifest reviews only selected species.",
            "No independent game-captured SV 4.0.0 PK9, RNG/PID/EC/IV/shiny verification or full Serebii scrape.",
            "Source .pkl/PK9 or official PKHeX legality databases are not modified.",
        ]
    }
    (out/"sv-400-pkhex-serebii-triangulation-summary.json").write_text(
        json.dumps(summary,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    print(json.dumps(summary,ensure_ascii=False,indent=2))
    return summary


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    for p in ("cases","audit","facts","output"):
        parser.add_argument("--"+p,type=Path,required=True)
    options=parser.parse_args()
    analyze(options.cases,options.audit,options.facts,options.output)
