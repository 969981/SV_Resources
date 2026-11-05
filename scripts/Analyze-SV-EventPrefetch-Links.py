#!/usr/bin/env python3
"""Audit native 4.0.0 TREVT references, TRPRE->TRPFD exact hashes, and NSO anchors.

No inferred resource names and no execution semantics promoted from integer matches.
Input derives from the independently verified Unpack-SV-EventPrefetch.py parser.
Only Python standard library plus liblz4.so (if NSO segments are LZ4-compressed).
"""
from __future__ import annotations

import argparse
import csv
import ctypes
import ctypes.util
import gzip
import hashlib
import json
import struct
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path("Unpack/4.0.0/romfs")
EVENT = ROOT / "event/trevt/bin/event.trevt"
PREFETCH = ROOT / "system/prefetch/data"
INDEX = ROOT / "arc/data.trpfd/_index/file_index.tsv.gz"
MAIN = Path("4.0.0/0/violet_main")

def to_json(obj):
    return json.dumps(obj, ensure_ascii=False, indent=2) + "\n"

def write(root, relative, payload):
    path = root / relative
    path.parent.mkdir(parents=True, exist_ok=True)
    if isinstance(payload, str):
        path.write_text(payload, encoding="utf-8", newline="\n")
    else:
        path.write_text(to_json(payload), encoding="utf-8", newline="\n")
    print("WROTE", relative, flush=True)

def csv_dump(headers, rows):
    import io
    stream = io.StringIO(newline="")
    writer = csv.writer(stream, lineterminator="\n")
    writer.writerow(headers)
    writer.writerows(rows)
    return stream.getvalue()

def load_hash_csv(root, number):
    p = root / PREFETCH / f"global-resident_{number}.trpre/parsed/hashes.csv"
    result = []
    with p.open(newline="", encoding="utf-8-sig") as stream:
        for i, row in enumerate(csv.DictReader(stream)):
            if int(row["index"]) != i:
                raise ValueError("Index mismatch in " + str(p))
            value = row["hash64_hex"].lower()
            if len(value) != 18 or not value.startswith("0x"):
                raise ValueError("Unexpected 64-bit hex literal")
            int(value, 16)
            result.append(value[2:])
    if len(result) != 14494 - number:
        raise ValueError(f"Unexpected TRPRE {number} count")
    if len(set(result)) != len(result):
        raise ValueError("Duplicate TRPRE hashes: " + str(p))
    return result

def match_trpfd(repo):
    left = load_hash_csv(repo, 0)
    right = load_hash_csv(repo, 1)
    sets = [set(left), set(right)]
    wanted = sets[0] | sets[1]
    matches = defaultdict(list)
    row_count = 0
    index_path = repo / INDEX
    with gzip.open(index_path, "rt", encoding="utf-8-sig", newline="") as fd:
        reader = csv.DictReader(fd, delimiter="\t")
        if not {"hash", "pack_index", "pack_name", "virtual_path"}.issubset(reader.fieldnames or []):
            raise ValueError("Unsupported TRPFD index schema: " + repr(reader.fieldnames))
        for row in reader:
            row_count += 1
            h = row["hash"].strip().lower().removeprefix("0x")
            if len(h) != 16:
                raise ValueError(f"Invalid TRPFD hash at row {row_count}: {h}")
            if h in wanted:
                matches[h].append({
                    "pack_index": row["pack_index"], "pack_name": row["pack_name"],
                    "virtual_path": row["virtual_path"]
                })
    if row_count != 408641:
        raise ValueError(f"TRPFD index size mismatch: {row_count}")
    names = [dict((h, i) for i, h in enumerate(v)) for v in (left, right)]
    rows = []
    for h in sorted(matches):
        for record in matches[h]:
            rows.append([
                "0x" + h, names[0].get(h, ""), names[1].get(h, ""),
                int(h in sets[0]) + 2 * int(h in sets[1]),
                record["pack_index"], record["pack_name"], record["virtual_path"],
                "EXACT_U64_IN_TRPFD", "INDEX_MATCH_NOT_LOAD_PROOF",
            ])
    stats = {
        "schemaVersion": 1, "trpfdSource": INDEX.as_posix(),
        "trpfdFileRecords": row_count,
        "prefetchCounts": [len(left), len(right)],
        "prefetchUniqueUnion": len(wanted),
        "distinctHashesMatchingTrpfd": len(matches),
        "matchingTrpfdRows": len(rows),
        "match0": len(sets[0] & matches.keys()),
        "match1": len(sets[1] & matches.keys()),
        "matchBoth": len((sets[0] & sets[1]) & matches.keys()),
        "matchedWithKnownVirtualPath": sum(bool(v["virtual_path"]) for vals in matches.values() for v in vals),
        "notMatched0": len(sets[0] - matches.keys()),
        "notMatched1": len(sets[1] - matches.keys()),
        "status": "DIRECT_INTEGER_EQUALITY_ONLY",
        "interpretation": (
            "A matching 64-bit value is evidence of equality with one indexed "
            "TRPFD file hash; it is not evidence that the prefetch list actually "
            "loads that file. Nonmatches remain unmapped."
        )
    }
    write(repo, PREFETCH / "_index/prefetch_trpfd_exact_matches.csv",
          csv_dump(["hash64_hex", "prefetch0_index", "prefetch1_index",
                    "prefetch_membership_mask", "trpfd_pack_index", "trpfd_pack_name",
                    "trpfd_virtual_path", "match_evidence", "runtime_semantics"],
                   rows))
    write(repo, PREFETCH / "_index/prefetch_trpfd_audit.json", stats)
    return stats

