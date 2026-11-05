#!/usr/bin/env python3
"""Checkpointed *full-sweep* of tracked SV native virtual resources.

A sweep attempts all tracked files with available converters. It does NOT
claim unknown/proprietary formats or unreviewed game-ID mappings are decoded.
Run via .github/workflows/sv-secondary-full.yml (bounded self-dispatch).
"""
from __future__ import annotations

import argparse
from collections import Counter, defaultdict
import hashlib
import json
import os
from pathlib import Path, PurePosixPath
import subprocess
import sys

try:
    from . import cli
except ImportError:
    import cli

ROOT = Path(cli.BASE)
STATE_NAME = "_index/secondary/full-state.json"
SELECTION_NAME = "_index/secondary/full-selection.json"
RUN_NAME = "_index/secondary/full-last-run.json"
EPOCH = "full-sweep-v1"  # Bump only when parser semantics/tool chain change.


def repo_root(path):
    return Path(path).resolve()


def listed_native(repo: Path):
    """Enumerate committed paths + Git blob IDs WITHOUT downloading all files."""
    root = (ROOT / "virtual").as_posix() + "/"
    proc = subprocess.run(
        ["git", "ls-tree", "-r", "-z", "HEAD", "--", root.rstrip("/")],
        cwd=repo, capture_output=True, check=True)
    rows = []
    for line in proc.stdout.split(b"\0"):
        if not line:
            continue
        metadata, raw_path = line.split(b"\t", 1)
        mode, typ, blob = metadata.decode("ascii").split(" ")
        if mode not in ("100644", "100755") or typ != "blob":
            continue
        full = raw_path.decode("utf-8", errors="strict")
        if not full.startswith(root):
            continue
        rel = cli.safe_path(full[len(root):])
        # Deliberately reject strange separators before Git sparse checkout.
        if "\n" in rel or "\r" in rel:
            raise ValueError("Native path cannot contain line breaks: " + repr(rel))
        rows.append((rel, blob))
    return sorted(rows)


def logical_family(name):
    """Keep DAT/TBL pairs and common model LOD siblings together on splits."""
    base = PurePosixPath(name).name
    stem = base.rsplit(".", 1)[0]
    if "_lod" in stem and stem.rsplit("_lod", 1)[-1].isdigit():
        return stem.rsplit("_lod", 1)[0]
    if stem.endswith(("_alb", "_ao", "_nrm", "_mtl", "_rgn")):
        return stem.rsplit("_", 1)[0]
    return stem


def task_priority(path):
    if path.startswith("message/dat/"):
        return (0, path)
    if path.startswith(("appli/tex/", "pokemon/")):
        return (1, path)
    if path.startswith(("chara/", "field_graphic/", "effect/")):
        return (2, path)
    return (3, path)


def build_tasks(rows, max_group_files=1200):
    if max_group_files < 2:
        raise ValueError("max_group_files must be >= 2")
    folders = defaultdict(list)
    for rel, sha in rows:
        folders[str(PurePosixPath(rel).parent)].append((rel, sha))
    tasks = []
    for directory, pairs in folders.items():
        # Split oversized leaf directories in stable logical groups.
        families = defaultdict(list)
        for pair in pairs:
            families[logical_family(pair[0])].append(pair)
        chunks = []
        current = []
        for family in sorted(families):
            members = families[family]
            if current and len(current) + len(members) > max_group_files:
                chunks.append(current)
                current = []
            if len(members) > max_group_files:
                for start in range(0, len(members), max_group_files):
                    if current:
                        chunks.append(current)
                        current = []
                    chunks.append(members[start:start+max_group_files])
            else:
                current.extend(members)
        if current:
            chunks.append(current)
        for part_index, chunk in enumerate(chunks):
            ident = f"{directory}#{part_index:05d}"
            h = hashlib.sha256()
            h.update(EPOCH.encode())
            for rel, sha in chunk:
                h.update(rel.encode("utf-8") + b"\0" + sha.encode("ascii") + b"\0")
            tasks.append({"id": ident, "fingerprint": h.hexdigest().upper(),
                          "prefix": directory,
                          "paths": [rel for rel, _ in chunk],
                          "file_count": len(chunk)})
    return sorted(tasks, key=lambda x: (task_priority(x["prefix"]), x["id"]))


