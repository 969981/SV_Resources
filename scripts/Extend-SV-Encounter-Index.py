#!/usr/bin/env python3
"""Extend a SHA-pinned PKHeX Gen9 index with event raids, 7-star raids and event outbreaks.

Read-only input: PKHeX reference checkout at one fixed git commit and a previously
generated SQLite base index. This program never claims Serebii event-index
coverage as per-template verification, current availability or SV4.0.0 RNG proof.
"""
from __future__ import annotations

import argparse
from collections import Counter
import csv
import hashlib
import json
from pathlib import Path
import shutil
import sqlite3
import struct

PIN = "0660d1e1f4924b8478daec73281bb8071a82ad19"
RESOURCE = Path("PKHeX.Core/Resources/legality/wild/Gen9")
BASE_INDEX = "SV400_PKHeX_Serebii_Encounter_Index.sqlite"
SOURCES = {
    "distribution_tera_raid": ("encounter_dist_paldea.pkl", 174, 62, "68ad05c1a03c820a1020a8d89edbf4fa75d64cde"),
    "mighty_tera_raid": ("encounter_might_paldea.pkl", 56, 62, "b5a2af66531aec4626c723020dac0584cbcb75b1"),
    "distribution_outbreak": ("encounter_outbreak_paldea.pkl", 12636, 28, "3b35ed0aa6cc745ba4630fe8fb07957b1234e010"),
}
SEREBII_RAID = "https://www.serebii.net/scarletviolet/teraraidbattleevents.shtml"
SEREBII_OUTBREAK = "https://www.serebii.net/scarletviolet/massoutbreakevents.shtml"
PKHEX_SOURCE = f"https://github.com/kwsch/PKHeX/blob/{PIN}/PKHeX.Core/Resources/legality/wild/Gen9/"
HEADERS = (
    "kind", "source_record_index", "species_national", "species_name_zh",
    "species_name_en", "region", "location_id", "level_min", "level_max",
    "stars", "shiny_rule_raw", "serebii_evidence_status",
    "serebii_url", "pkhex_source_url", "pkhex_source_sha256",
    "raw_json",
)


def git_blob_sha(data: bytes) -> str:
    header = f"blob {len(data)}\0".encode("ascii")
    return hashlib.sha1(header + data).hexdigest()


