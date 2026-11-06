#!/usr/bin/env python3
"""Read-only SV 4.0.0 gameplay catalog from native files and verified derivatives.

Produces SQLite, UTF-8 BOM CSV and JSONL. Native BIN without a proven decoder
is inventoried, NOT represented as an interpreted gameplay record.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
from collections import Counter
from pathlib import Path, PurePosixPath
import sqlite3
import sys

VERSION = "4.0.0"
ROOT = Path("Unpack/4.0.0/romfs/arc/data.trpfs")
DOMAINS = ("items", "pokedex", "encounters", "moves", "locations")
SOURCE_PREFIXES = (
    "world/data/encount/pokedata",
    "world/data/encount/point_data",
    "world/data/field/fixed_symbol",
    "world/data/event/pokedata",
    "world/data/raid",
    "world/data/pokedex",
    "world/data/zukan",
    "world/data/item",
    "world/data/shop",
    "world/data/waza",
    "world/data/area",
    "world/data/map",
    "pokemon/data/personal",
    "pokemon/data/waza",
    "pokemon/data/zukan",
)
LANG = {"Simp_Chinese": "zh-Hans", "Trad_Chinese": "zh-Hant",
        "English": "en", "JPN": "ja", "Korean": "ko"}
MAX_JSON = 64 * 1024 * 1024


def digest(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as handle:
        for block in iter(lambda: handle.read(1024 * 1024), b""):
            h.update(block)
    return h.hexdigest().upper()


def safe_rel(value: str) -> str:
    path = PurePosixPath(value.replace("\\", "/"))
    if not value or path.is_absolute() or ".." in path.parts or "." in path.parts:
        raise ValueError("Unsafe source path")
    return path.as_posix()


def domain_for(path: str) -> str | None:
    path = "/" + path.replace("\\", "/").lower() + "/"
    if any(k in path for k in ("/encount/", "/fixed_symbol/", "/eventbattlepokemon/",
                                "/raid/", "/outbreak/", "/event/pokedata/")):
        return "encounters"
    if any(k in path for k in ("/pokedex/", "/zukan/", "/personal/", "personal_data")):
        return "pokedex"
    if any(k in path for k in ("/waza/", "/move/", "learnset", "wazaoboe")):
        return "moves"
    if any(k in path for k in ("/item/", "/items/", "/shop/", "item_data")):
        return "items"
    if any(k in path for k in ("/area/", "/map/", "/location/", "/place/", "/zone/")):
        return "locations"
    return None


def text_domain(source: str) -> str | None:
    # These are table-name classifications, NOT a claim of ID equivalence.
    name = PurePosixPath(source.lower()).stem.replace(".messages", "")
    if any(k in name for k in ("item", "goods", "ball", "bag", "shop")):
        return "items"
    if any(k in name for k in ("pokemon", "poke_name", "mons", "zukan", "pokedex")):
        return "pokedex"
    if any(k in name for k in ("waza", "move", "skill", "technique")):
        return "moves"
    if any(k in name for k in ("map", "place", "area", "location", "zone", "town", "city")):
        return "locations"
    return None


def records_from(root: object, limit: int = 100_000):
    """Yield real FlatBuffers JSON array entries, retaining exact source fields."""
    count = 0
    found = False
    stack = [("$", root, 0)]
    while stack:
        pointer, obj, depth = stack.pop()
        if depth > 16:
            continue
        if isinstance(obj, list):
            for ix in range(len(obj) - 1, -1, -1):
                item = obj[ix]
                if isinstance(item, dict):
                    yield f"{pointer}[{ix}]", item
                    count += 1
                    found = True
                    if count >= limit:
                        return
                if isinstance(item, (dict, list)):
                    stack.append((f"{pointer}[{ix}]", item, depth + 1))
        elif isinstance(obj, dict):
            for name, child in sorted(obj.items(), reverse=True):
                if isinstance(child, (dict, list)):
                    stack.append((pointer + "." + name, child, depth + 1))
    if not found and isinstance(root, dict) and root:
        yield "$", root


def init_db(conn):
    conn.executescript("""
        PRAGMA journal_mode=DELETE;
        CREATE TABLE native_sources(
          source TEXT PRIMARY KEY, domain TEXT NOT NULL, size_bytes INTEGER,
          sha256 TEXT, status TEXT NOT NULL);
        CREATE TABLE decoded_records(
          domain TEXT NOT NULL, source TEXT NOT NULL, json_pointer TEXT NOT NULL,
          schema_path TEXT, schema_sha256 TEXT, native_sha256 TEXT,
          verification TEXT NOT NULL, raw_json TEXT NOT NULL,
          PRIMARY KEY(source,json_pointer));
        CREATE TABLE localized_text(
          language TEXT NOT NULL, source TEXT NOT NULL, ordinal INTEGER NOT NULL,
          label TEXT, hash64 TEXT, value TEXT, text_status TEXT,
          domain_candidate TEXT, dat_sha256 TEXT, tbl_sha256 TEXT,
          PRIMARY KEY(language,source,ordinal));
        CREATE TABLE blockers(
          source TEXT, stage TEXT, reason TEXT, PRIMARY KEY(source,stage));
        CREATE INDEX ix_decoded_domain ON decoded_records(domain);
        CREATE INDEX ix_local_domain ON localized_text(domain_candidate,language);
    """)


def catalog_native(conn, root, counters):
    base = root / "virtual"
    for prefix in SOURCE_PREFIXES:
        subtree = base / prefix
        if not subtree.is_dir():
            continue
        for file in subtree.rglob("*"):
            if not file.is_file() or file.is_symlink():
                continue
            rel = file.relative_to(base).as_posix()
            domain = domain_for(rel)
            if not domain:
                continue
            conn.execute("INSERT OR IGNORE INTO native_sources VALUES(?,?,?,?,?)",
                         (rel, domain, file.stat().st_size, digest(file),
                          "SOURCE_PRESENT_UNPARSED"))
            counters["native_" + domain] += 1


def add_wrapper(conn, native_root, file, counters):
    if file.stat().st_size > MAX_JSON:
        return
    try:
        obj = json.loads(file.read_text("utf-8-sig"))
    except (ValueError, UnicodeError, OSError):
        return
    if not isinstance(obj, dict) or obj.get("status") != "STRUCTURE_PARSED":
        return
    payload = obj.get("flatc_json")
    if not isinstance(payload, (dict, list)) or not payload:
        return
    try:
        source = safe_rel(obj["source"])
    except (KeyError, ValueError, TypeError):
        return
    domain = domain_for(source)
    if not domain:
        return
    schema = obj.get("schema")
    sha = obj.get("native_sha256")
    source_file = native_root / "virtual" / source
    verified = (isinstance(sha, str) and len(sha) == 64
                and source_file.is_file() and not source_file.is_symlink()
                and digest(source_file) == sha.upper())
    if source_file.is_file() and not verified:
        conn.execute("INSERT OR REPLACE INTO blockers VALUES(?,?,?)",
                     (source, "native_json", "SOURCE_SHA256_NOT_VERIFIED"))
        return
    verification = ("NATIVE_SHA256_VERIFIED_SCHEMA_JSON" if verified else
                    "SCHEMA_JSON_SOURCE_NOT_LOCAL")
    for pointer, record in records_from(payload):
        conn.execute("""INSERT OR REPLACE INTO decoded_records
            VALUES(?,?,?,?,?,?,?,?)""",
            (domain, source, pointer, schema, obj.get("schema_sha256"),
             sha, verification, json.dumps(record, ensure_ascii=False, sort_keys=True)))
        counters["records_" + domain] += 1
    counters["json_sources_" + domain] += 1


def add_text_records(conn, message, dat_sha, tbl_sha, counters):
    try:
        source = safe_rel(message["source"])
    except (KeyError, ValueError, TypeError):
        return
    lang = message.get("language")
    if not isinstance(lang, str) or not isinstance(message.get("entries"), list):
        return
    guessed = text_domain(source)
    for entry in message["entries"]:
        ordinal = entry.get("ordinal")
        if not isinstance(ordinal, int):
            continue
        conn.execute("""INSERT OR REPLACE INTO localized_text
            VALUES(?,?,?,?,?,?,?,?,?,?)""",
            (lang, source, ordinal, entry.get("label"), entry.get("hash64"),
             entry.get("text"), entry.get("text_status"), guessed, dat_sha, tbl_sha))
        counters["strings_" + lang] += 1


def native_text(conn, repo, native_root, counters, include_languages):
    # The repository's tested Gen9 DAT/TBL decoder: do not reinterpret encoding.
    sys.path.insert(0, str((repo / "scripts/resource_pipeline").resolve()))
    from r1_text import join_messages
    base = native_root / "virtual/message/dat"
    for raw_lang in include_languages:
        folder = base / raw_lang
        if not folder.is_dir():
            continue
        for dat in sorted(folder.rglob("*.dat")):
            tbl = dat.with_suffix(".tbl")
            if not tbl.is_file() or dat.is_symlink() or tbl.is_symlink():
                continue
            rel = dat.relative_to(native_root / "virtual").as_posix()
            try:
                if dat.stat().st_size > 16 * 1024 * 1024 or tbl.stat().st_size > 16 * 1024 * 1024:
                    raise ValueError("SOURCE_TOO_LARGE")
                document = join_messages(dat.read_bytes(), tbl.read_bytes(), raw_lang, rel)
                add_text_records(conn, document, digest(dat), digest(tbl), counters)
            except (ValueError, OSError, UnicodeError) as exc:
                conn.execute("INSERT OR REPLACE INTO blockers VALUES(?,?,?)",
                             (rel, "localization", str(exc)[:500]))
                counters["text_errors"] += 1


def prior_text(conn, native_root, counters):
    # Import previously validated DAT/TBL derivatives only when no native copy
    # was decoded. Their own provenance is still visible in the CSV.
    for directory in (native_root / "parsed/message/dat",
                      native_root / "virtual_converted/_parsed/message/dat"):
        if not directory.is_dir():
            continue
        for file in directory.rglob("*.messages.json"):
            if file.is_symlink() or file.stat().st_size > MAX_JSON:
                continue
            try:
                doc = json.loads(file.read_text("utf-8-sig"))
                src = safe_rel(doc["source"])
                lang = doc.get("language")
                found = conn.execute("SELECT 1 FROM localized_text WHERE source=? AND language=? LIMIT 1",
                                     (src, lang)).fetchone()
                if not found and doc.get("matching") in ("EXACT_LENGTH", "TRAILING_MAX_SENTINEL"):
                    add_text_records(conn, doc, doc.get("source_sha256"),
                                     doc.get("paired_tbl_sha256"), counters)
            except (ValueError, KeyError, UnicodeError, OSError):
                continue


def emit_csv(conn, query, headers, out):
    out.parent.mkdir(parents=True, exist_ok=True)
    with out.open("w", encoding="utf-8-sig", newline="") as handle:
        writer = csv.writer(handle, lineterminator="\n")
        writer.writerow(headers)
        for row in conn.execute(query):
            writer.writerow(row)


def run(repo: Path, output: Path, include_languages: tuple[str, ...]):
    root = repo / ROOT
    if not root.is_dir():
        raise FileNotFoundError(f"SV resource directory missing: {root}")
    output.mkdir(parents=True, exist_ok=True)
    database = output / "sv_gameplay_4.0.0.sqlite"
    if database.exists():
        database.unlink()
    conn = sqlite3.connect(database)
    counts = Counter()
    try:
        init_db(conn)
        catalog_native(conn, root, counts)
        for directory in (root / "parsed", root / "virtual_converted/_parsed"):
            if directory.is_dir():
                for file in directory.rglob("*.flatbuffer.json"):
                    if file.is_file() and not file.is_symlink():
                        add_wrapper(conn, root, file, counts)
        native_text(conn, repo, root, counts, include_languages)
        prior_text(conn, root, counts)
        conn.commit()
        for domain in DOMAINS:
            emit_csv(conn, "SELECT source,json_pointer,verification,schema_path,"
                     "native_sha256,raw_json FROM decoded_records WHERE domain='" +
                     domain + "' ORDER BY source,json_pointer",
                     ["source","json_pointer","verification","schema_path",
                      "native_sha256","raw_json"], output / (domain + ".csv"))
            emit_csv(conn, "SELECT language,source,ordinal,label,hash64,value,text_status,"
                     "dat_sha256,tbl_sha256 FROM localized_text WHERE domain_candidate='" +
                     domain + "' ORDER BY language,source,ordinal",
                     ["language","source","ordinal","label","hash64","text",
                      "text_status","dat_sha256","tbl_sha256"],
                     output / (domain + "_names.csv"))
        emit_csv(conn, "SELECT source,domain,size_bytes,sha256,status FROM native_sources "
                 "ORDER BY domain,source",
                 ["source","domain","size_bytes","sha256","status"],
                 output / "native_source_inventory.csv")
        emit_csv(conn, "SELECT language,source,ordinal,label,hash64,value,text_status,"
                 "domain_candidate,dat_sha256,tbl_sha256 FROM localized_text "
                 "ORDER BY language,source,ordinal",
                 ["language","source","ordinal","label","hash64","text","text_status",
                  "domain_candidate","dat_sha256","tbl_sha256"],
                 output / "localization_all.csv")
        emit_csv(conn, "SELECT source,stage,reason FROM blockers ORDER BY source,stage",
                 ["source","stage","reason"], output / "blockers.csv")
        for domain in DOMAINS:
            with (output / (domain + ".jsonl")).open("w", encoding="utf-8") as handle:
                for source, pointer, verification, schema, raw in conn.execute(
                        "SELECT source,json_pointer,verification,schema_path,raw_json "
                        "FROM decoded_records WHERE domain=? ORDER BY source,json_pointer", (domain,)):
                    handle.write(json.dumps({"source": source, "json_pointer": pointer,
                        "verification": verification, "schema": schema,
                        "raw": json.loads(raw)}, ensure_ascii=False) + "\n")
        summary = {"game":"Pokémon Scarlet/Violet", "version":VERSION,
            "report_type":"NATIVE_PROVENANCE_AND_CONSERVATIVE_GAMEPLAY_EXPORT",
            "counts":dict(sorted(counts.items())),
            "native_sources":conn.execute("SELECT COUNT(*) FROM native_sources").fetchone()[0],
            "structured_records":conn.execute("SELECT COUNT(*) FROM decoded_records").fetchone()[0],
            "localized_entries":conn.execute("SELECT COUNT(*) FROM localized_text").fetchone()[0],
            "blocked_files":conn.execute("SELECT COUNT(*) FROM blockers").fetchone()[0],
            "limitations":[
              "Binary .bin tables without verified game-specific parsers are inventoried, NOT decoded.",
              "FlatBuffers structure extraction is not proof of encounter rules or ID semantics.",
              "Chinese name text is keyed by exact game message label; numeric gameplay IDs are not auto-joined.",
              "Version restrictions, biome, weather, time and DLC gating require separately validated joins."
            ]}
        (output / "summary.json").write_text(json.dumps(summary,ensure_ascii=False,indent=2)+"\n","utf-8")
        return summary
    finally:
        conn.close()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--repo", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--output", type=Path)
    parser.add_argument("--languages", nargs="+",
                        default=["Simp_Chinese", "Trad_Chinese"])
    args = parser.parse_args()
    repo = args.repo.resolve()
    if any(lang not in LANG for lang in args.languages):
        parser.error("Unsupported language")
    out = (args.output or repo / ROOT / "semantic_exports").resolve()
    root = (repo / ROOT).resolve()
    if out == root or out == (root / "virtual") or out.is_relative_to(root / "virtual"):
        parser.error("Output must not overlap raw virtual resources")
    print(json.dumps(run(repo, out, tuple(args.languages)), ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()
