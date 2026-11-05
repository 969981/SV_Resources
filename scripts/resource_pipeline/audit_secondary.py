#!/usr/bin/env python3
"""Build a truthful per-native-path audit of the SV Trinity second-stage sweep.

Every Git-tracked virtual path receives one ledger row, even when the format
cannot be decoded. This is a snapshot of committed evidence (HEAD), not a
claim that all proprietary formats have been semantically restored.
"""
from __future__ import annotations

import argparse
from collections import Counter
import gzip
import hashlib
import json
from pathlib import Path
import subprocess

try:
    from . import cli, full_secondary as fs
except ImportError:
    import cli
    import full_secondary as fs


def tracked_paths(repo, folder):
    """Get committed paths without materializing potentially huge source blobs."""
    output = subprocess.check_output(
        ["git", "ls-tree", "-r", "-z", "--name-only", "HEAD", "--", folder],
        cwd=repo)
    return {p.decode("utf-8") for p in output.split(b"\0") if p}


class GitReader:
    """One persistent cat-file process avoids thousands of git show subprocesses."""
    def __init__(self, repo):
        self.process = subprocess.Popen(
            ["git", "cat-file", "--batch"], cwd=repo,
            stdin=subprocess.PIPE, stdout=subprocess.PIPE,
            stderr=subprocess.DEVNULL)

    def read(self, path):
        if "\n" in path or "\r" in path:
            raise ValueError("Invalid Git path")
        query = ("HEAD:" + path + "\n").encode("utf-8")
        self.process.stdin.write(query)
        self.process.stdin.flush()
        header = self.process.stdout.readline()
        if header.endswith(b" missing\n"):
            return None
        fields = header.rstrip(b"\n").rsplit(b" ", 2)
        if len(fields) != 3 or fields[1] != b"blob":
            raise ValueError("Unexpected git cat-file reply for " + path)
        size = int(fields[2])
        payload = self.process.stdout.read(size)
        if len(payload) != size or self.process.stdout.read(1) != b"\n":
            raise ValueError("Truncated git blob " + path)
        return payload

    def close(self):
        if self.process.stdin:
            self.process.stdin.close()
        if self.process.stdout:
            self.process.stdout.close()
        self.process.wait(timeout=30)

    def __enter__(self):
        return self

    def __exit__(self, *_):
        self.close()


def inspection_for_task(reader, root, task, state_row, parsed_paths):
    """Use the current checkpoint's signed selection, never arbitrary old runs."""
    if state_row.get("fingerprint") != task["fingerprint"]:
        return {}, "NOT_ATTEMPTED"
    if state_row.get("status") == "ERROR":
        return {}, "ATTEMPT_ERROR"
    manifest = state_row.get("inspection_manifest")
    manifest_sha = state_row.get("inspection_sha256")
    if not manifest:
        slug = hashlib.sha256(task["id"].encode("utf-8")).hexdigest()[:20]
        report_path = (root / "_index" / "secondary" /
                       ("task-" + slug + ".json")).as_posix()
        payload = reader.read(report_path)
        if payload:
            report = json.loads(payload)
            selection_sha = hashlib.sha256(
                "\n".join(task["paths"]).encode("utf-8")).hexdigest()
            if (report.get("source_files_seen") == task["file_count"] and
                    report.get("selection_sha256") == selection_sha):
                manifest = report.get("inspection", {}).get("manifest")
                manifest_sha = report.get("inspection", {}).get("manifest_sha256")
    if not isinstance(manifest, str) or not manifest.startswith("parsed/"):
        return {}, "INSPECTION_MISSING"
    absolute = (root / cli.safe_path(manifest)).as_posix()
    if absolute not in parsed_paths:
        return {}, "INSPECTION_MISSING"
    raw = reader.read(absolute)
    if raw is None or not manifest_sha or (
            hashlib.sha256(raw).hexdigest().upper() != str(manifest_sha).upper()):
        return {}, "INSPECTION_UNVERIFIED"
    entries = {}
    allowed = set(task["paths"])
    try:
        for line in raw.splitlines():
            data = json.loads(line)
            path = cli.safe_path(data["source"])
            if path in entries or path not in allowed:
                return {}, "INSPECTION_UNVERIFIED"
            if data.get("parse_status") not in (
                    "STRUCTURE_PARSED", "INSPECTED_UNPARSED",
                    "SOURCE_HASH_MISMATCH"):
                return {}, "INSPECTION_UNVERIFIED"
            entries[path] = data
    except (KeyError, ValueError, TypeError, UnicodeError):
        return {}, "INSPECTION_UNVERIFIED"
    if len(entries) != task["file_count"]:
        return entries, "INSPECTION_INCOMPLETE"
    return entries, "INSPECTED"


