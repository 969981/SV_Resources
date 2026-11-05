#!/usr/bin/env python3
"""Restore-once SV Trinity M2 full extract publisher.

Run only after source TRPFD/TRPFS have been verified. Splits the 23,589 native
packages into bounded windows, verifies every output, archives >90MiB blobs as
<=90MiB 7z volumes, and pushes each window as a non-forced Git commit.

Persistent progress is *only* advanced after a successful output audit.
A failed extraction stays explicitly FAILED, never counted as a success.
"""
from __future__ import annotations

import argparse
import gzip
import hashlib
import json
import os
from pathlib import Path
import subprocess
import sys
import tempfile
import time
from datetime import datetime, timezone

ROOT_REL = Path("Unpack/4.0.0/romfs/arc/data.trpfs")
DESC_REL = Path("Unpack/4.0.0/romfs/arc/data.trpfd/_index")
VOLUME_BYTES = 90 * 1024 * 1024
GITHUB_FILE_HARD_LIMIT = 100_000_000
PROGRESS_NAME = "full-extract-progress.json"


def call(args, *, cwd: Path, env=None, tolerate=()):
    print("+ " + " ".join(str(x) for x in args), flush=True)
    result = subprocess.run([str(x) for x in args], cwd=cwd, env=env, check=False)
    if result.returncode not in (0, *tolerate):
        raise RuntimeError(f"Command failed ({result.returncode}): {args}")
    return result.returncode


def sha256(path: Path):
    digest = hashlib.sha256()
    with path.open("rb") as stream:
        for block in iter(lambda: stream.read(4 * 1024 * 1024), b""):
            digest.update(block)
    return digest.hexdigest().upper()


def safe_output(virtual_root: Path, name: str):
    if not name or name.startswith("/") or "\\" in name or ":" in name:
        raise ValueError(f"Unsafe virtual relative path: {name!r}")
    components = name.split("/")
    if any(x in ("", ".", "..") for x in components):
        raise ValueError(f"Unsafe virtual path components: {name!r}")
    base = virtual_root.resolve()
    target = (base / name).resolve()
    if not target.is_relative_to(base):
        raise ValueError(f"Path escapes virtual root: {name}")
    return target


def read_records(path: Path):
    if not path.exists():
        return []
    with path.open("r", encoding="utf-8-sig") as stream:
        return [json.loads(s) for s in stream if s.strip()]


