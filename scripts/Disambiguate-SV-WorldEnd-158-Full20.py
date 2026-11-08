#!/usr/bin/env python3
"""Source-attested SV 4.0.0 FixedSymbol full-20B reference disambiguation.

Reconstructs the PINNED PKHeX reference as a multiset from separately verified
native .pkl + genuine T30 native-only/reference-only deltas. Resolves the 236
WorldEnd-158 source-selected reference row labels using full 20B records.
Purely read-only: does not decide game-runtime location legality.
"""
from __future__ import annotations
import argparse
from collections import Counter, defaultdict
import csv
import hashlib
import json
from pathlib import Path
import struct

EXPECTED = {
    "native": "F902A1955042E031B494FD52028B79241B98D61925ADDCC30A75856017CDD6C8",
    "native_only": "8CABF1DD665B551B11C969039901185D1D5EBAC0A5175C0C5F580926386883F2",
    "pkhex_only": "03D8C3888E17E6CEBEF4B79140ECD5BE947A4AB44BA136253D11E947AE5E977F",
    "cases": "0DC389DB4E93C48BD9651916F3C92F36F50DED3F0EABB7D01F1BBB64059FFF57",
}
STATUS = "SV400_ORIGINAL_FULL20_SOURCE_PINNED_PKHEX_REFERENCE_DISAMBIGUATION_NOT_RUNTIME"
REFERENCE_COMMIT = "0660d1e1f4924b8478daec73281bb8071a82ad19"
FIELD_NAMES = ("species_national", "form_raw", "level", "flawless_iv_count",
               "tera_type_raw", "gender_raw", "ability_permission_raw", "move1",
               "move2", "move3", "move4", "location0", "location1", "location2", "location3")


def file_sha(path: Path) -> str:
    h=hashlib.sha256()
    with path.open("rb") as f:
        for block in iter(lambda:f.read(1024*1024),b""):
            h.update(block)
    return h.hexdigest().upper()


def read_rows(path: Path) -> list[dict]:
    with path.open(newline="",encoding="utf-8-sig") as f:
        return list(csv.DictReader(f))


def pack_reference_row(row: dict) -> bytes:
    if tuple(row)!=FIELD_NAMES:
        raise ValueError("Not the pinned 15-field original Gen9 fixed differential schema")
    values=[int(row[k]) for k in FIELD_NAMES]
    if any(v<0 for v in values):
        raise ValueError("Negative Gen9 FixedSymbol binary value")
    try:
        packed=struct.pack("<HBBBBBBHHHHBBBB",*values)
    except struct.error as exc:
        raise ValueError("Out-of-range Gen9 FixedSymbol template field") from exc
    if len(packed)!=20:
        raise ValueError("Unexpected Gen9 FixedSymbol record stride")
    return packed


def decode_fixed20(raw: bytes) -> dict:
    if len(raw)!=20:
        raise ValueError("Fixed template must be exactly 20 bytes")
    fields=struct.unpack("<HBBBBBBHHHHBBBB",raw)
    return dict(zip(FIELD_NAMES,fields))


def base_identity(raw: bytes) -> tuple:
    d=decode_fixed20(raw)
    return (d["species_national"],d["form_raw"],d["level"],
            tuple(d[f"location{i}"] for i in range(4)))


def case_identity(row: dict) -> tuple:
    locations=tuple(int(x) for x in row["old_locations"].split(";"))
    if len(locations)!=4:
        raise ValueError("Missing complete original four-byte fixed location field")
    return int(row["species_national"]),int(row["form_raw"]),int(row["level"]),locations


def mutated_fixed20(raw: bytes, locations: str) -> bytes:
    locs=bytes(int(x) for x in locations.split(";"))
    if len(locs)!=4 or 158 in locs:
        raise ValueError("WorldEnd source what-if must remove location 158")
    return raw[:16]+locs


