#!/usr/bin/env python3
"""Decode selected SV 4.0.0 gameplay FlatBuffers using vendored pkNX .fbs.

Never treat a missing native input as a successful decode. This tool requires
an actual flatc binary, exact schemas, structural preflight, and non-empty
native data. Outputs are separately hash-bound and source-path-preserving.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile

BASE = Path("Unpack/4.0.0/romfs/arc/data.trpfs")
SCHEMA_ROOT = Path("tools/pkNX/FlatBuffers/SV")

TABLES = {
    "avalon/data/personal_array.bin": ("Personal/Schemas/PersonalTable.fbs", "pokedex"),
    "avalon/data/waza_array.bin": ("Waza/Schemas/Waza.fbs", "moves"),
    "avalon/data/tokusei_array.bin": ("Waza/Schemas/TokuseiArray.fbs", "abilities"),
    "world/data/item/itemdata/itemdata_array.bfbs": ("Item/Schemas/ItemDataArray.fbs", "items"),
    "world/data/ui/pokedex/memo_poke_data/memo_poke_data_array.bfbs": ("Zukan/Schemas/MemoPokeTableArray.fbs", "pokedex"),
    "world/data/ui/pokedex/memo_poke_data_dlc1/memo_poke_data_dlc1_array.bfbs": ("Zukan/Schemas/MemoPokeTableArray.fbs", "pokedex"),
    "world/data/ui/pokedex/memo_poke_data_dlc2/memo_poke_data_dlc2_array.bfbs": ("Zukan/Schemas/MemoPokeTableArray.fbs", "pokedex"),
    "world/data/ui/ymap/ymap_place_name_data/ymap_place_name_data_array.bfbs": ("UI/Schemas/ymap/PlaceNameDataTableArray.fbs", "locations"),
    "world/data/ui/ymap/ymap_destination_data/ymap_destination_data_array.bfbs": ("UI/Schemas/ymap/DestinationDataTableArray.fbs", "locations"),
    "world/data/encount/pokedata/pokedata/pokedata_array.bfbs": ("World/Schemas/EncountPokeDataArray.fbs", "encounters"),
    "world/data/encount/pokedata/pokedata_su1/pokedata_su1_array.bfbs": ("World/Schemas/EncountPokeDataArray.fbs", "encounters"),
    "world/data/encount/pokedata/pokedata_su2/pokedata_su2_array.bfbs": ("World/Schemas/EncountPokeDataArray.fbs", "encounters"),
    "world/data/raid/raid_enemy_01/raid_enemy_01_array.bfbs": ("Raid/Schemas/RaidEnemyTableArray.fbs", "encounters"),
    "world/data/raid/raid_enemy_02/raid_enemy_02_array.bfbs": ("Raid/Schemas/RaidEnemyTableArray.fbs", "encounters"),
    "world/data/raid/raid_enemy_03/raid_enemy_03_array.bfbs": ("Raid/Schemas/RaidEnemyTableArray.fbs", "encounters"),
    "world/data/raid/raid_enemy_04/raid_enemy_04_array.bfbs": ("Raid/Schemas/RaidEnemyTableArray.fbs", "encounters"),
    "world/data/raid/raid_enemy_05/raid_enemy_05_array.bfbs": ("Raid/Schemas/RaidEnemyTableArray.fbs", "encounters"),
    "world/data/raid/raid_enemy_06/raid_enemy_06_array.bfbs": ("Raid/Schemas/RaidEnemyTableArray.fbs", "encounters"),
}
# Source archives for some extracted resources may preserve the extension as
# .bin rather than .bfbs. Try only this exact alternate basename.
MAX_INPUT = 64 * 1024 * 1024
MAX_OUTPUT = 96 * 1024 * 1024

def hashfile(path: Path):
    return hashlib.sha256(path.read_bytes()).hexdigest().upper()

def bounded_root(path: Path):
    import struct
    size = path.stat().st_size
    if not 12 <= size <= MAX_INPUT:
        return False
    with path.open("rb") as f:
        offset = struct.unpack("<I",f.read(4))[0]
        if not 4 <= offset <= size-4:
            return False
        f.seek(offset)
        vt = offset - struct.unpack("<i",f.read(4))[0]
        if not 4 <= vt <= size-4:
            return False
        f.seek(vt)
        vtlen, objlen = struct.unpack("<HH", f.read(4))
        return (vtlen >= 4 and vtlen%2==0 and objlen>=4
                and vt+vtlen <= size and offset+objlen<=size)

def schema_include_dirs(schema_root):
    parents = {p.parent.resolve() for p in schema_root.rglob("*.fbs")}
    return sorted(parents, key=str)

def decode(repo: Path, flatc: str):
    source_root = repo / BASE
    schemas = repo / SCHEMA_ROOT
    if not source_root.is_dir() or not schemas.is_dir():
        raise FileNotFoundError("Repository native source or vendored pkNX schemas missing")
    includes = schema_include_dirs(schemas)
    if not includes:
        raise RuntimeError("No vendored .fbs schemas found")
    args = []
    for inc in includes:
        args.extend(["-I", str(inc)])
    result = []
    for name, (schema_name, topic) in TABLES.items():
        schema = schemas / schema_name
        source_rel = name
        src = source_root / "virtual" / source_rel
        if not src.is_file() and name.endswith(".bfbs"):
            alt = name[:-5]+".bin"
            if (source_root/"virtual"/alt).is_file():
                source_rel = alt
                src = source_root/"virtual"/alt
        entry = {"source":source_rel,"topic":topic,"schema":schema_name}
        if not src.is_file():
            entry["status"] = "SOURCE_NOT_EXTRACTED"
        elif not schema.is_file():
            entry["status"] = "SCHEMA_MISSING"
        elif not bounded_root(src):
            entry["status"] = "INVALID_FLATBUFFER_ROOT"
        else:
            with tempfile.TemporaryDirectory(prefix="sv-pknx-flatc-") as tmp:
                out = Path(tmp)
                cmd = [flatc,"--json","--strict-json","--raw-binary",
                       *args,"-o",str(out),str(schema),"--",str(src)]
                try:
                    p = subprocess.run(cmd,capture_output=True,text=True,
                                       timeout=100,check=False)
                except (OSError,subprocess.TimeoutExpired) as exc:
                    entry["status"] = "FLATC_FAILED"
                    entry["error"] = str(exc)[:250]
                else:
                    dest = out/(src.stem+".json")
                    if p.returncode != 0 or not dest.is_file():
                        entry["status"] = "SCHEMA_REJECTED"
                        entry["error"] = p.stderr[-500:]
                    elif dest.stat().st_size > MAX_OUTPUT:
                        entry["status"] = "JSON_TOO_LARGE"
                    else:
                        try:
                            decoded = json.loads(dest.read_text("utf-8"))
                        except (OSError,UnicodeError,ValueError):
                            decoded = None
                        items = decoded.get("Table") if isinstance(decoded,dict) else None
                        if not isinstance(items,list) or not items or not isinstance(items[0],dict):
                            entry["status"] = "NO_RECORD_ARRAY"
                        else:
                            wrapper = {
                                "source": source_rel,"status":"STRUCTURE_PARSED",
                                "parser":"pkNX-fbs-flatc-v1",
                                "schema": schema_name,
                                "schema_sha256": hashfile(schema),
                                "native_sha256": hashfile(src),
                                "flatc_json": decoded,
                                "verification":"BOUNDED_NATIVE_ROOT_AND_VENDORED_PKNX_SCHEMA_ONLY",
                            }
                            target = source_root/"parsed"/(source_rel+".flatbuffer.json")
                            target.parent.mkdir(parents=True,exist_ok=True)
                            tmpout = target.with_suffix(target.suffix+".tmp")
                            tmpout.write_text(json.dumps(wrapper,ensure_ascii=False,separators=(",",":"))+"\n","utf-8")
                            os.replace(tmpout,target)
                            entry["status"] = "STRUCTURE_PARSED"
                            entry["records"] = len(items)
                            entry["native_sha256"] = wrapper["native_sha256"]
                            entry["output"] = target.relative_to(source_root).as_posix()
        result.append(entry)
    return result

def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--repo",type=Path,default=Path(__file__).resolve().parents[1])
    ap.add_argument("--flatc",default=os.environ.get("SV_FLATC_EXE") or shutil.which("flatc"))
    args=ap.parse_args()
    if not args.flatc:
        ap.error("flatc is mandatory")
    repo=args.repo.resolve()
    rows=decode(repo,args.flatc)
    dest=repo/BASE/"semantic_exports"
    dest.mkdir(parents=True,exist_ok=True)
    (dest/"native_schema_decoding.json").write_text(
      json.dumps({"version":"4.0.0","decoder":"pkNX-fbs-flatc-v1",
                  "sources":rows},ensure_ascii=False,indent=2)+"\n","utf-8")
    print(json.dumps({"schema_parsed":sum(x["status"]=="STRUCTURE_PARSED" for x in rows),
                      "candidate_tables":len(rows),"records":sum(x.get("records",0) for x in rows),
                      "by_status":{status:sum(x["status"]==status for x in rows)
                                   for status in sorted({x["status"] for x in rows})}},ensure_ascii=False))
    return 0

if __name__=="__main__":
    sys.exit(main())
