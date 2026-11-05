#!/usr/bin/env python3
"""Plan, sparse-hydrate and checkpoint the vendored pkNX SV virtual batch exporter.

Usage (from repository root):
  python scripts/pknx_virtual.py select --work <temp-dir> --batch-size 1000
  python scripts/pknx_virtual.py hydrate --work <temp-dir>
  python scripts/pknx_virtual.py finalize --work <temp-dir>
  python scripts/pknx_virtual.py status
"""
from __future__ import annotations

import argparse
from collections import Counter
import json
from pathlib import Path
import subprocess
import sys

VIRTUAL = "Unpack/4.0.0/romfs/arc/data.trpfs/virtual"
OUTPUT = Path("Unpack/pkNX/4.0.0")
INDEX = OUTPUT / "_index"
PROGRESS = INDEX / "progress.json"
INVENTORY = INDEX / "inventory.json"


def git(*args: str, input_text: str | None = None) -> str:
    cp = subprocess.run(["git", *args], input=input_text, capture_output=True,
                        text=True, encoding="utf-8", check=True)
    return cp.stdout


def tracked_paths() -> list[str]:
    # -z avoids Git quote-escaping spaces, Unicode and backslashes.
    raw = subprocess.run(
        ["git", "-c", "core.quotepath=false", "ls-tree", "-r", "-z",
         "--name-only", "HEAD", "--", VIRTUAL],
        capture_output=True, check=True,
    ).stdout
    prefix = VIRTUAL + "/"
    return sorted(p[len(prefix):] for p in raw.decode("utf-8").split("\x00")
                  if p.startswith(prefix))


def parser_for(relative: str) -> str | None:
    path = relative.lower()
    if path == "avalon/data/personal_array.bin":
        return "personal"
    if path.startswith("message/dat/") and path.endswith(".dat"):
        return "text"
    if path.startswith("message/dat/") and path.endswith(".tbl"):
        return "ahtb"
    if path.endswith(".ahtb"):
        return "ahtb"
    if path.endswith(".sarc"):
        return "sarc"
    if path.endswith((".gfpak", ".gfpck")):
        return "gfpak"
    return None


def read_progress() -> dict:
    if not PROGRESS.exists():
        return {}
    return json.loads(PROGRESS.read_text(encoding="utf-8"))


def save_json(path: Path, obj: dict) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(obj, indent=2, ensure_ascii=False, sort_keys=True)
                    + "\n", encoding="utf-8")


def select(work: Path, batch_size: int, restart: bool = False) -> dict:
    if not 1 <= batch_size <= 5000:
        raise ValueError("batch-size must be 1..5000")
    paths = tracked_paths()
    supported = [p for p in paths if parser_for(p)]
    unsupported = [p for p in paths if not parser_for(p)]
    old = read_progress()
    cursor = "" if restart else old.get("last_path", "")
    pending = [p for p in supported if p > cursor]
    chosen = pending[:batch_size]
    work.mkdir(parents=True, exist_ok=True)
    (work / "selection.txt").write_text(
        "".join(p + "\n" for p in chosen), encoding="utf-8")
    batch_number = int(old.get("batch_number", 0)) + 1
    selection = {
        "batch_number": batch_number,
        "restart": restart,
        "cursor_before": cursor,
        "selected_count": len(chosen),
        "pending_before": len(pending),
        "remaining_after": len(pending) - len(chosen),
        "first_path": chosen[0] if chosen else None,
        "last_path": chosen[-1] if chosen else None,
    }
    save_json(work / "selection.json", selection)
    extensions = Counter(Path(p).suffix.lower() or "(no extension)" for p in unsupported)
    save_json(INVENTORY, {
        "game_version": "4.0.0",
        "virtual_root": VIRTUAL,
        "tracked_total": len(paths),
        "pknx_supported_candidates": len(supported),
        "unsupported_by_pknx": len(unsupported),
        "unsupported_extensions": dict(sorted(extensions.items())),
        "unsupported_policy": "Not decoded; see existing Trinity secondary toolchain.",
        "scope": "Tracked Git files only; full TRPFD coverage must be audited separately.",
    })
    print(json.dumps(selection, ensure_ascii=False))
    return selection


