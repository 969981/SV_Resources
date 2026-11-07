#!/usr/bin/env python3
"""Compare actual SHA-attested SV 4.0.0 pkNX outputs against pinned PKHeX.

The PKHeX reference must NEVER be fed into the native dumper. This program
reuses the independent Gen9 binary reader; records exact file SHA, set-based
semantic equality (order-insensitive, duplicates preserved), and field diffs.
It refuses to label a copied or unproven PKHeX .pkl as native reconstruction.
"""
from __future__ import annotations
import argparse
from collections import Counter, defaultdict
import csv
import hashlib
import importlib.util
import json
from pathlib import Path

ROOT=Path(__file__).resolve().parent
SPEC=importlib.util.spec_from_file_location(
    "pkhex_gen9_audit_readonly", ROOT/"Audit-SV-PKHeX-Encounters.py")
AUDIT=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(AUDIT)

NAMES={
    "wild":"encounter_wild_paldea.pkl",
    "fixed":"encounter_fixed_paldea.pkl",
    "raid_paldea":"encounter_gem_paldea.pkl",
    "raid_kitakami":"encounter_gem_kitakami.pkl",
    "raid_blueberry":"encounter_gem_blueberry.pkl",
    "outbreak":"encounter_outbreak_paldea.pkl",
}
FIELDS={
    "wild":AUDIT.WILD_COLUMNS,
    "fixed":AUDIT.FIXED_COLUMNS,
    "raid_paldea":AUDIT.RAID_COLUMNS,
    "raid_kitakami":AUDIT.RAID_COLUMNS,
    "raid_blueberry":AUDIT.RAID_COLUMNS,
    "outbreak":AUDIT.OUTBREAK_COLUMNS,
}
IGNORE={
    "wild":{"area_index","slot_index"},
    "fixed":{"record_index"},
    "raid_paldea":{"record_index"},
    "raid_kitakami":{"record_index"},
    "raid_blueberry":{"record_index"},
    "outbreak":{"record_index"},
}
IDENTITY={
    "wild":("location_id","cross_from_id","species_national","form_raw","gender_raw"),
    "fixed":("species_national","form_raw","level"),
    "raid_paldea":("species_national","form_raw","stars","index"),
    "raid_kitakami":("species_national","form_raw","stars","index"),
    "raid_blueberry":("species_national","form_raw","stars","index"),
    "outbreak":("species_national","form_raw","level_min","level_max"),
}


def sha(data:bytes)->str:
    return hashlib.sha256(data).hexdigest().upper()


def load_json(file:Path)->dict:
    if not file.is_file():
        raise FileNotFoundError(file)
    return json.loads(file.read_text("utf-8-sig"))


def validate(native:dict, built:dict, native_manifest_path:Path)->dict:
    if native.get("status")!="61_NATIVE_TARGETS_EXTRACTED_SHA256_VERIFIED":
        raise ValueError("Source must be the 61-file genuine M2 extraction result")
    entries=native.get("targets",[])
    if len(entries)!=61:
        raise ValueError("Native source target count not 61")
    by_path={}
    for e in entries:
        if e.get("status")!="EXTRACTED_NATIVE_SHA256_VERIFIED":
            raise ValueError("One native source not marked original-sha verified")
        path=e["source_virtual_path"]
        if path in by_path:
            raise ValueError("Duplicate native source path")
        by_path[path]=e
    full="GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES"
    partial=full+"_PARTIAL"
    if built.get("status") not in (full,partial):
        raise ValueError("No successful original-data Gen9 generation with SHA-verified consumed inputs")
    if built["status"]==partial and not built.get("collisionBlocker"):
        raise ValueError("Partial reconstruction must record exact native collision blocker")
    if Path(built.get("originalM2Manifest","")).resolve()!=native_manifest_path.resolve():
        raise ValueError("Native input manifest path differs from builder evidence")
    used=built.get("sourceFilesActuallyRead",[])
    if not used:
        raise ValueError("No actual original source inputs read")
    seen=set()
    for use in used:
        path=use["path"]
        if path in seen or path not in by_path:
            raise ValueError(f"Unrecognized or repeated native source file: {path}")
        seen.add(path)
        true=by_path[path]
        if (not use.get("verifiedByOriginalM2Manifest") or
            use.get("sha256")!=true["native_sha256"] or
            int(use.get("bytes",-1))!=int(true["native_bytes"])):
            raise ValueError(f"Native source SHA/size evidence mismatch: {path}")
    trcol_manifest=built.get("originalTrcolManifest")
    if trcol_manifest:
        trcol=load_json(Path(trcol_manifest))
        if trcol.get("status")!="TRCOL_ORIGINAL_SHA256_VERIFIED" or trcol.get("source")!="SV-4.0.0-original-TRPFD-TRPFS":
            raise ValueError("TRCOL manifest does not prove original native SHA verification")
        extras=trcol.get("targets",[])
        if len(extras)!=trcol.get("unique_trcol_paths"):
            raise ValueError("Incomplete verified collision manifest")
        for item in extras:
            name=item["source_virtual_path"]
            if (name in by_path or item.get("status")!="TRCOL_ORIGINAL_SHA256_VERIFIED" or
                not name.lower().endswith(".trcol")):
                raise ValueError("Unproven/colliding original TRCOL")
            by_path[name]=item
    if built.get("unverifiedExtraFiles"):
        raise ValueError("Unverified extra native TRCOL paths included in generated binaries")
    required=("message/dat/English/common/place_name.dat",
              "message/dat/English/common/place_name.tbl")
    if not all(x in seen for x in required):
        raise ValueError("Location IDs not grounded in original English AHTB/DAT")
    products=built.get("generated",[])
    names=[x["name"] for x in products]
    if len(set(names))!=len(names):
        raise ValueError("Repeated generated filename in builder evidence")
    if not set(names).issubset(set(NAMES.values())):
        raise ValueError("Unknown native generated PKHeX table name")
    return {x["name"]:x for x in products}


