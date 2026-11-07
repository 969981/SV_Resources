#!/usr/bin/env python3
"""Build an auditable, deduplicated Serebii cross-check queue from source-backed SV SQLite.

No automated scraping. Source URLs are review starting points; status never
claims a species, level, season or live event was independently validated.
"""
from __future__ import annotations
import argparse
from collections import Counter
import csv
import json
from pathlib import Path
import sqlite3

HEADERS = (
    "region", "location_id", "species_national", "species_name_zh",
    "species_name_en", "encounter_type", "min_level", "max_level",
    "template_rows", "serebii_url", "species_roster_status",
    "level_range_review_status", "event_period_review_status",
    "review_priority", "provenance_limit",
)


def classify(roster: str, location_id, encounter_type: str) -> tuple[str,str]:
    if roster == "LISTED":
        return "SPECIES_LISTED_LEVEL_UNCHECKED", "HIGH" if location_id in (156,158) else "NORMAL"
    if roster == "NOT_LISTED":
        return "SPECIES_NOT_LISTED_REVIEW_CROSSOVER_BEFORE_REJECT", "HIGH"
    if location_id in (156,158):
        return "NOT_REVIEWED_LOCATION_156_158", "HIGH"
    if encounter_type in ("distribution_tera_raid","mighty_tera_raid","distribution_outbreak"):
        return "EVENT_CATALOGUE_ONLY_NOT_ROW_VERIFIED", "NORMAL"
    if location_id is None:
        return "REGION_POOL_ONLY_NOT_SPECIES_VERIFIED", "NORMAL"
    return "NOT_REVIEWED", "NORMAL"


def build(db_file: Path, dest: Path) -> dict:
    db_file = db_file.resolve()
    dest = dest.resolve()
    if not db_file.is_file() or db_file.parent == dest or dest.is_relative_to(db_file.parent):
        raise ValueError("Source SQLite must exist and audit output must be separate")
    dest.mkdir(parents=True,exist_ok=True)
    con = sqlite3.connect(db_file)
    con.row_factory = sqlite3.Row
    try:
        source_count = con.execute("SELECT COUNT(*) FROM all_encounters_v2").fetchone()[0]
        if source_count < 29340:
            raise ValueError("Full source backed index with event tables required")
        rows=con.execute("""SELECT region,location_id,species_national,
            MIN(species_name_zh) species_name_zh,MIN(species_name_en) species_name_en,
            category encounter_type,MIN(level_min) min_level,MAX(level_max) max_level,
            COUNT(*) template_rows,MIN(serebii_source_url) serebii_url,
            MIN(external_verification) species_roster_status
            FROM all_encounters_v2
            GROUP BY region,location_id,species_national,category
            ORDER BY region,location_id,species_national,category""").fetchall()
        if not rows:
            raise ValueError("Review queue unexpectedly empty")
        statuses=Counter()
        with (dest/"SV400_Serebii_Review_Queue.csv").open("w",newline="",encoding="utf-8-sig") as f:
            writer=csv.DictWriter(f,fieldnames=HEADERS,lineterminator="\n")
            writer.writeheader()
            for r in rows:
                q=dict(r)
                status,priority=classify(q["species_roster_status"],q["location_id"],q["encounter_type"])
                q["species_roster_status"]=status
                q["level_range_review_status"]="NOT_INDEPENDENTLY_CHECKED"
                q["event_period_review_status"]="NOT_INDEPENDENTLY_CHECKED" if q["encounter_type"] in (
                    "distribution_tera_raid","mighty_tera_raid","distribution_outbreak") else "NOT_APPLICABLE"
                q["review_priority"]=priority
                q["provenance_limit"]="SEREBII_CATEGORY_LINK_NOT_ENCOUNTER_LEGALITY"
                if q["serebii_url"] is None or not q["serebii_url"].startswith("https://www.serebii.net/"):
                    raise ValueError("Invalid external review source URL")
                writer.writerow(q)
                statuses[(q["region"],status)] += 1
        summary={
            "status":"AUDIT_QUEUE_CREATED_NOT_EXTERNAL_VERIFICATION",
            "underlying_encounter_view_rows":source_count,
            "deduplicated_review_tasks":len(rows),
            "status_by_region":{"|".join(k):v for k,v in sorted(statuses.items())},
            "limitations":[
                "A review task is not an independently verified Serebii species or level.",
                "No HTML pages were scraped or copied. Region-only links are not species evidence.",
                "Source records include historical PKHeX event templates; event dates and current availability are not inferred.",
                "Normal raids reference regional pools; event outbreak location masks are template eligibility, not verified runtime spawn points.",
            ],
        }
        (dest/"SV400_Serebii_Review_Queue_Manifest.json").write_text(
            json.dumps(summary,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
        print(json.dumps(summary,indent=2,ensure_ascii=False))
        return summary
    finally:
        con.close()


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--database",required=True,type=Path)
    p.add_argument("--output",required=True,type=Path)
    a=p.parse_args()
    build(a.database,a.output)


if __name__=="__main__":
    main()
