#!/usr/bin/env python3
"""Locate ORIGINAL SV 4.0.0 encounter assets in the indexed Trinity archive.

Uses native TRPFD file_index.tsv.gz + pack_index.tsv, not PKHeX-derived files.
Does NOT extract, download, or alter copyrighted data. Emits a bounded pack
selection for read-only M2 extraction. A located file is NOT an extracted file.
"""
from __future__ import annotations

import argparse
from collections import defaultdict
import csv
import gzip
import hashlib
import json
from pathlib import Path
from datetime import datetime, timezone

INDEX = Path("Unpack/4.0.0/romfs/arc/data.trpfd/_index")
OUTPUT = Path("Unpack/4.0.0/romfs/arc/data.trpfs/_index/encounter-native-packs.json")


def canonical_sources() -> dict[str, tuple[str, str]]:
    """Exact paths read by vendored pkNX; map code determines these names."""
    result: dict[str, tuple[str, str]] = {}

    def add(group: str, path: str, purpose: str):
        if path in result:
            raise AssertionError(f"Duplicate canonical source {path}")
        result[path] = (group, purpose)

    for kind, name in [("base", "pokedata"), ("kitakami", "pokedata_su1"),
                       ("terarium", "pokedata_su2")]:
        add("wild.criteria",
            f"world/data/encount/pokedata/{name}/{name}_array.bin",
            f"EncountPokeDataArray for {kind}")
    for name in ("encount_data_100000", "encount_data_atlantis",
                 "encount_data_su1", "encount_data_su2"):
        add("wild.points",
            f"world/data/encount/point_data/point_data/{name}.bin",
            "PointDataArray level and biome spawners")
    for area in ("", "_su1", "_su2"):
        # pkNX deliberately does not request field_location_su2.
        categories = ("main", "sub", "inside", "dungeon", "location") if not area else (
            ("main", "sub", "inside", "dungeon", "location")
            if area == "_su1" else ("main", "sub", "inside", "dungeon"))
        for category in categories:
            folder = f"area{area}"
            suffix = area
            name = f"field_{category}_area{suffix}" if category != "location" else f"field_location{suffix}"
            # FieldMainArea: field_main_area, FieldLocation: field_location,
            # FieldInsideArea: field_inside_area, etc.
            add("wild.areas", f"world/data/field/{folder}/{name}/{name}_array.bin",
                f"AreaInfo/LevelAdjust/LocationNameMain ({area or 'Paldea'})")

    for path in (
        "world/scene/parts/field/resident_event/resident_area_collision_/resident_area_collision_0.trscn",
        "world/scene/parts/field/room/a_w23_field/a_w23_field_area_col_/a_w23_field_area_col_0.trscn",
        "world/scene/parts/field/main/field_1/field_main/resident_event/resident_area_collision_/resident_area_collision_0.trscn",
        "world/scene/parts/field/main/field_2/field_main/resident_event/resident_area_collision_/resident_area_collision_0.trscn",
    ):
        add("wild.scene", path, "Root area-collider scene; may reference separate .trcol")
    for path in (
        "world/data/field/fixed_symbol/fixed_symbol_table/fixed_symbol_table_array.bin",
        "world/data/field/fixed_symbol/gem_symbol_lottery_table/gem_symbol_lottery_table_array.bin",
    ):
        add("fixed.tables", path, "pkNX FixedSymbolDumper9 input")
    for map_name in ("world", "su1_world", "su2_world"):
        for game in (0, 1):
            add("fixed.positions",
                f"world/scene/parts/field/streaming_event/{map_name}_fixed_placement_symbol_/{map_name}_fixed_placement_symbol_{game}.trscn",
                "Version-specific fixed spawn coordinates")
    add("gimmighoul.positions",
        "world/scene/parts/field/streaming_event/world_coin_placement_symbol_/world_coin_placement_symbol_0.trscn",
        "Gimmighoul roaming/coin symbol coordinates")

    for region in ("", "su1_", "su2_"):
        for i in range(1, 7):
            basename = f"{region}raid_enemy_{i:02}"
            add("raid.base", f"world/data/raid/{basename}/{basename}_array.bin",
                "TeraRaidRipper native RaidEnemyTableArray")
    for region in ("main", "su1", "su2"):
        add("outbreak.points",
            f"world/data/encount/point_data/outbreak_point_data/outbreak_point_{region}.bin",
            "MassOutbreakRipper native point coordinates")
    for lang in ("English", "Simp_Chinese", "Trad_Chinese"):
        for ext in ("dat", "tbl"):
            add("location.label",
                f"message/dat/{lang}/common/place_name.{ext}",
                f"Location label and AHTB numeric order ({lang})")
    return result


