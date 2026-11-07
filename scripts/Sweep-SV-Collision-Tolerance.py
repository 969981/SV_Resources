#!/usr/bin/env python3
"""Run independent 30/10/0 geometry sensitivity builds on *verified* SV 4.0.0 sources.

This diagnostic patches only the runner's temporary checked-out pkNX file, restores
the original bytes even on failure, and never changes PKHeX legality policy.
A full SHA-identical rerun of the unmodified 30f baseline is mandatory.
"""
from __future__ import annotations

import argparse
from collections import Counter
import csv
import hashlib
import json
from pathlib import Path
import subprocess
import sys

CONSTANTS = ("tolX", "tolY", "tolZ")
LEVELS = (30, 10, 0)
TABLES = ("wild", "fixed")
PRODUCTS = (
    "encounter_wild_paldea.pkl",
    "encounter_fixed_paldea.pkl",
    "encounter_gem_paldea.pkl",
    "encounter_gem_kitakami.pkl",
    "encounter_gem_blueberry.pkl",
)
SOURCE_REL = Path("tools/pkNX/pkNX.WinForms/Dumping/Gen9/Encounter/EncounterDumperSV.cs")
CLI_REL = Path("tools/pkNX/pkNX.EncounterCLI/pkNX.EncounterCLI.csproj")
DLL_REL = Path("tools/pkNX/pkNX.EncounterCLI/bin/Release/net10.0/pkNX.EncounterCLI.dll")
COMPARE_REL = Path("scripts/Compare-SV-Native-PKHeX-Encounters.py")


