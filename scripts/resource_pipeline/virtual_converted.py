#!/usr/bin/env python3
"""Independent, resumable SV 4.0.0 virtual/ -> virtual_converted/ sweep.

Reuse the real R1/R3 native decoders and process-isolated concurrent workers.
An inspection record is NOT a claim that an unsupported format was converted.
"""
from __future__ import annotations

import argparse
import json
from pathlib import Path
import shutil
import sys

try:
    from . import cli, full_secondary as fs, parallel_secondary as parallel
except ImportError:
    import cli
    import full_secondary as fs
    import parallel_secondary as parallel

# Do not consume or overwrite the legacy parsed/converted/resources checkpoint.
fs.EPOCH = "sv-virtual-converted-v1"
fs.STATE_NAME = "_index/secondary/virtual-converted-state.json"
fs.SELECTION_NAME = "_index/secondary/virtual-converted-selection.json"
fs.RUN_NAME = "_index/secondary/virtual-converted-last-run.json"

LAYERS = {
    "converted": "",                  # Native, validated PNG/glTF/GLB, etc.
    "parsed": "_parsed/",             # Structured diagnostics and text tables.
    "resources": "_resources/",       # Semantic exports, where supported.
}


def destination_for(relative: str) -> str:
    """Map only verified pipeline outputs, never copy raw virtual bytes."""
    relative = cli.safe_path(relative)
    layer, sep, tail = relative.partition("/")
    if not sep or layer not in LAYERS or not tail:
        raise ValueError("Not a declared converted/parsed/resources file: " + relative)
    return "virtual_converted/" + LAYERS[layer] + tail


def publish_virtual_converted(repo: Path, completed: dict) -> list[str]:
    """Called by parallel_secondary while the isolated worker still exists."""
    task = completed["task"]
    record = completed["data"]
    work = completed["work"].resolve()
    root = repo / fs.ROOT
    inspection = record.get("inspection")
    if not isinstance(inspection, dict):
        raise ValueError("Missing mandatory exhaustive native inspection")
    if inspection.get("inspection_records") != len(task["paths"]):
        raise ValueError("Native inspection has missing file records")
    manifest = cli.safe_path(inspection.get("manifest", ""))
    if not (manifest.startswith("parsed/") and manifest.endswith(".jsonl")):
        raise ValueError("Invalid exhaustive inspection manifest")
    allowlist = {cli.safe_path(item["path"]): item for item in record.get("outputs", [])}
    if manifest not in allowlist:
        raise ValueError("The inspection manifest was not published by the worker")
    inspected = work / manifest
    if not inspected.is_file() or inspected.is_symlink() or not inspected.resolve().is_relative_to(work):
        raise ValueError("Missing/unsafe per-file inspection manifest")
    if cli.digest(inspected) != inspection.get("manifest_sha256", "").upper():
        raise ValueError("Inspection manifest SHA-256 mismatch")

    source_records = []
    with inspected.open(encoding="utf-8") as handle:
        for line in handle:
            row = json.loads(line)
            source = cli.safe_path(row["source"])
            if row.get("parse_status") not in (
                    "SOURCE_HASH_MISMATCH", "STRUCTURE_PARSED", "INSPECTED_UNPARSED"):
                raise ValueError("Unrecognized file inspection status: " + source)
            if row.get("parse_status") == "SOURCE_HASH_MISMATCH":
                raise ValueError("Native SHA mismatch: " + source)
            source_records.append(row)
    if len(source_records) != len(task["paths"]) or (
            {r["source"] for r in source_records} != set(task["paths"])):
        raise ValueError("Inspection does not exactly cover the selected native files")

    published = []
    output_records = []
    for name, asset in sorted(allowlist.items()):
        rel = destination_for(name)
        src = work / name
        target = root / rel
        if not src.resolve().is_relative_to(work) or not target.resolve().is_relative_to(root.resolve()):
            raise ValueError("Asset escaped workspace: " + name)
        expected = asset["sha256"].upper()
        if target.exists() and cli.digest(target) != expected:
            raise ValueError("Conflicting converted destination: " + rel)
        if not target.exists():
            parallel.copy_verified(src, target, expected)
        if target.stat().st_size != asset["bytes"] or cli.digest(target) != expected:
            raise ValueError("Published derivative differs from worker: " + rel)
        output_records.append({"pipeline_path": name, "path": rel,
                               "sha256": expected, "bytes": asset["bytes"]})
        published.append((fs.ROOT / rel).as_posix())

    # Preserve complete evidence for every original path, even if proprietary,
    # unsupported, blocked, or too large to publish as a derived binary.
    task_id = parallel.task_slug(task)
    report = {
        "schema_version": 1,
        "task": task["id"],
        "input_fingerprint": task["fingerprint"],
        "input_files": len(task["paths"]),
        "inspection_statuses": inspection.get("by_status", {}),
        "sources": source_records,
        "outputs": output_records,
        "deferred_outputs": record.get("deferred_outputs", []),
        "problems": record.get("problems", []),
        "stages": record.get("stages", {}),
        "converter_exit_code": completed.get("returncode"),
        "policy": "INSPECTED_UNPARSED_IS_NOT_CONVERTED",
    }
    report_path = root / "virtual_converted" / "_index" / "tasks" / ("task-" + task_id + ".json")
    cli.store_json(report_path, report)
    published.append(str(report_path.relative_to(repo)).replace("\\", "/"))
    return published