def build_audit(repo: Path, out: Path, group_files=1200):
    repo = Path(repo).resolve()
    out = Path(out).resolve()
    out.mkdir(parents=True, exist_ok=True)
    root = fs.ROOT
    rows = fs.listed_native(repo)
    tasks = fs.build_tasks(rows, max_group_files=group_files)
    state = fs.load_state(repo)
    parsed_paths = tracked_paths(repo, (root / "parsed").as_posix())
    status_counts = Counter()
    group_counts = Counter()
    format_counts = Counter()
    missing_outputs = 0
    unresolved_groups = []
    ledger_path = out / "virtual-file-ledger.jsonl.gz"
    issues_path = out / "virtual-unresolved.jsonl.gz"
    with GitReader(repo) as reader, gzip.open(
            ledger_path, "wt", encoding="utf-8", newline="\n") as ledger, gzip.open(
            issues_path, "wt", encoding="utf-8", newline="\n") as issues:
        for task in tasks:
            previous = state["attempted"].get(task["id"], {})
            matching = previous.get("fingerprint") == task["fingerprint"]
            group_status = previous.get("status", "NOT_ATTEMPTED") if matching else "NOT_ATTEMPTED"
            group_counts[group_status] += 1
            records, inspection_state = inspection_for_task(
                reader, root, task, previous, parsed_paths)
            if group_status in ("ERROR", "PARTIAL"):
                unresolved_groups.append({
                    "task": task["id"], "status": group_status,
                    "unresolved": previous.get("unresolved"),
                    "error": previous.get("error"),
                    "attempts": previous.get("error_attempts",
                                             previous.get("partial_attempts", 0)),
                    "terminal": fs.is_terminal(task, state),
                })
            for path in task["paths"]:
                entry = records.get(path)
                audit_status = (entry["parse_status"] if entry
                                else (inspection_state if inspection_state != "INSPECTED"
                                      else "INSPECTION_INCOMPLETE"))
                parsed_assets = entry.get("parsed_assets", []) if entry else []
                asset_paths = [asset.get("path", "") for asset in parsed_assets]
                absent = [p for p in asset_paths
                          if (root / p).as_posix() not in parsed_paths]
                if absent:
                    audit_status = "OUTPUT_MISSING"
                    missing_outputs += 1
                if entry:
                    format_counts[entry.get("format_candidate") or "UNKNOWN"] += 1
                result = {
                    "source": path, "task": task["id"],
                    "task_fingerprint": task["fingerprint"],
                    "task_status": group_status,
                    "task_terminal": fs.is_terminal(task, state),
                    "status": audit_status,
                    "format_candidate": entry.get("format_candidate") if entry else None,
                    "source_sha256": entry.get("source_sha256") if entry else None,
                    "sha256_evidence": entry.get("sha256_evidence") if entry else None,
                    "parsed_assets": asset_paths,
                    "missing_outputs": absent,
                }
                ledger.write(json.dumps(result, ensure_ascii=False,
                                        separators=(",", ":")) + "\n")
                status_counts[audit_status] += 1
                if (audit_status not in ("STRUCTURE_PARSED",) or
                        group_status in ("ERROR", "PARTIAL")):
                    issues.write(json.dumps(result, ensure_ascii=False,
                                            separators=(",", ":")) + "\n")
    source_progress = repo / root / "_index" / "full-extract-progress.json"
    progress = json.loads(source_progress.read_text("utf-8")) if source_progress.exists() else {}
    native_expected = progress.get("expectedNativeFiles")
    gaps = max(0, native_expected - len(rows)) if isinstance(native_expected, int) else None
    incomplete = sum(status_counts[s] for s in (
        "NOT_ATTEMPTED", "ATTEMPT_ERROR", "INSPECTION_MISSING",
        "INSPECTION_UNVERIFIED", "INSPECTION_INCOMPLETE",
        "SOURCE_HASH_MISMATCH", "OUTPUT_MISSING"))
    complete_packs = (progress.get("state") == "COMPLETE" and
                      progress.get("nextPack") == progress.get("totalPacks"))
    summary = {
        "schemaVersion": 1,
        "snapshot": "COMMITTED_HEAD_ONLY",
        "tracked_virtual_files": len(rows),
        "native_groups": len(tasks),
        "original_expected_native_files": native_expected,
        "original_not_yet_tracked_estimate": gaps,
        "original_pack_progress": progress,
        "by_status": dict(sorted(status_counts.items())),
        "by_group_status": dict(sorted(group_counts.items())),
        "formats": dict(sorted(format_counts.items())),
        "unresolved_groups": unresolved_groups,
        "missing_output_files": missing_outputs,
        "not_yet_verified_or_failed": incomplete,
        "audit_coverage": sum(status_counts.values()) == len(rows),
        "eligible_for_final_manual_review": (
            complete_packs and gaps == 0 and incomplete == 0 and
            not unresolved_groups and
            group_counts.get("NOT_ATTEMPTED", 0) == 0),
        "warning": "INSPECTED_UNPARSED is not decoded; conversion is not visual or game-ID validation",
        "ledger": ledger_path.name,
        "unresolved": issues_path.name,
    }
    (out / "summary.json").write_text(
        json.dumps(summary, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    return summary


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--repo", type=Path, default=Path(__file__).resolve().parents[2])
    p.add_argument("--out", type=Path, required=True)
    p.add_argument("--group-files", type=int, default=1200)
    args = p.parse_args()
    result = build_audit(args.repo, args.out, args.group_files)
    print(json.dumps({
        "tracked_virtual_files": result["tracked_virtual_files"],
        "by_status": result["by_status"],
        "unresolved_groups": len(result["unresolved_groups"]),
        "eligible_for_final_manual_review": result["eligible_for_final_manual_review"],
    }, ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()
