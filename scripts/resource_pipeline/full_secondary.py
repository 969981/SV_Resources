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
EPOCH = "full-sweep-parsed-v2"  # Revisit ALL earlier tasks: parsed coverage is now mandatory.
MAX_ERROR_ATTEMPTS = 2  # Keep failed tasks visible, but never dispatch forever.
MAX_PARTIAL_ATTEMPTS = 2  # Retry incomplete outputs, then retain unresolved evidence.


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
            members = sorted(families[family])
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


def is_terminal(task, state):
    """Only complete inspections or retry-exhausted failures are terminal.

    ATTEMPTED without full parsed inspection is a legacy checkpoint, not
    proof of coverage. PARTIAL remains unresolved even after retries.
    """
    previous = state["attempted"].get(task["id"], {})
    if previous.get("fingerprint") != task["fingerprint"]:
        return False
    status = previous.get("status")
    inspected = (int(previous.get("parsed_records", -1)) ==
                 int(task["file_count"]))
    if status == "ATTEMPTED":
        return inspected and int(previous.get("hash_mismatches", 0)) == 0
    if status == "PARTIAL":
        return inspected and (int(previous.get("partial_attempts", 0)) >=
                              MAX_PARTIAL_ATTEMPTS)
    if status == "ERROR":
        return int(previous.get("error_attempts", 0)) >= MAX_ERROR_ATTEMPTS
    return False


def select_batch(tasks, state, max_tasks=20, max_files=2400):
    selected = []
    total = 0
    for item in tasks:
        if is_terminal(item, state):
            continue
        if len(selected) >= max_tasks:
            break
        if selected and total + item["file_count"] > max_files:
            # Backfill later small independent groups instead of leaving the
            # remaining batch capacity idle behind a large 1200-file group.
            continue
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


def materialize_selected(repo: Path, selection, batch_size=120, max_parent_files=4000):
    """Hydrate selected committed folders using Git's *cone-mode* checkout.

    The former no-cone, per-file partial-clone checkout left valid tree entries
    without blob contents on Windows. Cone paths target actual parent folders
    and ask Git to fetch blobs when the worktree is updated. A fallback restore
    is attempted only if needed; missing objects are always reported as errors.
    """
    if not 1 <= batch_size <= 500 or max_parent_files < batch_size:
        raise ValueError("Invalid sparse checkout limits")
    names=safe_paths_for_checkout(selection)
    if not names:
        raise ValueError("No selected native paths")
    paths=[(ROOT/"virtual"/name).as_posix() for name in names]
    base=(repo/ROOT/"virtual").resolve()
    for rel in names:
        target=repo/ROOT/"virtual"/rel
        if not target.resolve().is_relative_to(base) or target.is_symlink():
            raise ValueError("Unsafe native path: "+rel)

    # Include tooling and checkpointer, as sparse-checkout *set* replaces
    # previously configured paths. Cone mode operates on directories only.
    permanent=[
        "scripts/resource_pipeline",
        "tests",
        "tools/gftool",
        "tools/SV.R3.ModelExport",
        "tools/PokeDocs/SV/Flatbuffers",
        ".github/workflows",
        str(ROOT/"_index/secondary").replace("\\","/"),
    ]
    folders=set()
    oversized=[]
    for task in selection["selected"]:
        prefix=task.get("prefix")
        if not prefix:
            prefix=str(PurePosixPath(task["paths"][0]).parent)
        folder=(ROOT/"virtual"/cli.safe_path(prefix)).as_posix()
        count=subprocess.run(["git","ls-tree","-r","-z","--name-only","HEAD","--",folder],
                              cwd=repo,capture_output=True,check=True)
        tracked=sum(bool(v) for v in count.stdout.split(b"\0"))
        if tracked > max_parent_files:
            oversized.append({"folder":folder,"tracked":tracked})
        folders.add(folder)
    # Even oversized leaf directories must be hydrated as complete directories
    # in cone mode, rather than silently breaking selected model dependencies.
    requested=sorted(set(permanent)|folders)
    proc=subprocess.run(
        ["git","-c","core.longpaths=true","sparse-checkout","set","--cone","--stdin"],
        cwd=repo,input="\n".join(requested)+"\n",text=True,capture_output=True)
    if proc.returncode:
        raise RuntimeError("Cone sparse checkout failed: "+proc.stderr[-1800:])
    missing=[p for p in paths if not (repo/p).is_file()]
    restore_errors=[]
    for i in range(0,len(missing),batch_size):
        p=subprocess.run(
            ["git","-c","core.longpaths=true","restore","--source=HEAD",
             "--worktree","--ignore-skip-worktree-bits","--",*missing[i:i+batch_size]],
            cwd=repo,capture_output=True,text=True)
        if p.returncode:
            restore_errors.append(p.stderr[-700:])
    unresolved=[p for p in paths if not (repo/p).is_file()]
    if unresolved:
        report=repo/ROOT/"_index/secondary/sparse-missing.json"
        report.parent.mkdir(parents=True,exist_ok=True)
        cli.store_json(report,{
            "expected":len(paths),"missing":len(unresolved),
            "paths":unresolved[:2000],
            "restore_errors":restore_errors[:5],
            "oversized_folders":oversized,
            "method":"CONE_PARENT_CHECKOUT_AND_VERIFIED_RESTORE"})
        raise ValueError(f"Still missing {len(unresolved)} native blobs; report={report}")
    return {"fetched_native_paths":len(paths),
            "recovered_sparse_missing":len(missing),
            "verified_local_paths":len(paths),
            "bounded_parent_patterns":len(folders)-len(oversized),
            "exact_file_patterns":0,
            "oversized_parent_patterns":len(oversized),
            "scope":"CONE_PARENT_SPARSE_VERIFIED"}