def write_json(path: Path, payload):
    path.parent.mkdir(parents=True, exist_ok=True)
    temp = path.with_name(path.name + ".sv-writing")
    temp.write_text(json.dumps(payload, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    temp.replace(path)


def process_large(target: Path, row: dict, seven_zip: str):
    archive_base = target.with_name(target.name + ".7z")
    already = list(target.parent.glob(archive_base.name + ".*"))
    if already:
        raise RuntimeError("Preexisting 7z output exists; refusing overwrite: " + str(archive_base))
    call([seven_zip, "a", "-t7z", "-mx=1", "-v90m", archive_base.name,
          target.name], cwd=target.parent)
    volumes = sorted(target.parent.glob(archive_base.name + ".*"))
    if not volumes or not volumes[0].name.endswith(".001"):
        raise RuntimeError("7z multi-volume output is missing .001: " + str(archive_base))
    for i, vol in enumerate(volumes, start=1):
        if vol.suffix != f".{i:03d}" or not 0 < vol.stat().st_size <= VOLUME_BYTES:
            raise RuntimeError("Unexpected 7z volume numbering/size: " + str(vol))
    call([seven_zip, "t", volumes[0].name], cwd=target.parent)
    info = {
        "hash": row["Hash"],
        "originalVirtualPath": row["Name"],
        "originalBytes": row["Size"],
        "originalSha256": row["Sha256"],
        "volumes": [
            {"relativePath": v.as_posix(), "sizeBytes": v.stat().st_size, "sha256": sha256(v)}
            for v in volumes
        ],
    }
    target.unlink()  # Original bytes remain reconstructable from tested volumes.
    return info, volumes


def git_commit_and_push(repo: Path, relative_paths: list[str], message: str, dry_run: bool):
    if dry_run:
        print(f"DRY RUN: would stage {len(relative_paths)} paths, commit & push: {message}")
        return
    # Other workflows may write unrelated docs while this runner extracts data.
    # Fast-forward ONLY if remote is a direct descendant of our last pushed commit;
    # never rewrite, reset, or auto-rebase user's concurrent work.
    call(["git", "fetch", "origin", "master"], cwd=repo)
    call(["git", "merge", "--ff-only", "origin/master"], cwd=repo)
    with tempfile.NamedTemporaryFile(prefix="sv-m2-stage-", suffix=".txt", delete=False) as f:
        path_file = Path(f.name)
        f.write(b"".join(p.replace("\\", "/").encode("utf-8") + b"\0"
                         for p in sorted(set(relative_paths))))
    try:
        env = os.environ.copy()
        env["GIT_LITERAL_PATHSPECS"] = "1"
        call(["git", "-c", "core.longpaths=true", "add",
              f"--pathspec-from-file={path_file}", "--pathspec-file-nul"],
             cwd=repo, env=env)
        result = subprocess.run(["git", "diff", "--cached", "--quiet"], cwd=repo)
        if result.returncode == 0:
            print("No new paths to commit")
            return
        if result.returncode != 1:
            raise RuntimeError("git diff --cached failed")
        call(["git", "commit", "-m", message], cwd=repo)
        # No force, merge, reset, or rebase. Reject unexpected concurrent master edits.
        call(["git", "push", "origin", "HEAD:master"], cwd=repo)
    finally:
        path_file.unlink(missing_ok=True)


def audit_all(root: Path, desc: Path, output_path: Path):
    source_file = desc / "file_index.tsv.gz"
    if not source_file.exists():
        raise FileNotFoundError(f"Missing native TRPFD index: {source_file}")
    with gzip.open(source_file, "rt", encoding="utf-8-sig") as f:
        next(f)
        expected = {line.split("\t", 1)[0].upper() for line in f if line.strip()}
    outcomes = {}
    original = root / "_index/export.jsonl"
    report_paths = ([original] if original.exists() else []) + sorted(
        (root / "_index/batches").glob("pack-*.jsonl"))
    for path in report_paths:
        for row in read_records(path):
            if row.get("Hash"):
                outcomes[row["Hash"].upper()] = row
    ok_set = {h for h in expected if h in outcomes and outcomes[h]["Status"] == "OK"}
    failed_set = {h for h in expected if h in outcomes and outcomes[h]["Status"] == "FAILED"}
    missing_set = expected.difference(outcomes)
    unexpected = set(outcomes).difference(expected)
    audit = {
        "schemaVersion": 1,
        "updatedUtc": datetime.now(timezone.utc).isoformat(),
        "expectedNativeHashes": len(expected),
        "verifiedOKByRecordedNativeSha256": len(ok_set),
        "failed": len(failed_set),
        "unseen": len(missing_set),
        "unknownExtraHashes": len(unexpected),
        "complete": not failed_set and not missing_set and not unexpected,
        "failedSamples": sorted(failed_set)[:200],
        "missingSamples": sorted(missing_set)[:200],
        "reportFiles": len(report_paths),
        "comment": "Output hashes verified per batch. An archived large file keeps original SHA256 and 7z-volume hashes."
    }
    write_json(output_path, audit)
    return audit


def process_batch(repo, workspace, root, src, cache, oodle, seven_zip,
                  start, end, *, dry_run):
    reports = root / "_index/batches"
    reports.mkdir(parents=True, exist_ok=True)
    report = reports / f"pack-{start:06d}-{end-1:06d}.jsonl"
    command = ["dotnet", "run", "--no-build", "-c", "Release",
               "--project", "tools/SV.TrinityDump/SV.TrinityDump.csproj", "--",
               "--romfs", workspace, "--output", root, "--cache", cache,
               "--oodle", oodle, "--start-pack", str(start),
               "--max-packs", str(end-start), "--report", report]
    exit_code = call(command, cwd=repo, tolerate=(1,))
    rows = read_records(report)
    if not rows:
        raise RuntimeError(f"No native extraction records produced for pack range {start}..{end-1}")
    records = {r["Hash"]: r for r in rows if r.get("Hash")}
    if not records:
        raise RuntimeError("No hashed file records from native GFTool.Core!")
    virtual = root / "virtual"
    stages = [str(report.relative_to(repo))]
    large = []
    ok = 0
    failed = 0
    verified_bytes = 0
    for row in records.values():
        if row["Status"] == "FAILED":
            failed += 1
            continue
        if row["Status"] != "OK":
            raise RuntimeError("Unknown extraction status: " + str(row["Status"]))
        target = safe_output(virtual, row["Name"])
        if not target.is_file():
            raise RuntimeError(f"OK item lacks output bytes: {target}")
        if target.stat().st_size != row["Size"] or sha256(target) != row["Sha256"]:
            raise RuntimeError(f"Native output size/SHA256 mismatch: {target}")
        verified_bytes += row["Size"]
        ok += 1
        if target.stat().st_size >= VOLUME_BYTES:
            result, parts = process_large(target, row, seven_zip)
            result["volumes"] = [
                {**info, "relativePath": str(part.relative_to(repo).as_posix())}
                for info, part in zip(result["volumes"], parts)
            ]
            large.append(result)
            stages.extend(str(p.relative_to(repo).as_posix()) for p in parts)
        else:
            if target.stat().st_size >= GITHUB_FILE_HARD_LIMIT:
                raise RuntimeError("Unexpected oversize raw file: " + str(target))
            stages.append(str(target.relative_to(repo).as_posix()))
    if exit_code == 1 and failed == 0:
        raise RuntimeError("Decoder exit 1 without FAILED records; refusing to advance.")
    summary = {
        "schemaVersion": 1, "batchStartPack": start, "batchEndPackExclusive": end,
        "success": ok, "failed": failed, "bytesVerified": verified_bytes,
        "largeFiles": len(large), "decoderExitCode": exit_code,
        "report": str(report.relative_to(repo).as_posix()),
        "updatedUtc": datetime.now(timezone.utc).isoformat(),
    }
    summary_path = reports / f"pack-{start:06d}-{end-1:06d}-summary.json"
    write_json(summary_path, summary)
    stages.append(str(summary_path.relative_to(repo).as_posix()))
    if large:
        large_path = reports / f"pack-{start:06d}-{end-1:06d}-large.json"
        write_json(large_path, large)
        stages.append(str(large_path.relative_to(repo).as_posix()))
    return summary, stages


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--repo", type=Path, default=Path("."))
    ap.add_argument("--workspace", type=Path, required=True)
    ap.add_argument("--start-pack", type=int, default=2)
    ap.add_argument("--batch-packs", type=int, default=100)
    ap.add_argument("--max-batches", type=int, default=1000)
    ap.add_argument("--time-budget-minutes", type=int, default=240)
    ap.add_argument("--seven-zip", default=r"C:\Program Files\7-Zip\7z.exe")
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()
    if args.start_pack < 2 or not 1 <= args.batch_packs <= 200 or args.max_batches < 1:
        ap.error("start-pack >= 2; batch-packs in 1..200; max-batches positive")
    repo = args.repo.resolve()
    root = repo / ROOT_REL
    desc = repo / DESC_REL
    progress_file = root / "_index" / PROGRESS_NAME
    descriptor = json.loads((desc / "descriptor_summary.json").read_text(encoding="utf-8"))
    total = descriptor["packCount"]
    expected = descriptor["descriptorFiles"]
    if total != 23589 or expected != 408641:
        raise RuntimeError(f"Unexpected native descriptor size: packs={total}, files={expected}")
    existing = (json.loads(progress_file.read_text(encoding="utf-8"))
                if progress_file.exists() else {})
    if existing and (existing["totalPacks"] != total or existing["expectedNativeFiles"] != expected):
        raise RuntimeError("Progress incompatible with current native TRPFD. Refusing to resume.")
    cursor = max(args.start_pack, existing.get("nextPack", 2))
    if cursor > total:
        raise RuntimeError("Progress pack cursor exceeds native pack count")
    workspace = args.workspace.resolve()
    arc = workspace / "arc"
    for name in ("data.trpfs", "data.trpfd"):
        if not (arc / name).is_file():
            raise FileNotFoundError(f"Missing previously restored source: {arc / name}")
    cache = repo / "tools/_local/GFPAKHashCache.bin"
    oodle = repo / "tools/_local/oo2core_8_win64.dll"
    if not cache.exists() or not oodle.exists():
        raise FileNotFoundError("Missing prepared Oodle/cache runtime dependencies")
    if not Path(args.seven_zip).exists():
        raise FileNotFoundError("7-Zip not installed at " + args.seven_zip)
    call(["dotnet", "build", "tools/SV.TrinityDump/SV.TrinityDump.csproj",
          "-c", "Release", "--nologo"], cwd=repo)

    call(["git", "config", "user.name", "github-actions[bot]"], cwd=repo)
    call(["git", "config", "user.email", "41898282+github-actions[bot]@users.noreply.github.com"],
         cwd=repo)
    start_time = time.monotonic()
    done = 0
    summaries = []
    while cursor < total and done < args.max_batches:
        end = min(total, cursor + args.batch_packs)
        print(f"=== Native Trinity pack range {cursor}..{end-1} of {total} ===", flush=True)
        summary, stages = process_batch(
            repo, str(workspace), root, desc, str(cache), str(oodle),
            args.seven_zip, cursor, end, dry_run=args.dry_run)
        cursor = end
        done += 1
        summaries.append(summary)
        progress = {
            "schemaVersion": 1,
            "sourceVersion": "SV Violet 4.0.0",
            "totalPacks": total,
            "expectedNativeFiles": expected,
            "nextPack": cursor,
            "lastPublishedPackInclusive": cursor - 1,
            "completedPackWindows": int(existing.get("completedPackWindows", 0)) + done,
            "lastBatchSuccess": summary["success"],
            "lastBatchFailed": summary["failed"],
            "lastBatch": summary["report"],
            "updatedUtc": datetime.now(timezone.utc).isoformat(),
            "state": "FINISHED" if cursor == total else "PARTIAL",
        }
        write_json(progress_file, progress)
        stages.append(str(progress_file.relative_to(repo).as_posix()))
        if cursor == total:
            audit_path = root / "_index/full-extract-audit.json"
            result = audit_all(root, desc, audit_path)
            progress["state"] = "COMPLETE" if result["complete"] else "REQUIRES_REPAIR"
            write_json(progress_file, progress)
            stages.append(str(audit_path.relative_to(repo).as_posix()))
            print("FINAL AUDIT " + json.dumps(result), flush=True)
        git_commit_and_push(repo, stages,
            f"data(m2): verified Trinity packs {summary['batchStartPack']}-{cursor-1} "
            f"(OK={summary['success']} FAILED={summary['failed']})",
            dry_run=args.dry_run)
        print("BATCH " + json.dumps(summary), flush=True)
        if done and (time.monotonic()-start_time)/60 > args.time_budget_minutes:
            print("Reached safe runner time budget after a committed checkpoint", flush=True)
            break
    print(json.dumps({
        "nextPack": cursor, "totalPacks": total,
        "windowsThisRun": done, "complete": cursor == total,
        "thisRunOK": sum(r["success"] for r in summaries),
        "thisRunFailed": sum(r["failed"] for r in summaries),
        "progressFile": str(progress_file.relative_to(repo).as_posix())
    }, indent=2), flush=True)


if __name__ == "__main__":
    try:
        main()
    except Exception as exc:
        print(f"FATAL M2 checkpoint pipeline: {type(exc).__name__}: {exc}", file=sys.stderr)
        sys.exit(2)
