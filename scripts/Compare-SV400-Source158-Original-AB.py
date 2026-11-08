#!/usr/bin/env python3
"""Compare five original-source SV400 Kitakami CrossFrom=158 A/B variants.

Original 61 M2 + 223 TRCOL must be SHA-verified by the native CLI.
The PKHeX reference is reconstructed ONLY AFTER native generation using the
pinned 30f multiset difference. It is never an input to game-data extraction.
"""
from __future__ import annotations
import argparse
from collections import Counter
import csv
import hashlib
import importlib.util
import json
from pathlib import Path

SLOTS = ("location_id", "cross_from_id", "species_national", "form_raw",
         "gender_raw", "level_min", "level_max", "time_forbidden_mask", "weather_allowed_mask")
MODES = ("kitakami-158-worldend-strict", "kitakami-158-worldend-exclude",
         "kitakami-158-exact-source-area",
         "kitakami-158-prefer-specific-owner",
         "kitakami-158-strict-prefer-specific-owner")
NAMES = (
    "encounter_wild_paldea.pkl", "encounter_fixed_paldea.pkl",
    "encounter_gem_paldea.pkl", "encounter_gem_kitakami.pkl",
    "encounter_gem_blueberry.pkl",
)
PIN_PKHEX_COMMIT = "0660d1e1f4924b8478daec73281bb8071a82ad19"
STATUS = "ORIGINAL_SV400_KITAKAMI_CROSS158_ISOLATED_AB_REFERENCE_DIAGNOSTICS_NOT_GAME_LEGALITY"


def digest(path):
    h = hashlib.sha256()
    with Path(path).open("rb") as f:
        for part in iter(lambda: f.read(1 << 20), b""):
            h.update(part)
    return h.hexdigest().upper()


def import_reader(path):
    spec = importlib.util.spec_from_file_location("sv400_readonly_gen9", path)
    mod = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(mod)
    return mod


def parse_diff(path):
    with Path(path).open(newline="", encoding="utf-8-sig") as f:
        rows = csv.DictReader(f)
        if tuple(rows.fieldnames or ()) != SLOTS:
            raise ValueError("Pinned Gen9 30f source/reference slot columns mismatch")
        return Counter(tuple(int(row[k]) for k in SLOTS) for row in rows)


def read_build(directory, expected_mode, original):
    directory = Path(directory)
    doc = json.loads((directory / "native-encounter-build.json").read_text(encoding="utf-8-sig"))
    if (doc.get("status") != "GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES"
        or doc.get("collisionBlocker") is not None
        or doc.get("unverifiedExtraFiles")
        or doc.get("levelABMode") != "baseline"
        or doc.get("crossoverABMode") != expected_mode
        or doc.get("originalTrcolEntries") != 223
        or len(doc.get("sourceFilesActuallyRead", [])) != 276
        or any(not f.get("verifiedByOriginalM2Manifest") for f in doc["sourceFilesActuallyRead"])):
        raise ValueError("No full native 61+223 original crossover A/B source proof")
    entries = {f["name"]: f for f in doc["generated"]}
    if set(entries) != set(NAMES):
        raise ValueError("Original five native Gen9 tables missing")
    for name in NAMES:
        actual = digest(directory / name)
        if actual != entries[name]["sha256"]:
            raise ValueError("Native output SHA mismatch: " + name)
        if name != NAMES[0] or expected_mode == "baseline":
            ref_kind = {
                NAMES[0]:"wild", NAMES[1]:"fixed",
                NAMES[2]:"raid_paldea", NAMES[3]:"raid_kitakami",
                NAMES[4]:"raid_blueberry",
            }[name]
            if actual != original["tables"][ref_kind]["native_sha256"]:
                raise ValueError("Isolated AB modified baseline fixed/raid/non-experimental outputs: " + name)
    return doc


def tally(native, reference):
    return {
        "native":sum(native.values()),
        "reference":sum(reference.values()),
        "matched":sum((native & reference).values()),
        "native_only":sum((native-reference).values()),
        "pkhex_only":sum((reference-native).values()),
    }