def disambiguate(native: bytes, native_only: list[dict], pkhex_only: list[dict],
                 source_cases: list[dict]) -> dict:
    if len(native)!=19540 or len(native)%20 or len(source_cases)!=236:
        raise ValueError("Not the original 977 fixed records / 236 original source cases")
    native_counter=Counter(native[i:i+20] for i in range(0,len(native),20))
    source_only=Counter(pack_reference_row(x) for x in native_only)
    reference_only=Counter(pack_reference_row(x) for x in pkhex_only)
    if (sum(native_counter.values()),sum(source_only.values()),sum(reference_only.values()))!=(977,203,203):
        raise ValueError("Original 30f reference-vs-native fixed differential count drift")
    if any(native_counter[item]<count for item,count in source_only.items()):
        raise ValueError("PKHeX native-only delta was not in original native binary")
    reference=native_counter-source_only+reference_only
    if sum(reference.values())!=977 or sum((native_counter&reference).values())!=774:
        raise ValueError("Pinned Gen9 977/774 fixed multiset parity impossible")
    by_identity=defaultdict(list)
    for b in native_counter:
        by_identity[base_identity(b)].append(b)
    output=[]
    for i,row in enumerate(source_cases,1):
        old=bool(int(row["original_reference_match"]))
        hypothetical=bool(int(row["hypothetical_reference_match"]))
        target=case_identity(row)
        possible=by_identity.get(target,[])
        matches=[]
        for raw in possible:
            changed=mutated_fixed20(raw,row["hypothetical_locations"])
            if bool(reference[raw])==old and bool(reference[changed])==hypothetical:
                record=decode_fixed20(raw)
                matches.append({
                    "original_native_20b_hex":raw.hex().upper(),
                    "hypothetical_without_158_20b_hex":changed.hex().upper(),
                    "flawless_iv_count":record["flawless_iv_count"],
                    "tera_type_raw":record["tera_type_raw"],
                    "gender_raw":record["gender_raw"],
                    "ability_permission_raw":record["ability_permission_raw"],
                    "moves":[record[f"move{j}"] for j in range(1,5)],
                    "native_reference_occurrences":reference[raw],
                    "hypothetical_reference_occurrences":reference[changed],
                })
        output.append({
            "case":i,"species_national":target[0],"form":target[1],"level":target[2],
            "original_locations":list(target[3]),
            "without_158_locations":[int(x) for x in row["hypothetical_locations"].split(";")],
            "original_reference_match":old,"hypothetical_reference_match":hypothetical,
            "source_symbols":json.loads(row["source_symbols_json"]),
            "full20_candidates_matching_source_and_reference":matches,
            "potential_full20_source_records":len(possible),
            "identity_status":"UNIQUE_FULL20_REFERENCE_MATCH" if len(matches)==1 else
                 ("AMBIGUOUS_FULL20_SOURCE_IDENTITY" if matches else "NO_COMPATIBLE_FULL20_REFERENCE_MATCH"),
        })
    status_counts=Counter(x["identity_status"] for x in output)
    if status_counts!={"UNIQUE_FULL20_REFERENCE_MATCH":232,"AMBIGUOUS_FULL20_SOURCE_IDENTITY":4}:
        raise ValueError(f"Actual original 236 source cases no longer yield 232/4 full20 identity closure: {status_counts}")
    for species,lv,locations in ((218,28,(144,158,168,0)),(218,69,(144,158,168,0)),
                                 (629,30,(158,160,0,0)),(629,68,(158,160,0,0))):
        group=[x for x in output if (x["species_national"],x["level"],tuple(x["original_locations"])) == (species,lv,locations)]
        if len(group)!=2 or any(x["identity_status"]!="UNIQUE_FULL20_REFERENCE_MATCH" for x in group):
            raise ValueError("Exact 218/629 contradictory labels not resolved by independent 20B data")
        if len({x["full20_candidates_matching_source_and_reference"][0]["original_native_20b_hex"] for x in group})!=2:
            raise ValueError("Observed same-source fixed pair did not split into two original full20 identities")
    if [x["species_national"] for x in output if x["identity_status"]=="AMBIGUOUS_FULL20_SOURCE_IDENTITY"] != [840]*4:
        raise ValueError("Only exact original 840 full20 source ambiguities may remain")
    return {
        "status":STATUS,
        "reference_commit":REFERENCE_COMMIT,
        "source_run_ids":[42362541291,42356030937,42374514212],
        "native_fixed_rows":sum(native_counter.values()),
        "reference_fixed_rows":sum(reference.values()),
        "original_full20_binary_matches":sum((native_counter&reference).values()),
        "source_cases":len(output),
        "identity_status_counts":dict(status_counts),
        "original_source_outcome_groups":dict(Counter(
            "REFERENCE_KEEP_158" if x["original_reference_match"] and not x["hypothetical_reference_match"] else
            "REFERENCE_REMOVE_158" if not x["original_reference_match"] and x["hypothetical_reference_match"] else
            "REFERENCE_BOTH_VERSIONS" if x["original_reference_match"] and x["hypothetical_reference_match"] else "REFERENCE_NEITHER"
            for x in output)),
        "cases":output,
        "evidence_limits":[
            "SV 4.0.0 original native Gen9 fixed .pkl SHA-verified, not copied from PKHeX reference as game input.",
            "Reference multiset reconstructed from independent original pinned PKHeX 30f reference-only/native-only CSV rows; 977/774 parity checked.",
            "232/236 is unique matching full20 reference identity, not proof of source TableKey→original emitted full20 identity.",
            "Four species 840 source rows remain ambiguous until next real source trace includes the exact fixed 20B bytes per TableKey.",
            "The reference behavior is not proof of actual game fixed encounter activation, movement, location or legal PK9 PID/EC/IV.",
        ],
    }


