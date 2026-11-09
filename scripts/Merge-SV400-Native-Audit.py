#!/usr/bin/env python3
"""Preserve current master research and merge audited SV 4.0.0 native data.

Run in a git repository with locally available origin/master and
origin/m2-full-extract refs and their tree objects (blobs may be promisor-missing).
Dry-run by default. With --push, fast-forward updates master without force.
"""
from __future__ import annotations

import argparse
import json
import subprocess
from pathlib import Path

REPO = "969981/SV_Resources"
SOURCE_EXPECTED = "3b66e4e14dc546c3c25fd94cf4ad04ab5bd4c069"
P = "Unpack/4.0.0/romfs/arc/data.trpfs"


def git(*args: str, data: bytes | None = None) -> bytes:
    return subprocess.check_output(["git", *args], input=data)


def rev(ref: str) -> str:
    return git("rev-parse", "--verify", ref).decode().strip()


def entries(tree: str, recursive: bool = False):
    argv = ["ls-tree", "-z"]
    if recursive:
        argv += ["-r"]
    argv += [tree]
    for line in git(*argv).split(b"\0"):
        if line:
            meta, path = line.split(b"\t", 1)
            mode, kind, sha = meta.decode("ascii").split()
            yield path, (mode, kind, sha)


def tree_map(tree: str) -> dict[bytes, tuple[str, str, str]]:
    return dict(entries(tree))


def make_tree(items: dict[bytes, tuple[str, str, str]]) -> str:
    stream = b"".join(
        (f"{mode} {kind} {sha}\t".encode("ascii") + name + b"\0")
        for name, (mode, kind, sha) in sorted(items.items())
    )
    return git("mktree", "-z", "--missing", data=stream).decode().strip()


def replace(tree: str, **trees: str) -> str:
    original = tree_map(tree)
    for name, sha in trees.items():
        path = name.encode("ascii")
        if path not in original or original[path][1] != "tree":
            raise RuntimeError(f"Missing original tree: {name}")
        original[path] = ("040000", "tree", sha)
    return make_tree(original)


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--push", action="store_true", help="push verified merge commit to origin/master, without force")
    ap.add_argument("--no-full-subset-check", action="store_true", help="synthetic testing only")
    args = ap.parse_args()

    master = rev("refs/remotes/origin/master")
    source = rev("refs/remotes/origin/m2-full-extract")
    if source != SOURCE_EXPECTED and not args.no_full_subset_check:
        raise RuntimeError("Source branch changed from audited commit: " + source)
    native = rev(f"{source}:{P}/virtual")
    original_virtual = rev(f"{master}:{P}/virtual")
    if not args.no_full_subset_check:
        src_entries = dict(entries(native, recursive=True))
        same = 0
        for path, old in entries(original_virtual, recursive=True):
            if src_entries.get(path) != old:
                raise RuntimeError(f"Source missing or changed a master native file: {path!r}")
            same += 1
        print(f"PASS native path coverage: {same} master blobs all unchanged in {len(src_entries)} full-branch blobs", flush=True)
        assert b"script/lua/bin/release/main/main.blua" in src_entries
        assert b"script/lua/bin/release/main_dynamic/main_dynamic.blua" in src_entries
        audit = json.loads(git("show", f"{source}:{P}/_index/full-extract-audit.json"))
        progress = json.loads(git("show", f"{source}:{P}/_index/full-extract-progress.json"))
        if not (audit.get("complete") is True and audit.get("expectedNativeHashes") == 408641
                and audit.get("verifiedOKByRecordedNativeSha256") == 408641
                and audit.get("failed") == 0 and audit.get("unseen") == 0
                and progress.get("nextPack") == 23589 and progress.get("state") == "COMPLETE"):
            raise RuntimeError("Source native audit/checkpoint is not complete")

    m_batches = tree_map(rev(f"{master}:{P}/_index/batches"))
    s_batches = tree_map(rev(f"{source}:{P}/_index/batches"))
    added = {}
    for name, value in s_batches.items():
        if name not in m_batches:
            if value[1] != "blob":
                raise RuntimeError(f"Unexpected non-blob native batch file {name!r}")
            added[name] = value
        elif m_batches[name] != value and not name.endswith(b"-summary.json"):
            raise RuntimeError(f"Existing batch extraction evidence changed: {name!r}")
    if any(name not in s_batches for name in m_batches):
        raise RuntimeError("Audited branch is missing an existing batch record")
    if not args.no_full_subset_check and (len(added) != 38 or len(s_batches) != 472):
        raise RuntimeError(f"Unexpected batch addition count {len(added)} / source count {len(s_batches)}")

    batch_tree = make_tree({**m_batches, **added})
    old_index = tree_map(rev(f"{master}:{P}/_index"))
    old_index[b"batches"] = ("040000", "tree", batch_tree)
    for file in ("full-extract-progress.json", "full-extract-audit.json"):
        old_index[file.encode()] = ("100644", "blob", rev(f"{source}:{P}/_index/{file}"))
    index_tree = make_tree(old_index)

    native_parent = replace(rev(f"{master}:{P}"), virtual=native, _index=index_tree)
    for path, child in (
        ("Unpack/4.0.0/romfs/arc", "data.trpfs"),
        ("Unpack/4.0.0/romfs", "arc"),
        ("Unpack/4.0.0", "romfs"),
        ("Unpack", "4.0.0"),
        ("", "Unpack"),
    ):
        original_tree = rev(f"{master}:{path}" if path else f"{master}^{{tree}}")
        native_parent = replace(original_tree, **{child: native_parent})

    if rev(f"{master}:scripts") != rev(f"{native_parent}:scripts"):
        raise RuntimeError("Master scripts unexpectedly changed")
    for root in ("docs", "tools", "tests", ".github"):
        if rev(f"{master}:{root}") != rev(f"{native_parent}:{root}"):
            raise RuntimeError(f"Master {root} unexpectedly changed")

    if rev(f"{native_parent}:{P}/virtual") != native:
        raise RuntimeError("Virtual tree integrity mismatch")
    message = (
        "merge(SV 4.0.0): integrate audited native Trinity extract into master\n\n"
        "Resolved PR #10 by preserving all current master code and secondary outputs;\n"
        "replace only the original virtual tree with fully audited m2-full-extract,\n"
        "append 38 missing late batch logs, and restore the final COMPLETE audit.\n"
        "408641 native file references verified; zero failed/unseen.\n"
    )
    merged = git("commit-tree", native_parent, "-p", master, "-p", source, data=message.encode()).decode().strip()
    print(json.dumps({"status": "prepared", "master_parent": master, "source_parent": source,
                      "native_tree": native, "index_tree": index_tree,
                      "new_root_tree": native_parent, "merge_commit": merged,
                      "new_batch_records": len(added)}, ensure_ascii=False), flush=True)
    if args.push:
        # A non-forced push rejects concurrent master edits; never reset/force.
        git("push", "origin", f"{merged}:refs/heads/master")
        print(f"PUSHED master merge commit {merged}", flush=True)
    else:
        print("Dry run only. Use --push after verification.", flush=True)


if __name__ == "__main__":
    main()
