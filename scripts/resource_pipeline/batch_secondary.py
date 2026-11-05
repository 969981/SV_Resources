#!/usr/bin/env python3
"""Bounded, evidence-gated SV virtual/ secondary-processing batches.

Enumerates Git tree paths without downloading unrelated binaries.
Runs existing process_virtual.py per scoped object, never edits virtual/.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import subprocess
import sys
from pathlib import Path, PurePosixPath

BASE = "Unpack/4.0.0/romfs/arc/data.trpfs"
EXTENSIONS = {"text": ".dat", "images": ".bntx", "models": ".trmdl"}
STAGES = {"text": "messages", "images": "bntx", "models": "models"}


def safe_scope(scope: str) -> str:
    if not scope or chr(92) in scope or chr(0) in scope:
        raise ValueError("Invalid virtual scope")
    p = PurePosixPath(scope)
    if p.is_absolute() or any(x in ("", ".", "..") for x in scope.split("/")):
        raise ValueError("Unsafe scope: " + scope)
    if scope.startswith(("virtual/", "parsed/", "converted/", "resources/", "_index/")):
        raise ValueError("Scope must be relative to virtual/")
    return p.as_posix()


def list_git_files(repo: Path, scope: str = "") -> list[str]:
    path = BASE + "/virtual" + ("/" + safe_scope(scope) if scope else "")
    result = subprocess.run(
        ["git", "ls-tree", "-r", "-z", "--name-only", "HEAD", "--", path],
        cwd=repo, capture_output=True, check=True
    )
    prefix = BASE + "/virtual/"
    return sorted(
        raw.decode("utf-8", "surrogateescape")[len(prefix):]
        for raw in result.stdout.split(bytes([0]))
        if raw and raw.decode("utf-8", "surrogateescape").startswith(prefix)
    )


def groups(files: list[str], kind: str) -> list[str]:
    ext = EXTENSIONS[kind]
    return sorted({
        PurePosixPath(path).parent.as_posix()
        for path in files if path.lower().endswith(ext)
    })


def plan(repo: Path, kind: str, scope: str, offset: int, count: int) -> dict:
    if offset < 0 or not (1 <= count <= 100):
        raise ValueError("Expect offset >= 0 and 1 <= count <= 100")
    files = list_git_files(repo, scope)
    allowed = groups(files, kind)
    if scope and not allowed:
        raise ValueError(f"No {kind} sources in virtual/{scope}")
    # --scope refers to one folder when it includes files of the selected kind.
    if scope and any(PurePosixPath(f).parent.as_posix() == scope for f in files
                     if f.lower().endswith(EXTENSIONS[kind])):
        allowed = [scope]
    scopes = allowed[offset:offset + count]
    return {
        "schema": 1, "kind": kind, "stage": STAGES[kind],
        "root": BASE, "source_prefix": scope,
        "offset": offset, "count_requested": count,
        "available_scopes": len(allowed), "selected_scopes": scopes,
        "source_paths_in_scope": len(files),
        "classification": "PATH_AND_EXTENSION_ONLY_NOT_NATIVE_VERIFICATION"
    }


def sha256(file: Path) -> str:
    h = hashlib.sha256()
    with file.open("rb") as f:
        for part in iter(lambda: f.read(1048576), b""):
            h.update(part)
    return h.hexdigest().upper()


def run_batch(repo: Path, info: dict, args) -> tuple[dict, int]:
    result = {**info, "results": [], "summary": {
        "ok": 0, "blocked": 0, "failed": 0, "selected_outputs": 0}}
    failures = 0
    for scope in info["selected_scopes"]:
        command = [sys.executable, str(repo / "scripts/resource_pipeline/process_virtual.py"),
                   "--repo", str(repo), "--prefix", scope, "--kind", info["stage"],
                   "--limit", str(args.file_limit), "--max-source-files", str(args.max_source_files),
                   "--max-output-mb", str(args.max_output_mb)]
        if info["kind"] == "images":
            if not args.png_converter:
                raise ValueError("Native PNG converter required for image batches")
            command += ["--png-converter", args.png_converter]
        if info["kind"] == "models" and args.model_converter:
            command += ["--model-converter", args.model_converter]
        if args.retry_failed:
            command += ["--retry-failed"]
        proc = subprocess.run(command, cwd=repo, capture_output=True, text=True)
        entry = {"scope": scope, "exit_code": proc.returncode, "stderr": proc.stderr[-1500:]}
        try:
            report = json.loads(proc.stdout)
            entry["report_path"] = report["report_path"]
            entry["outputs"] = report.get("outputs", [])
            entry["stages"] = report.get("stages", {})
            entry["problems"] = report.get("problems", [])[:20]
            result["summary"]["selected_outputs"] += len(entry["outputs"])
            if info["stage"] == "models":
                counts = entry["stages"].get("models", {}).get("counts", {})
                result["summary"]["ok"] += counts.get("converted", 0)
                result["summary"]["blocked"] += counts.get("blocked", 0)
                result["summary"]["failed"] += counts.get("failed", 0)
            else:
                counts = entry["stages"].get(info["stage"], {})
                result["summary"]["ok"] += counts.get("ok", 0)
                result["summary"]["blocked"] += counts.get("blocked", 0)
                result["summary"]["failed"] += counts.get("failed", 0)
        except (ValueError, KeyError) as exc:
            entry["parse_error"] = str(exc)
            entry["stdout_tail"] = proc.stdout[-1500:]
        if proc.returncode or "parse_error" in entry:
            failures += 1
        result["results"].append(entry)
    return result, failures


def stage_verified(repo: Path, result: dict, batch_path: Path) -> int:
    native = (repo / BASE).resolve()
    collected = [batch_path]
    for entry in result["results"]:
        if "report_path" not in entry:
            continue
        report = (repo / entry["report_path"]).resolve()
        if not report.is_relative_to(native / "_index" / "secondary"):
            raise ValueError("Unexpected report location: " + str(report))
        collected.append(report)
        for item in entry.get("outputs", []):
            path = (native / item["path"]).resolve()
            if not any(path.is_relative_to(native / folder)
                       for folder in ("parsed", "converted", "resources")):
                raise ValueError("Unexpected output location: " + str(path))
            if not path.is_file() or path.stat().st_size != item["bytes"] or sha256(path) != item["sha256"]:
                raise ValueError("Output integrity check failed: " + str(path))
            collected.append(path)
    for start in range(0, len(collected), 50):
        chunk = [str(p.relative_to(repo)) for p in collected[start:start + 50]]
        subprocess.run(["git", "add", "-f", "--", *chunk], cwd=repo, check=True)
    return len(collected)


def main(argv=None):
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("action", choices=("plan", "run"))
    p.add_argument("--repo", type=Path, default=Path(__file__).resolve().parents[2])
    p.add_argument("--kind", choices=tuple(EXTENSIONS), required=True)
    p.add_argument("--scope", default="", help="Optional bounded relative source folder")
    p.add_argument("--offset", type=int, default=0)
    p.add_argument("--count", type=int, default=1)
    p.add_argument("--file-limit", type=int, default=1000)
    p.add_argument("--max-source-files", type=int, default=3000)
    p.add_argument("--max-output-mb", type=int, default=75)
    p.add_argument("--png-converter", default="")
    p.add_argument("--model-converter", default="")
    p.add_argument("--retry-failed", action="store_true")
    p.add_argument("--stage", action="store_true", help="Stage audited outputs only, never virtual/")
    p.add_argument("--output", type=Path)
    args = p.parse_args(argv)
    if not (1 <= args.file_limit <= 1000 and 1 <= args.max_source_files <= 100000
            and 1 <= args.max_output_mb <= 200):
        p.error("Invalid file/source/output limits")
    repo = args.repo.resolve()
    info = plan(repo, args.kind, safe_scope(args.scope) if args.scope else "",
                args.offset, args.count)
    if args.action == "plan":
        print(json.dumps(info, ensure_ascii=False, indent=2))
        return 0
    if not info["selected_scopes"]:
        raise ValueError("No matching native scopes at requested offset")
    result, failures = run_batch(repo, info, args)
    output = args.output or (
        repo / BASE / "_index" / "secondary" / "batches" /
        f"{args.kind}-{args.offset:06d}-{args.count:03d}.json")
    output = output.resolve()
    if not output.is_relative_to(repo / BASE / "_index" / "secondary"):
        raise ValueError("Batch output must be within _index/secondary/")
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(result, ensure_ascii=False, indent=2) + chr(10),
                      encoding="utf-8")
    result["batch_report_path"] = output.relative_to(repo).as_posix()
    if args.stage:
        result["staged_files"] = stage_verified(repo, result, output)
    print(json.dumps(result, ensure_ascii=False, indent=2))
    return 2 if failures else 0


if __name__ == "__main__":
    sys.exit(main())