# Newly discovered leaf folders are frequently one native file each.
# Compact only NEVER-ATTEMPTED leaves; keep all existing checkpointed IDs
# exactly as they were, so resuming cannot throw away verified progress.
FULL_EPOCH = "full-sweep-parsed-v2"


def compact_never_attempted(tasks, state, target_files=64):
    """Stable exact-coverage rollups of small, unattempted native leaf tasks.

    Common message tables are intentionally kept intact: their decoded output
    size and DAT/TBL coupling need a smaller, independently bounded budget.
    """
    attempted = state.get("attempted", {})
    kept = []
    buckets = defaultdict(list)
    for task in tasks:
        parts = PurePosixPath(task["prefix"]).parts
        if (task["id"] in attempted or task["file_count"] >= target_files
                or len(parts) < 4 or parts[:2] == ("message", "dat")):
            kept.append(task)
            continue
        # Keep workspaces bounded, but do not create one process per leaf.
        parent = "/".join(parts[:3])
        buckets[parent].append(task)

    for parent, members in sorted(buckets.items()):
        chunk = []
        size = 0

        def flush():
            if not chunk:
                return
            if len(chunk) == 1:
                kept.append(chunk[0])
                return
            sha = hashlib.sha256()
            sha.update((EPOCH + "|full-rollup-v1|").encode("utf-8"))
            paths = []
            for leaf in chunk:
                sha.update(leaf["id"].encode("utf-8") + b"\0")
                sha.update(leaf["fingerprint"].encode("ascii") + b"\0")
                paths.extend(leaf["paths"])
            digest = sha.hexdigest().upper()
            kept.append({
                "id": "__full_rollup__/" + parent + "#" + digest[:20],
                "fingerprint": digest,
                "prefix": parent,
                "paths": paths,
                "file_count": len(paths),
            })

        for leaf in sorted(members, key=lambda t: t["id"]):
            if chunk and size + leaf["file_count"] > target_files:
                flush()
                chunk = []
                size = 0
            chunk.append(leaf)
            size += leaf["file_count"]
        flush()
    result = sorted(kept, key=lambda t: (task_priority(t["prefix"]), t["id"]))
    # Validate there was NO missing native path or duplicate during compaction.
    before = sorted(p for t in tasks for p in t["paths"])
    after = sorted(p for t in result for p in t["paths"])
    if before != after:
        raise ValueError("Native task compaction changed exact source coverage")
    return result


