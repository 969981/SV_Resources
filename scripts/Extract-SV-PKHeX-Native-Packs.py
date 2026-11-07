#!/usr/bin/env python3
"""Extract ONLY indexed 4.0.0 native encounter target packs using SV.TrinityDump.

Requires a separately restored, hash-verified original RomFS. This script
does not generate PKHeX legality files and never modifies original sources.
The file count and SHA audit are written separately; only verified target
assets and per-pack extraction reports are eligible for Git publication.
"""
from __future__ import annotations
import argparse
import hashlib
import json
from pathlib import Path
import runpy
import subprocess
import sys

TRPFS = Path("Unpack/4.0.0/romfs/arc/data.trpfs")
TRPFD = Path("Unpack/4.0.0/romfs/arc/data.trpfd/_index")
REPORT_FILE = TRPFS / "_index/encounter-native-extraction.json"
STATUS_OK = {"LOCATED_NATIVE_INDEX", "LOCATED_ALIAS_ONLY"}


def digest(path: Path):
    h = hashlib.sha256()
    with path.open("rb") as f:
        for c in iter(lambda: f.read(4 * 1024 * 1024), b""):
            h.update(c)
    return h.hexdigest().upper()


def read_jsonl(path: Path):
    with path.open("r", encoding="utf-8-sig") as f:
        return [json.loads(line) for line in f if line.strip()]


def preflight(report: dict, *, max_packs=32, max_packed_bytes=64 * 1024 * 1024):
    s = report["summary"]
    if s.get("missing") or s.get("ambiguous") or s.get("located") != s.get("targets"):
        raise RuntimeError("Native TRPFD encounter lookup incomplete/ambiguous")
    if s.get("targets") != 61:
        raise RuntimeError(f"Expected 61 canonical encounter dependencies; got {s.get('targets')}")
    packs = report["selected_packs"]
    ids = [p["pack_index"] for p in packs]
    if not ids or sorted(set(ids)) != ids:
        raise RuntimeError("Selected pack ids missing/unsorted/duplicated")
    if len(ids) > max_packs:
        raise RuntimeError(f"Targeted pack budget exceeded: {len(ids)} > {max_packs}")
    declared = sum(p["packed_bytes"] for p in packs)
    if declared > max_packed_bytes:
        raise RuntimeError(f"Packed byte budget exceeded: {declared} > {max_packed_bytes}")
    if declared != s["selected_packed_bytes"] or len(ids) != s["selected_packs"]:
        raise RuntimeError("Pack summary not consistent with selected TRPFD records")
    if any(x["status"] not in STATUS_OK or len(x["hits"]) != 1 for x in report["targets"]):
        raise RuntimeError("Exactly one native record required for every canonical resource")
    selected = set(ids)
    if any(x["hits"][0]["pack_index"] not in selected for x in report["targets"]):
        raise RuntimeError("Native pack-selection omits a canonical source")
    return ids


def target_safe(base: Path, relative: str):
    if (not relative or relative.startswith("/") or "\\" in relative or ":" in relative or
            any(x in ("", ".", "..") for x in relative.split("/"))):
        raise ValueError(f"Unsafe extracted relative path: {relative!r}")
    target = (base / relative).resolve()
    if not target.is_relative_to(base.resolve()):
        raise ValueError("Extracted path escapes virtual root")
    return target


def verify_targets(root: Path, selection: dict, pack_reports: list[dict]):
    by_hash = {}
    for result in pack_reports:
        for row in read_jsonl(root / result["report"]):
            h = row.get("Hash", "").upper()
            if h in by_hash and by_hash[h].get("Sha256") != row.get("Sha256"):
                raise RuntimeError(f"Native duplicate hash with differing content {h}")
            by_hash[h] = row
    found = []
    staging = []
    for item in selection["targets"]:
        record = item["hits"][0]
        h = record["source_hash"].upper()
        if h not in by_hash:
            raise RuntimeError(f"Missing original extracted file hash {h}: {item['expected']}")
        row = by_hash[h]
        if row.get("Status") != "OK":
            raise RuntimeError(f"Native extraction failed: {item['expected']}: {row.get('Error')}")
        name = row["Name"]
        if name.casefold() != record["source_virtual_path"].casefold():
            raise RuntimeError(f"Native hash/path mismatch: {h}, {name}")
        source = target_safe(root / TRPFS / "virtual", name)
        if not source.is_file():
            raise RuntimeError(f"Native output absent (or archived): {name}")
        if source.stat().st_size != row["Size"] or digest(source) != row["Sha256"]:
            raise RuntimeError(f"Native output SHA mismatch: {name}")
        if source.stat().st_size >= 100_000_000:
            raise RuntimeError(f"Native output too large for direct Git: {name}")
        staging.append(source.as_posix())
        found.append({
            "expected": item["expected"], "source_virtual_path": name,
            "trpfd_hash": h, "pack_index": record["pack_index"],
            "native_bytes": row["Size"], "native_sha256": row["Sha256"],
            "status": "EXTRACTED_NATIVE_SHA256_VERIFIED",
        })
    return found, staging


