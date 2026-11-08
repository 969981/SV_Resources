#!/usr/bin/env python3
"""Audit TRUE SV 4.0.0 original-native Gen9 wild T30 differences.

All input SHA-256 values and the original-game provenance are checked. We do
NOT change .pkl files, invent source points or infer game-runtime legality.
"""
import argparse
from collections import Counter, defaultdict
import csv
import hashlib
import json
from pathlib import Path

COLUMNS = ("location_id", "cross_from_id", "species_national", "form_raw",
           "gender_raw", "level_min", "level_max", "time_forbidden_mask",
           "weather_allowed_mask")
# Only (level_min, level_max) may be ignored when matching candidate identities.
GROUP = (0, 1, 2, 3, 4, 7, 8)
EXPECTED_SHA = {
    "native_diff": "6A2B3F50D9C0A51B0C93D1F36DACEF3837E4F66E224A4953F8D69BE3549892B5",
    "reference_diff": "C5CED4CF842AE24658A40D8B6EFA6D8C6A2CD5F2BD1AB9EB177C1DF4D17500DB",
    "bridge": "E6BE1EE79A59FEC0982286B0CDBC46F79A71B47448DE3A6DC0F41783E9160225",
    "native_csv": "A59709B5CF49B12AD147F022E29F8E7DC793299F1A568FAB2D779FC36DD80E34",
}
STATUS = "SV400_SOURCE_VERIFIED_WILD_T30_LEVEL_GROUPS_CROSS158_REVIEW_ONLY"


def sha(path):
    digest = hashlib.sha256()
    with Path(path).open("rb") as stream:
        for buf in iter(lambda: stream.read(1 << 20), b""):
            digest.update(buf)
    return digest.hexdigest().upper()


def slots(path):
    with Path(path).open(encoding="utf-8-sig", newline="") as file:
        reader = csv.DictReader(file)
        if tuple(reader.fieldnames or ()) != COLUMNS:
            raise ValueError("Gen9 slot field list/order mismatch")
        result = [tuple(int(row[col]) for col in COLUMNS) for row in reader]
    if any(not 0 <= row[5] <= row[6] <= 100 for row in result):
        raise ValueError("Invalid level interval in source evidence")
    return result


def signature(row):
    return tuple(row[index] for index in GROUP)


def interval(row):
    return (row[5], row[6])


def analyze(native, reference):
    n = defaultdict(list)
    r = defaultdict(list)
    for row in native:
        n[signature(row)].append(interval(row))
    for row in reference:
        r[signature(row)].append(interval(row))
    groups = []
    residual = []
    for key in sorted(set(n) | set(r)):
        n_levels, r_levels = sorted(n[key]), sorted(r[key])
        paired = min(len(n_levels), len(r_levels))
        if len(r_levels) > len(n_levels):
            residual.append((key, r_levels, n_levels, len(r_levels)-len(n_levels)))
        groups.append({
            "location_id": key[0], "cross_from_id": key[1],
            "species_national": key[2], "form_raw": key[3],
            "gender_raw": key[4], "time_forbidden_mask": key[5],
            "weather_allowed_mask": key[6],
            "native_only_occurrences": len(n_levels),
            "pkhex_only_occurrences": len(r_levels),
            "candidate_one_to_one_pairs": paired,
            "reference_surplus_after_one_to_one": len(r_levels)-paired,
            "native_excess_after_one_to_one": len(n_levels)-paired,
            "native_intervals": json.dumps(n_levels, separators=(",", ":")),
            "pkhex_intervals": json.dumps(r_levels, separators=(",", ":")),
        })
    return groups, residual