def load_state(repo):
    path = repo / ROOT / STATE_NAME
    if not path.exists():
        return {"schemaVersion": 1, "epoch": EPOCH, "attempted": {},
                "totals": {"runs": 0, "source_files_attempted": 0}}
    data = json.loads(path.read_text("utf-8"))
    if data.get("schemaVersion") != 1:
        raise ValueError("Unexpected full-state schema version")
    if data.get("epoch") != EPOCH:
        data["epoch"] = EPOCH
    data.setdefault("attempted", {})
    data.setdefault("totals", {"runs": 0, "source_files_attempted": 0})
    return data


def select_batch(tasks, state, max_tasks=20, max_files=2400):
    selected = []
    total = 0
    for item in tasks:
        if state["attempted"].get(item["id"], {}).get("fingerprint") == item["fingerprint"]:
            continue
        if len(selected) >= max_tasks:
            break
        if selected and total + item["file_count"] > max_files:
            break
        if item["file_count"] > max_files:
            raise ValueError("Oversized native group; decrease --group-files or increase --max-files")
        selected.append(item)
        total += item["file_count"]
    return selected


def safe_paths_for_checkout(selection):
    paths = []
    for task in selection["selected"]:
        paths.extend(task["paths"])
    return sorted(set(paths))


def choose(repo, group_files, max_tasks, max_files):
    rows = listed_native(repo)
    tasks = build_tasks(rows, group_files)
    state = load_state(repo)
    selected = select_batch(tasks, state, max_tasks, max_files)
    seen = sum(t["file_count"] for t in tasks if
               state["attempted"].get(t["id"], {}).get("fingerprint") == t["fingerprint"])
    summary = {
        "schemaVersion": 1, "epoch": EPOCH,
        "source_version": cli.VERSION,
        "head_tree": subprocess.check_output(["git","rev-parse","HEAD^{tree}"],
                                              cwd=repo,text=True).strip(),
        "total_tracked_files": len(rows),
        "total_groups": len(tasks),
        "previously_attempted_files": seen,
        "remaining_before_batch": len(rows) - seen,
        "selected_count": len(selected),
        "selected_files": sum(t["file_count"] for t in selected),
        "selected": selected,
    }
    cli.store_json(repo / ROOT / SELECTION_NAME, summary)
    return {k:v for k,v in summary.items() if k!="selected"}


