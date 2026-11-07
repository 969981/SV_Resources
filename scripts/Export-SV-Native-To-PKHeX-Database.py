#!/usr/bin/env python3
"""Turn independently extracted SV 4.0.0 native Gen9 .pkl into a queryable SQLite
and an isolated PKHeX.Core resource overlay, with fail-closed 61+223 SHA provenance.

The five .pkl are ALREADY produced by vendored pkNX. This tool is a conversion,
attestation and diagnostics bridge, not a substitute for native TRPFS extraction.
It never overwrites an official PKHeX reference or mutates original game data.
"""
from __future__ import annotations

import argparse
from collections import Counter
import csv
import hashlib
import importlib.util
import json
from pathlib import Path
import shutil
import sqlite3
from typing import Any

HERE = Path(__file__).resolve().parent
PIN = "0660d1e1f4924b8478daec73281bb8071a82ad19"
FILES = {
    "wild": ("encounter_wild_paldea.pkl", "66F765E1249FD0AC8CBAF97BE90905347F6FF4581368CF65AD5B8CD81C2AA831"),
    "fixed": ("encounter_fixed_paldea.pkl", "AB94F889B346E5DD4B6278846C8502D9B48AFDC23DC7AAACDF57C6A42A93C45E"),
    "raid_paldea": ("encounter_gem_paldea.pkl", "B24C54559D8B5D676B8EB77DFBDC36ED82DFD1AD2D3E3125DAFDCF048C804552"),
    "raid_kitakami": ("encounter_gem_kitakami.pkl", "14F376DDDD53A02C41E782FB634BFF44DF50D88253F99924669CEC3734E4BC18"),
    "raid_blueberry": ("encounter_gem_blueberry.pkl", "DE925A11509B6DB1FD0F40D1102277A2A248AE7BEECBD2DF0A410EDF50AE9B51"),
}
SKIP = {
    "wild": {"area_index", "slot_index"},
    "fixed": {"record_index"},
    "raid_paldea": {"record_index"},
    "raid_kitakami": {"record_index"},
    "raid_blueberry": {"record_index"},
}
REGION_PAGES = {
    "Paldea": "https://www.serebii.net/pokearth/paldea/",
    "Kitakami": "https://www.serebii.net/pokearth/kitakami/",
    "Blueberry": "https://www.serebii.net/pokearth/terarium/",
}