def event_edges(repo):
    path = repo / EVENT / "parsed/events.json"
    obj = json.loads(path.read_text(encoding="utf-8"))
    events = obj["events"]
    if len(events) != 688:
        raise ValueError("Unexpected TREVT event count")
    lookup = {}
    for event in events:
        if event["name"] in lookup:
            raise ValueError("Duplicate event: " + event["name"])
        lookup[event["name"]] = {s["name"] for s in event["states"]}
    rows = []
    name_hits = 0
    state_hits = 0
    state_absent_samples = []
    source_states = Counter()
    target_states = Counter()
    field3_values = Counter()
    referenced_events = set()
    refs = 0
    for event in events:
        for st in event["states"]:
            for gi, group in enumerate(st["conditionGroups"]):
                for ci, c in enumerate(group):
                    refs += 1
                    target = c["referenceName"]
                    target_state = c["referenceState"]
                    source_states[st["name"]] += 1
                    target_states[target_state] += 1
                    field3_values[str(c["field3Raw"])] += 1
                    referenced_events.add(target)
                    name_hit = target in lookup
                    state_hit = name_hit and target_state in lookup[target]
                    name_hits += name_hit
                    state_hits += state_hit
                    if name_hit and not state_hit and len(state_absent_samples) < 25:
                        state_absent_samples.append([event["name"], st["name"], target, target_state])
                    rows.append([
                        event["index"], event["name"], st["name"], gi, ci,
                        target, target_state, c["field3Raw"],
                        int(name_hit), int(state_hit),
                        "TARGET_NAME_FOUND" if name_hit else "TARGET_NAME_NOT_IN_TREVT",
                        "TARGET_STATE_FOUND" if state_hit else "TARGET_STATE_NOT_IN_TREVT",
                    ])
    if refs != 746:
        raise ValueError("Unexpected TREVT edge count")
    stats = {
        "schemaVersion": 1, "source": (EVENT / "parsed/events.json").as_posix(),
        "events": len(events), "conditions": refs,
        "referenceNameExistsInTrevt": name_hits,
        "referenceNameOutsideTrevt": refs - name_hits,
        "distinctReferencedEventNames": len(referenced_events),
        "sourceStateCounts": dict(sorted(source_states.items())),
        "targetStateCounts": dict(sorted(target_states.items())),
        "conditionField3RawCounts": dict(sorted(field3_values.items())),
        "referenceStateExistsAsDeclaredState": state_hits,
        "knownTargetButUnknownState": name_hits - state_hits,
        "unknownStateSamples": state_absent_samples,
        "status": "STRUCTURAL_NAME_RESOLUTION_ONLY",
        "warning": (
            "An event-reference name match establishes a TREVT table link; "
            "it does not establish runtime predicate logic. End may be a "
            "terminal pseudo-state, but no such claim is made here."
        )
    }
    write(repo, EVENT / "_index/event_reference_resolution.csv",
          csv_dump(["source_event_index", "source_event", "source_state",
                    "condition_group_index", "condition_index", "target_event",
                    "target_state", "condition_field3_raw", "event_found",
                    "state_found", "event_evidence", "state_evidence"], rows))
    write(repo, EVENT / "_index/event_reference_audit.json", stats)
    return stats

