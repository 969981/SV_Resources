#!/usr/bin/env python3
"""Verify two actual PKHeX.Core LegalityAnalysis runs use identical official PK9
files but different SHA-attested embedded Gen9 encounter databases."""
from __future__ import annotations
import argparse,json
from pathlib import Path

STATUS="FIVE_NATIVE_GEN9_TABLES_EMBEDDED_IN_ISOLATED_PKHEX"
FIELDS=("Parsed","Valid","MatchedEncounterType","InvalidChecks")

def compare(base:dict,modified:dict,stage:dict)->dict:
    if stage.get("status")!=STATUS or len(stage.get("resources",[]))!=5:
        raise ValueError("No five-table original game embedded-source proof")
    if base.get("pkhexSource")!=modified.get("pkhexSource"):
        raise ValueError("PKHeX revision changed; comparison invalid")
    old=base.get("sourceSamplesFromOfficialPKHeXTests",[])
    new=modified.get("sourceSamplesFromOfficialPKHeXTests",[])
    if len(old)<6 or len(new)!=len(old):
        raise ValueError("Missing real official PK9 sample controls")
    left={x["sourcePath"]:x for x in old}
    right={x["sourcePath"]:x for x in new}
    if len(left)!=len(old) or len(right)!=len(new) or left.keys()!=right.keys():
        raise ValueError("PK9 sample identity mismatch")
    rows=[]
    for path in sorted(left):
        a,b=left[path],right[path]
        if a["originalSourceSHA256"]!=b["originalSourceSHA256"]:
            raise ValueError(f"Original PK9 source SHA changed: {path}")
        diff={}
        for key in ("original","modified","invalidLocationNegativeControl"):
            x,y=a.get(key),b.get(key)
            if (x is None)!=(y is None):raise ValueError("Missing original negative control")
            if x is None:continue
            fields={f:{"pkhex_reference":x.get(f),"sv_400_embedded":y.get(f)}
                    for f in FIELDS if x.get(f)!=y.get(f)}
            if fields:diff[key]=fields
        rows.append({"sample":path,"sha256":a["originalSourceSHA256"],
                     "original_valid":a["original"]["Valid"],
                     "native_embedded_valid":b["original"]["Valid"],
                     "changed":diff})
    samples=modified.get("nativeTemplateSampleChecks",{})
    names={r["name"] for r in stage["resources"]}
    if set(samples)!=names or any(int(x.get("attempted",0))<=0 for x in samples.values()):
        raise ValueError("All five native regenerated templates must actually generate PK9 legality candidates")
    return {"status":"REAL_PKHEX_LEGALITYANALYSIS_REFERENCE_VS_NATIVE_EMBEDDED_COMPARED",
            "pkhexSource":base["pkhexSource"],"official_pk9_compared":len(rows),
            "changed_official_pk9":sum(bool(x["changed"]) for x in rows),
            "native_candidate_tables":{k:{"attempted":v.get("attempted"),"valid":v.get("valid"),
                                           "exactEncounterClassMatched":v.get("exactEncounterClassMatched")}
                                       for k,v in samples.items()},
            "original_fixture_differences":rows,
            "limitations":["PK9 official fixtures are independently sourced PKHeX tests, not SV 4.0.0 game-captured encounters.",
                           "Native-generated candidate PK9 checks are template compatibility evidence, not proof of encounter RNG/shiny locks or HOME.",
                           "The original PKHeX.Core source and modified source must be compiled separately."]}

def main()->int:
    p=argparse.ArgumentParser(description=__doc__)
    for k in ("reference","native","embedded-proof","output"):
        p.add_argument("--"+k,type=Path,required=True)
    a=p.parse_args()
    r=compare(json.loads(a.reference.read_text("utf-8-sig")),
              json.loads(a.native.read_text("utf-8-sig")),
              json.loads(a.embedded_proof.read_text("utf-8-sig")))
    a.output.parent.mkdir(parents=True,exist_ok=True)
    a.output.write_text(json.dumps(r,ensure_ascii=False,indent=2)+"\n","utf-8")
    print(json.dumps({"status":r["status"],"official_pk9_compared":r["official_pk9_compared"],
                      "changed":r["changed_official_pk9"],"native_candidate_tables":r["native_candidate_tables"]}))
    return 0

if __name__=="__main__":raise SystemExit(main())
