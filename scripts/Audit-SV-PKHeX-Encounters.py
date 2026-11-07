#!/usr/bin/env python3
"""Inspect PKHeX Gen9 encounter assets; never overwrite upstream/game binaries.

The .pkl files are PKHeX-specific binary resources, NOT Python pickles.
This audit decodes the exact 2026 PKHeX C# layouts and can compare the bytes
with output from the pinned pkNX EncounterSlotDumper9 / FixedSymbolDumper9.
It does not infer that any missing source game data has been decoded.
"""
from __future__ import annotations

import argparse
from collections import Counter
import csv
import hashlib
import json
from pathlib import Path
import struct

RESOURCE = Path("PKHeX.Core/Resources/legality/wild/Gen9")
NAMES = {
    "wild": "encounter_wild_paldea.pkl",
    "fixed": "encounter_fixed_paldea.pkl",
    "raid_paldea": "encounter_gem_paldea.pkl",
    "raid_kitakami": "encounter_gem_kitakami.pkl",
    "raid_blueberry": "encounter_gem_blueberry.pkl",
    "outbreak": "encounter_outbreak_paldea.pkl",
    "dist": "encounter_dist_paldea.pkl",
    "might": "encounter_might_paldea.pkl",
}
WILD_COLUMNS = ("area_index", "location_id", "cross_from_id", "slot_index",
                "species_national", "form_raw", "gender_raw",
                "level_min", "level_max", "time_forbidden_mask", "weather_allowed_mask")
FIXED_COLUMNS = ("record_index", "species_national", "form_raw", "level",
                 "flawless_iv_count", "tera_type_raw", "gender_raw",
                 "ability_permission_raw", "move1", "move2", "move3", "move4",
                 "location0", "location1", "location2", "location3")
RAID_COLUMNS = ("record_index", "map_name", "species_national", "form_raw",
                "gender_raw", "ability_permission_raw", "flawless_iv_count",
                "shiny_rule_raw", "level", "move1", "move2", "move3", "move4",
                "tera_type_raw", "index", "stars", "rand_rate",
                "rand_min_scarlet", "rand_min_violet")
OUTBREAK_COLUMNS = ("record_index", "species_national", "form_raw",
                   "gender_raw", "level_min", "level_max", "ribbon_raw",
                   "weather_allowed_mask", "force_scale_range", "scale_min",
                   "scale_max", "is_shiny_forced", "met_base", "met_flags_hex")