def nsos(path):
    data = path.read_bytes()
    if data[:4] != b"NSO0":
        raise ValueError("Not a NSO0: " + str(path))
    flags = struct.unpack_from("<I", data, 0x0c)[0]
    build_id = data[0x40:0x60].hex().upper()
    library = None
    segments = {}
    for i, name in enumerate(("text", "ro", "data")):
        desc = 0x10 + 16 * i
        file_offset, memory_offset, decoded_size = struct.unpack_from("<III", data, desc)
        compressed_size = struct.unpack_from("<I", data, 0x60 + i * 4)[0]
        is_compressed = bool(flags & (1 << i))
        input_size = compressed_size if is_compressed else decoded_size
        if decoded_size > 256 * 1024 * 1024 or input_size > 256 * 1024 * 1024:
            raise ValueError("Oversize NSO segment: " + name)
        if file_offset + input_size > len(data):
            raise ValueError("Invalid NSO offset: " + name)
        source = data[file_offset:file_offset + input_size]
        if is_compressed:
            if library is None:
                lib = ctypes.util.find_library("lz4")
                if not lib:
                    raise RuntimeError("liblz4 required for NSO compressed segments")
                library = ctypes.CDLL(lib)
                library.LZ4_decompress_safe.argtypes = [
                    ctypes.c_char_p, ctypes.c_void_p, ctypes.c_int, ctypes.c_int
                ]
                library.LZ4_decompress_safe.restype = ctypes.c_int
            buf = ctypes.create_string_buffer(decoded_size)
            decoded = library.LZ4_decompress_safe(source, buf, len(source), decoded_size)
            if decoded != decoded_size:
                raise ValueError(f"LZ4 decompression failed for {name}: {decoded}")
            segment = buf.raw
        else:
            segment = source
        segments[name] = {
            "data": segment, "memoryOffset": memory_offset,
            "fileOffset": file_offset, "decodedBytes": decoded_size,
            "fileBytes": input_size, "compressed": is_compressed
        }
    return {
        "sourcePath": str(path), "sourceBytes": len(data),
        "sourceSha256": hashlib.sha256(data).hexdigest().upper(),
        "buildId": build_id, "flags": flags
    }, segments

def signext(value, bits):
    sign = 1 << (bits - 1)
    return (value ^ sign) - sign

