#!/usr/bin/env python3
"""Generate a NON-EXTRACTING, versioned task inventory for SV 4.0.0.

Sources remain under 4.0.0/0 and 4.0.0/1. Run this before any parser.
"""
import argparse
import json
from pathlib import Path, PurePosixPath

VERSION = "4.0.0"


def safe_relative(path):
    if not isinstance(path, str) or not path or "\\" in path:
        raise ValueError(f"Invalid POSIX relative path: {path!r}")
    p = PurePosixPath(path)
    if p.is_absolute() or any(part in ("", ".", "..") for part in path.split("/")):
        raise ValueError(f"Unsafe relative path: {path!r}")
    return str(p)


def stage_for(section, rel):
    if section == "exefs":
        return "NPDM_METADATA" if rel.endswith(".npdm") else "NSO_ANALYSIS"
    suffix = PurePosixPath(rel).suffix.lower()
    if rel.endswith("/data.trpfs"):
        return "TRINITY_VFS_EXTRACT"
    if rel.endswith("/data.trpfd"):
        return "TRINITY_DESCRIPTOR_INDEX"
    if suffix in (".bnk", ".pck"):
        return "WWISE_ANALYSIS"
    if suffix == ".bk2":
        return "VIDEO_INVENTORY"
    if suffix == ".trevt":
        return "EVENT_ANALYSIS"
    if suffix in (".trpre", ".trmdd"):
        return "TRINITY_METADATA"
    return "UNKNOWN_FORMAT"


def task(section, rel, source_sha=None, source_bytes=None, artifacts=None):
    rel = safe_relative(rel)
    output_dir = f"Unpack/{VERSION}/{section}/{rel}"
    return {
        "id": f"{section}:{rel}",
        "sourcePath": f"{VERSION}/{'0' if section == 'exefs' else '1'}/{rel}",
        "sourceSection": section,
        "sourceRelativePath": rel,
        "sourceBytes": source_bytes,
        "sourceSha256": source_sha,
        "storageArtifacts": artifacts or [],
        "outputDirectory": output_dir,
        "stage": stage_for(section, rel),
        "status": "PLANNED",
        "evidence": "UNKNOWN",
    }


def plan(repo):
    repo = Path(repo).resolve()
    manifest_path = repo / "violet_4.0.0_romfs_transfer_manifest.json"
    if not manifest_path.is_file():
        raise FileNotFoundError(manifest_path)
    manifest = json.loads(manifest_path.read_text(encoding="utf-8-sig"))
    if manifest.get("gameVersion") != VERSION:
        raise ValueError("Unexpected game version in RomFS manifest")
    tasks = []
    exefs = repo / VERSION / "0"
    if not exefs.is_dir():
        raise FileNotFoundError(exefs)
    for f in sorted(exefs.rglob("*")):
        if f.is_file():
            rel = f.relative_to(exefs).as_posix()
            tasks.append(task("exefs", rel, source_bytes=f.stat().st_size))
    seen = set()
    for record in manifest["files"]:
        rel = safe_relative(record["relativePath"])
        if rel in seen:
            raise ValueError("Duplicate RomFS source path: " + rel)
        seen.add(rel)
        artifacts = []
        for a in record.get("artifacts", []):
            artifact_path = safe_relative(a["path"])
            artifacts.append(artifact_path)
        tasks.append(task("romfs", rel, record.get("sourceSha256"),
                          record.get("sourceBytes"), artifacts))
    tasks.sort(key=lambda t: t["id"])
    return {
        "schemaVersion": 1,
        "gameVersion": VERSION,
        "romfsGame": manifest.get("game"),
        "sourceManifest": manifest_path.name,
        "note": "PLANNED means not extracted and not verified.",
        "tasks": tasks,
    }


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--repo", type=Path, default=Path(__file__).resolve().parent.parent)
    parser.add_argument("--output", type=Path,
                        default=Path("Unpack/4.0.0/_index/unpack_plan.json"))
    parser.add_argument("--create-directories", action="store_true",
                        help="Create empty per-file directories (not extracted files)")
    parser.add_argument("--dry-run", action="store_true", help="Print summary without writing")
    parser.add_argument("--force", action="store_true", help="Overwrite existing output manifest")
    args = parser.parse_args()
    root = args.repo.resolve()
    data = plan(root)
    by_stage = {}
    for t in data["tasks"]:
        by_stage[t["stage"]] = by_stage.get(t["stage"], 0) + 1
    print(f"Planned {len(data['tasks'])} source files: {json.dumps(by_stage, sort_keys=True)}")
    if args.dry_run:
        return
    output = args.output if args.output.is_absolute() else root / args.output
    if output.exists() and not args.force:
        raise FileExistsError(f"Refusing to overwrite {output}; use --force")
    output.parent.mkdir(parents=True, exist_ok=True)
    if args.create_directories:
        for t in data["tasks"]:
            (root / t["outputDirectory"]).mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(data, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
    print(f"Wrote {output}")


if __name__ == "__main__":
    main()
