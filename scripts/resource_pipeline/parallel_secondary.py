#!/usr/bin/env python3
"""Parallel independent-process runner for SV Trinity second-stage resources.

Each task owns its own SQLite, checkpoint and writable output root. It reads
the native source only through hardlinks/copies, then verifies and atomically
merges successful outputs. This avoids SQLite write contention and R4 cursor
races while allowing multiple text/texture/model converters to run.
"""
from __future__ import annotations

import argparse
from concurrent.futures import ThreadPoolExecutor, as_completed
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile
import time

try:
    from . import cli, full_secondary as fs
except ImportError:
    import cli
    import full_secondary as fs


def safe_native(root: Path, rel: str) -> Path:
    rel = cli.safe_path(rel)
    p = root / "virtual" / rel
    if p.is_symlink() or not p.is_file() or not p.resolve().is_relative_to((root/"virtual").resolve()):
        raise ValueError("Native source missing/unsafe: " + rel)
    return p


def task_slug(task):
    return hashlib.sha256(task["id"].encode("utf-8")).hexdigest()[:20]


def isolated_root(repo: Path, task):
    return repo / ".sv-secondary-work" / task_slug(task) / "data.trpfs"


def stage_native(repo: Path, task):
    canonical = repo / fs.ROOT
    work = isolated_root(repo, task)
    if work.exists():
        # Deterministic scratch root may have remnants from a failed prior run.
        shutil.rmtree(work)
    work.joinpath("_index").mkdir(parents=True, exist_ok=True)
    for name in task["paths"]:
        src = safe_native(canonical, name)
        dest = work / "virtual" / cli.safe_path(name)
        dest.parent.mkdir(parents=True, exist_ok=True)
        try:
            os.link(src, dest)
        except OSError:
            shutil.copy2(src, dest)
            if cli.digest(src) != cli.digest(dest):
                raise ValueError("Native scratch copy failed SHA verification: " + name)
    (work / "_index" / "allowlist.txt").write_text(
        "\n".join(task["paths"]) + "\n", encoding="utf-8"
    )
    return work


def worker(repo: Path, task, png_converter: str, model_converter: str, per_task_mb: int):
    work = isolated_root(repo, task)
    started = time.monotonic()
    try:
        stage_native(repo, task)
        command = [
            sys.executable, str(Path(__file__).with_name("process_virtual.py")),
            "--repo", str(repo), "--root", str(work),
            "--prefix", task["prefix"],
            "--paths-file", str(work / "_index" / "allowlist.txt"),
            "--kind", "all", "--limit", "5000",
            "--max-source-files", "10000", "--max-output-mb", str(per_task_mb)
        ]
        if png_converter:
            command += ["--png-converter", png_converter]
        if model_converter:
            command += ["--model-converter", model_converter]
        p = subprocess.run(command, cwd=repo, capture_output=True, text=True)
        try:
            result = json.loads(p.stdout)
        except json.JSONDecodeError as exc:
            raise RuntimeError("Worker emitted no valid JSON: " + p.stderr[-1200:]) from exc
        if result.get("source") != "virtual/" + task["prefix"]:
            raise ValueError("Worker source does not match selected native prefix")
        if result.get("source_files_seen") != len(task["paths"]):
            raise ValueError("Worker missed selected native source paths")
        if result.get("index", {}).get("hash_mismatch", 0):
            raise ValueError("Native hash mismatch: " + task["id"])
        return {"task":task, "work":work, "data":result,
                "returncode":p.returncode, "stderr":p.stderr[-1400:],
                "elapsed_seconds":round(time.monotonic()-started,3)}
    except Exception as exc:
        return {"task":task, "work":work, "error":str(exc)[:1600],
                "elapsed_seconds":round(time.monotonic()-started,3)}


def copy_verified(source: Path, dest: Path, expected_sha: str):
    if source.is_symlink() or not source.is_file():
        raise ValueError("Output is missing or unsafe: " + str(source))
    if cli.digest(source) != expected_sha.upper():
        raise ValueError("Worker output SHA changed: " + str(source))
    dest.parent.mkdir(parents=True,exist_ok=True)
    fd, name = tempfile.mkstemp(prefix=".sv-derived-", dir=dest.parent)
    os.close(fd)
    temp = Path(name)
    try:
        shutil.copy2(source,temp)
        if cli.digest(temp) != expected_sha.upper():
            raise ValueError("Atomic copy SHA mismatch: " + str(dest))
        os.replace(temp,dest)
    finally:
        temp.unlink(missing_ok=True)


def publish_result(repo: Path, completed):
    work = completed["work"]
    root = repo / fs.ROOT
    record = completed["data"]
    report_paths = []
    allowed = ("parsed", "converted", "resources")
    for asset in record.get("outputs", []):
        rel = cli.safe_path(asset["path"])
        if rel.split("/",1)[0] not in allowed:
            raise ValueError("Unexpected generated output layer: "+rel)
        source = work / rel
        target = root / rel
        if not target.resolve().is_relative_to(root.resolve()):
            raise ValueError("Output attempts path escape")
        copy_verified(source, target, asset["sha256"])
        report_paths.append(str(fs.ROOT / rel))
    report_relative = cli.safe_path(record["report_path"])
    report_source = repo / report_relative
    if not report_source.resolve().is_relative_to(work.resolve()):
        raise ValueError("Worker report escaped isolated directory")
    dest = root / "_index" / "secondary" / ("task-" + task_slug(completed["task"]) + ".json")
    # Report contains no private credentials, exact SHA and format outcomes.
    shutil.copy2(report_source, dest)
    report_paths.append(str(dest.relative_to(repo)).replace("\\","/"))
    return report_paths