def scan_native(repo):
    path = repo / MAIN
    metadata, segments = nsos(path)
    anchors = [
        "event.trevt", "global-resident_0.trpre", "global-resident_1.trpre",
        "global-resident", "prefetch", "trevt", "trpre", "ajito_aku_010",
        "InProgress", "Start",
    ]
    hits, targets = [], defaultdict(list)
    for name, seg in segments.items():
        blob = seg["data"]
        for anchor in anchors:
            start = 0
            occurrences = 0
            while occurrences < 200:
                pos = blob.find(anchor.encode("ascii"), start)
                if pos < 0:
                    break
                begin = pos
                while begin > 0 and pos - begin < 200 and 32 <= blob[begin - 1] <= 126:
                    begin -= 1
                end = pos + len(anchor)
                while end < len(blob) and end - begin < 260 and 32 <= blob[end] <= 126:
                    end += 1
                literal = blob[begin:end].decode("ascii", errors="replace")
                string_rva = seg["memoryOffset"] + begin
                hit = {
                    "segment": name, "anchor": anchor, "anchorRva": f"0x{seg['memoryOffset'] + pos:X}",
                    "stringRva": f"0x{string_rva:X}", "string": literal,
                    "offsetInSegment": begin
                }
                hits.append(hit)
                # Only null-delimited read-only strings are safe anchor xref targets.
                if name in ("ro", "data") and (begin == 0 or blob[begin - 1] == 0):
                    targets[string_rva].append(hit)
                occurrences += 1
                start = pos + 1
    # ADRP+ADD on AArch64: assembly-address evidence only, not proof of a call.
    target_pages = {p & ~0xfff for p in targets}
    text = segments["text"]
    code = text["data"]
    tbase = text["memoryOffset"]
    refs = []
    if target_pages:
        for o in range(0, len(code) - 4, 4):
            inst = struct.unpack_from("<I", code, o)[0]
            if (inst & 0x9f000000) != 0x90000000:
                continue
            imm21 = (((inst >> 5) & 0x7ffff) << 2) | ((inst >> 29) & 3)
            page = ((tbase + o) & ~0xfff) + (signext(imm21, 21) << 12)
            if page not in target_pages:
                continue
            register = inst & 31
            for jump in range(1, 13):
                at = o + 4 * jump
                if at + 4 > len(code):
                    break
                nxt = struct.unpack_from("<I", code, at)[0]
                # ADD Xd,Xn,#imm12 (shift 0 or 12).
                if (nxt & 0xff000000) == 0x91000000:
                    rn = (nxt >> 5) & 31
                    rd = nxt & 31
                    if rn == register and rd == register:
                        imm = (nxt >> 10) & 0xfff
                        if (nxt >> 22) & 1:
                            imm <<= 12
                        address = page + imm
                        if address in targets:
                            for h in targets[address]:
                                refs.append([
                                    h["anchor"], h["stringRva"],
                                    f"main+0x{tbase + o:X}", f"main+0x{tbase + at:X}",
                                    h["string"], "ADRP_ADD_STATIC_CANDIDATE"
                                ])
                        break
                # Stop when same register may be redefined by a matching ADRP.
                if (nxt & 0x9f00001f) == (0x90000000 | register):
                    break
    refs.sort()
    summary = {
        "schemaVersion": 1, **metadata,
        "segments": [{k: v for k, v in seg.items() if k != "data"}
                     | {"name": name} for name, seg in segments.items()],
        "anchorMatches": len(hits),
        "anchorCounts": dict(sorted(Counter(h["anchor"] for h in hits).items())),
        "adrpAddCandidates": len(refs),
        "anchors": hits[:500],
        "status": "STATIC_STRING_AND_ADRP_ADD_EVIDENCE_ONLY",
        "warning": (
            "A native string presence does not prove file loading. ADRP+ADD pairs "
            "are instruction candidates only; disassemble consumers and inspect "
            "runtime references before assigning loader semantics."
        )
    }
    write(repo, EVENT / "_index/native_exefs_evidence.json", summary)
    write(repo, EVENT / "_index/native_string_xrefs.csv",
          csv_dump(["anchor", "string_rva", "adrp_address", "add_address",
                    "native_string", "evidence_status"], refs))
    return {k: summary[k] for k in ("buildId", "anchorMatches", "anchorCounts", "adrpAddCandidates")}

def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--repo", type=Path, default=Path(__file__).resolve().parent.parent)
    ap.add_argument("--skip-nso", action="store_true", help="Run structural comparisons only")
    args = ap.parse_args()
    repo = args.repo.resolve()
    event = event_edges(repo)
    match = match_trpfd(repo)
    native = None if args.skip_nso else scan_native(repo)
    print("SUMMARY " + json.dumps({
        "eventReferences": {k: event[k] for k in
                            ("referenceNameExistsInTrevt", "referenceStateExistsAsDeclaredState")},
        "prefetch": {k: match[k] for k in
                     ("distinctHashesMatchingTrpfd", "match0", "match1", "matchedWithKnownVirtualPath")},
        "native": native
    }, ensure_ascii=False), flush=True)

if __name__ == "__main__":
    main()