def audit(native_file: Path, native_only_file: Path, pkhex_only_file: Path,
          cases_file: Path, output: Path) -> dict:
    files={"native":native_file,"native_only":native_only_file,
           "pkhex_only":pkhex_only_file,"cases":cases_file}
    paths={name:Path(path).resolve() for name,path in files.items()}
    out=Path(output).resolve()
    for name,p in paths.items():
        if not p.is_file() or file_sha(p)!=EXPECTED[name]:
            raise ValueError(f"Original 4.0.0 source evidence {name} SHA missing/changed")
        if out==p.parent or out.is_relative_to(p.parent):
            raise ValueError("Cannot overwrite original game/PKHeX source evidence")
    report=disambiguate(paths["native"].read_bytes(),read_rows(paths["native_only"]),
                        read_rows(paths["pkhex_only"]),read_rows(paths["cases"]))
    report["verified_source_sha256"]={name:file_sha(p) for name,p in paths.items()}
    out.mkdir(parents=True,exist_ok=True)
    (out/"SV400_236_Fixed158_Full20_Source_Reference_Audit.json").write_text(
        json.dumps(report,ensure_ascii=False,indent=2)+"\n",encoding="utf-8")
    rows=[]
    for case in report["cases"]:
        variants=case["full20_candidates_matching_source_and_reference"]
        rows.append({
            "case":case["case"],"species_national":case["species_national"],"form":case["form"],
            "level":case["level"],"original_locations":";".join(map(str,case["original_locations"])),
            "original_reference_match":int(case["original_reference_match"]),
            "without_158_reference_match":int(case["hypothetical_reference_match"]),
            "full20_identity_status":case["identity_status"],
            "compatible_full20_candidates":len(variants),
            "original_20b_hex_or_ambiguous":";".join(r["original_native_20b_hex"] for r in variants),
            "source_tablekeys_json":json.dumps(case["source_symbols"],ensure_ascii=False,separators=(",",":")),
        })
    with (out/"SV400_236_Fixed158_Full20_Reference_Identities.csv").open("w",newline="",encoding="utf-8-sig") as stream:
        writer=csv.DictWriter(stream,fieldnames=list(rows[0]),lineterminator="\n")
        writer.writeheader();writer.writerows(rows)
    print(json.dumps({"status":STATUS,"cases":len(rows),"identity_status_counts":report["identity_status_counts"]},ensure_ascii=False))
    return report


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    for name in ("native","native-only","pkhex-only","cases","output"):
        ap.add_argument("--"+name,required=True,type=Path)
    ns=ap.parse_args()
    audit(ns.native,ns.native_only,ns.pkhex_only,ns.cases,ns.output)

if __name__=="__main__":
    main()