def main_run(repo: Path, max_workers: int, png: str, model: str, output_mb: int):
    started = time.monotonic()
    root = repo / fs.ROOT
    selection = json.loads((root / fs.SELECTION_NAME).read_text("utf-8"))
    tasks = selection["selected"]
    state = fs.load_state(repo)
    published = set()
    outcomes = {}
    with ThreadPoolExecutor(max_workers=max_workers) as pool:
        futures={pool.submit(worker,repo,task,png,model,output_mb):task
                 for task in tasks}
        for future in as_completed(futures):
            item=future.result()
            outcomes[item["task"]["id"]]=item
    summaries=[]
    for task in tasks:  # Deterministic commit/checkpoint order, independent of finish order.
        item=outcomes[task["id"]]
        issue=item.get("error")
        files=[]
        if not issue:
            try:
                files=publish_result(repo,item)
            except Exception as exc:
                issue="Verified publication failed: "+str(exc)[:1400]
        if not issue:
            published.update(files)
            data=item["data"]
            statuses=data.get("stages",{})
            deferred=len(data.get("deferred_outputs",[]))
            blocked=sum(v.get("blocked",v.get("counts",{}).get("blocked",0))
                        for v in statuses.values())
            failures=sum(v.get("failed",v.get("counts",{}).get("failed",0))
                         for v in statuses.values())
            unresolved=deferred + blocked + failures + int(item["returncode"] != 0)
            status="ATTEMPTED" if not unresolved else "PARTIAL"
            row={"task":task["id"],"fingerprint":task["fingerprint"],
                 "input_files":task["file_count"],"status":status,
                 "unresolved":unresolved,"returncode":item["returncode"],
                 "formats":data["index"]["formats"],
                 "stages":statuses,"outputs":len(data.get("outputs",[])),
                 "published":len(files)}
        else:
            row={"task":task["id"],"fingerprint":task["fingerprint"],
                 "input_files":task["file_count"],"status":"ERROR",
                 "error":issue, "published":len(files)}
        row["elapsed_seconds"]=item.get("elapsed_seconds")
        row["updated_utc"]=cli.utcnow()
        summaries.append(row)
        # Preserve ERROR as an unresolved attempt, not a success. The planner
        # retries it a bounded number of times before moving to other folders.
        # This avoids an infinite dispatch loop on one permanently broken input.
        previous = state["attempted"].get(task["id"], {})
        if row["status"] == "ERROR":
            row["error_attempts"] = (
                int(previous.get("error_attempts", 0)) + 1
                if previous.get("fingerprint") == task["fingerprint"] else 1
            )
        state["attempted"][task["id"]] = row
        state["totals"]["source_files_attempted"] += task["file_count"]
        try:
            shutil.rmtree(item["work"].parent)
        except OSError:
            pass
    state["totals"]["runs"]+=1
    state["latest_completed_utc"]=cli.utcnow()
    cli.store_json(root / fs.STATE_NAME, state)
    published.add(str(fs.ROOT / fs.STATE_NAME))
    run={"schemaVersion":1,"source_version":cli.VERSION,
         "parallel_workers":max_workers,
         "elapsed_seconds":round(time.monotonic()-started,3),
         "selected_count":len(tasks),
         "input_files":sum(t["file_count"] for t in tasks),
         "files_per_second":round(
             sum(t["file_count"] for t in tasks)/max(0.001,time.monotonic()-started),2),
         "completed_count":sum(s["status"]!="ERROR" for s in summaries),
         "error_count":sum(s["status"]=="ERROR" for s in summaries),
         "partial_count":sum(s["status"]=="PARTIAL" for s in summaries),
         "attempts":summaries,"updated_utc":cli.utcnow(),
         "policy":"UNKNOWN_FORMATS_AND_VISUAL_REVIEW_NOT_AUTOMATICALLY_CONFIRMED"}
    cli.store_json(root / fs.RUN_NAME, run)
    published.add(str(fs.ROOT / fs.RUN_NAME))
    cli.store_json(repo / "sv-secondary-publication.json", {
        "paths":sorted(published), "input_files":run["input_files"],
        "completed_tasks":run["completed_count"],
        "errors":run["error_count"],"partial":run["partial_count"]})
    return {k:v for k,v in run.items() if k!="attempts"}


def main(argv=None):
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--repo", type=Path, default=Path(__file__).resolve().parents[2])
    p.add_argument("--workers", type=int, default=3)
    p.add_argument("--png-converter", default="")
    p.add_argument("--model-converter",default="")
    p.add_argument("--max-output-mb",type=int,default=120)
    a=p.parse_args(argv)
    if not (1<=a.workers<=8 and 1<=a.max_output_mb<=200):
        p.error("Workers 1..8 and output size 1..200 MiB required")
    result=main_run(a.repo.resolve(),a.workers,a.png_converter,a.model_converter,a.max_output_mb)
    print(json.dumps(result,ensure_ascii=False,indent=2))
    return 2 if result["error_count"] else 0


if __name__=="__main__":
    sys.exit(main())