def sha256(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest().upper()


def region(location: int) -> str:
    if 0 < location < 132:
        return "Paldea"
    if 132 <= location < 172:
        return "Kitakami"
    if 172 <= location <= 200:
        return "Blueberry"
    return "Unknown"


def parse_event_raid(raw: bytes, kind: str) -> list[dict]:
    if kind not in ("distribution_tera_raid", "mighty_tera_raid"):
        raise ValueError("Not a distribution/mighty raid template")
    if len(raw) % 62:
        raise ValueError("Gen9 EncounterDist9/Might9 records must have stride 0x3E")
    rows = []
    for i, off in enumerate(range(0, len(raw), 62)):
        part = raw[off:off + 62]
        species = struct.unpack_from("<H", part)[0]
        form, gender_raw, ability_raw, flawless_iv_count, shiny_rule_raw, level = part[2:8]
        moves = struct.unpack_from("<4H", part, 8)
        tera_type_raw, encounter_index, stars, weight = part[0x10:0x14]
        stage = struct.unpack_from("<16H", part, 0x14)
        if not (0 < species <= 1025 and 1 <= level <= 100
                and gender_raw <= 3
                and ability_raw <= 4 and shiny_rule_raw <= 2
                and stars <= 7):
            raise ValueError(f"Invalid pinned Gen9 {kind} encounter at row {i}")
        rows.append({
            "record_index": i, "species_national": species, "form_raw": form,
            "gender_raw": (gender_raw - 1) & 255, "ability_permission_raw": ability_raw,
            "flawless_iv_count": flawless_iv_count, "shiny_rule_raw": shiny_rule_raw,
            "level": level, "moves": list(moves), "tera_type_raw": tera_type_raw,
            "encounter_index_raw": encounter_index, "stars": stars, "weight": weight,
            "weight_stages": [
                {
                    "stage": j,
                    "scarlet_min": stage[j*4],
                    "violet_min": stage[j*4 + 1],
                    "scarlet_total": stage[j*4 + 2],
                    "violet_total": stage[j*4 + 3],
                }
                for j in range(4)
            ],
            "nature_raw": part[0x34], "ivs_raw": list(struct.unpack_from("<6b", part, 0x35)),
            "ivs_mode_raw": part[0x3B], "scale_type_raw": part[0x3C],
            "scale_raw": part[0x3D],
        })
    return rows


def parse_event_outbreak(raw: bytes) -> list[dict]:
    if len(raw) % 28:
        raise ValueError("Gen9 EncounterOutbreak9 records must have stride 0x1C")
    result = []
    for i, off in enumerate(range(0, len(raw), 28)):
        part = raw[off:off + 28]
        species, form, gender, min_level, max_level, ribbon, weather, forced, size_min, size_max, shiny = (
            struct.unpack_from("<HBBBBBBBBBB", part))
        base = part[0x0C]
        flags = int.from_bytes(part[0x0C:], "little") >> 8
        locations = [base + j for j in range(120) if flags & (1 << j)]
        if not (0 < species <= 1025 and 1 <= min_level <= max_level <= 100
                and forced in (0, 1) and shiny in (0, 1)
                and (not forced or size_min <= size_max)):
            raise ValueError(f"Invalid pinned Gen9 outbreak template at row {i}")
        if any(loc > 65535 for loc in locations):
            raise ValueError("Invalid location ID after bitmask expansion")
        result.append({
            "record_index": i, "species_national": species, "form_raw": form,
            "gender_raw": gender, "level_min": min_level, "level_max": max_level,
            "ribbon_raw": ribbon, "weather_allowed_mask": weather,
            "force_scale_range": forced, "scale_min": size_min, "scale_max": size_max,
            "is_shiny_forced": shiny, "met_base": base,
            "met_flags_hex": f"{flags:030X}", "allowed_locations": locations,
        })
    return result


def load_names(root: Path) -> tuple[list[str], list[str]]:
    def read(lang: str) -> list[str]:
        name = f"text_Species_{lang}.txt"
        path = root / f"PKHeX.Core/Resources/text/other/{lang}/{name}"
        values = path.read_text(encoding="utf-8-sig").splitlines()
        if len(values) < 1026:
            raise ValueError(f"Species text list incomplete: {path}")
        return values
    return read("zh-Hans"), read("en")


def verify_base(con: sqlite3.Connection) -> None:
    rows = con.execute("SELECT table_key, pkhex_commit, templates FROM sources").fetchall()
    found = {key: (commit, count) for key, commit, count in rows}
    expected = {"wild": 26861, "fixed": 977,
                "raid_paldea": 454, "raid_kitakami": 133, "raid_blueberry": 113}
    if set(found) != set(expected) or any(
        found[k] != (PIN, count) for k, count in expected.items()
    ):
        raise ValueError("Base encounters SQLite was not built from the exact pinned PKHeX sources")
    if con.execute("SELECT COUNT(*) FROM encounters").fetchone()[0] < 28538:
        raise ValueError("Base index missing Gen9 encounters")


def ensure_separate(base: Path, root: Path, output: Path) -> None:
    if not base.is_file() or not root.is_dir():
        raise FileNotFoundError("Real base SQLite and pinned PKHeX checkout required")
    if output == root or output.is_relative_to(root) or output == base.parent or output.is_relative_to(base.parent):
        raise ValueError("Output must not overwrite reference sources or original base database")


def extend(root: Path, base: Path, output: Path) -> dict:
    root, base, output = root.resolve(), base.resolve(), output.resolve()
    ensure_separate(base, root, output)
    zh, en = load_names(root)
    output.mkdir(parents=True, exist_ok=True)
    target = output / "SV400_PKHeX_Serebii_Extended_Encounter_Index.sqlite"
    if target.exists():
        target.unlink()
    shutil.copy2(base, target)
    con = sqlite3.connect(target)
    con.execute("PRAGMA foreign_keys=ON")
    source_summary = {}
    try:
        verify_base(con)
        con.executescript("""
          CREATE TABLE extension_sources (
              kind TEXT PRIMARY KEY, filename TEXT NOT NULL,
              pkhex_commit TEXT NOT NULL, git_blob_sha1 TEXT NOT NULL,
              source_sha256 TEXT NOT NULL, record_count INTEGER NOT NULL,
              pkhex_source_url TEXT NOT NULL, external_catalogue_url TEXT NOT NULL,
              external_evidence_status TEXT NOT NULL
          );
          CREATE TABLE event_raid_templates(
              kind TEXT NOT NULL, source_record_index INTEGER NOT NULL,
              species_national INTEGER NOT NULL, species_name_zh TEXT NOT NULL,
              species_name_en TEXT NOT NULL, form_raw INTEGER NOT NULL,
              level INTEGER NOT NULL, stars INTEGER NOT NULL, shiny_rule_raw INTEGER NOT NULL,
              tera_type_raw INTEGER NOT NULL, ability_permission_raw INTEGER NOT NULL,
              pkhex_source_sha256 TEXT NOT NULL, serebii_url TEXT NOT NULL,
              raw_json TEXT NOT NULL,
              PRIMARY KEY(kind, source_record_index),
              FOREIGN KEY(kind) REFERENCES extension_sources(kind)
          );
          CREATE TABLE outbreak_event_templates(
              source_record_index INTEGER PRIMARY KEY,
              species_national INTEGER NOT NULL, species_name_zh TEXT NOT NULL,
              species_name_en TEXT NOT NULL, form_raw INTEGER NOT NULL,
              level_min INTEGER NOT NULL, level_max INTEGER NOT NULL,
              is_shiny_forced INTEGER NOT NULL, met_base INTEGER NOT NULL,
              met_flags_hex TEXT NOT NULL, location_count INTEGER NOT NULL,
              pkhex_source_sha256 TEXT NOT NULL, serebii_url TEXT NOT NULL,
              raw_json TEXT NOT NULL
          );
          CREATE TABLE outbreak_event_locations(
              source_record_index INTEGER NOT NULL REFERENCES outbreak_event_templates(source_record_index),
              location_id INTEGER NOT NULL, region TEXT NOT NULL,
              PRIMARY KEY(source_record_index,location_id)
          );
          CREATE INDEX ix_event_raid_species ON event_raid_templates(species_national,kind,stars);
          CREATE INDEX ix_outbreak_species ON outbreak_event_templates(species_national,level_min,level_max);
          CREATE INDEX ix_outbreak_location ON outbreak_event_locations(region,location_id,source_record_index);
        """)
        with (output/"SV400_Event_Outbreak_Templates.csv").open("w",encoding="utf-8-sig",newline="") as fp:
            csv_writer = csv.writer(fp)
            csv_writer.writerow(HEADERS)
            counts = Counter()
            for kind, (filename, expected, stride, blob) in SOURCES.items():
                original = (root / RESOURCE / filename).read_bytes()
                if len(original) != expected * stride or git_blob_sha(original) != blob:
                    raise ValueError(f"Incorrect pinned PKHeX source hash/count: {filename}")
                digest = sha256(original)
                url = PKHEX_SOURCE + filename
                catalogue = SEREBII_OUTBREAK if kind == "distribution_outbreak" else SEREBII_RAID
                con.execute("INSERT INTO extension_sources VALUES (?,?,?,?,?,?,?,?,?)",
                    (kind,filename,PIN,blob,digest,expected,url,catalogue,
                     "CATEGORY_INDEX_ONLY_NOT_INDIVIDUAL_EVENT_DATE_VERIFIED"))
                if kind == "distribution_outbreak":
                    records = parse_event_outbreak(original)
                else:
                    records = parse_event_raid(original,kind)
                if len(records) != expected:
                    raise ValueError(f"Incomplete template decode: {kind}")
                for record in records:
                    species = record["species_national"]
                    if species >= len(zh) or species >= len(en):
                        raise ValueError(f"Unknown species index {species}")
                    idx = record["record_index"]
                    raw_json = json.dumps(record,ensure_ascii=False,sort_keys=True,separators=(",",":"))
                    if kind == "distribution_outbreak":
                        locs = record["allowed_locations"]
                        con.execute("""INSERT INTO outbreak_event_templates
                          VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?)""",(
                            idx,species,zh[species],en[species],record["form_raw"],
                            record["level_min"],record["level_max"],record["is_shiny_forced"],
                            record["met_base"],record["met_flags_hex"],len(locs),
                            digest,catalogue,raw_json))
                        for loc in locs:
                            reg = region(loc)
                            con.execute("INSERT INTO outbreak_event_locations VALUES (?,?,?)",(idx,loc,reg))
                            csv_writer.writerow((kind,idx,species,zh[species],en[species],
                                reg,loc,record["level_min"],record["level_max"],
                                None,int(record["is_shiny_forced"]), "CATEGORY_INDEX_ONLY",
                                catalogue,url,digest,raw_json))
                            counts["expanded_outbreak_location_rows"] += 1
                        if not locs:
                            csv_writer.writerow((kind,idx,species,zh[species],en[species],
                                "Unknown",None,record["level_min"],record["level_max"],
                                None,int(record["is_shiny_forced"]), "NO_LOCATION_BITS",
                                catalogue,url,digest,raw_json))
                            counts["outbreak_templates_without_location_bits"] += 1
                    else:
                        con.execute("""INSERT INTO event_raid_templates
                          VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?)""", (
                            kind,idx,species,zh[species],en[species],record["form_raw"],
                            record["level"],record["stars"],record["shiny_rule_raw"],
                            record["tera_type_raw"],record["ability_permission_raw"],
                            digest,catalogue,raw_json))
                        csv_writer.writerow((kind,idx,species,zh[species],en[species],
                            "Event pool, region not proven",None,record["level"],record["level"],
                            record["stars"],record["shiny_rule_raw"],"CATEGORY_INDEX_ONLY",
                            catalogue,url,digest,raw_json))
                counts[kind] = len(records)
                source_summary[kind] = {
                    "file": filename, "git_blob_sha1": blob,
                    "sha256": digest, "templates": len(records),
                    "source_url": url,"serebii_catalogue_url": catalogue
                }
        con.executescript("""
          CREATE VIEW all_encounters_v2 AS
          SELECT encounter_type AS category, region, location_id, species_national,
                 species_name_zh, species_name_en, level_min, level_max, stars,
                 pkhex_source_sha256, pkhex_source_url, serebii_source_url,
                 serebii_species_listing AS external_verification
          FROM encounters
          UNION ALL
          SELECT kind, 'Event pool, region not proven', NULL,
                 species_national,species_name_zh,species_name_en,level,level,stars,
                 pkhex_source_sha256, (SELECT pkhex_source_url FROM extension_sources s WHERE s.kind=r.kind),
                 serebii_url,'CATEGORY_INDEX_ONLY'
          FROM event_raid_templates r
          UNION ALL
          SELECT 'distribution_outbreak',ol.region,ol.location_id,
                 t.species_national,t.species_name_zh,t.species_name_en,
                 t.level_min,t.level_max,NULL,t.pkhex_source_sha256,
                 (SELECT pkhex_source_url FROM extension_sources WHERE kind='distribution_outbreak'),
                 t.serebii_url,'CATEGORY_INDEX_ONLY'
          FROM outbreak_event_templates t
          JOIN outbreak_event_locations ol USING(source_record_index);
        """)
        con.commit()
        total_view = con.execute("SELECT COUNT(*) FROM all_encounters_v2").fetchone()[0]
        if total_view < 29110 + 230:
            raise ValueError("Event/outbreak unified view unexpectedly incomplete")
        report={
           "status":"SOURCE_VERIFIED_PINNED_PKHEX_EVENT_INDEX_NOT_LIVE_EVENT_OR_RNG_PROOF",
           "pkhex_commit": PIN,
           "template_counts":dict(counts),
           "unified_view_rows":total_view,
           "sources":source_summary,
           "limitations":[
             "Distribution and might files are historical legality templates; cannot infer current online event or exact event dates from their indices.",
             "Serebii event catalogue URLs do not prove a row-by-row match; they are category navigation only.",
             "Outbreak met-location bitmask is expanded according to EncounterOutbreak9 C# and is not a guarantee of accessible spawns.",
             "Static narrative encounters in Encounters9.cs, ordinary daily outbreaks, and live downloaded Poké Portal News events are NOT represented by these distribution records.",
             "Neither this index nor template fields proves PK9 PID/EC/IV RNG validity, shiny generation or game 4.0.0 provenance.",
           ]
        }
        (output/"SV400_Expanded_Encounter_Manifest.json").write_text(
            json.dumps(report,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
        print(json.dumps(report,ensure_ascii=False,indent=2))
        return report
    finally:
        con.close()


def main() -> int:
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--pkhex-root",type=Path,required=True)
    p.add_argument("--base-index",type=Path,required=True)
    p.add_argument("--output",type=Path,required=True)
    args=p.parse_args()
    extend(args.pkhex_root,args.base_index,args.output)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
