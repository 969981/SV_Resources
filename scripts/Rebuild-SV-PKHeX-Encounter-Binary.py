#!/usr/bin/env python3
"""Lossless writer for *verified normalized* PKHeX Gen9 encounter CSV.

This is format infrastructure, NOT a SV native data extractor or legality
validator. It never overwrites the original PKHeX checkout or SV resource tree.
"""
from __future__ import annotations
import argparse
from collections import defaultdict
import csv
import hashlib
import json
from pathlib import Path
import struct

BINARIES = {
    "wild": "encounter_wild_paldea.pkl",
    "fixed": "encounter_fixed_paldea.pkl",
    "raid_paldea": "encounter_gem_paldea.pkl",
    "raid_kitakami": "encounter_gem_kitakami.pkl",
    "raid_blueberry": "encounter_gem_blueberry.pkl",
    "outbreak": "encounter_outbreak_paldea.pkl",
}


def sha(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest().upper()


def read_csv(folder: Path, name: str) -> list[dict] | None:
    path = folder / name
    if not path.is_file():
        return None
    with path.open(encoding="utf-8-sig", newline="") as stream:
        return list(csv.DictReader(stream))


def value(row: dict, field: str, minimum: int = 0, maximum: int = 255) -> int:
    if field not in row:
        raise ValueError(f"Missing field {field}")
    n = int(row[field], 10)
    if n < minimum or n > maximum:
        raise ValueError(f"{field}={n} outside [{minimum}, {maximum}]")
    return n


def ordered(rows: list[dict], id_name: str) -> list[dict]:
    found = sorted(rows, key=lambda x: int(x[id_name]))
    if [int(x[id_name]) for x in found] != list(range(len(found))):
        raise ValueError(f"{id_name} must be a contiguous 0-based sequence")
    return found


def wild(areas: list[dict], slots: list[dict]) -> bytes:
    areas = ordered(areas, "area_index")
    if not areas or len(areas) > 65535:
        raise ValueError("Invalid area count")
    by_area: dict[int, list[dict]] = defaultdict(list)
    for slot in slots:
        area = value(slot, "area_index", 0, len(areas)-1)
        by_area[area].append(slot)
    chunks = []
    for area in areas:
        ai = value(area, "area_index", 0, len(areas)-1)
        local_slots = ordered(by_area[ai], "slot_index")
        if len(local_slots) != value(area, "slot_count", 0, 65535):
            raise ValueError(f"Area {ai} slot count mismatch")
        location = value(area, "location_id")
        cross = value(area, "cross_from_id")
        data = bytearray(struct.pack("<HH", location, cross))
        for row in local_slots:
            if (value(row, "location_id") != location or
                    value(row, "cross_from_id") != cross):
                raise ValueError(f"Area {ai} location/crossover differs from source")
            data.extend(struct.pack("<HBBBBBB",
                value(row, "species_national", 0, 65535),
                value(row, "form_raw"),
                value(row, "gender_raw"),
                value(row, "level_min"),
                value(row, "level_max"),
                value(row, "time_forbidden_mask"),
                value(row, "weather_allowed_mask")))
        chunks.append(bytes(data))
    header_size = 4 + 4*(len(chunks)+1)
    offsets = [header_size]
    for chunk in chunks:
        offsets.append(offsets[-1]+len(chunk))
    return b"sv" + struct.pack("<H", len(chunks)) + struct.pack(
        f"<{len(offsets)}I", *offsets) + b"".join(chunks)


def fixed(rows: list[dict]) -> bytes:
    result = bytearray()
    for row in ordered(rows, "record_index"):
        result.extend(struct.pack("<HBBBBBBHHHHBBBB",
            value(row, "species_national", 0, 65535),
            value(row, "form_raw"), value(row, "level"),
            value(row, "flawless_iv_count"), value(row, "tera_type_raw"),
            value(row, "gender_raw"), value(row, "ability_permission_raw"),
            *(value(row, f"move{i}", 0, 65535) for i in range(1,5)),
            *(value(row, f"location{i}") for i in range(4))))
    return bytes(result)


def raid(rows: list[dict], map_name: str) -> bytes:
    result = bytearray()
    for row in ordered(rows, "record_index"):
        if row["map_name"] != map_name:
            raise ValueError("Raid map label inconsistent with table")
        result.extend(struct.pack("<HBBBBBBHHHHBBBBhh",
            value(row, "species_national", 0, 65535),
            value(row, "form_raw"), (value(row, "gender_raw")+1)&255,
            value(row, "ability_permission_raw"),
            value(row, "flawless_iv_count"),
            value(row, "shiny_rule_raw"),
            value(row, "level"),
            *(value(row, f"move{i}", 0, 65535) for i in range(1,5)),
            value(row, "tera_type_raw"), value(row, "index"),
            value(row, "stars"), value(row, "rand_rate"),
            value(row, "rand_min_scarlet", -32768, 32767),
            value(row, "rand_min_violet", -32768, 32767)))
    return bytes(result)


def outbreak(rows: list[dict]) -> bytes:
    result = bytearray()
    for row in ordered(rows, "record_index"):
        result.extend(struct.pack("<HBBBBBBBBBB",
            value(row, "species_national", 0, 65535),
            value(row, "form_raw"), value(row, "gender_raw"),
            value(row, "level_min"), value(row, "level_max"),
            value(row, "ribbon_raw"), value(row, "weather_allowed_mask"),
            value(row, "force_scale_range"), value(row, "scale_min"),
            value(row, "scale_max"), value(row, "is_shiny_forced")))
        flags = int(row["met_flags_hex"], 16)
        if not 0 <= flags < (1 << 120):
            raise ValueError("Outbreak met flags exceed 120 bits")
        raw = (flags << 8) | value(row, "met_base")
        result.extend(raw.to_bytes(16, "little"))
    return bytes(result)


def reconstruct(input_dir: Path, out: Path, reference: Path | None):
    if not input_dir.is_dir():
        raise FileNotFoundError("Missing audit CSV input folder")
    if out == input_dir or out.is_relative_to(input_dir):
        raise ValueError("Output must not overwrite reference CSV folder")
    if reference and (out == reference or out.is_relative_to(reference)):
        raise ValueError("Output must not overwrite PKHeX reference source")
    out.mkdir(parents=True, exist_ok=True)
    report: dict = {"status": "RECONSTRUCTED_NORMALIZED_DATA_NOT_GAME_NATIVE_VERIFIED",
                    "results": {}}
    for key, name in BINARIES.items():
        rows = read_csv(input_dir, f"pkhex_{key}.csv")
        if rows is None:
            report["results"][key] = {"status": "MISSING_INPUT"}
            continue
        if key == "wild":
            areas = read_csv(input_dir, "pkhex_wild_areas.csv")
            if areas is None:
                raise ValueError("Wild round-trip requires areas CSV including empty areas")
            binary = wild(areas, rows)
        elif key == "fixed":
            binary = fixed(rows)
        elif key.startswith("raid_"):
            binary = raid(rows, key.removeprefix("raid_"))
        else:
            binary = outbreak(rows)
        dest = out / name
        dest.write_bytes(binary)
        result = {"status": "SERIALIZED", "records": len(rows),
                  "bytes": len(binary), "sha256": sha(binary)}
        if reference is not None:
            ref = reference / name
            if ref.is_file():
                original = ref.read_bytes()
                result["reference_sha256"] = sha(original)
                result["byte_exact_match"] = original == binary
            else:
                result["reference_missing"] = True
        report["results"][key] = result
    (out / "rebuild-report.json").write_text(
        json.dumps(report, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
    return report


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--input", type=Path, required=True,
                    help="CSV folder from Audit-SV-PKHeX-Encounters.py")
    ap.add_argument("--output", type=Path, required=True,
                    help="Separate local folder (never inside PKHeX or source virtual tree)")
    ap.add_argument("--reference", type=Path,
                    help="Optional PKHeX .../Resources/legality/wild/Gen9 reference folder")
    ap.add_argument("--require-exact-match", action="store_true",
                    help="Fail if an available reference does not match byte-for-byte")
    args = ap.parse_args()
    if args.require_exact_match and not args.reference:
        ap.error("Require-exact-match requires --reference")
    report = reconstruct(args.input.resolve(), args.output.resolve(),
                         args.reference.resolve() if args.reference else None)
    print(json.dumps(report, ensure_ascii=False, indent=2))
    if args.require_exact_match and any(
        item.get("byte_exact_match") is not True for item in report["results"].values()
    ):
        raise SystemExit(2)


if __name__ == "__main__":
    main()