def summarize(native_diff, reference_diff, native_csv, bridge, strict=True):
    if strict:
        for kind, path in (("native_diff", native_diff), ("reference_diff", reference_diff),
                           ("native_csv", native_csv), ("bridge", bridge)):
            if sha(path) != EXPECTED_SHA[kind]:
                raise ValueError("Original 4.0.0 SHA mismatch: " + kind)
    manifest = json.loads(Path(bridge).read_text(encoding="utf-8-sig"))
    p = manifest.get("provenance", {})
    wild = manifest.get("tables", {}).get("wild", {})
    if (manifest.get("status") != "NATIVE_SOURCE_VERIFIED_PKHEX_BINARY_COMPATIBLE_NOT_FULL_LEGALITY_PARITY"
        or manifest.get("pkhex_pinned_commit") != "0660d1e1f4924b8478daec73281bb8071a82ad19"
        or p.get("original_source_entries") != 61 or p.get("original_collision_entries") != 223
        or (wild.get("native_records"), wild.get("pkhex_reference_records"),
            wild.get("identical_records"), wild.get("native_only"), wild.get("pkhex_only"))
            != (29840, 26861, 26185, 3655, 676)):
        raise ValueError("Unverified native/PkHex baseline or source drift")
    n = slots(native_diff)
    r = slots(reference_diff)
    if (len(n),len(r)) != (3655,676):
        raise ValueError("Not the pinned original 30f multiset-diff counts")
    groups, surplus = analyze(n,r)
    paired = sum(x["candidate_one_to_one_pairs"] for x in groups)
    missing = sum(v[3] for v in surplus)
    cross_native = sum(row[1] == 158 for row in n)
    matched = 0
    with Path(native_csv).open(encoding="utf-8-sig", newline="") as f:
        source = csv.DictReader(f)
        for row in source:
            if row["source_table"] == "wild" and row["cross_from_id"] == "158":
                if row["reference_match"] == "SAME_AS_PINNED_PKHEX":
                    matched += 1
    if (paired, missing, len(surplus), cross_native, matched) != (666,10,6,2337,808):
        raise ValueError("True original 4.0.0 source multiset evidence changed")
    # Empty the notion that all source-cross 158 records are invalid: 808 match.
    summary = {
        "status": STATUS,
        "reference_commit": manifest["pkhex_pinned_commit"],
        "source_provenance": "ORIGINAL_SV400_61_FILES_223_TRCOL_SHA_VERIFIED",
        "wild_counts": wild,
        "candidate_one_to_one_level_pairs": paired,
        "reference_surplus_unpaired_occurrences": missing,
        "distinct_interval_groups_with_reference_surplus": len(surplus),
        "source_only_cross_from_158": cross_native,
        "already_reference_matching_cross_from_158": matched,
        "source_only_cross_from_158_share_percent": round(100*cross_native/len(n),2),
        "unpaired_reference_groups": [dict(zip(
            ("identity_7_fields", "pkhex_reference_intervals", "native_only_intervals", "reference_excess_occurrences"),
            (list(key), ref, nat, count))) for key, ref, nat, count in surplus],
        "warnings": [
            "The 10 records are not missing species or places: six identical non-level identity groups have multiple reference intervals, but fewer native-only interval occurrences.",
            "A source interval spanning several disjoint PKHeX intervals is not proof that the game should enforce the PKHeX split.",
            "At least 808 genuine native wild CrossFrom=158 occurrences already match the pinned PKHeX reference; never blanket-remove that location.",
            "Rows are PKHeX-format templates from source-verifiable pkNX output, not proof of runtime RNG/PK9 legality.",
        ],
    }
    return groups, summary


def write_report(groups, summary, target):
    target = Path(target)
    target.mkdir(parents=True, exist_ok=True)
    with (target/"SV400_Wild_T30_SevenField_Grouped.csv").open("w", encoding="utf-8-sig", newline="") as fp:
        writer=csv.DictWriter(fp,fieldnames=list(groups[0]))
        writer.writeheader()
        writer.writerows(groups)
    (target/"SV400_Wild_T30_Six_Interval_Groups_and_Cross158.json").write_text(
        json.dumps(summary,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    for name in ("native-diff", "reference-diff", "native-csv", "bridge", "output"):
        ap.add_argument("--"+name,required=True,type=Path)
    a=ap.parse_args()
    paths=(a.native_diff,a.reference_diff,a.native_csv,a.bridge)
    output=a.output.resolve()
    if any(output == x.parent.resolve() or output.is_relative_to(x.parent.resolve()) for x in paths):
        raise ValueError("Output path must not be nested inside source evidence")
    groups, summary=summarize(*paths)
    write_report(groups, summary, output)
    print(json.dumps({"status":summary["status"], "groups":len(groups), "surplus_groups":6,
                      "level_pairs":summary["candidate_one_to_one_level_pairs"],
                      "source_only_cross158":summary["source_only_cross_from_158"]}))

if __name__ == "__main__":
    main()