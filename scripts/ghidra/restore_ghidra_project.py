#!/usr/bin/env python3
"""Restore only a verified native Ghidra project from SV400 split parts.

This deliberately skips the much larger SQLite and NDJSON exports. It restores
only the editable .gpr/.rep project needed for targeted headless analysis.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import shutil
from pathlib import Path, PurePosixPath


EXPECTED_ELF = {
    "scarlet_main": "53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f",
    "violet_main": "84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30",
}


def sha256(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as stream:
        while chunk := stream.read(4 * 1024 * 1024):
            h.update(chunk)
    return h.hexdigest()


def safe_relative(value: str) -> Path:
    rel = PurePosixPath(value)
    if rel.is_absolute() or not rel.parts or ".." in rel.parts:
        raise ValueError(f"Unsafe manifest path: {value}")
    return Path(*rel.parts)


def combine_parts(root: Path, spec: dict, destination: Path) -> None:
    destination.parent.mkdir(parents=True, exist_ok=True)
    temporary = destination.with_name(destination.name + ".restore-tmp")
    digest = hashlib.sha256()
    total = 0
    try:
        with temporary.open("wb") as output:
            for part in spec["parts"]:
                source = root / safe_relative(part["path"])
                if not source.is_file():
                    raise FileNotFoundError(source)
                if source.stat().st_size != int(part["size"]):
                    raise ValueError(f"Part size mismatch: {source}")
                if sha256(source) != part["sha256"]:
                    raise ValueError(f"Part SHA-256 mismatch: {source}")
                with source.open("rb") as stream:
                    while chunk := stream.read(4 * 1024 * 1024):
                        output.write(chunk)
                        digest.update(chunk)
                        total += len(chunk)
        if total != int(spec["size"]):
            raise ValueError(f"Rebuilt size mismatch for {destination}")
        if digest.hexdigest() != spec["sha256"]:
            raise ValueError(f"Rebuilt SHA-256 mismatch for {destination}")
        temporary.replace(destination)
    finally:
        if temporary.exists():
            temporary.unlink()


def restore(source: Path, output: Path, game: str) -> dict:
    source = source.resolve()
    output = output.resolve()
    if output == source or source in output.parents:
        raise ValueError("Output must be outside the tracked source directory")

    manifest = json.loads((source / "parts_manifest.json").read_text(encoding="utf-8"))
    if manifest.get("status") != "UNCOMPRESSED_SPLIT_VERIFIED":
        raise ValueError("The source split manifest is not verified")
    if manifest.get("elf_sha256") != EXPECTED_ELF[game]:
        raise ValueError("ELF SHA-256 does not match the selected game")

    if output.exists() and any(output.iterdir()):
        raise ValueError("Restore destination must be empty")
    output.mkdir(parents=True, exist_ok=True)

    project_source = source / "project"
    project_target = output / "project"
    shutil.copytree(project_source, project_target)

    split_files = manifest.get("project", {}).get("split_files", {})
    for relative, spec in split_files.items():
        destination = project_target / safe_relative(relative)
        combine_parts(source / "project_parts", spec, destination)

    if not (project_target / "SV400.gpr").is_file():
        raise ValueError("Missing SV400.gpr")
    if not (project_target / "SV400.rep").is_dir():
        raise ValueError("Missing SV400.rep")

    return {
        "status": "PROJECT_RESTORED_AND_SHA256_VERIFIED",
        "game": game,
        "source_run_id": manifest.get("source_run_id"),
        "elf_sha256": manifest["elf_sha256"],
        "project_regular_files": manifest["project"]["regular_files"],
        "project_split_files_rebuilt": len(split_files),
        "project_path": str(project_target),
    }


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--source", type=Path, required=True)
    parser.add_argument("--out", type=Path, required=True)
    parser.add_argument("--game", choices=sorted(EXPECTED_ELF), required=True)
    args = parser.parse_args()
    print(json.dumps(restore(args.source, args.out, args.game),
                     indent=2, ensure_ascii=False))


if __name__ == "__main__":
    main()