def content_key(row:dict, table:str)->tuple:
    return tuple((key,row[key]) for key in FIELDS[table] if key not in IGNORE[table])


def groups(rows:list[dict],table:str):
    bucket=defaultdict(list)
    for row in rows:
        key=tuple(row[k] for k in IDENTITY[table])
        bucket[key].append(row)
    return bucket


def interpret(ref:list[dict],gen:list[dict],table:str,limit:int=10000)->dict:
    pk=Counter(content_key(x,table) for x in ref)
    gn=Counter(content_key(x,table) for x in gen)
    missing=pk-gn
    extra=gn-pk
    ref_only=sum(missing.values())
    native_only=sum(extra.values())
    cols=[x for x in FIELDS[table] if x not in IGNORE[table]]
    changed_counts=Counter()
    pairs=[]
    # Same identity but differing weather/time/level/IV etc is one logical
    # mismatch pair. An arbitrary multiset pair is only a diagnostic, never
    # silently treated as equal or 'fixed' when multiple records share an ID.
    pk_by_key=groups([dict(x) for row in missing for x in [dict(row)] for _ in range(missing[row])],table)
    gn_by_key=groups([dict(x) for row in extra for x in [dict(row)] for _ in range(extra[row])],table)
    for key in sorted(set(pk_by_key)&set(gn_by_key)):
        aa=pk_by_key[key]
        bb=gn_by_key[key]
        if len(aa)==len(bb)==1:
            before,after=aa[0],bb[0]
            changes={col:{"pkhex":before[col],"native":after[col]}
                     for col in cols if before[col]!=after[col]}
            for field in changes:
                changed_counts[field]+=1
            pairs.append({"identity":dict(zip(IDENTITY[table],key)),"changed_fields":changes})
    def unpack(counter):
        out=[]
        for tuple_row,quantity in counter.items():
            for _ in range(min(quantity,limit-len(out))):
                out.append(dict(tuple_row))
            if len(out)>=limit:
                break
        return out
    return {
        "reference_records":len(ref), "native_records":len(gen),
        "reference_only":ref_only,"native_only":native_only,
        "semantic_exact":not ref_only and not native_only,
        "field_changes_in_unambiguous_pairs":dict(sorted(changed_counts.items())),
        "changed_pairs_sample":pairs[:100],
        "reference_only_sample":unpack(missing)[:25],
        "native_only_sample":unpack(extra)[:25],
        "_ref_rows":unpack(missing),
        "_gen_rows":unpack(extra),
    }


def write_diff_csv(path:Path,rows:list[dict],table:str):
    with path.open("w",newline="",encoding="utf-8-sig") as f:
        writer=csv.DictWriter(f,fieldnames=[c for c in FIELDS[table] if c not in IGNORE[table]])
        writer.writeheader()
        writer.writerows(rows)