def process_batch(repo, converter_png="", converter_model=""):
    root = repo / ROOT
    selection = json.loads((root / SELECTION_NAME).read_text("utf-8"))
    state = load_state(repo)
    report_paths = set()
    records = []
    failures = 0
    for task in selection["selected"]:
        # The sparse checkout must include every path. Verify exact selection.
        missing = [p for p in task["paths"] if not (root/"virtual"/p).is_file()]
        if missing:
            raise ValueError("Sparse checkout missing "+str(len(missing))+" files, e.g. "+missing[0])
        task_tmp = root/"_index"/"secondary"/"_working-paths.txt"
        task_tmp.parent.mkdir(parents=True,exist_ok=True)
        task_tmp.write_text("\n".join(task["paths"])+"\n", encoding="utf-8")
        cmd = [sys.executable, str(repo/"scripts/resource_pipeline/process_virtual.py"),
               "--repo", str(repo), "--prefix", task["prefix"],
               "--paths-file", str(task_tmp), "--kind", "all",
               "--limit", "5000", "--max-source-files", "10000",
               "--max-output-mb", "180"]
        if converter_png:
            cmd += ["--png-converter", converter_png]
        if converter_model:
            cmd += ["--model-converter", converter_model]
        proc = subprocess.run(cmd,cwd=repo,capture_output=True,text=True)
        item={"task":task["id"],"fingerprint":task["fingerprint"],
              "input_files":task["file_count"],"returncode":proc.returncode}
        try:
            result=json.loads(proc.stdout)
            report_paths.add(result["report_path"])
            for out in result.get("outputs", []):
                report_paths.add(str(ROOT / out["path"]))
            stats=result.get("stages",{})
            item["stages"]=stats
            item["formats"]=result["index"]["formats"]
            item["native_sha_matches"]=result["index"]["native_sha_matches"]
            item["local_only"]=result["index"]["local_only"]
            item["deferred"]=len(result.get("deferred_outputs", []))
            item["problems"]=len(result.get("problems", []))
            item["status"]="ATTEMPTED" if proc.returncode == 0 and item["deferred"]==0 else "PARTIAL"
            if item["status"]=="PARTIAL":
                failures+=1
        except (json.JSONDecodeError,KeyError,TypeError) as exc:
            item["status"]="ERROR"
            item["error"]=str(exc)+": "+proc.stderr[-700:]
            failures+=1
        item["updated_utc"]=cli.utcnow()
        records.append(item)
        state["attempted"][task["id"]]=item
        state["totals"]["source_files_attempted"] += task["file_count"]
        task_tmp.unlink(missing_ok=True)
    state["totals"]["runs"] += 1
    state["latest_completed_utc"]=cli.utcnow()
    cli.store_json(root/STATE_NAME,state)
    report_paths.add(str(ROOT/STATE_NAME))
    report = {
        "schemaVersion":1,"source_version":cli.VERSION,
        "selected_count":len(records), "input_files":sum(x["input_files"] for x in records),
        "failed_or_partial":failures,
        "attempts":records,
        "published_files":sorted(report_paths),
        "policy":"ATTEMPTED_NOT_FULLY_DECODED_WHEN_FORMAT_UNSUPPORTED",
        "updated_utc":cli.utcnow()
    }
    cli.store_json(root/RUN_NAME,report)
    report_paths.add(str(ROOT/RUN_NAME))
    index_path=repo/"sv-secondary-publication.json"
    cli.store_json(index_path,{"paths":sorted(report_paths),"input_files":report["input_files"],
                               "attempts":len(records), "failed_or_partial":failures})
    return {k:v for k,v in report.items() if k not in ("published_files","attempts")}


def status(repo, group_files):
    rows=listed_native(repo)
    tasks=build_tasks(rows,group_files)
    state=load_state(repo)
    pending=[t for t in tasks if state["attempted"].get(t["id"],{}).get("fingerprint") != t["fingerprint"]]
    return {"tracked_native_files":len(rows),"native_groups":len(tasks),
            "remaining_groups":len(pending),
            "remaining_files":sum(t["file_count"] for t in pending),
            "attempted_groups":len(tasks)-len(pending),
            "unresolved_groups":sum(v.get("status")!="ATTEMPTED" for v in state["attempted"].values()),
            "state":"SWEEP_ATTEMPTED" if not pending else "PARTIAL",
            "note":"Not a claim that every proprietary format was decoded"}


def main(argv=None):
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--repo",type=Path,default=Path(__file__).resolve().parents[2])
    p.add_argument("--group-files",type=int,default=1200)
    p.add_argument("--max-tasks",type=int,default=20)
    p.add_argument("--max-files",type=int,default=2400)
    p.add_argument("--png-converter",default="")
    p.add_argument("--model-converter",default="")
    p.add_argument("action",choices=("select","paths","execute","status"))
    args=p.parse_args(argv)
    repo=repo_root(args.repo)
    if args.group_files<2 or args.max_tasks<1 or args.max_files<args.group_files:
        p.error("Invalid positive batch limits")
    if args.action=="select":
        result=choose(repo,args.group_files,args.max_tasks,args.max_files)
    elif args.action=="paths":
        path=repo/ROOT/SELECTION_NAME
        selection=json.loads(path.read_text("utf-8"))
        paths=safe_paths_for_checkout(selection)
        # NUL-separated for xargs -0, unambiguous path safety.
        sys.stdout.buffer.write(b"".join(
            (str(ROOT/"virtual"/name).encode("utf-8")+b"\0") for name in paths))
        return 0
    elif args.action=="execute":
        result=process_batch(repo,args.png_converter,args.model_converter)
    else:
        result=status(repo,args.group_files)
    print(json.dumps(result,ensure_ascii=False,indent=2))
    return 0


if __name__=="__main__":
    sys.exit(main())
