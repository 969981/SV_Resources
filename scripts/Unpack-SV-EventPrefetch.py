#!/usr/bin/env python3
"""Unpack Pokémon Violet 4.0.0 TREVT and TRPRE FlatBuffers (stdlib only).

Preserves all decoded rows, source ordering, raw 64-bit values, and provenance.
Does not write to 4.0.0/1. Unknown field semantics are NOT guessed.
"""
import argparse
import csv
import hashlib
import io
import json
import struct
from pathlib import Path

EXPECTED = {
    "event/trevt/bin/event.trevt": (183920, "24B65CFC73DE7358B5223BE8741091BAFD36ECB40697DDC341F9F45BA8D9E349"),
    "system/prefetch/data/global-resident_0.trpre": (115976, "A0F611E502602691C3CB2097609B487C746217E1CD48B0433DF77C390B2E559F"),
    "system/prefetch/data/global-resident_1.trpre": (115968, "E2B823A5ECD721BA11AF5092CFAFF530311408CB0428B5877DEC32DB86E7B4B9"),
}
INPUT = Path("4.0.0/1")
OUTPUT = Path("Unpack/4.0.0/romfs")


class Flat:
    def __init__(self, data):
        self.data = data

    def check(self, p, size):
        if not 0 <= p <= len(self.data) or size < 0 or p + size > len(self.data):
            raise ValueError(f"Invalid offset {p}+{size}/{len(self.data)}")

    def val(self, fmt, p):
        size = struct.calcsize(fmt)
        self.check(p, size)
        return struct.unpack_from(fmt, self.data, p)[0]

    def u16(self, p):
        return self.val("<H", p)

    def u32(self, p):
        return self.val("<I", p)

    def i32(self, p):
        return self.val("<i", p)

    def u64(self, p):
        return self.val("<Q", p)

    def ref(self, p):
        out = p + self.u32(p)
        self.check(out, 4)
        return out

    def table(self, p):
        vt = p - self.i32(p)
        length, size = self.u16(vt), self.u16(vt + 2)
        if length < 4 or length > 128 or length % 2 or size < 4 or size > 256:
            raise ValueError(f"Invalid FlatBuffers table at 0x{p:x}")
        self.check(vt, length)
        self.check(p, size)
        fields = []
        for i in range((length - 4) // 2):
            off = self.u16(vt + 4 + i * 2)
            if off and off + 4 > size:
                raise ValueError("Invalid table field")
            fields.append(p + off if off else None)
        return fields

    def vector(self, field, stride):
        if field is None:
            raise ValueError("Missing required vector")
        p = self.ref(field)
        count = self.u32(p)
        if count > 1000000:
            raise ValueError("Invalid vector length")
        self.check(p + 4, count * stride)
        return p + 4, count

    def tables(self, field):
        start, count = self.vector(field, 4)
        return [self.table(self.ref(start + i * 4)) for i in range(count)]

    def string(self, field):
        if field is None:
            raise ValueError("Missing required string")
        p = self.ref(field)
        size = self.u32(p)
        self.check(p + 4, size + 1)
        if self.data[p + 4 + size] != 0:
            raise ValueError("Unterminated UTF-8 string")
        return self.data[p + 4:p + 4 + size].decode("utf-8")

    def strings(self, field):
        start, count = self.vector(field, 4)
        return [self.string(start + i * 4) for i in range(count)]


def parse_trevt(data):
    r = Flat(data)
    root = r.table(r.u32(0))
    root_field0 = r.u32(root[0])
    event_tables = r.tables(root[1])
    events, states, references = [], [], []
    tagged_count = 0
    for index, entry in enumerate(event_tables):
        name = r.string(entry[0])
        if any(r.vector(entry[j], 4)[1] for j in (2, 3, 4)):
            raise ValueError(f"Unknown nonempty TREVT auxiliary field in {name}")
        tags = r.strings(entry[5])
        tagged_count += int(bool(tags))
        state_list = []
        for st in r.tables(entry[1]):
            state_name = r.string(st[0])
            next_states = r.strings(st[2])
            groups = []
            for gi, group in enumerate(r.tables(st[1])):
                conditions = []
                for ci, leaf in enumerate(r.tables(group[0])):
                    cond = {
                        "referenceName": r.string(leaf[0]),
                        "referenceState": r.string(leaf[2]),
                        "field3Raw": r.u32(leaf[3]),
                    }
                    if leaf[1] is not None:
                        cond["field1Raw"] = r.u32(leaf[1])
                    conditions.append(cond)
                    references.append([
                        index, name, state_name, gi, ci,
                        cond["referenceName"], cond["referenceState"], cond["field3Raw"]
                    ])
                groups.append(conditions)
            state_list.append({
                "name": state_name, "nextStates": next_states, "conditionGroups": groups
            })
            states.append([
                index, name, state_name, "|".join(next_states),
                len(groups), sum(len(g) for g in groups), len(tags)
            ])
        events.append({"index": index, "name": name, "tagStrings": tags, "states": state_list})
    meta = {
        "rootField0Raw": root_field0, "eventCount": len(events),
        "stateCount": len(states), "conditionCount": len(references),
        "eventTagCount": tagged_count,
    }
    payload = {
        "format": "trevt", "rootField0Raw": root_field0,
        "fieldSchemaStatus": "partial-structural", "recordCount": len(events),
        "events": events,
    }
    return payload, states, references, meta


def parse_trpre(data):
    r = Flat(data)
    root = r.table(r.u32(0))
    start, count = r.vector(root[0], 8)
    values, rows = [], []
    for i in range(count):
        p = start + i * 8
        value = f"{r.u64(p):016x}"
        values.append(value)
        rows.append([i, p, "0x" + value])
    return rows, values


def checked(repo, rel):
    b = (repo / INPUT / rel).read_bytes()
    size, expected = EXPECTED[rel]
    digest = hashlib.sha256(b).hexdigest().upper()
    if len(b) != size or digest != expected:
        raise ValueError(f"Source mismatch: {rel}, bytes={len(b)}, sha256={digest}")
    gitsha = hashlib.sha1(b"blob " + str(len(b)).encode("ascii") + b"\x00" + b).hexdigest()
    return b, gitsha


def dump_json(value):
    return json.dumps(value, ensure_ascii=False, indent=2) + "\n"


def dump_csv(header, rows):
    f = io.StringIO(newline="")
    w = csv.writer(f, lineterminator="\n")
    w.writerow(header)
    w.writerows(rows)
    return f.getvalue()


def generate(repo):
    output = {}
    name = "event/trevt/bin/event.trevt"
    data, gitsha = checked(repo, name)
    events, states, refs, counts = parse_trevt(data)
    if tuple(counts[k] for k in ("eventCount", "stateCount", "conditionCount", "eventTagCount")) != (688, 1376, 746, 221):
        raise ValueError(f"Unexpected TREVT structure: {counts}")
    target = OUTPUT / name
    output[target / "parsed/events.json"] = dump_json(events)
    output[target / "parsed/event_states.csv"] = dump_csv(
        ["index", "event_name", "state_name", "next_state",
         "condition_group_count", "condition_count", "event_tag_count"], states)
    output[target / "parsed/event_references.csv"] = dump_csv(
        ["event_index", "event_name", "state_name", "group_index",
         "condition_index", "reference_name", "reference_state", "field3_raw"], refs)
    output[target / "_index/provenance.json"] = dump_json({
        "sourcePath": (INPUT / name).as_posix(),
        "sourceGitBlobSha": gitsha,
        "sourceBytes": len(data),
        "sourceSha256FromInventory": EXPECTED[name][1],
        "format": "FlatBuffers",
        "rootField0Raw": counts["rootField0Raw"],
        "eventCount": counts["eventCount"],
        "stateCount": counts["stateCount"],
        "conditionCount": counts["conditionCount"],
        "eventTagCount": counts["eventTagCount"],
        "auxiliaryEmptyFields": [2, 3, 4],
        "warning": "Nested field names are structural descriptions; semantic meanings have not been proven."
    })
    names = list(EXPECTED)[1:]
    vectors = []
    for name in names:
        data, gitsha = checked(repo, name)
        rows, values = parse_trpre(data)
        vectors.append(values)
        target = OUTPUT / name
        output[target / "parsed/hashes.csv"] = dump_csv(
            ["index", "source_byte_offset", "hash64_hex"], rows)
        output[target / "_index/provenance.json"] = dump_json({
            "sourcePath": (INPUT / name).as_posix(),
            "sourceGitBlobSha": gitsha,
            "sourceBytes": len(data),
            "sourceSha256FromInventory": EXPECTED[name][1],
            "format": "FlatBuffers",
            "field0": "vector<uint64> (little-endian)",
            "count": len(values),
            "uniqueCount": len(set(values)),
            "duplicateCount": len(values) - len(set(values)),
            "note": "Raw 64-bit values only; no inferred resource names.",
        })
    left, right = set(vectors[0]), set(vectors[1])
    only0 = [h for h in vectors[0] if h not in right]
    only1 = [h for h in vectors[1] if h not in left]
    output[OUTPUT / "system/prefetch/data/_index/prefetch_comparison.json"] = dump_json({
        "sources": names,
        "count0": len(vectors[0]), "count1": len(vectors[1]),
        "unique0": len(left), "unique1": len(right),
        "sharedDistinctHashes": len(left & right),
        "only0": len(only0), "only1": len(only1),
        "only0Samples": ["0x" + h for h in only0[:20]],
        "only1Samples": ["0x" + h for h in only1[:20]],
    })
    return output


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--repo", type=Path, default=Path(__file__).resolve().parent.parent)
    parser.add_argument("--verify-only", action="store_true")
    parser.add_argument("--overwrite", action="store_true")
    args = parser.parse_args()
    if args.verify_only and args.overwrite:
        parser.error("Choose either --verify-only or --overwrite")
    repo = args.repo.resolve()
    files = generate(repo)
    for relative, body in files.items():
        p = repo / relative
        if p.exists():
            old = p.read_text(encoding="utf-8-sig")
            equivalent = (json.loads(old) == json.loads(body) if p.suffix == ".json"
                          else list(csv.reader(io.StringIO(old))) ==
                               list(csv.reader(io.StringIO(body))))
            if equivalent:
                print("OK", relative)
                continue
            if args.verify_only or not args.overwrite:
                raise ValueError(f"Output differs, use --overwrite: {relative}")
        elif args.verify_only:
            raise FileNotFoundError(relative)
        p.parent.mkdir(parents=True, exist_ok=True)
        p.write_text(body, encoding="utf-8", newline="\n")
        print("WROTE", relative)
    print(f"VERIFIED {len(files)} outputs")


if __name__ == "__main__":
    main()
