#!/usr/bin/env python3
"""Build a separate SV Lua F mapping overlay from two evidence-graded candidate TSVs.

This script NEVER writes tools/PokeDocs. The four new names were proposed after
direct whole-file 4.0.0 Lua handler bindings; this builder checks the exact
FNV-1a-64 arithmetic and preserves every original row and hash.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import json
import re
from pathlib import Path

ROOT=Path(__file__).resolve().parent.parent
ORIGINAL=ROOT/"tools/PokeDocs/SV/Hashlists/Lua/lua_f_hashes.txt"
EARLIER=ROOT/"tools/PokeDocs-Supplement/SV/Hashlists/Lua/recovered.tsv"
NEW=ROOT/"tools/PokeDocs-Supplement/SV/Hashlists/Lua/native-4.0.0/followup-f-new-exact-candidates.tsv"
OUTPUT=ROOT/"tools/PokeDocs-Supplement/SV/Hashlists/Lua/native-4.0.0"
ROW=re.compile(r"^0x([A-Fa-f0-9]{16})[ \t]*(\S+)?[ \t]*$")
EXPECTED={
  "F1DE5A53079D877CE":"onModelModeChangedButton",
  "F3BCF72E1EF9938D6":"onEulerAnglesValueChanged",
  "F7E0CF8AE53062734":"onOffsetPosValueChanged",
  "FA1A67080A3235772":"onLocatorNameValueChanged",
}

def fnv64(text:str)->str:
    h=0xCBF29CE484222645
    for b in text.encode("utf-8"):
        h=((h^b)*0x100000001B3)&0xFFFFFFFFFFFFFFFF
    return f"{h:016X}"

def sha256(data:bytes)->str:
    return hashlib.sha256(data).hexdigest()

def build(original:Path, earlier:Path, new:Path):
    old=original.read_bytes()
    rows=old.decode("utf-8-sig").splitlines()
    known=set()
    empty=set()
    for lineno,line in enumerate(rows,1):
        m=ROW.fullmatch(line)
        if not m:raise ValueError(f"Malformed input row {lineno}")
        h=m[1].upper()
        if h in known or h in empty:raise ValueError(f"Duplicate hash {h}")
        if m[2]:
            if fnv64(m[2])!=h:raise ValueError(f"Invalid source mapping: {h}")
            known.add(h)
        else:empty.add(h)
    prior={}
    with earlier.open(encoding="utf-8",newline="") as f:
        for row in csv.DictReader(f,delimiter="\t"):
            if row["kind"]!="f":continue
            h=row["hash"].removeprefix("0x").upper()
            name=row["candidate_name"]
            if h not in empty or fnv64(name)!=h:raise ValueError(f"Invalid prior F {h}")
            if h in prior and prior[h]!=name:raise ValueError(f"Conflicting prior F {h}")
            prior[h]=name
    fresh={}
    evidence={}
    with new.open(encoding="utf-8",newline="") as f:
        for row in csv.DictReader(f,delimiter="\t"):
            h=row["function_hash"].upper()
            name=row["candidate_name"]
            if h not in EXPECTED or name!=EXPECTED[h]:raise ValueError(f"Unreviewed candidate {h}:{name}")
            if h[1:] not in empty or fnv64(name)!=h[1:]:
                raise ValueError(f"Invalid native-context F candidate {h}")
            if int(row["exact_native_source_bindings"])<1 or row["evidence"]!="HASH_EXACT_PLUS_NATIVE_SOURCE_HANDLER_BINDING":
                raise ValueError(f"Missing native handler evidence label for {h}")
            fresh[h[1:]]=name
            evidence[h]={"candidate_name":name,"native_binding_evidence_count":int(row["exact_native_source_bindings"])}
    if set("F"+h for h in fresh)!=set(EXPECTED):
        raise ValueError("Incomplete native-context F candidate list")
    if len(prior)!=9 or len(fresh)!=4 or len(empty)!=116 or set(prior)&set(fresh):
        raise ValueError("Unexpected pinned source or recovery baseline")
    merged={**prior,**fresh}
    result=[]
    for line in rows:
        m=ROW.fullmatch(line)
        h=m[1].upper()
        if not m[2] and h in merged:
            result.append(f"0x{h} {merged[h]}")
        else:result.append(line)
    output=("\n".join(result)+"\n").encode("utf-8")
    report={
      "source_path":str(original.relative_to(ROOT)) if original.is_relative_to(ROOT) else str(original),
      "source_sha256":sha256(old),
      "source_total_rows":len(rows),
      "source_unknown_hashes":len(empty),
      "previous_exact_candidates":len(prior),
      "new_exact_native_context_candidates":len(fresh),
      "combined_exact_candidates":len(merged),
      "remaining_unknown_hashes":len(empty)-len(merged),
      "native_handler_evidence":evidence,
      "merged_sha256":sha256(output),
      "merged_bytes":len(output),
      "upstream_source_modified":False,
      "evidence_level":"HASH_EXACT_CANDIDATE; source-handler native PC evidence is documented separately"
    }
    return {
      "lua_f_hashes.native-merged.txt":output,
      "native-f-merge-report.json":(json.dumps(report,indent=2,ensure_ascii=False,sort_keys=True)+"\n").encode("utf-8")
    },report

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--original",type=Path,default=ORIGINAL)
    p.add_argument("--prior",type=Path,default=EARLIER)
    p.add_argument("--new",type=Path,default=NEW)
    p.add_argument("--output",type=Path,default=OUTPUT)
    p.add_argument("--verify-only",action="store_true")
    a=p.parse_args()
    outputs,report=build(a.original.resolve(),a.prior.resolve(),a.new.resolve())
    if not a.verify_only:a.output.mkdir(parents=True,exist_ok=True)
    for name,data in outputs.items():
        dest=a.output/name
        if a.verify_only:
            if not dest.is_file() or dest.read_bytes()!=data:
                raise ValueError(f"Stale/missing artifact: {dest}")
        elif not dest.is_file() or dest.read_bytes()!=data:
            dest.write_bytes(data)
    print(json.dumps({k:v for k,v in report.items() if k!="native_handler_evidence"},indent=2,ensure_ascii=False))

if __name__=="__main__":
    main()
