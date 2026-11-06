#!/usr/bin/env python3
"""Schema-backed SV Trinity FlatBuffers -> JSON; no extension-only success."""
from __future__ import annotations

import hashlib
import json
import os
from pathlib import Path, PurePosixPath
import shutil
import struct
import subprocess
import tempfile

try:
    from . import cli
except ImportError:
    import cli

SCHEMA_ROOT = Path(__file__).resolve().parents[2] / "tools/PokeDocs/SV/Flatbuffers"
# Paths are repository-versioned SV schemas, not arbitrary extension guesses.
ANIMATION = ("tracl", "tracm", "tracn", "tracp", "tracr", "tracs",
             "traef", "tralk", "tranm", "trbik", "trcma", "trmdt", "trspb")
MODEL = ("trmbf", "trmdl", "trmmt", "trmsh", "trmtr", "trpokecfg", "trskl")
SCHEMAS = {
    **{"." + ext: "animation/" + ext + ".fbs" for ext in ANIMATION},
    **{"." + ext: "model/" + ext + ".fbs" for ext in MODEL},
    ".trpmcatalog": "resources/trpmcatalog.fbs",
}
MAX_SOURCE_BYTES = 32 * 1024 * 1024
MAX_JSON_BYTES = 64 * 1024 * 1024


def verify_flatbuffer_table(path: Path) -> tuple[bool, str]:
    """Verify root/vtable bounds before passing a buffer to --raw-binary.

    This is only a structural preflight, not schema or semantic validation.
    """
    size = path.stat().st_size
    if size < 12 or size > MAX_SOURCE_BYTES:
        return False, "INPUT_SIZE_OUT_OF_BOUNDS"
    with path.open("rb") as stream:
        head = stream.read(4)
        root = struct.unpack("<I", head)[0]
        if root < 4 or root + 4 > size:
            return False, "INVALID_ROOT_OFFSET"
        stream.seek(root)
        backward = struct.unpack("<i", stream.read(4))[0]
        vtable = root - backward
        # A shared FlatBuffers vtable may be located *after* the table.
        # The signed vtable displacement can legitimately be negative;
        # validate the computed address instead of requiring a positive delta.
        if backward == 0 or vtable < 4 or vtable + 4 > size:
            return False, "INVALID_VTABLE_OFFSET"
        stream.seek(vtable)
        table_len, object_len = struct.unpack("<HH", stream.read(4))
        if (table_len < 4 or table_len % 2 or object_len < 4
                or vtable + table_len > size or root + object_len > size):
            return False, "INVALID_VTABLE_SIZE"
    return True, "BOUNDED_FLATBUFFER_ROOT"


def convert_one(root: Path, rel: str, source: Path,
                flatc: str | None = None) -> tuple[str | None, str]:
    """Return verified output path and classification, or None with reason.

    Never mark an unsupported buffer decoded because its file extension matches.
    Uses official flatc in an isolated process with a bounded runtime/output.
    """
    suffix = PurePosixPath(rel).suffix.lower()
    schema_rel = SCHEMAS.get(suffix)
    if not schema_rel:
        return None, "NO_MATCHING_SCHEMA"
    tool = flatc or os.environ.get("SV_FLATC_EXE") or shutil.which("flatc")
    if not tool:
        return None, "FLATC_NOT_INSTALLED"
    schema = SCHEMA_ROOT / schema_rel
    if not schema.is_file():
        return None, "SCHEMA_NOT_FOUND"
    good, why = verify_flatbuffer_table(source)
    if not good:
        return None, why
    # The native tree and converter schema are immutable inputs.
    with tempfile.TemporaryDirectory(prefix="sv-flatc-") as tmp:
        work = Path(tmp)
        cmd = [str(tool), "--json", "--strict-json", "--raw-binary",
               "-I", str(SCHEMA_ROOT), "-I", str(schema.parent),
               "-o", str(work), str(schema), "--", str(source)]
        try:
            proc = subprocess.run(cmd, capture_output=True, text=True,
                                  errors="replace", timeout=45, check=False)
        except (OSError, subprocess.TimeoutExpired):
            return None, "FLATC_PROCESS_FAILED"
        if proc.returncode:
            return None, "FLATC_SCHEMA_OR_BUFFER_REJECTED"
        result = work / (source.stem + ".json")
        if not result.is_file() or result.is_symlink():
            return None, "FLATC_OUTPUT_MISSING"
        if result.stat().st_size > MAX_JSON_BYTES:
            return None, "FLATC_OUTPUT_OVERSIZE"
        try:
            # No undocumented structure inference; JSON must be real flatc output.
            decoded = json.loads(result.read_text(encoding="utf-8"))
            if not isinstance(decoded, dict):
                return None, "FLATC_OUTPUT_NOT_OBJECT"
        except (OSError, UnicodeError, ValueError):
            return None, "FLATC_OUTPUT_INVALID_JSON"
    output = root / "parsed" / (rel + ".flatbuffer.json")
    document = {
        "source": rel,
        "status": "STRUCTURE_PARSED",
        "parser": "flatc-schema-backed-v1",
        "schema": schema_rel,
        "schema_sha256": cli.digest(schema),
        "native_sha256": cli.digest(source),
        "flatc_json": decoded,
        "verification": "BOUNDED_ROOT_AND_SCHEMA_BACKED_JSON_NOT_VISUAL_VALIDATION",
    }
    serialized = json.dumps(document, ensure_ascii=False, separators=(",", ":")).encode("utf-8")
    if len(serialized) > MAX_JSON_BYTES:
        return None, "FLATC_WRAPPER_OVERSIZE"
    cli.write_atomic(output, serialized + b"\n")
    return output.relative_to(root).as_posix(), "SCHEMA_JSON_EXPORTED"
