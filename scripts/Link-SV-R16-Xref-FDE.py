#!/usr/bin/env python3
"""Link only independently validated SV400 ARM64 class-string xrefs to FDEs.

A covering unwind FDE bounds a native-code RANGE CANDIDATE, never proves
the function registers cppbindings or that Lua resolves a CFunction there.
"""
from __future__ import annotations
import argparse,csv,gzip,json
from pathlib import Path
CLASSTOKEN="cE35B3EB3"
CLASS_KEY="elf_class_native_string_code_xref_sites"

def link(evidence:dict,locations:dict[str,Path]):
    results={}
    for game in ("scarlet_main","violet_main"):
        data=evidence["native_binary_literal_evidence"][game]
        xrefs=data["literal_direct_adrp_add_xref_candidates"].get(CLASSTOKEN,[])
        manifest=json.loads((locations[game]/"fde_manifest.json").read_text("utf8"))
        if manifest["sha256"]!=data["elf_sha256"] or manifest["source"]!=game+".elf":
            raise ValueError("FDE analysis is not from exact R16 original ELF")
        source=locations[game]/"fde_ranges.csv.gz"
        ranges=[]
        with gzip.open(source,"rt",encoding="utf8") as inp:
            for item in csv.DictReader(inp):
                start=int(item["entry_rva"],16)
                end=int(item["end_exclusive"],16)
                if start>=end or end-start!=int(item["length_bytes"]):
                    raise ValueError("broken FDE code range metadata")
                ranges.append((start,end,item))
        if manifest["fde_count"]!=len(ranges):
            raise ValueError("unwind FDE row count mismatches validated manifest")
        records=[]
        for xref in xrefs:
            pc=int(xref["adrp_rva"],16)
            covers=[x for a,b,x in ranges if a<=pc<b]
            if len(covers)>1:raise ValueError("multiple overlapping original FDEs")
            if covers:
                r=covers[0]
                records.append({
                  "reference_rva":xref["adrp_rva"],
                  "referenced_class_literal_rva":xref["literal_rva"],
                  "candidate_function_entry_rva":r["entry_rva"],
                  "candidate_function_end_exclusive_rva":r["end_exclusive"],
                  "fde_rva":r["fde_rva"],
                  "status":"VALIDATED_ELF_FDE_CONTAINS_CLASS_STRING_XREF_ONLY",
                })
            else:
                records.append({
                  "reference_rva":xref["adrp_rva"],
                  "referenced_class_literal_rva":xref["literal_rva"],
                  "candidate_function_entry_rva":None,
                  "status":"NO_COVERING_VALIDATED_FDE",
                })
        results[game]={
           "source_elf_sha256":data["elf_sha256"],
           "fde_count":len(ranges),
           "fde_status":manifest["status"],
           "class_literal_code_xrefs":records,
           "native_binding_registration_proven":False,
           "callee_cpp_entry_proven":False,
           "live_runtime_object_proven":False,
        }
    return {
       "kind":"R16_ELF_UNWIND_FUNCTION_CANDIDATES_FROM_DIRECT_CLASS_STRING_XREF",
       "results":results,
       "no_game_runtime_abi_inferred":True,
       "game_runtime_status":"NOT_OBSERVED",
    }

if __name__=="__main__":
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--evidence",type=Path,required=True)
    ap.add_argument("--fde-root",type=Path,required=True)
    ap.add_argument("--out",type=Path,required=True)
    x=ap.parse_args()
    source=json.loads(x.evidence.read_text("utf8"))
    paths={g:x.fde_root/g for g in ("scarlet_main","violet_main")}
    result=link(source,paths)
    x.out.parent.mkdir(parents=True,exist_ok=True)
    x.out.write_text(json.dumps(result,indent=2,ensure_ascii=False)+"\n","utf8")
    print(json.dumps(result,indent=2,ensure_ascii=False))