def audit_module():
    path = HERE/"Audit-SV-PKHeX-Encounters.py"
    if not path.is_file():
        raise FileNotFoundError(f"Original pinned Gen9 decoder required: {path}")
    spec = importlib.util.spec_from_file_location("sv_native_pkhex_decoder", path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module

def sha(raw: bytes) -> str:
    return hashlib.sha256(raw).hexdigest().upper()

def read_json(path: Path):
    return json.loads(path.read_text("utf-8-sig"))

def attest(native: Path, source_manifest: Path, collision_manifest: Path) -> dict[str, Any]:
    built_path = native/"native-encounter-build.json"
    built, sources, collisions = map(read_json,(built_path,source_manifest,collision_manifest))
    if (built.get("status")!="GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES"
        or built.get("collisionBlocker") or built.get("unverifiedExtraFiles")
        or built.get("originalTrcolEntries")!=223):
        raise ValueError("Native five-table original source evidence is NOT fully verified")
    source_entries=sources.get("targets",[])
    trcol_entries=collisions.get("targets",[])
    if sources.get("status")!="61_NATIVE_TARGETS_EXTRACTED_SHA256_VERIFIED" or len(source_entries)!=61:
        raise ValueError("61 source assets are missing independently verified extraction evidence")
    if (collisions.get("status")!="TRCOL_ORIGINAL_SHA256_VERIFIED"
        or collisions.get("source")!="SV-4.0.0-original-TRPFD-TRPFS"
        or collisions.get("unique_trcol_paths")!=223 or len(trcol_entries)!=223):
        raise ValueError("223 actual TRCOL references are missing independently verified source evidence")
    expected = {}
    for category, entries, status in (
        ("M2",source_entries,"EXTRACTED_NATIVE_SHA256_VERIFIED"),
        ("TRCOL",trcol_entries,"TRCOL_ORIGINAL_SHA256_VERIFIED"),
    ):
        for item in entries:
            name=item["source_virtual_path"].casefold()
            if name in expected or item.get("status")!=status:
                raise ValueError(f"Duplicate or invalid {category} source {name}")
            if category=="TRCOL" and not name.endswith(".trcol"):
                raise ValueError(f"Unrecognized collision format {name}")
            digest=item.get("native_sha256","").upper()
            length=item.get("native_bytes")
            if len(digest)!=64 or any(c not in "0123456789ABCDEF" for c in digest) or not isinstance(length,int):
                raise ValueError(f"Source lacks usable native SHA/size: {name}")
            expected[name]=(digest,length)
    used=built.get("sourceFilesActuallyRead",[])
    if not used:
        raise ValueError("No actual original files consumed by native pkNX")
    consumed=set()
    for item in used:
        key=item["path"].casefold()
        if key in consumed or key not in expected:
            raise ValueError(f"Duplicate/unattested source read by pkNX: {key}")
        consumed.add(key)
        digest,length=expected[key]
        if (not item.get("verifiedByOriginalM2Manifest")
            or item.get("sha256","").upper()!=digest
            or item.get("bytes")!=length):
            raise ValueError(f"Actual original source SHA mismatch: {key}")
    products=built.get("generated",[])
    if len(products)!=5 or {x["name"] for x in products}!={v[0] for v in FILES.values()}:
        raise ValueError("Exactly five original native generated files required")
    evidence={x["name"]:x for x in products}
    for name,_ in FILES.values():
        data=(native/name).read_bytes()
        if not data or len(data)!=evidence[name]["bytes"] or sha(data)!=evidence[name]["sha256"]:
            raise ValueError(f"Generated native output differs from signed source manifest: {name}")
    return {
        "status":"ORIGINAL_4_0_0_SOURCE_61_PLUS_223_SHA_VERIFIED_FROM_MANIFESTS",
        "original_source_entries":len(source_entries),
        "original_collision_entries":len(trcol_entries),
        "consumed_input_files":len(used),
        "native_build_manifest_sha256":sha(built_path.read_bytes()),
        "original_source_manifest_sha256":sha(source_manifest.read_bytes()),
        "original_collision_manifest_sha256":sha(collision_manifest.read_bytes()),
        "source_provenance_scope":"Verified SHA/size of files consumed in prior genuine native unpack; source .bin/.trcol must be present for rerunning pkNX",
    }

def canonical(row: dict, kind: str) -> tuple:
    return tuple((key,value) for key,value in row.items() if key not in SKIP[kind])

def region(location: int) -> str:
    if 0 < location < 132: return "Paldea"
    if 132 <= location < 172: return "Kitakami"
    if 172 <= location <= 200: return "Blueberry"
    return "Unknown"

def names(pkhex_root: Path) -> tuple[list[str],list[str]]:
    parts=[]
    for lang in ("zh-Hans","en"):
        path=pkhex_root/f"PKHeX.Core/Resources/text/other/{lang}/text_Species_{lang}.txt"
        strings=path.read_text("utf-8-sig").splitlines()
        if len(strings)<1026: raise ValueError(f"Incorrect pinned species name table: {path}")
        parts.append(strings)
    return parts[0],parts[1]

COLUMNS=("source_table","encounter_type","region","location_id","cross_from_id",
         "location_name","species_national","species_name_zh","species_name_en",
         "form_raw","level_min","level_max","stars","reference_match",
         "native_file_sha256","reference_file_sha256","serebii_region_index","raw_json")

def convert(native: Path, source_manifest: Path, collision_manifest: Path,
            pkhex_root: Path, output: Path) -> dict:
    native=Path(native).resolve()
    pkhex_root=Path(pkhex_root).resolve()
    output=Path(output).resolve()
    for protected in (native,pkhex_root):
        if output==protected or output.is_relative_to(protected) or protected.is_relative_to(output):
            raise ValueError("Output must be completely isolated from game and pinned reference directories")
    proof=attest(native,source_manifest,collision_manifest)
    audit=audit_module()
    zh,en=names(pkhex_root)
    references=pkhex_root/"PKHeX.Core/Resources/legality/wild/Gen9"
    # Validate every input before creating outputs.
    products={}
    for kind,(filename,expected_sha) in FILES.items():
        ref=(references/filename).read_bytes()
        native_bytes=(native/filename).read_bytes()
        if sha(ref)!=expected_sha:
            raise ValueError(f"PKHeX reference hash changed; expected pinned {PIN}: {filename}")
        origin_rows=audit.read_table(kind,native_bytes)
        reference_rows=audit.read_table(kind,ref)
        if origin_rows is None or reference_rows is None:
            raise ValueError(f"Unsupported PKHeX binary format {filename}")
        products[kind]=(filename,native_bytes,ref,origin_rows,reference_rows)
    output.mkdir(parents=True,exist_ok=True)
    overlay=output/"PKHeX_Source_Overlay"/"PKHeX.Core/Resources/legality/wild/Gen9"
    overlay.mkdir(parents=True,exist_ok=True)
    db_path=output/"SV400_Native_Encounters_For_PKHeX.sqlite"
    if db_path.exists(): db_path.unlink()
    db=sqlite3.connect(db_path)
    db.executescript("""
        CREATE TABLE sources(
            kind TEXT PRIMARY KEY, filename TEXT NOT NULL, native_sha256 TEXT NOT NULL,
            pinned_pkhex_sha256 TEXT NOT NULL, source_native_records INTEGER NOT NULL,
            pinned_reference_records INTEGER NOT NULL, matched_records INTEGER NOT NULL,
            native_only_records INTEGER NOT NULL, pkhex_only_records INTEGER NOT NULL,
            byte_exact INTEGER NOT NULL, source_attestation_sha256 TEXT NOT NULL);
        CREATE TABLE encounters(
            id INTEGER PRIMARY KEY, source_table TEXT NOT NULL REFERENCES sources(kind),
            encounter_type TEXT NOT NULL, region TEXT NOT NULL,
            location_id INTEGER, cross_from_id INTEGER, location_name TEXT,
            species_national INTEGER NOT NULL, species_name_zh TEXT NOT NULL,
            species_name_en TEXT NOT NULL, form_raw INTEGER NOT NULL,
            level_min INTEGER NOT NULL, level_max INTEGER NOT NULL, stars INTEGER,
            reference_match TEXT NOT NULL, native_file_sha256 TEXT NOT NULL,
            reference_file_sha256 TEXT NOT NULL, serebii_region_index TEXT,
            raw_json TEXT NOT NULL);
        CREATE TABLE pkhex_reference_only(
            id INTEGER PRIMARY KEY, source_table TEXT NOT NULL, raw_json TEXT NOT NULL);
        CREATE INDEX ix_species ON encounters(species_national,region,encounter_type);
        CREATE INDEX ix_location ON encounters(region,location_id,species_national);
        CREATE INDEX ix_reference_match ON encounters(reference_match,source_table);
    """)
    totals={}
    with (output/"SV400_Native_Encounters_For_PKHeX.csv").open("w",newline="",encoding="utf-8-sig") as f:
        writer=csv.DictWriter(f,fieldnames=COLUMNS,lineterminator="\n")
        writer.writeheader()
        for kind,(filename,original,ref,native_rows,ref_rows) in products.items():
            ref_counter=Counter(canonical(r,kind) for r in ref_rows)
            native_counter=Counter(canonical(r,kind) for r in native_rows)
            common=ref_counter & native_counter
            only_ref=ref_counter-native_counter
            only_native=native_counter-ref_counter
            origin_hash,ref_hash=sha(original),sha(ref)
            total_match=sum(common.values())
            status={
                "native_records":len(native_rows),"pkhex_reference_records":len(ref_rows),
                "identical_records":total_match,"native_only":sum(only_native.values()),
                "pkhex_only":sum(only_ref.values()),"native_sha256":origin_hash,
                "pkhex_sha256":ref_hash,"byte_exact":original==ref,
            }
            totals[kind]=status
            db.execute("INSERT INTO sources VALUES (?,?,?,?,?,?,?,?,?,?,?)",(
                kind,filename,origin_hash,ref_hash,len(native_rows),len(ref_rows),
                total_match,status["native_only"],status["pkhex_only"],
                int(status["byte_exact"]),proof["native_build_manifest_sha256"]))
            for signature,count in only_ref.items():
                record=dict(signature)
                for _ in range(count):
                    db.execute("INSERT INTO pkhex_reference_only(source_table,raw_json) VALUES (?,?)",
                        (kind,json.dumps(record,ensure_ascii=False,sort_keys=True)))
            remaining=Counter(ref_counter)
            for record in native_rows:
                signature=canonical(record,kind)
                matched=remaining[signature]>0
                if matched:
                    remaining[signature]-=1
                reference_status="SAME_AS_PINNED_PKHEX" if matched else "ONLY_IN_NATIVE_GENERATION"
                typ="wild" if kind=="wild" else "fixed" if kind=="fixed" else "tera_raid"
                locations=([record["location_id"]] if typ=="wild" else
                           sorted({record[f"location{i}"] for i in range(4)}-{0})
                           if typ=="fixed" else [None])
                if not locations: locations=[None]
                for loc in locations:
                    area=(region(loc) if loc is not None else kind.removeprefix("raid_").capitalize())
                    species=record["species_national"]
                    if not 0<species<len(zh) or species>=len(en):
                        raise ValueError(f"Unknown species from native generator: {species}")
                    row={
                        "source_table":kind,"encounter_type":typ,"region":area,
                        "location_id":loc,"cross_from_id":record["cross_from_id"] if typ=="wild" else None,
                        # Name resolution is separate; the original PKHeX location byte is preserved.
                        "location_name":None,"species_national":species,
                        "species_name_zh":zh[species],"species_name_en":en[species],
                        "form_raw":record["form_raw"],
                        "level_min":record["level_min"] if typ=="wild" else record["level"],
                        "level_max":record["level_max"] if typ=="wild" else record["level"],
                        "stars":record.get("stars"),"reference_match":reference_status,
                        "native_file_sha256":origin_hash,"reference_file_sha256":ref_hash,
                        "serebii_region_index":REGION_PAGES.get(area),
                        "raw_json":json.dumps(record,sort_keys=True,ensure_ascii=False,separators=(",",":")),
                    }
                    writer.writerow(row)
                    db.execute(
                        "INSERT INTO encounters("+",".join(COLUMNS)+") VALUES ("+
                        ",".join("?" for _ in COLUMNS)+")",
                        tuple(row[k] for k in COLUMNS))
            shutil.copyfile(native/filename,overlay/filename)
            if sha((overlay/filename).read_bytes())!=origin_hash:
                raise ValueError("Overlay native PKHeX resource copy mismatch")
    db.commit()
    rows=db.execute("SELECT COUNT(*) FROM encounters").fetchone()[0]
    db.close()
    report={
        "status":"NATIVE_SOURCE_VERIFIED_PKHEX_BINARY_COMPATIBLE_NOT_FULL_LEGALITY_PARITY",
        "game_version":"SV 4.0.0","pkhex_pinned_commit":PIN,
        "provenance":proof,"tables":totals,"sqlite_rows":rows,
        "overlay_relative_path":"PKHeX_Source_Overlay/PKHeX.Core/Resources/legality/wild/Gen9",
        "assumptions":[
          "pkNX produced five REAL Gen9 PKHeX .pkl binary resources directly from original unpacked assets, not from reference .pkl.",
          "All five files have independently checked SHA and PKHeX BinLinker/fixed/raid record structure.",
          "Byte-exact 3 raid sources; wild/fixed template differences must not be relabeled legal.",
          "Fixed templates are location-expanded in this SQLite; diagnostic counts remain original template counts.",
          "Only global native resource SHA provenance is provided, not exact per-row originating TRPFD file.",
          "Serebii links are region navigation only; no independent row-level Serebii verification is claimed.",
          "PKHeX.Core resources are EmbeddedResource; overlay must be applied ONLY to isolated source and rebuilt.",
          "Static encounter, event raids, outbreaks and RNG legality are separate game structures.",
        ],
    }
    (output/"SV400_Native_To_PKHeX_Manifest.json").write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n","utf-8")
    (output/"PKHeX_Source_Overlay"/"README.txt").write_text(
        "Five original-game Gen9 .pkl candidates for an ISOLATED pinned PKHeX.Core checkout.\n"
        "DO NOT overwrite upstream PKHeX reference. Copy files inside PKHeX_Source_Overlay\n"
        "to corresponding PKHeX.Core/Resources/legality/wild/Gen9/ in a scratch copy,\n"
        "then run: dotnet build PKHeX.Core/PKHeX.Core.csproj -c Release\n"
        "Or use repository scripts/Stage-SV-Native-PKHeX-Resources.py with original\n"
        "generated folder + isolated PKHeX checkout + pinned reference checkout.\n"
        "Generated wild/fixed tables are NOT byte-identical to pinned PKHeX; use only for\n"
        "controlled research and real LegalityAnalysis comparison, not official legality.\n",
        "utf-8")
    print(json.dumps(report,indent=2,ensure_ascii=False))
    return report

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--native-output",required=True,type=Path)
    p.add_argument("--source-manifest",required=True,type=Path)
    p.add_argument("--collision-manifest",required=True,type=Path)
    p.add_argument("--pkhex-root",required=True,type=Path)
    p.add_argument("--output",required=True,type=Path)
    a=p.parse_args()
    convert(a.native_output,a.source_manifest,a.collision_manifest,a.pkhex_root,a.output)

if __name__=="__main__":
    main()