def compare(native_manifest:Path,build_evidence:Path,generated:Path,reference:Path,out:Path)->dict:
    native=load_json(native_manifest)
    built=load_json(build_evidence)
    products=validate(native,built,native_manifest)
    if out==reference or out.is_relative_to(reference):
        raise ValueError("Cannot overwrite reference PKHeX data")
    if out==generated or out.is_relative_to(generated):
        raise ValueError("Cannot write comparison into original native output")
    out.mkdir(parents=True,exist_ok=True)
    summary={
        "status":"NATIVE_INPUT_VALID_BUT_NOT_ALL_GEN9_LEGALITY_TABLES_REBUILT",
        "source_version":"Pokemon SV 4.0.0",
        "pkhex_reference":str(reference),
        "manifest":str(native_manifest),
        "generator":"unmodified vendored pkNX Gen9 encounter algorithms",
        "all_generated_from_native_not_reference":True,
        "tables":{},
        "caveats":[
            "Field-level equality against one pinned PKHeX commit is necessary but not sufficient for every lawful encounter.",
            "Unbuilt tables are not compared and never counted as matches.",
            "Events, mighty raids, static shiny locks, RNG methods and HOME moves require independent tests.",
            "PKHeX encounter wild/fixed blobs are legality templates, not exact spawn probabilities.",
        ],
    }
    for table,name in NAMES.items():
        refpath=reference/name
        if name not in products:
            summary["tables"][table]={"status":"NOT_GENERATED_FROM_NATIVE"}
            continue
        if not refpath.is_file():
            summary["tables"][table]={"status":"MISSING_PKHEX_REFERENCE"}
            continue
        newpath=generated/name
        if not newpath.is_file():
            raise FileNotFoundError(f"Native build claims output but generated file absent: {name}")
        native_raw=newpath.read_bytes()
        ref_raw=refpath.read_bytes()
        evidence=products[name]
        if int(evidence["bytes"])!=len(native_raw) or evidence["sha256"]!=sha(native_raw):
            raise ValueError(f"Native generated file SHA/byte count failed: {name}")
        native_rows=AUDIT.read_table(table,native_raw)
        reference_rows=AUDIT.read_table(table,ref_raw)
        if native_rows is None or reference_rows is None:
            raise ValueError(f"Attempted unsupported format comparison {table}")
        outcome=interpret(reference_rows,native_rows,table)
        delta_ref=outcome.pop("_ref_rows")
        delta_gen=outcome.pop("_gen_rows")
        binary_equal=native_raw==ref_raw
        if binary_equal:
            label="EXACT_BINARY_MATCH"
        elif outcome["semantic_exact"]:
            label="SEMANTIC_MATCH_BINARY_ORDER_DIFFERENT"
        else:
            label="FIELD_LEVEL_DIFFERENCES"
        result={
            "status":label,
            "native_sha256":sha(native_raw),
            "pkhex_sha256":sha(ref_raw),
            "native_bytes":len(native_raw),
            "reference_bytes":len(ref_raw),
            **outcome,
        }
        if table=="wild":
            def area_stats(raw):
                from struct import unpack_from
                count=unpack_from("<H",raw,2)[0]
                offsets=[unpack_from("<I",raw,4+i*4)[0] for i in range(count+1)]
                headers=Counter(unpack_from("<HH",raw,x) for x in offsets[:-1])
                empties=sum(b-a==4 for a,b in zip(offsets,offsets[1:]))
                return count,headers,empties
            nr,nh,ne=area_stats(native_raw)
            pr,ph,pe=area_stats(ref_raw)
            result["native_areas"]=nr
            result["reference_areas"]=pr
            result["native_empty_areas"]=ne
            result["reference_empty_areas"]=pe
            result["area_headers_exact_multiset"]=nh==ph
        summary["tables"][table]=result
        write_diff_csv(out/f"{table}_pkhex_only.csv",delta_ref,table)
        write_diff_csv(out/f"{table}_native_only.csv",delta_gen,table)
    present=[v for v in summary["tables"].values() if v["status"] not in
             ("NOT_GENERATED_FROM_NATIVE","MISSING_PKHEX_REFERENCE")]
    if present and all(v["status"]=="EXACT_BINARY_MATCH" for v in present):
        summary["status"]="NATIVE_TABLES_MATCH_BYTE_FOR_BYTE_BUT_PARTIAL_LEGALITY_COVERAGE"
    elif any(v["status"]=="FIELD_LEVEL_DIFFERENCES" for v in present):
        summary["status"]="NATIVE_PKHEX_FIELD_LEVEL_DIFFERENCES_REQUIRE_INVESTIGATION"
    (out/"native-comparison.json").write_text(
        json.dumps(summary,ensure_ascii=False,indent=2)+"\n","utf-8")
    return summary


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--native-manifest",required=True,type=Path)
    p.add_argument("--build-evidence",required=True,type=Path)
    p.add_argument("--generated",required=True,type=Path)
    p.add_argument("--reference",required=True,type=Path)
    p.add_argument("--output",required=True,type=Path)
    a=p.parse_args()
    r=compare(a.native_manifest.resolve(),a.build_evidence.resolve(),
              a.generated.resolve(),a.reference.resolve(),a.output.resolve())
    print(json.dumps({"status":r["status"],
                      "tables":{k:{field:v.get(field) for field in
                                 ("status","reference_records","native_records",
                                  "reference_only","native_only")}
                                for k,v in r["tables"].items()}},ensure_ascii=False,indent=2))
    return 0 if all(v["status"]=="EXACT_BINARY_MATCH"
                    for v in r["tables"].values()) else 2


if __name__=="__main__":
    raise SystemExit(main())