def digest(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest().upper()


def patched(source: bytes, tolerance: int) -> bytes:
    if tolerance not in LEVELS:
        raise ValueError("Only 30, 10 and 0 are permitted for the diagnostic")
    result = source
    for axis in CONSTANTS:
        old = f"private const float {axis} = 30f;".encode("ascii")
        new = f"private const float {axis} = {tolerance}f;".encode("ascii")
        if result.count(old) != 1:
            raise ValueError(f"Unrecognized upstream geometry constant: {axis}; refusing ambiguous patch")
        result = result.replace(old, new)
    return result


def load(path: Path) -> dict:
    return json.loads(path.read_text(encoding="utf-8-sig"))


def sha_file(path: Path) -> str:
    return digest(path.read_bytes())


def csv_rows(path: Path) -> list[dict]:
    with path.open(encoding="utf-8-sig", newline="") as stream:
        return list(csv.DictReader(stream))


def row_counter(path: Path) -> Counter:
    rows = csv_rows(path)
    return Counter(tuple(sorted(row.items())) for row in rows)


def stats(diff: Path) -> dict:
    wild = csv_rows(diff / "wild_native_only.csv")
    fixed = csv_rows(diff / "fixed_native_only.csv")
    return {
        "wild_native_only_cross_from_158": sum(int(r["cross_from_id"]) == 158 for r in wild),
        "wild_native_only_met_location_158": sum(int(r["location_id"]) == 158 for r in wild),
        "wild_native_only_location_156_cross_from_158": sum(
            int(r["location_id"]) == 156 and int(r["cross_from_id"]) == 158 for r in wild
        ),
        "fixed_native_only_with_location_158": sum(
            158 in [int(r[f"location{i}"]) for i in range(4)] for r in fixed
        ),
    }


def ensure_original_build(build: dict) -> None:
    if (build.get("status") != "GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES"
        or build.get("collisionBlocker") is not None
        or build.get("originalTrcolEntries") != 223
        or len(build.get("generated", [])) != 5
        or build.get("unverifiedExtraFiles")):
        raise ValueError("Native 61+223 SHA-verified original-source evidence gate failed")


def run(cmd: list[str], cwd: Path, expected: tuple[int, ...] = (0,)) -> None:
    print("+", " ".join(cmd), flush=True)
    result = subprocess.run(cmd, cwd=cwd, check=False)
    if result.returncode not in expected:
        raise RuntimeError(f"Command returned {result.returncode}, expected {expected}: {cmd[0]}")


def sweep(args: argparse.Namespace) -> dict:
    repo = args.repo.resolve()
    source = repo / SOURCE_REL
    original = source.read_bytes()
    # Diagnostic is bound to the exact, unmodified vendored upstream semantics.
    if patched(original, 30) != original:
        raise AssertionError("30f no-op baseline is not byte-identical")
    base = args.baseline.resolve()
    reference = args.reference.resolve()
    output = args.output.resolve()
    native = args.virtual_root.resolve()
    manifest = args.verified_manifest.resolve()
    trcol = args.verified_trcol_manifest.resolve()
    if not all(p.is_file() for p in (manifest, trcol, base/"native-encounter-build.json")):
        raise FileNotFoundError("Verified original 61+223 manifests and existing baseline are required")
    ensure_original_build(load(base/"native-encounter-build.json"))
    if not native.is_dir() or not reference.is_dir():
        raise FileNotFoundError("Original native assets or independent pinned PKHeX reference absent")
    if output.is_relative_to(native) or output.is_relative_to(reference):
        raise ValueError("Output may not overwrite game assets or PKHeX reference")
    output.mkdir(parents=True, exist_ok=True)
    report = {
        "status": "ACTUAL_NATIVE_TOLERANCE_SWEEP_NOT_GAME_CAPTURED",
        "source_version": "SV 4.0.0",
        "source_sha256_original": digest(original),
        "verified_manifest_sha256": sha_file(manifest),
        "verified_trcol_manifest_sha256": sha_file(trcol),
        "baseline_sha256": {n: sha_file(base/n) for n in PRODUCTS},
        "interpretation": "Geometry sensitivity only; does not certify game spawn reachability or PID/EC/IV/shiny RNG.",
        "tolerances": {},
        "difference_against_30_native_only": {},
    }
    comparisons = {}
    try:
        for tol in LEVELS:
            mode = f"T{tol:02d}"
            source.write_bytes(patched(original, tol))
            generated = output/mode/"generated"
            diff = output/mode/"comparison"
            generated.mkdir(parents=True, exist_ok=True)
            run(["dotnet", "build", str(repo/CLI_REL), "-c", "Release",
                 "-t:Rebuild", "--nologo"], repo)
            run(["dotnet", str(repo/DLL_REL), "--virtual-root", str(native),
                 "--verified-manifest", str(manifest), "--verified-trcol-manifest",
                 str(trcol), "--output", str(generated)], repo)
            built = load(generated/"native-encounter-build.json")
            ensure_original_build(built)
            built_products = {x["name"]: x for x in built["generated"]}
            for name in PRODUCTS:
                if (name not in built_products or
                    sha_file(generated/name) != built_products[name]["sha256"].upper()):
                    raise ValueError(f"{mode}: generated {name} is missing or SHA-mismatched")
                if tol == 30 and sha_file(generated/name) != report["baseline_sha256"][name]:
                    raise ValueError(f"30f original baseline is NOT reproducible: {name}")
            diff.mkdir(parents=True, exist_ok=True)
            # A return code of 2 is the comparator's documented semantics for
            # legitimate *differences*, not a skipped/failed comparison.
            run([sys.executable, str(repo/COMPARE_REL), "--native-manifest", str(manifest),
                 "--build-evidence", str(generated/"native-encounter-build.json"),
                 "--generated", str(generated), "--reference", str(reference),
                 "--output", str(diff)], repo, expected=(0, 2))
            comparison = load(diff/"native-comparison.json")
            if not comparison.get("all_generated_from_native_not_reference"):
                raise ValueError("Generated comparison is not independently sourced")
            comparisons[tol] = diff
            report["tolerances"][str(tol)] = {
                "diagnostic_source_sha256": digest(source.read_bytes()),
                "products_sha256": {n: sha_file(generated/n) for n in PRODUCTS},
                "comparison_status": comparison["status"],
                "tables": {k: {field: comparison["tables"][k].get(field) for field in (
                    "status", "native_records", "reference_records",
                    "native_only", "reference_only"
                )} for k in TABLES},
                "location_158": stats(diff),
            }
        for tol in (10, 0):
            delta = {}
            for table in TABLES:
                for side in ("native_only", "pkhex_only"):
                    name = f"{table}_{side}.csv"
                    thirty = row_counter(comparisons[30]/name)
                    other = row_counter(comparisons[tol]/name)
                    delta[name] = {
                        "only_30": sum((thirty-other).values()),
                        f"only_{tol}": sum((other-thirty).values()),
                    }
            report["difference_against_30_native_only"][str(tol)] = delta
        (output/"sv-400-collision-tolerance-report.json").write_text(
            json.dumps(report, indent=2, ensure_ascii=False)+"\n", encoding="utf-8"
        )
        print(json.dumps({"status": report["status"], "tolerances": {
            k: {"wild": v["tables"]["wild"], "fixed": v["tables"]["fixed"],
                "location_158": v["location_158"]}
            for k, v in report["tolerances"].items()
        }}, ensure_ascii=False, indent=2))
        return report
    finally:
        source.write_bytes(original)
        if source.read_bytes() != original:
            raise RuntimeError("FAILED to restore untouched vendored pkNX source")


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    for flag in ("repo", "virtual-root", "verified-manifest",
                 "verified-trcol-manifest", "baseline", "reference", "output"):
        p.add_argument("--"+flag, type=Path, required=True)
    sweep(p.parse_args())
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