def hydrate(work: Path) -> None:
    selected = (work / "selection.txt").read_text(encoding="utf-8").splitlines()
    # Non-cone anchored patterns. This is a single sparse-checkout update,
    # instead of thousands of git sparse-checkout add operations.
    patterns = [
        "/.github/workflows/sv-pknx-full.yml",
        "/scripts/pknx_virtual.py",
        "/tests/test_sv_pknx_virtual.py",
        "/tools/pkNX/**",
        "/Unpack/pkNX/README.md",
        "/Unpack/pkNX/4.0.0/_index/progress.json",
        "/Unpack/pkNX/4.0.0/_index/inventory.json",
    ]
    patterns.extend("/" + VIRTUAL + "/" + p for p in selected)
    git("sparse-checkout", "set", "--no-cone", "--stdin",
        input_text="\n".join(patterns) + "\n")
    for p in selected:
        if not (Path(VIRTUAL) / p).is_file():
            raise FileNotFoundError(f"Missing selected Git blob after hydration: {p}")
    print(f"Sparse hydrated {len(selected)} original files.")


def finalize(work: Path) -> dict:
    selection = json.loads((work / "selection.json").read_text(encoding="utf-8"))
    expected = (work / "selection.txt").read_text(encoding="utf-8").splitlines()
    if not expected:
        return read_progress()
    report = work / "batch-report.jsonl"
    records = [json.loads(line) for line in report.read_text(encoding="utf-8").splitlines()]
    if len(records) != len(expected) or [x.get("path") for x in records] != expected:
        raise RuntimeError("Partial/duplicate/misordered batch report; progress NOT advanced.")
    valid_statuses = {"decoded", "unsupported", "error"}
    if any(r.get("status") not in valid_statuses or not r.get("sha256") for r in records):
        raise RuntimeError("Missing source SHA-256 or unknown status; progress NOT advanced.")
    prev = {} if selection["restart"] else read_progress()
    previous_total = int(prev.get("attempted_total", 0))
    previous_decoded = int(prev.get("decoded_total", 0))
    previous_errors = int(prev.get("error_total", 0))
    previous_unsupported = int(prev.get("unsupported_total", 0))
    INDEX.mkdir(parents=True, exist_ok=True)
    batch_dir = INDEX / "batches"
    batch_dir.mkdir(parents=True, exist_ok=True)
    destination = batch_dir / f"batch-{selection['batch_number']:06d}.jsonl"
    destination.write_bytes(report.read_bytes())
    current_errors = sum(r["status"] == "error" for r in records)
    result = {
        "game_version": "4.0.0",
        "batch_number": selection["batch_number"],
        "last_path": selection["last_path"],
        "attempted_total": previous_total + len(records),
        "decoded_total": previous_decoded + sum(r["status"] == "decoded" for r in records),
        "error_total": previous_errors + current_errors,
        "unsupported_total": previous_unsupported + sum(r["status"] == "unsupported" for r in records),
        "remaining_candidates": selection["remaining_after"],
        "state": ("PARTIAL" if selection["remaining_after"] else
                  "COMPLETE" if previous_errors + current_errors == 0 else "COMPLETE_WITH_ERRORS"),
        "last_batch_report": destination.as_posix(),
    }
    save_json(PROGRESS, result)
    print(json.dumps(result, ensure_ascii=False))
    return result


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("command", choices=["select", "hydrate", "finalize", "status"])
    p.add_argument("--work", type=Path, default=Path(".pknx-work"))
    p.add_argument("--batch-size", type=int, default=1000)
    p.add_argument("--restart", action="store_true")
    opts = p.parse_args()
    if opts.command == "select":
        select(opts.work, opts.batch_size, opts.restart)
    elif opts.command == "hydrate":
        hydrate(opts.work)
    elif opts.command == "finalize":
        finalize(opts.work)
    else:
        print(json.dumps({"progress": read_progress(),
                          "inventory": json.loads(INVENTORY.read_text(encoding="utf-8")) if INVENTORY.exists() else {}},
                         ensure_ascii=False, indent=2))
    return 0


if __name__ == "__main__":
    try:
        sys.exit(main())
    except (OSError, subprocess.CalledProcessError, ValueError, RuntimeError) as ex:
        print(f"pkNX pipeline ERROR: {ex}", file=sys.stderr)
        sys.exit(1)