def path_options(expected: str):
    """Some pkNX sources use *.bfbs for the same original *.bin asset."""
    yield expected
    if expected.endswith(".bin"):
        yield expected[:-4] + ".bfbs"


def filehash(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as fh:
        for part in iter(lambda: fh.read(4 * 1024 * 1024), b""):
            h.update(part)
    return h.hexdigest().upper()


def build(index_dir: Path, *, include_collision_candidates: bool = True) -> dict:
    p_index = index_dir / "pack_index.tsv"
    f_index = index_dir / "file_index.tsv.gz"
    d_index = index_dir / "descriptor_summary.json"
    for file in (p_index, f_index, d_index):
        if not file.is_file():
            raise FileNotFoundError(file)
    metadata = json.loads(d_index.read_text("utf-8-sig"))
    pack_rows = {}
    with p_index.open("r", encoding="utf-8-sig", newline="") as fh:
        for r in csv.DictReader(fh, delimiter="\t"):
            i = int(r["pack_index"])
            if i in pack_rows:
                raise ValueError(f"Duplicate pack index {i}")
            pack_rows[i] = {
                "pack_index": i, "pack_name": r["pack_name"],
                "packed_bytes": int(r["packed_bytes"]),
                "referenced_files": int(r["referenced_files"]),
            }
    if len(pack_rows) != int(metadata["packCount"]):
        raise ValueError("Pack index count mismatch with native descriptor")
    if set(pack_rows) != set(range(len(pack_rows))):
        raise ValueError("Non-contiguous native pack index")
    targets = canonical_sources()
    lookup: dict[str, list[str]] = defaultdict(list)
    for path in targets:
        for option in path_options(path):
            lookup[option.lower()].append(path)
    hits = {path: [] for path in targets}
    collisions: list[dict] = []
    bad_rows = 0
    rows = 0
    with gzip.open(f_index, "rt", encoding="utf-8-sig", newline="") as fh:
        for r in csv.DictReader(fh, delimiter="\t"):
            rows += 1
            virtual_path = r["virtual_path"].replace("\\", "/").lstrip("/").lower()
            pack = int(r["pack_index"])
            if pack not in pack_rows:
                raise ValueError(f"File references missing pack {pack}")
            h = r["hash"].upper()
            if len(h) != 16 or any(c not in "0123456789ABCDEF" for c in h):
                raise ValueError(f"Bad native descriptor hash {h}")
            if not virtual_path:
                bad_rows += 1
                continue
            if include_collision_candidates and virtual_path.startswith(
                    "world/scene/parts/field/") and virtual_path.endswith(".trcol"):
                if len(collisions) < 10000:
                    collisions.append({"path": r["virtual_path"], "pack_index": pack, "hash": h})
            for expected in lookup.get(virtual_path, ()):
                hits[expected].append({
                    "source_virtual_path": r["virtual_path"],
                    "source_hash": h,
                    "pack_index": pack,
                    "pack_name": r["pack_name"],
                    "evidence": "CONFIRMED_TRPFD_INDEX_ONLY",
                })
    if rows != int(metadata["descriptorFiles"]):
        raise ValueError(f"Descriptor file count mismatch: {rows} != {metadata['descriptorFiles']}")
    selected = {}
    entries = []
    for path, (group, purpose) in targets.items():
        matches = hits[path]
        # pkNX reads *.bin; game dump also exposes *.bfbs. Native TRPFD has
        # both for many logical assets; exact source has priority.
        exact = [m for m in matches if m["source_virtual_path"].lower() == path.lower()]
        alternative = [m for m in matches if m not in exact]
        chosen = exact if exact else alternative
        if not matches:
            status = "MISSING_TRPFD_PATH"
        elif len(chosen) != 1:
            status = "AMBIGUOUS_NATIVE_PATH"
        elif exact:
            status = "LOCATED_NATIVE_INDEX"
        else:
            status = "LOCATED_ALIAS_ONLY"
        if len(chosen) == 1:
            i = chosen[0]["pack_index"]
            selected[i] = pack_rows[i]
        entries.append({"expected": path, "group": group, "purpose": purpose,
                        "hits": chosen, "alternates": alternative if exact else [],
                        "status": status})
    by_group = {}
    for group in sorted(set(v[0] for v in targets.values())):
        subset = [e for e in entries if e["group"] == group]
        by_group[group] = {
            "expected": len(subset),
            "located": sum(e["status"] in ("LOCATED_NATIVE_INDEX", "LOCATED_ALIAS_ONLY") for e in subset),
            "missing": sum(e["status"] == "MISSING_TRPFD_PATH" for e in subset),
            "ambiguous": sum(e["status"] == "AMBIGUOUS_NATIVE_PATH" for e in subset),
        }
    collision_pack_ids = sorted({x["pack_index"] for x in collisions})
    return {
        "source": "native-SV-4.0.0-TRPFD-verified-index",
        "status": "LOCATED_ONLY_NO_EXTRACTION_PERFORMED",
        "input": {"descriptor_summary": str(d_index), "descriptor_file_count": rows,
                  "pack_count": len(pack_rows), "unnamed_files": bad_rows,
                  "file_index_sha256": filehash(f_index),
                  "pack_index_sha256": filehash(p_index)},
        "summary": {"targets": len(entries), "located": sum(e["status"] in ("LOCATED_NATIVE_INDEX", "LOCATED_ALIAS_ONLY") for e in entries),
                    "missing": sum(e["status"] == "MISSING_TRPFD_PATH" for e in entries),
                    "ambiguous": sum(e["status"] == "AMBIGUOUS_NATIVE_PATH" for e in entries),
                    "selected_packs": len(selected),
                    "selected_packed_bytes": sum(p["packed_bytes"] for p in selected.values()),
                    "scene_trcol_candidates_capped": len(collisions),
                    "scene_trcol_candidate_packs": len(collision_pack_ids)},
        "groups": by_group,
        "targets": entries,
        "selected_packs": [selected[k] for k in sorted(selected)],
        "collision_candidate_packs": collision_pack_ids,
        "collision_candidates": collisions,
        "limits": [
            "TRPFD paths only prove existence in original archive, not successful extraction.",
            "All dynamically referenced Havok TRCOL assets must be resolved by parsing the TRSCN collision roots; candidate list alone does not close geometry dependencies.",
            "Scripts must not use PKHeX reference binaries as substitutes for missing native files.",
            "Different game version or game-specific runtime rules may legitimately differ from PKHeX reference.",
        ],
    }


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--index", type=Path, default=INDEX)
    ap.add_argument("--output", type=Path, default=OUTPUT)
    args = ap.parse_args()
    report = build(args.index.resolve())
    output = args.output
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(report, ensure_ascii=False, indent=2) + "\n", "utf-8")
    print(json.dumps({"source": report["source"], "summary": report["summary"],
                      "groups": report["groups"],
                      "selected_pack_indices": [p["pack_index"] for p in report["selected_packs"]]},
                     indent=2, ensure_ascii=False))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