def sha256(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest().upper()


def read_wild(data: bytes) -> list[dict]:
    """PKHeX BinLinkerAccessor('sv') + EncounterArea9 + 8-byte EncounterSlot9."""
    if len(data) < 8 or data[:2] != b"sv":
        raise ValueError("Expected Gen9 BinLinker identifier 'sv'")
    count = struct.unpack_from("<H", data, 2)[0]
    header = 4 + 4 * (count + 1)
    if not count or header > len(data):
        raise ValueError("Truncated wild area offset table")
    offsets = struct.unpack_from(f"<{count + 1}I", data, 4)
    if offsets[0] < header or offsets[-1] > len(data) or offsets[-1] != len(data):
        raise ValueError("Invalid wild data offset bounds")
    if any(a > b for a, b in zip(offsets, offsets[1:])):
        raise ValueError("Wild area offsets not monotone")
    rows: list[dict] = []
    for area_index, (start, end) in enumerate(zip(offsets, offsets[1:])):
        area = data[start:end]
        if len(area) < 4 or (len(area) - 4) % 8:
            raise ValueError(f"Invalid area {area_index} length: {len(area)}")
        location, cross = struct.unpack_from("<HH", area)
        # PKHeX currently reads the low byte of these two ushort fields.
        if location > 255 or cross > 255:
            raise ValueError("Location > 255 not representable by PKHeX EncounterArea9")
        for slot_index, i in enumerate(range(4, len(area), 8)):
            species, form, gender, low, high, time, weather = struct.unpack_from(
                "<HBBBBBB", area, i)
            rows.append(dict(zip(WILD_COLUMNS,
                (area_index, location, cross, slot_index, species, form,
                 gender, low, high, time, weather))))
    return rows


def read_fixed(data: bytes) -> list[dict]:
    """PKHeX EncounterFixed9.ReadEncounter; 0x14 bytes each."""
    if len(data) % 0x14:
        raise ValueError("Fixed encounters not divisible by 0x14")
    rows = []
    for index, off in enumerate(range(0, len(data), 0x14)):
        species, form, level, iv, tera, gender, ability, m1, m2, m3, m4, l0, l1, l2, l3 = (
            struct.unpack_from("<HBBBBBBHHHHBBBB", data, off))
        rows.append(dict(zip(FIXED_COLUMNS,
            (index, species, form, level, iv, tera, gender, ability,
             m1, m2, m3, m4, l0, l1, l2, l3))))
    return rows


def read_raid(data: bytes, name: str) -> list[dict]:
    """PKHeX EncounterTera9.ReadEncounter; 0x18 bytes each."""
    if len(data) % 0x18:
        raise ValueError("Raid encounters not divisible by 0x18")
    rows = []
    for index, off in enumerate(range(0, len(data), 0x18)):
        (species, form, gender, ability, iv, shiny, level, m1, m2, m3, m4,
         tera, selection_index, stars, rate, min_sl, min_vl) = struct.unpack_from(
             "<HBBBBBBHHHHBBBBhh", data, off)
        # Original data encodes sex using 1..3; PKHeX subtracts 1 as a byte.
        gender = (gender - 1) & 0xFF
        rows.append(dict(zip(RAID_COLUMNS,
            (index, name, species, form, gender, ability, iv, shiny, level,
             m1, m2, m3, m4, tera, selection_index, stars, rate, min_sl, min_vl))))
    return rows


def read_outbreak(data: bytes) -> list[dict]:
    """PKHeX EncounterOutbreak9: 0x1C-byte records with 128-bit location mask."""
    if len(data) % 0x1C:
        raise ValueError("Outbreak encounters not divisible by 0x1C")
    rows = []
    for index, off in enumerate(range(0, len(data), 0x1C)):
        species, form, gender, low, high, ribbon, weather, forced, smin, smax, shiny = (
            struct.unpack_from("<HBBBBBBBBBB", data, off))
        base = data[off+12]
        flags = int.from_bytes(data[off+12:off+28], "little") >> 8
        rows.append(dict(zip(OUTBREAK_COLUMNS,
            (index, species, form, gender, low, high, ribbon, weather, forced,
             smin, smax, shiny, base, f"{flags:030X}"))))
    return rows


def read_table(key: str, raw: bytes) -> list[dict] | None:
    if key == "wild":
        return read_wild(raw)
    if key == "fixed":
        return read_fixed(raw)
    if key.startswith("raid_"):
        return read_raid(raw, key.removeprefix("raid_"))
    if key == "outbreak":
        return read_outbreak(raw)
    # Distribution and Mighty use separate larger schemas, not Raid 0x18.
    return None


def compare_rows(reference: list[dict], generated: list[dict]) -> dict:
    """Multiset comparison; preserves duplicates that matter for encounter slots."""
    def key(row: dict) -> tuple:
        # No natural unique ID for all areas. Compare value + multiplicity.
        return tuple((k, row[k]) for k in row.keys() if k != "record_index")
    a, b = Counter(map(key, reference)), Counter(map(key, generated))
    only_a = a - b
    only_b = b - a
    return {"reference_rows": len(reference), "generated_rows": len(generated),
            "only_pkhex": sum(only_a.values()),
            "only_generated": sum(only_b.values()),
            "first_pkhex_only": [dict(k) for k in list(only_a)[:8]],
            "first_generated_only": [dict(k) for k in list(only_b)[:8]]}


def write_csv(path: Path, rows: list[dict], headers: tuple[str, ...]):
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", newline="", encoding="utf-8-sig") as file:
        writer = csv.DictWriter(file, fieldnames=headers, lineterminator="\n")
        writer.writeheader()
        writer.writerows(rows)


def audit(pkhex_root: Path, out: Path, generated: Path | None = None) -> dict:
    reference = pkhex_root / RESOURCE
    if not reference.is_dir():
        raise FileNotFoundError(f"PKHeX resource directory missing: {reference}")
    out.mkdir(parents=True, exist_ok=True)
    summary = {"reference": str(reference), "format": "PKHEX_GEN9_BINARY_NOT_PYTHON_PICKLE",
               "status": "REFERENCE_ONLY_NOT_NATIVE_SV_4.0.0_VERIFIED",
               "sources": {}, "diffs": {}, "warnings": [
                   "PKHeX resources are legality-oriented summaries, not full spawn weights.",
                   "No read-only audit can prove origin from SV 4.0.0 without native game source.",
                   "Fixed and raid templates do not use the same 8-byte wild slot layout.",
                   "Weather bits permit specific encounter marks; time bits are inverted (0=allowed).",
                   "Version, collider, crossover, form changes and RNG rules need independent validation.",
               ]}
    for key, name in NAMES.items():
        file = reference / name
        if not file.is_file():
            summary["sources"][key] = {"status": "NOT_IN_PKHEX_CHECKOUT", "filename": name}
            continue
        raw = file.read_bytes()
        rows = read_table(key, raw)
        result = {"filename": name, "bytes": len(raw), "sha256": sha256(raw),
                  "status": "DECODED_TEMPLATE" if rows is not None else "SCHEMA_NOT_IMPLEMENTED",
                  "records": len(rows) if rows is not None else None}
        if key == "wild" and rows is not None:
            result["area_count"] = struct.unpack_from("<H", raw, 2)[0]
            result["distinct_met_locations"] = len({r["location_id"] for r in rows})
            result["crossover_slots"] = sum(r["cross_from_id"] != 0 for r in rows)
        summary["sources"][key] = result
        if rows is not None:
            columns = (WILD_COLUMNS if key == "wild" else FIXED_COLUMNS if key == "fixed"
                       else RAID_COLUMNS if key.startswith("raid_") else OUTBREAK_COLUMNS)
            write_csv(out / f"pkhex_{key}.csv", rows, columns)
        if generated is None:
            continue
        candidate = generated / name
        if not candidate.is_file():
            summary["diffs"][key] = {"status": "NO_GENERATED_REFERENCE"}
            continue
        source_bytes = candidate.read_bytes()
        compare = {"source_sha256": sha256(source_bytes),
                   "reference_sha256": sha256(raw),
                   "exact_binary_match": source_bytes == raw}
        if rows is not None and not compare["exact_binary_match"]:
            compare["row_delta"] = compare_rows(rows, read_table(key, source_bytes) or [])
        summary["diffs"][key] = compare
    (out / "summary.json").write_text(
        json.dumps(summary, ensure_ascii=False, indent=2) + "\n", "utf-8")
    return summary


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--pkhex-root", type=Path, required=True,
                    help="Local checkout of kwsch/PKHeX (not the .pkl directory)")
    ap.add_argument("--output", type=Path, required=True,
                    help="Separate folder for report and generated CSV")
    ap.add_argument("--pknx-generated", type=Path,
                    help="Optional directory containing trusted pkNX generated .pkl outputs")
    args = ap.parse_args()
    source = args.pkhex_root.resolve()
    output = args.output.resolve()
    if output == source or output.is_relative_to(source):
        ap.error("Output must be outside the PKHeX checkout (read-only reference)")
    if args.pknx_generated and output.is_relative_to(args.pknx_generated.resolve()):
        ap.error("Output must not overlap original pkNX dump folder")
    report = audit(source, output, args.pknx_generated.resolve()
                   if args.pknx_generated else None)
    print(json.dumps({
        "source_count": len(report["sources"]),
        "rows": {k: v.get("records") for k, v in report["sources"].items()},
        "comparisons": report["diffs"],
        "output": str(output),
    }, ensure_ascii=False, indent=2))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
