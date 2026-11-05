#!/usr/bin/env python3
"""Parallel manual SV Trinity M2 pack-window publisher.

Unlike the long-running full extractor, this script extracts exactly the
requested pack range and *never* advances full-extract-progress.json.
It reuses the same native SHA-256 and checked 7z publishing code.
"""
from __future__ import annotations

import argparse
import json
from pathlib import Path
import runpy
import subprocess
import sys
from datetime import datetime, timezone
from typing import Callable

from sv_m2_parallel import iter_prepared_batches, validate_unique_paths

ROOT_REL = Path("Unpack/4.0.0/romfs/arc/data.trpfs")
DESC_REL = Path("Unpack/4.0.0/romfs/arc/data.trpfd/_index")
PUBLISH_BRANCHES = ("sv-m2-manual-4.0.0", "master")


def run_windows(
    start: int,
    count: int,
    total: int,
    window_packs: int,
    workers: int,
    prepare: Callable[[int, int], tuple[dict, list[str]]],
) -> tuple[list[dict], list[str]]:
    """Return ordered verified windows or fail without publishing anything."""
    if start < 0 or count <= 0 or start + count > total:
        raise ValueError("Manual pack range is outside the verified native descriptor")
    if not 1 <= window_packs <= 100 or not 1 <= workers <= 4:
        raise ValueError("window-packs must be 1..100; workers must be 1..4")

    summaries: list[dict] = []
    stage: set[str] = set()
    windows = (count + window_packs - 1) // window_packs
    for batch_start, end, (summary, paths) in iter_prepared_batches(
        start, start + count, window_packs, windows, workers, prepare
    ):
        if (summary.get("batchStartPack") != batch_start or
                summary.get("batchEndPackExclusive") != end):
            raise RuntimeError(f"Native report/window mismatch: {batch_start}..{end}")
        if summary.get("failed", 0) != 0 or summary.get("decoderExitCode") != 0:
            raise RuntimeError(
                f"Decoder reported failures for pack window {batch_start}..{end-1}: {summary}")
        if not summary.get("success", 0):
            raise RuntimeError(f"No native OK records for pack window {batch_start}..{end-1}")
        summaries.append(summary)
        stage.update(paths)
    if not summaries or len(summaries) != windows:
        raise RuntimeError("Incomplete native window preparation")
    return summaries, sorted(stage)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--repo", type=Path, default=Path("."))
    parser.add_argument("--workspace", type=Path, required=True)
    parser.add_argument("--start-pack", type=int, default=0)
    parser.add_argument("--max-packs", type=int, default=2)
    parser.add_argument("--window-packs", type=int, default=1)
    parser.add_argument("--workers", type=int, default=2)
    parser.add_argument("--publish-branch", choices=PUBLISH_BRANCHES, default=PUBLISH_BRANCHES[0])
    parser.add_argument("--seven-zip", default=r"C:\Program Files\7-Zip\7z.exe")
    args = parser.parse_args()

    repo = args.repo.resolve()
    root = repo / ROOT_REL
    desc = repo / DESC_REL
    descriptor = json.loads((desc / "descriptor_summary.json").read_text(encoding="utf-8"))
    total = descriptor["packCount"]
    if total != 23589 or descriptor.get("descriptorFiles") != 408641:
        raise RuntimeError("Unexpected source TRPFD descriptor counts")
    if args.start_pack < 0 or args.max_packs < 1 or args.max_packs > 200 or args.start_pack + args.max_packs > total:
        parser.error("start-pack >=0 and max-packs in 1..200, range must stay within native pack count")
    if not 1 <= args.window_packs <= 100 or not 1 <= args.workers <= 4:
        parser.error("window-packs in 1..100 and workers in 1..4")
    current_branch = subprocess.check_output(
        ["git", "branch", "--show-current"], cwd=repo, text=True).strip()
    if current_branch != args.publish_branch:
        raise RuntimeError(
            f"Git branch {current_branch!r} does not match requested publication "
            f"branch {args.publish_branch!r}; refusing to push.")
    for name in ("data.trpfd", "data.trpfs"):
        if not (args.workspace.resolve() / "arc" / name).is_file():
            raise FileNotFoundError(f"Missing hash-verified native source arc/{name}")
    cache = repo / "tools/_local/GFPAKHashCache.bin"
    oodle = repo / "tools/_local/oo2core_8_win64.dll"
    if not cache.is_file() or not oodle.is_file():
        raise FileNotFoundError("Missing prepared GFPAKHashCache or Oodle dependency")
    if not Path(args.seven_zip).is_file():
        raise FileNotFoundError("7-Zip executable is required to process >90MiB outputs")
    if args.workers > 1:
        count = validate_unique_paths(desc / "file_index.tsv.gz", args.start_pack)
        print(f"Preflight: {count} native file paths collision-checked", flush=True)

    # Build the native dumper only once; worker processes use --no-build.
    subprocess.run(
        ["dotnet", "build", "tools/SV.TrinityDump/SV.TrinityDump.csproj",
         "-c", "Release", "--nologo"], cwd=repo, check=True)
    # Reuse the full publisher's stable native hash and verified 7z rules.
    common = runpy.run_path(str(repo / "scripts/Run-SV-FullExtract.py"))
    process_batch = common["process_batch"]
    write_json = common["write_json"]
    git_commit_and_push = common["git_commit_and_push"]

    def prepare(start: int, end: int) -> tuple[dict, list[str]]:
        print(f"=== Manual M2 native packs {start}..{end-1} ===", flush=True)
        return process_batch(
            repo, str(args.workspace.resolve()), root, desc,
            str(cache), str(oodle), str(args.seven_zip),
            start, end, dry_run=False, report_prefix="manual-pack")

    summaries, stage = run_windows(
        args.start_pack, args.max_packs, total,
        args.window_packs, args.workers, prepare)
    # Intentionally omit the global full-extract-progress checkpoint.
    report_root = root / "_index" / "batches"
    report = report_root / (
        f"manual-window-{args.start_pack:06d}-"
        f"{args.start_pack+args.max_packs-1:06d}-summary.json")
    output = {
        "schemaVersion": 1, "sourceVersion": "SV Violet 4.0.0",
        "startPack": args.start_pack,
        "endPackExclusive": args.start_pack + args.max_packs,
        "windows": len(summaries), "workers": args.workers,
        "verifiedOK": sum(x["success"] for x in summaries),
        "failed": sum(x["failed"] for x in summaries),
        "bytesVerified": sum(x["bytesVerified"] for x in summaries),
        "publishBranch": args.publish_branch,
        "publishedUtc": datetime.now(timezone.utc).isoformat(),
        "reportFiles": [x["report"] for x in summaries],
        "globalFullExtractCheckpointAdvanced": False,
    }
    write_json(report, output)
    stage.append(report.relative_to(repo).as_posix())
    git_commit_and_push(
        repo, stage,
        f"data(m2): manual verified Trinity packs {args.start_pack}-"
        f"{args.start_pack + args.max_packs - 1}",
        dry_run=False, publish_branch=args.publish_branch)
    print(json.dumps(output, indent=2), flush=True)
    return 0


if __name__ == "__main__":
    try:
        sys.exit(main())
    except Exception as exc:
        print(f"FATAL manual M2: {type(exc).__name__}: {exc}", file=sys.stderr)
        sys.exit(2)