def choose(repo, group_files, max_tasks, max_files):
    rows = listed_native(repo)
    tasks = build_tasks(rows, group_files)
    state = load_state(repo)
    if EPOCH == FULL_EPOCH:
        tasks = compact_never_attempted(tasks, state)
    selected = select_batch(tasks, state, max_tasks, max_files)
    seen = sum(t["file_count"] for t in tasks if is_terminal(t, state))
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
        "needs_bntx": any(p.lower().endswith(".bntx") for t in selected for p in t["paths"]),
        "needs_models": any(p.lower().endswith(".trmdl") for t in selected for p in t["paths"]),
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
            inspection=result["inspection"]
            item["parsed_records"]=inspection["inspection_records"]
            if item["parsed_records"] != task["file_count"]:
                raise ValueError("Worker did not inspect all selected source paths")
            item["inspection_manifest"]=inspection["manifest"]
            item["inspection_sha256"]=inspection["manifest_sha256"]
            item["structurally_parsed"]=inspection["by_status"].get("STRUCTURE_PARSED",0)
            item["inspected_unparsed"]=inspection["by_status"].get("INSPECTED_UNPARSED",0)
            item["hash_mismatches"]=inspection["by_status"].get("SOURCE_HASH_MISMATCH",0)
            item["status"]=("ATTEMPTED" if proc.returncode == 0 and
                            item["deferred"]==0 and item["hash_mismatches"]==0
                            else "PARTIAL")
            if item["status"]=="PARTIAL":
                failures+=1
        except (json.JSONDecodeError,KeyError,TypeError,ValueError) as exc:
            item["status"]="ERROR"
            item["error"]=str(exc)+": "+proc.stderr[-700:]
            failures+=1
        item["updated_utc"]=cli.utcnow()
        records.append(item)
        previous=state["attempted"].get(task["id"], {})
        for kind,key in (("ERROR","error_attempts"),("PARTIAL","partial_attempts")):
            if item["status"]==kind:
                item[key]=(int(previous.get(key,0))+1
                           if previous.get("fingerprint")==task["fingerprint"] else 1)
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
    if EPOCH == FULL_EPOCH:
        tasks = compact_never_attempted(tasks, state)
    pending = [t for t in tasks if not is_terminal(t, state)]
    matching = [state["attempted"][t["id"]] for t in tasks
                if state["attempted"].get(t["id"], {}).get("fingerprint") == t["fingerprint"]]
    error_groups = sum(x.get("status") == "ERROR" for x in matching)
    partial_groups = sum(x.get("status") == "PARTIAL" for x in matching)
    exhausted_errors = sum(x.get("status") == "ERROR" and
                           int(x.get("error_attempts", 0)) >= MAX_ERROR_ATTEMPTS
                           for x in matching)
    exhausted_partials = sum(x.get("status") == "PARTIAL" and
                            int(x.get("partial_attempts", 0)) >= MAX_PARTIAL_ATTEMPTS
                            for x in matching)
    phase = ("PARTIAL" if pending else
             "SWEEP_ATTEMPTED_WITH_ERRORS" if error_groups else
             "SWEEP_ATTEMPTED_WITH_PARTIAL" if partial_groups else
             "SWEEP_ATTEMPTED")
    inspected_files = sum(x.get("parsed_records", 0) for x in matching)
    structured_files = sum(x.get("structurally_parsed", 0) for x in matching)
    unsupported_files = sum(x.get("inspected_unparsed", 0) for x in matching)
    return {"tracked_native_files": len(rows), "native_groups": len(tasks),
            "parsed_inspection_records": inspected_files,
            "parsed_structurally_decoded": structured_files,
            "parsed_inspected_unparsed": unsupported_files,
            "parsed_coverage_percent": round(100 * inspected_files / max(1, len(rows)), 3),
            "not_yet_inspected": max(0, len(rows) - inspected_files),
            "remaining_groups": len(pending),
            "remaining_files": sum(t["file_count"] for t in pending),
            "attempted_groups": len(tasks) - len(pending),
            "error_groups": error_groups,
            "exhausted_error_groups": exhausted_errors,
            "exhausted_partial_groups": exhausted_partials,
            "partial_groups": partial_groups,
            "unresolved_groups": error_groups + partial_groups,
            "state": phase,
            "note": "Attempted is not the same as decoded; errors remain explicitly recorded"}


def main(argv=None):
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--repo",type=Path,default=Path(__file__).resolve().parents[2])
    p.add_argument("--group-files",type=int,default=1200)
    p.add_argument("--max-tasks",type=int,default=20)
    p.add_argument("--max-files",type=int,default=2400)
    p.add_argument("--png-converter",default="")
    p.add_argument("--model-converter",default="")
    p.add_argument("action",choices=("select","paths","fetch","execute","status"))
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
    elif args.action=="fetch":
        selection=json.loads((repo/ROOT/SELECTION_NAME).read_text("utf-8"))
        result=materialize_selected(repo,selection)
    elif args.action=="execute":
        result=process_batch(repo,args.png_converter,args.model_converter)
    else:
        result=status(repo,args.group_files)
    print(json.dumps(result,ensure_ascii=False,indent=2))
    return 0


if __name__=="__main__":
    sys.exit(main())
