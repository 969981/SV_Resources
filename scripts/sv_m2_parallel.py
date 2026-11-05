"""Bounded parallel native pack preparation for SV Trinity M2.

Each worker invokes the existing GFTool-based extractor for a disjoint pack
window and owns its unique JSONL report. Only the caller may publish Git
commits or update the persisted progress cursor.
"""
from __future__ import annotations

from collections import deque
from concurrent.futures import Future, ThreadPoolExecutor
import gzip
from pathlib import Path
from typing import Callable, Iterator, TypeVar

T = TypeVar("T")


def validate_unique_paths(file_index: Path, start_pack: int) -> int:
    """Reject output-path/hash collisions before starting concurrent writers.

    Trinity's file index is original descriptor evidence, not a generated
    export log. Known paths are compared case-insensitively because the
    GitHub Windows runner uses a case-insensitive filesystem. Unknown
    names use the native hash-based fallback filename.
    """
    if not file_index.is_file():
        raise FileNotFoundError(f"Missing native descriptor file index: {file_index}")
    by_path: dict[str, tuple[str, int]] = {}
    checked = 0
    with gzip.open(file_index, "rt", encoding="utf-8-sig") as stream:
        header = next(stream, "").rstrip("\r\n")
        if header != "hash\tpack_index\tpack_name\tvirtual_path":
            raise ValueError(f"Unexpected TRPFD file-index header: {header!r}")
        for line_number, line in enumerate(stream, start=2):
            parts = line.rstrip("\r\n").split("\t", 3)
            if len(parts) != 4:
                raise ValueError(f"Malformed TRPFD file index at line {line_number}")
            hash_text, pack_text, _, native_path = parts
            pack_index = int(pack_text)
            if len(hash_text) != 16 or any(c not in "0123456789abcdefABCDEF" for c in hash_text):
                raise ValueError(f"Malformed native hash at line {line_number}")
            if pack_index < 0:
                raise ValueError(f"Invalid pack index at line {line_number}")
            # Fallback for unknown/unsafe hashed paths matches the native dumper.
            components = native_path.split("/")
            unsafe = (not native_path or native_path.startswith("/") or
                      "\\" in native_path or ":" in native_path or
                      any(p in ("", ".", "..") or p.endswith((" ", ".")) for p in components))
            path = f"_unknown/{hash_text.upper()}.bin" if unsafe else native_path
            key = path.casefold()
            previous = by_path.get(key)
            if previous is not None and previous != (hash_text.upper(), pack_index):
                if previous[1] >= start_pack or pack_index >= start_pack:
                    raise ValueError(
                        f"Concurrent output collision at {path!r}: "
                        f"{previous[0]} pack {previous[1]} vs {hash_text} pack {pack_index}")
            else:
                by_path[key] = (hash_text.upper(), pack_index)
            checked += 1
    if checked == 0:
        raise ValueError("Empty TRPFD file-index; refusing parallel extraction")
    return checked


def iter_prepared_batches(
    start: int,
    total: int,
    batch_packs: int,
    max_batches: int,
    workers: int,
    prepare: Callable[[int, int], T],
) -> Iterator[tuple[int, int, T]]:
    """Prepare at most `workers` windows ahead, yielding strictly in pack order.

    The caller publishes the yielded batch before requesting the next one.
    Exceptions propagate; no progress is advanced for failed/unpublished
    batches. Running workers can finish when the generator closes, but they
    never update the Git progress file or push commits.
    """
    if start < 0 or total < start or batch_packs < 1 or max_batches < 1 or not 1 <= workers <= 4:
        raise ValueError("Invalid parallel pack/window/worker configuration")
    next_start = start
    scheduled = 0
    pending: deque[tuple[int, int, Future[T]]] = deque()

    with ThreadPoolExecutor(max_workers=workers, thread_name_prefix="sv-m2") as pool:
        while pending or (next_start < total and scheduled < max_batches):
            while (len(pending) < workers and next_start < total and
                   scheduled < max_batches):
                end = min(total, next_start + batch_packs)
                pending.append((next_start, end, pool.submit(prepare, next_start, end)))
                scheduled += 1
                next_start = end
            batch_start, batch_end, future = pending.popleft()
            yield batch_start, batch_end, future.result()