def match_retention(baseline, variant, reference):
    """Multiset-safe original matching slot survival, NOT just net reference gain.

    A variant can lose an already-matching slot and gain a different matching
    slot; its net match delta would hide that regression. Count both explicitly.
    """
    baseline_match = baseline & reference
    variant_match = variant & reference
    retained = baseline_match & variant_match
    lost = baseline_match - retained
    recovered = variant_match - retained
    return {
        "baseline_reference_matches_retained": sum(retained.values()),
        "baseline_reference_matches_lost": sum(lost.values()),
        "new_reference_matches_recovered": sum(recovered.values()),
    }


def focus(key):
    return key[1] == 158


def compare(baseline_dir, manifest, diff_root, variants, decoder_path, output_dir):
    baseline_dir, manifest, diff_root, decoder_path, output_dir = map(
        lambda p: Path(p).resolve(), (baseline_dir, manifest, diff_root, decoder_path, output_dir))
    for p in (baseline_dir, diff_root, manifest.parent):
        if output_dir == p or output_dir.is_relative_to(p):
            raise ValueError("A/B outputs must never overwrite original game or comparison input")
    source = json.loads(manifest.read_text(encoding="utf-8-sig"))
    if (source.get("status") != "NATIVE_SOURCE_VERIFIED_PKHEX_BINARY_COMPATIBLE_NOT_FULL_LEGALITY_PARITY"
        or source.get("pkhex_pinned_commit") != PIN_PKHEX_COMMIT
        or source.get("provenance", {}).get("original_source_entries") != 61
        or source.get("provenance", {}).get("original_collision_entries") != 223):
        raise ValueError("Original 4.0.0 pinned 61+223 bridge manifest drift")
    read_build(baseline_dir, "baseline", source)
    reader = import_reader(decoder_path)
    n = Counter(tuple(row[k] for k in SLOTS)
                for row in reader.read_wild((baseline_dir/NAMES[0]).read_bytes()))
    only_native = parse_diff(diff_root/"T30/comparison/wild_native_only.csv")
    only_pkhex = parse_diff(diff_root/"T30/comparison/wild_pkhex_only.csv")
    if (sum(n.values()), sum(only_native.values()), sum(only_pkhex.values())) != (29840,3655,676):
        raise ValueError("Genuine original 30f source/reference diff counts changed")
    if any(n[k] < count for k,count in only_native.items()):
        raise ValueError("Native-only difference contains a non-native slot")
    reference = (n-only_native)+only_pkhex
    if tally(n, reference) != {"native":29840,"reference":26861,
                              "matched":26185,"native_only":3655,"pkhex_only":676}:
        raise ValueError("Cannot reproduce independent pinned PKHeX multiset baseline")
    focus_ref = Counter({k:v for k,v in reference.items() if focus(k)})
    base_focal = Counter({k:v for k,v in n.items() if focus(k)})
    base_nonfocal = Counter({k:v for k,v in n.items() if not focus(k)})
    base_total = tally(base_focal, focus_ref)
    comparisons = []
    per_location = []
    for mode in MODES:
        root = Path(variants[mode]).resolve()
        if root == baseline_dir or output_dir == root or output_dir.is_relative_to(root):
            raise ValueError("A/B must use a separate output directory")
        read_build(root, mode, source)
        v = Counter(tuple(row[k] for k in SLOTS)
                    for row in reader.read_wild((root/NAMES[0]).read_bytes()))
        nonfocal = Counter({k:count for k,count in v.items() if not focus(k)})
        if nonfocal != base_nonfocal:
            raise ValueError("Isolated Kitakami 158 mode modified non-CrossFrom=158 wild slots: " + mode)
        vfocal = Counter({k:count for k,count in v.items() if focus(k)})
        result = tally(vfocal, focus_ref)
        retention = match_retention(base_focal, vfocal, focus_ref)
        if (retention["new_reference_matches_recovered"] - retention["baseline_reference_matches_lost"] != result["matched"]-base_total["matched"]):
            raise ValueError("A/B matched template gain/loss cannot be reconciled")
        comparisons.append({
            **retention,
            "mode":mode,
            "baseline_native_cross158":base_total["native"],
            "native_cross158":result["native"],
            "baseline_matched_cross158":base_total["matched"],
            "matched_cross158":result["matched"],
            "match_delta":result["matched"]-base_total["matched"],
            "baseline_only_native_cross158":base_total["native_only"],
            "only_native_cross158":result["native_only"],
            "native_only_delta":result["native_only"]-base_total["native_only"],
            "baseline_only_pkhex_cross158":base_total["pkhex_only"],
            "only_pkhex_cross158":result["pkhex_only"],
            "pkhex_only_delta":result["pkhex_only"]-base_total["pkhex_only"],
            "fixed_and_raid_sha_same":True,
            "all_non_158_wild_unchanged":True,
        })
        locs = sorted({k[0] for k in base_focal} | {k[0] for k in vfocal} | {k[0] for k in focus_ref})
        for loc in locs:
            before = Counter({k:c for k,c in base_focal.items() if k[0] == loc})
            after = Counter({k:c for k,c in vfocal.items() if k[0] == loc})
            ref = Counter({k:c for k,c in focus_ref.items() if k[0] == loc})
            a, b = tally(before, ref), tally(after, ref)
            loc_retention = match_retention(before, after, ref)
            per_location.append({
                **loc_retention,
                "mode":mode,"location_id":loc,
                "baseline_matched":a["matched"],"variant_matched":b["matched"],
                "reference_match_gain_or_loss":b["matched"]-a["matched"],
                "baseline_native_only":a["native_only"],"variant_native_only":b["native_only"],
                "native_only_removed_or_added":b["native_only"]-a["native_only"],
                "baseline_reference_only":a["pkhex_only"],"variant_reference_only":b["pkhex_only"],
                "reference_only_delta":b["pkhex_only"]-a["pkhex_only"],
                "baseline_native_count":a["native"],"variant_native_count":b["native"],
            })
    output_dir.mkdir(parents=True, exist_ok=True)
    with (output_dir/"SV400_Kitakami158_Original_AB_By_Location.csv").open("w", encoding="utf-8-sig", newline="") as f:
        writer = csv.DictWriter(f, fieldnames=list(per_location[0]))
        writer.writeheader();writer.writerows(per_location)
    report = {
        "status":STATUS,
        "original_sources":"SV 4.0.0 verified 61+223 ROM files, original pkNX Gen9, independent PKHeX reference only after generation",
        "reference_commit":PIN_PKHEX_COMMIT,
        "baseline_wild_sha256":digest(baseline_dir/NAMES[0]),
        "baseline_global":tally(n,reference),
        "baseline_focal_cross158":base_total,
        "comparisons":comparisons,
        "limitations":[
            "A/B parity with fixed PKHeX reference does NOT establish source runtime legal encounters.",
            "WorldEnd is source collider ownership, not proof that a source point is an invalid encounter.",
            "Each counterfactual is isolated to the Kitakami CrossFrom=158 point propagation.",
            "Do not merge any A/B into ordinary pkNX output without independent game-captured PK9 and runtime source-region verification.",
        ],
    }
    (output_dir/"SV400_Kitakami158_Original_AB_vs_PKHeX.json").write_text(
        json.dumps(report, ensure_ascii=False, indent=2)+"\n", encoding="utf-8")
    return report


def main():
    p=argparse.ArgumentParser(description=__doc__)
    for arg in ("baseline", "manifest", "tolerance", "auditor", "output"):
        p.add_argument("--"+arg, required=True, type=Path)
    p.add_argument("--variant", required=True, action="append",
                   help="MODE=separate verified native output directory")
    a=p.parse_args()
    modes = dict(v.split("=",1) for v in a.variant)
    if set(modes) != set(MODES) or len(modes) != len(a.variant):
        raise ValueError("Expected exactly five recognized source-gated A/B experiments")
    result=compare(a.baseline,a.manifest,a.tolerance,modes,a.auditor,a.output)
    print(json.dumps({"status":result["status"],"comparisons":result["comparisons"]},ensure_ascii=False))


if __name__=="__main__":
    main()