def extract(repo: Path, workspace: Path, selection: dict, *, seven_zip: Path,
            max_packs=32, max_packed_bytes=64*1024*1024):
    selected = preflight(selection,max_packs=max_packs,max_packed_bytes=max_packed_bytes)
    if workspace == repo or workspace.is_relative_to(repo):
        raise RuntimeError("Restored ROM must be OUTSIDE the Git checkout")
    for name in ("data.trpfd","data.trpfs"):
        if not (workspace / "arc" / name).is_file():
            raise FileNotFoundError(f"Verified native RomFS missing {name}")
    for req in ("tools/_local/GFPAKHashCache.bin","tools/_local/oo2core_8_win64.dll"):
        if not (repo / req).is_file():
            raise FileNotFoundError(f"Native dependency missing: {req}")
    if not seven_zip.is_file():
        raise FileNotFoundError("Required 7-Zip executable not found")
    subprocess.run([
        "dotnet", "build", "tools/SV.TrinityDump/SV.TrinityDump.csproj",
        "-c", "Release", "--nologo"
    ], cwd=repo, check=True)
    # Use exactly the existing SHA-verified M2 process_batch; it checks ALL
    # files inside each selected pack, not just our 61 requested files.
    common = runpy.run_path(str(repo / "scripts/Run-SV-FullExtract.py"))
    process_batch = common["process_batch"]
    write_json = common["write_json"]
    root = repo / TRPFS
    desc = repo / TRPFD
    cache = repo / "tools/_local/GFPAKHashCache.bin"
    oodle = repo / "tools/_local/oo2core_8_win64.dll"
    prepared = []
    all_reports = []
    for index in selected:
        print(f"TARGET PACK {index} (one native package only)",flush=True)
        summary, stage = process_batch(
            repo, str(workspace), root, desc, str(cache), str(oodle),
            str(seven_zip), index, index+1, dry_run=False,
            report_prefix="manual-pack")
        if summary.get("failed") or summary.get("decoderExitCode") or not summary.get("success"):
            raise RuntimeError(f"Trinity pack {index} did not pass verified extraction")
        # Exclude full pack contents from auto-publish: only target paths.
        prepared.append(summary)
        all_reports.extend(x for x in stage if x.endswith(".json") or x.endswith(".jsonl"))
    targets, staging = verify_targets(repo, selection, prepared)
    evidence = {
        "source_version": "Pokemon Violet 4.0.0",
        "status": "61_NATIVE_TARGETS_EXTRACTED_SHA256_VERIFIED",
        "source": "immutable-TRPFD-TRPFS-original-ROM",
        "target_count": len(targets), "selected_native_pack_count": len(selected),
        "native_packs": selected,
        "packed_bytes_selected": selection["summary"]["selected_packed_bytes"],
        "verified_pack_files_total": sum(x["success"] for x in prepared),
        "verified_native_bytes_total": sum(x["bytesVerified"] for x in prepared),
        "targets": targets,
        "pack_reports": [x["report"] for x in prepared],
        "limitations": [
            "Havok TRCOL dependencies from scenes are not yet dynamically resolved.",
            "Successful raw extraction != successful full pkNX scene geometry evaluation.",
            "No generated PKHeX .pkl has yet been compared to game-native output.",
            "Raid/event/rng legality requires independent version-aware tests.",
        ],
    }
    output = repo / REPORT_FILE
    write_json(output,evidence)
    # Manifest + real requested assets + native reports only, no unrelated
    # files extracted from same packages and no original ROM copies.
    stage = sorted(set(
        str(Path(x).relative_to(repo).as_posix()) for x in staging
    ) | set(all_reports) | {REPORT_FILE.as_posix()})
    return evidence, stage


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--repo",type=Path,default=Path("."))
    ap.add_argument("--workspace",type=Path,required=True)
    ap.add_argument("--selection",type=Path,required=True)
    ap.add_argument("--seven-zip",type=Path,default=Path(r"C:\Program Files\7-Zip\7z.exe"))
    ap.add_argument("--max-packs",type=int,default=32)
    ap.add_argument("--max-packed-mib",type=int,default=64)
    args=ap.parse_args()
    repo=args.repo.resolve()
    selection=json.loads(args.selection.resolve().read_text("utf-8-sig"))
    evidence,stage=extract(
        repo,args.workspace.resolve(),selection,seven_zip=args.seven_zip,
        max_packs=args.max_packs,max_packed_bytes=args.max_packed_mib*1024*1024)
    stage_path=repo / TRPFS / "_index/encounter-native-stage.txt"
    stage_path.write_text("\n".join(stage)+"\n","utf-8")
    print(json.dumps({"status":evidence["status"],
                      "target_count":evidence["target_count"],
                      "selected_native_pack_count":evidence["selected_native_pack_count"],
                      "verified_pack_files_total":evidence["verified_pack_files_total"],
                      "staged_paths":len(stage)},indent=2))
    return 0


if __name__=="__main__":
    try:
        sys.exit(main())
    except Exception as exc:
        print(f"FATAL native encounter extraction: {type(exc).__name__}: {exc}",file=sys.stderr)
        sys.exit(2)