def status(repo: Path, max_group_files: int) -> dict:
    summary = fs.status(repo, max_group_files)
    state = fs.load_state(repo)
    attempted = list(state.get("attempted", {}).values())
    summary["conversion_directory"] = str(fs.ROOT / "virtual_converted")
    summary["verified_native_task_reports"] = sum(
        1 for row in attempted if row.get("fingerprint") and
        row.get("status") in ("ATTEMPTED", "PARTIAL"))
    summary["warning"] = (
        "A sweep is complete only when every tracked raw file has an inspection "
        "record. INSPECTED_UNPARSED, PARTIAL, and ERROR are NOT decoded assets.")
    return summary


def run_cli(argv=None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("action", choices=("select", "fetch", "run", "status"))
    parser.add_argument("--repo", type=Path, default=Path(__file__).resolve().parents[2])
    parser.add_argument("--group-files", type=int, default=1000)
    parser.add_argument("--max-files", type=int, default=1600)
    parser.add_argument("--max-tasks", type=int, default=8)
    parser.add_argument("--workers", type=int, default=4)
    parser.add_argument("--max-output-mb", type=int, default=90)
    parser.add_argument("--png-converter", default="")
    parser.add_argument("--model-converter", default="")
    args = parser.parse_args(argv)
    if not (2 <= args.group_files <= 1200 and args.group_files <= args.max_files <= 2400
            and 1 <= args.max_tasks <= 12 and 1 <= args.workers <= 8
            and 1 <= args.max_output_mb <= 90):
        parser.error("Invalid bounded batch or worker limits")
    repo = args.repo.resolve()
    if args.action == "select":
        result = fs.choose(repo, args.group_files, args.max_tasks, args.max_files)
    elif args.action == "fetch":
        selection = json.loads((repo / fs.ROOT / fs.SELECTION_NAME).read_text("utf-8"))
        result = (fs.materialize_selected(repo, selection)
                  if selection["selected"] else {"fetched_native_paths": 0})
    elif args.action == "run":
        parallel.publish_result = publish_virtual_converted
        result = parallel.main_run(repo, args.workers,
                                   args.png_converter, args.model_converter,
                                   args.max_output_mb)
        manifest = repo / "sv-secondary-publication.json"
        if not manifest.is_file():
            raise ValueError("Parallel sweep did not produce a publication allowlist")
        publication = json.loads(manifest.read_text("utf-8"))
        paths = publication["paths"]
        allowed = [(fs.ROOT / "virtual_converted").as_posix() + "/",
                   (fs.ROOT / "_index/secondary/virtual-converted-").as_posix()]
        if not paths or any(not p.startswith(tuple(allowed)) for p in paths):
            raise ValueError("Publication contains paths outside virtual_converted checkpoint")
        cli.store_json(repo / "sv-virtual-converted-publication.json", publication)
    else:
        result = status(repo, args.group_files)
    print(json.dumps(result, ensure_ascii=False, indent=2))
    return 2 if args.action == "run" and result["error_count"] else 0


if __name__ == "__main__":
    sys.exit(run_cli())
