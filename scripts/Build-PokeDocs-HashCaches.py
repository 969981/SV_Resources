#!/usr/bin/env python3
"""Rebuild and verify separate SV / ZA GFPAKHashCache.bin files from vendored PokeDocs.

Requires only Python 3.9+ and the repository's Build-SV-GFPAKHashCache.py.
Does not fetch the internet, install ROM tools, or read game files.
"""
import argparse
import hashlib
import json
import struct
import subprocess
import sys
from pathlib import Path

REPO_ROOT = Path(__file__).resolve().parent.parent
WRITER = Path(__file__).with_name("Build-SV-GFPAKHashCache.py")
PINNED_SOURCE = "242039cbcd9de3f5a424de5b68ae581f7bed2b23"
GAMES = ("SV", "ZA")


def sha256_file(path):
    digest = hashlib.sha256()
    with path.open("rb") as stream:
        for chunk in iter(lambda: stream.read(1024 * 1024), b""):
            digest.update(chunk)
    return digest.hexdigest()


def validate_cache(path):
    """Validate every record's boundaries, UTF-8 and strictly sorted 64-bit hashes."""
    with path.open("rb") as stream:
        header = stream.read(8)
        if len(header) != 8:
            raise ValueError(f"Truncated header: {path}")
        count = struct.unpack("<Q", header)[0]
        if count == 0:
            raise ValueError(f"Empty hash cache: {path}")
        last_hash = -1
        for index in range(count):
            raw_hash = stream.read(8)
            if len(raw_hash) != 8:
                raise ValueError(f"Truncated hash at entry {index}: {path}")
            current = struct.unpack("<Q", raw_hash)[0]
            if current <= last_hash:
                raise ValueError(f"Unsorted or duplicate hash at entry {index}: {path}")
            last_hash = current
            length = 0
            for shift in range(0, 35, 7):
                byte = stream.read(1)
                if not byte:
                    raise ValueError(f"Truncated string length at entry {index}: {path}")
                value = byte[0]
                length |= (value & 0x7F) << shift
                if not value & 0x80:
                    break
            else:
                raise ValueError(f"Invalid 7-bit string length at entry {index}: {path}")
            if length > 16 * 1024 * 1024:
                raise ValueError(f"Suspicious string length at entry {index}: {path}")
            name = stream.read(length)
            if len(name) != length:
                raise ValueError(f"Truncated name at entry {index}: {path}")
            name.decode("utf-8", errors="strict")
        if stream.read(1):
            raise ValueError(f"Trailing bytes in {path}")
    return count


def build_game(game, source_root, output_root, *, fd_only, verify_only, overwrite):
    folder = source_root / game / "Hashlists" / "FileSystem"
    sources = [folder / "hashes_inside_fd.txt"]
    if not fd_only:
        sources.append(folder / "hashes_inside_trpak.txt")
    for item in sources:
        if not item.is_file():
            raise FileNotFoundError(f"Missing vendored hashlist: {item}")

    out_dir = output_root / game
    binary = out_dir / "GFPAKHashCache.bin"
    report_path = out_dir / "hashcache-report.json"

    if not verify_only:
        if binary.exists() and not overwrite:
            raise FileExistsError(f"{binary} already exists; pass --overwrite")
        cmd = [sys.executable, str(WRITER)]
        for item in sources:
            cmd.extend(["--hashlist", str(item)])
        cmd.extend(["--output", str(binary), "--report", str(report_path)])
        if overwrite:
            cmd.append("--overwrite")
        subprocess.run(cmd, check=True)

    if not binary.is_file() or not report_path.is_file():
        raise FileNotFoundError(f"Missing generated .bin or report in {out_dir}")
    report = json.loads(report_path.read_text(encoding="utf-8"))
    count = validate_cache(binary)
    digest = sha256_file(binary)
    if report.get("entries") != count:
        raise ValueError(f"{game}: report count differs from binary count")
    if report.get("sha256") != digest:
        raise ValueError(f"{game}: report SHA-256 differs from binary")
    if report.get("size") != binary.stat().st_size:
        raise ValueError(f"{game}: report byte size differs from binary")
    if binary.stat().st_size >= 100_000_000:
        raise ValueError(f"{game}: binary too large for ordinary Git (100 MB limit)")

    inputs = []
    for item in sources:
        inputs.append({
            "path": item.relative_to(REPO_ROOT).as_posix() if item.is_relative_to(REPO_ROOT) else str(item),
            "bytes": item.stat().st_size,
            "sha256": sha256_file(item),
        })
    return {
        "hash_count": count,
        "cache_bytes": binary.stat().st_size,
        "sha256": digest,
        "inputs": inputs,
        "stats": report.get("stats", {}),
    }


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--source-root", type=Path, default=REPO_ROOT / "tools/PokeDocs")
    parser.add_argument("--output-root", type=Path, default=REPO_ROOT / "tools/HashCaches")
    parser.add_argument("--game", choices=("SV", "ZA", "both"), default="both")
    parser.add_argument("--fd-only", action="store_true", help="Do not include TRPAK internal file hashes")
    parser.add_argument("--overwrite", action="store_true", help="Allow regenerating existing binaries")
    parser.add_argument("--verify-only", action="store_true", help="Read and validate existing outputs only")
    parser.add_argument("--source-commit", default=PINNED_SOURCE,
                        help="Exact upstream PokeDocs commit used for the vendored source")
    args = parser.parse_args()
    if args.verify_only and args.overwrite:
        parser.error("--verify-only and --overwrite cannot be combined")
    games = GAMES if args.game == "both" else (args.game,)
    results = {}
    for game in games:
        results[game] = build_game(game, args.source_root.resolve(), args.output_root.resolve(),
                                   fd_only=args.fd_only, verify_only=args.verify_only,
                                   overwrite=args.overwrite)
        print(f"VERIFIED {game}: {results[game]['hash_count']:,} hashes, "
              f"SHA256 {results[game]['sha256']}", flush=True)

    provenance_path = args.output_root / "provenance.json"
    if args.verify_only:
        if provenance_path.is_file():
            existing = json.loads(provenance_path.read_text(encoding="utf-8"))
            for game in games:
                tracked = existing.get("games", {}).get(game, {})
                for field in ("hash_count", "cache_bytes", "sha256"):
                    if tracked.get(field) != results[game][field]:
                        raise ValueError(f"{game}: provenance mismatch for {field}")
        return

    # Preserve results for unselected games when building only one game.
    if provenance_path.is_file():
        try:
            old = json.loads(provenance_path.read_text(encoding="utf-8"))
            old_games = old.get("games", {})
        except (ValueError, OSError):
            old_games = {}
    else:
        old_games = {}
    old_games.update(results)
    provenance = {
        "source_repository": "https://github.com/pkZukan/PokeDocs",
        "source_commit": args.source_commit,
        "mirror_dir": "tools/PokeDocs",
        "cache_format": "pkZukan/gftool GFTool.Core/Cache/GFPakHashCache.cs",
        "games": old_games,
    }
    provenance_path.parent.mkdir(parents=True, exist_ok=True)
    provenance_path.write_text(json.dumps(provenance, indent=2, ensure_ascii=False) + "\n",
                               encoding="utf-8")


if __name__ == "__main__":
    main()
