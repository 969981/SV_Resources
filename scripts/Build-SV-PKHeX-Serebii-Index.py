#!/usr/bin/env python3
"""Full pinned PKHeX Gen9 wild/fixed/ordinary Tera-raid lookup.

Builds a source-linked SQLite and CSV; Serebii URL is an external lookup, not
an assertion that each individual species has been independently confirmed.
Native 4.0.0 collision/RNG/legality work is deliberately a separate dataset.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import importlib.util
import json
from pathlib import Path
import sqlite3
from collections import Counter

ROOT = Path(__file__).resolve().parent
SPEC = importlib.util.spec_from_file_location("pkhex_encounter_readonly", ROOT/"Audit-SV-PKHeX-Encounters.py")
AUDIT = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(AUDIT)
PIN = "0660d1e1f4924b8478daec73281bb8071a82ad19"
PKHEX_PREFIX = f"https://github.com/kwsch/PKHeX/blob/{PIN}/PKHeX.Core/Resources/legality/wild/Gen9/"
SOURCE_FILES = {
    "wild": ("encounter_wild_paldea.pkl", 26861, "66F765E1249FD0AC8CBAF97BE90905347F6FF4581368CF65AD5B8CD81C2AA831"),
    "fixed": ("encounter_fixed_paldea.pkl", 977, "AB94F889B346E5DD4B6278846C8502D9B48AFDC23DC7AAACDF57C6A42A93C45E"),
    "raid_paldea": ("encounter_gem_paldea.pkl", 454, "B24C54559D8B5D676B8EB77DFBDC36ED82DFD1AD2D3E3125DAFDCF048C804552"),
    "raid_kitakami": ("encounter_gem_kitakami.pkl", 133, "14F376DDDD53A02C41E782FB634BFF44DF50D88253F99924669CEC3734E4BC18"),
    "raid_blueberry": ("encounter_gem_blueberry.pkl", 113, "DE925A11509B6DB1FD0F40D1102277A2A248AE7BEECBD2DF0A410EDF50AE9B51"),
}
SEREBII_INDEX = {
    "Paldea": "https://www.serebii.net/pokearth/paldea/",
    "Kitakami": "https://www.serebii.net/pokearth/kitakami/",
    "Blueberry": "https://www.serebii.net/pokearth/terarium/",
}
# Only URLs that have been directly verified against real Serebii pages.
SEREBII_AREA = {
    6: ("South Province (Area One)","https://www.serebii.net/pokearth/paldea/southprovinceareaone.shtml"),
    156: ("Wistful Fields","https://www.serebii.net/pokearth/kitakami/wistfulfields.shtml"),
    158: ("Mossfell Confluence","https://www.serebii.net/pokearth/kitakami/mossfellconfluence.shtml"),
    174: ("Savanna Biome","https://www.serebii.net/pokearth/terarium/savannabiome.shtml"),
}
# Location ID -> English name, grounded in published SV game index; a region
# index fallback is used unless a specific Serebii page was VERIFIED.
NAMES = {
    6:"South Province (Area One)",8:"Mesagoza",10:"Pokémon League",12:"South Province (Area Two)",
    14:"South Province (Area Four)",16:"South Province (Area Six)",18:"South Province (Area Five)",
    20:"South Province (Area Three)",22:"West Province (Area One)",24:"Asado Desert",
    26:"West Province (Area Two)",28:"West Province (Area Three)",30:"Tagtree Thicket",
    32:"East Province (Area Three)",34:"East Province (Area One)",36:"East Province (Area Two)",
    38:"Glaseado Mountain",40:"Casseroya Lake",44:"North Province (Area Three)",
    46:"North Province (Area One)",48:"North Province (Area Two)",50:"Great Crater of Paldea",
    56:"South Paldean Sea",58:"West Paldean Sea",60:"East Paldean Sea",62:"North Paldean Sea",
    64:"Inlet Grotto",67:"Alfornada Cavern",69:"Dalizapa Passage",70:"Poco Path",
    72:"Mesagoza",76:"Cascarrafa",78:"Levincia",80:"Cabo Poco",82:"Los Platos",84:"Cortondo",
    86:"Artazon",88:"Porto Marinada",90:"Medali",92:"Zapapico",94:"Montenevera",
    96:"Alfornada",99:"Caph Squad Base",101:"Segin Squad Base",103:"Ruchbah Squad Base",
    105:"Schedar Squad Base",107:"Navi Squad Base",109:"Socarrat Trail",124:"Area Zero",
    132:"Kitakami Road",134:"Mossui Town",136:"Apple Hills",138:"Loyalty Plaza",
    140:"Revelers Road",142:"Kitakami Hall",144:"Oni Mountain",146:"Dreaded Den",
    148:"Oni's Maw",152:"Crystal Pool",156:"Wistful Fields",158:"Mossfell Confluence",
    160:"Fellhorn Gorge",162:"Paradise Barrens",164:"Kitakami Wilds",166:"Timeless Woods",
    168:"Infernal Pass",170:"Chilling Waterhead",174:"Savanna Biome",176:"Coastal Biome",
    178:"Canyon Biome",180:"Polar Biome",182:"Central Plaza",184:"Savanna Plaza",
    186:"Coastal Plaza",188:"Canyon Plaza",190:"Polar Plaza",192:"Chargestone Cavern",
    194:"Torchlit Labyrinth",196:"Area Zero Underdepths",200:"Terarium"
}
CSV = ["region","location_id","location_name","cross_from_id","species_national",
       "species_name_zh","species_name_en","encounter_type","form_raw","level_min",
       "level_max","stars","tera_type_raw","weather_allowed_mask","time_forbidden_mask",
       "source_table","pkhex_source_url","pkhex_source_sha256",
       "serebii_source_url","serebii_scope","serebii_species_listing","raw_json"]


def region(location):
    if 0 < location < 132: return "Paldea"
    if 132 <= location < 172: return "Kitakami"
    if 172 <= location <= 200: return "Blueberry"
    return "Unknown"


def load_species(root):
    names = {}
    for code in ("en","zh-Hans"):
        path = root/"PKHeX.Core"/"Resources"/"text"/"other"/code/f"text_Species_{code}.txt"
        values = path.read_text("utf-8-sig").splitlines()
        if len(values) < 1026 or values[1].strip() == "":
            raise ValueError(f"Bad pinned PKHeX species names: {path}")
        names[code] = values
    return names


def verified_serebii(facts_path, location, species, kind):
    if kind != "wild" or location is None: return "NOT_REVIEWED_FOR_TYPE"
    if location not in (156,158): return "NOT_REVIEWED"
    fact = json.loads(facts_path.read_text("utf-8"))
    entry = fact["locations"].get(str(location),{}).get("standard",{})
    if species not in entry.get("reviewed_species",[]): return "NOT_REVIEWED"
    return "LISTED" if species in entry["listed_species"] else "NOT_LISTED"


def build(pkhex_root, facts_path, output):
    pkhex_root, facts_path, output = map(Path,(pkhex_root, facts_path, output))
    names = load_species(pkhex_root)
    data_root = pkhex_root/"PKHeX.Core"/"Resources"/"legality"/"wild"/"Gen9"
    output.mkdir(parents=True,exist_ok=True)
    db_path=output/"SV400_PKHeX_Serebii_Encounter_Index.sqlite"
    if db_path.exists(): db_path.unlink()
    con=sqlite3.connect(db_path)
    con.executescript("""
      CREATE TABLE sources(table_key TEXT PRIMARY KEY,filename TEXT NOT NULL,sha256 TEXT NOT NULL,
        pkhex_commit TEXT NOT NULL,source_url TEXT NOT NULL,templates INTEGER NOT NULL);
      CREATE TABLE encounters(
        id INTEGER PRIMARY KEY,region TEXT NOT NULL,location_id INTEGER,location_name TEXT,cross_from_id INTEGER,
        species_national INTEGER NOT NULL,species_name_zh TEXT NOT NULL,species_name_en TEXT NOT NULL,
        encounter_type TEXT NOT NULL,form_raw INTEGER NOT NULL,level_min INTEGER NOT NULL,level_max INTEGER NOT NULL,
        stars INTEGER,tera_type_raw INTEGER,weather_allowed_mask INTEGER,time_forbidden_mask INTEGER,
        source_table TEXT NOT NULL REFERENCES sources(table_key),pkhex_source_url TEXT NOT NULL,
        pkhex_source_sha256 TEXT NOT NULL,serebii_source_url TEXT,serebii_scope TEXT NOT NULL,
        serebii_species_listing TEXT NOT NULL,raw_json TEXT NOT NULL);
      CREATE INDEX ix_species ON encounters(species_national,region,encounter_type);
      CREATE INDEX ix_names ON encounters(species_name_zh,species_name_en);
      CREATE INDEX ix_location ON encounters(region,location_id,encounter_type,species_national);
      CREATE INDEX ix_level ON encounters(level_min,level_max);
      CREATE TABLE location_reference(location_id INTEGER PRIMARY KEY,region TEXT NOT NULL,english_name TEXT,
        serebii_url TEXT NOT NULL,serebii_scope TEXT NOT NULL);
    """)
    insert_sql = """INSERT INTO encounters (region,location_id,location_name,cross_from_id,species_national,species_name_zh,species_name_en,
    encounter_type,form_raw,level_min,level_max,stars,tera_type_raw,weather_allowed_mask,time_forbidden_mask,source_table,
    pkhex_source_url,pkhex_source_sha256,serebii_source_url,serebii_scope,serebii_species_listing,raw_json)
    VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)"""
    stats=Counter(); locs={}
    with (output/"SV400_PKHeX_Serebii_Encounters.csv").open("w",encoding="utf-8-sig",newline="") as file:
        csvwriter=csv.DictWriter(file,fieldnames=CSV,lineterminator="\n")
        csvwriter.writeheader()
        for key,(filename,expected,expected_sha) in SOURCE_FILES.items():
            raw=(data_root/filename).read_bytes()
            sha=hashlib.sha256(raw).hexdigest().upper()
            if sha!=expected_sha: raise ValueError(f"Pinned PKHeX SHA mismatch: {filename}, actual {sha}")
            rows=AUDIT.read_table(key,raw)
            if rows is None or len(rows)!=expected: raise ValueError(f"Unexpected PKHeX template count: {key}")
            url=PKHEX_PREFIX+filename
            con.execute("INSERT INTO sources VALUES (?,?,?,?,?,?)",(key,filename,sha,PIN,url,len(rows)))
            for row in rows:
                species=row["species_national"]
                if not 0 < species < len(names["en"]) or species >= len(names["zh-Hans"]):
                    raise ValueError(f"Unknown national species: {species}")
                kind="wild" if key=="wild" else "fixed" if key=="fixed" else "tera_raid"
                locations=([row["location_id"]] if kind=="wild" else
                           sorted({row[f"location{i}"] for i in range(4)}-{0}) if kind=="fixed" else
                           [None])
                if kind=="fixed" and not locations: locations=[None]
                for location in locations:
                    area=region(location) if location is not None else key.removeprefix("raid_").capitalize()
                    if area not in SEREBII_INDEX: raise ValueError(f"Unknown game region from location {location}")
                    scope="AREA_PAGE_VERIFIED" if location in SEREBII_AREA else "REGION_INDEX_ONLY"
                    url_serebii = SEREBII_AREA[location][1] if location in SEREBII_AREA else SEREBII_INDEX[area]
                    name = NAMES.get(location) if location is not None else None
                    if location is not None: locs[location]=(area,name,url_serebii,scope)
                    levelmin=row["level_min"] if kind=="wild" else row["level"]
                    levelmax=row["level_max"] if kind=="wild" else row["level"]
                    record={
                      "region":area,"location_id":location,"location_name":name,
                      "cross_from_id":row["cross_from_id"] if kind=="wild" else None,
                      "species_national":species,"species_name_zh":names["zh-Hans"][species],
                      "species_name_en":names["en"][species],"encounter_type":kind,
                      "form_raw":row["form_raw"],"level_min":levelmin,"level_max":levelmax,
                      "stars":row.get("stars"),"tera_type_raw":row.get("tera_type_raw"),
                      "weather_allowed_mask":row.get("weather_allowed_mask"),
                      "time_forbidden_mask":row.get("time_forbidden_mask"),"source_table":key,
                      "pkhex_source_url":url,"pkhex_source_sha256":sha,
                      "serebii_source_url":url_serebii,"serebii_scope":scope,
                      "serebii_species_listing":verified_serebii(facts_path,location,species,kind),
                      "raw_json":json.dumps(row,sort_keys=True,separators=(",",":"))
                    }
                    csvwriter.writerow(record)
                    con.execute(insert_sql,tuple(record[name] for name in CSV))
                    stats[(area,kind)]+=1
    for loc,(area,name,url,scope) in sorted(locs.items()):
        con.execute("INSERT INTO location_reference VALUES (?,?,?,?,?)",(loc,area,name,url,scope))
    con.commit()
    if sum(n for (area,kind),n in stats.items() if kind=="wild")!=26861:
        raise ValueError("Full wild data not included")
    if sum(n for (area,kind),n in stats.items() if kind=="tera_raid")!=700:
        raise ValueError("Expected all normal raid rows")
    summary={
      "status":"PINNED_PKHEX_FULL_WILD_FIXED_ORDINARY_RAID_INDEX_BUILT",
      "pkhex_commit":PIN,"original_source":"kwsch/PKHeX","game":"Scarlet / Violet",
      "scope":"PKHeX template lookup, not runtime 4.0.0 RNG proof",
      "source_files":{k:{"name":v[0],"sha256":v[2],"templates":v[1]} for k,v in SOURCE_FILES.items()},
      "rows_by_region_type":{"|".join(k):v for k,v in sorted(stats.items())},
      "locations":len(locs),
      "provenance_notes":[
        "PKHeX binary files and bilingual species names from same pinned commit.",
        "Fixed templates expanded by allowed location IDs; rows exceed fixed template count.",
        "Ordinary raids are region pool templates, not individual crystal coordinate locations.",
        "Every row has PKHeX permalink and Serebii geographic URL; REGION_INDEX_ONLY does NOT imply independent species/level verification.",
        "Unreviewed Serebii species stay NOT_REVIEWED; missing roster entries do not imply illegal encounters.",
        "Events, mightiest, distributions, outbreaks, game-native collision changes, and PID/EC/IV/shiny RNG are separate tasks.",
      ],
    }
    (output/"SV400_PKHeX_Serebii_Index_Manifest.json").write_text(json.dumps(summary,ensure_ascii=False,indent=2)+"\n","utf-8")
    with (output/"SV400_PKHeX_Species_Summary.csv").open("w",encoding="utf-8-sig",newline="") as fp:
        w=csv.writer(fp);w.writerow(["region","species_national","name_zh","name_en","wild","fixed","tera_raid","min_level","max_level"])
        w.writerows(con.execute("""SELECT region,species_national,species_name_zh,species_name_en,
            SUM(encounter_type='wild'),SUM(encounter_type='fixed'),SUM(encounter_type='tera_raid'),
            MIN(level_min),MAX(level_max) FROM encounters GROUP BY region,species_national ORDER BY region,species_national"""))
    con.close()
    print(json.dumps(summary,ensure_ascii=False,indent=2))
    return summary


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--pkhex-root",type=Path,required=True)
    p.add_argument("--facts",type=Path,required=True)
    p.add_argument("--output",type=Path,required=True)
    a=p.parse_args()
    build(a.pkhex_root.resolve(),a.facts.resolve(),a.output.resolve())


if __name__=="__main__":
    main()
