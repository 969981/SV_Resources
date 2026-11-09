#!/usr/bin/env python3
"""Fail-closed source-attested 676 wild / 203 fixed priority audit (READ ONLY)."""
from __future__ import annotations
import argparse, csv, hashlib, importlib.util, itertools, json
from collections import Counter, defaultdict
from pathlib import Path

ROOT=Path(__file__).resolve().parent
SPEC=importlib.util.spec_from_file_location("sv_t30_existing",ROOT/"Triage-SV-400-Native-Encounter-Differences.py")
BASE=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(BASE)
CSV_SHA={
 "wild_pkhex_only.csv":"C5CED4CF842AE24658A40D8B6EFA6D8C6A2CD5F2BD1AB9EB177C1DF4D17500DB",
 "wild_native_only.csv":"6A2B3F50D9C0A51B0C93D1F36DACEF3837E4F66E224A4953F8D69BE3549892B5",
 "fixed_pkhex_only.csv":"03D8C3888E17E6CEBEF4B79140ECD5BE947A4AB44BA136253D11E947AE5E977F",
 "fixed_native_only.csv":"8CABF1DD665B551B11C969039901185D1D5EBAC0A5175C0C5F580926386883F2",
}
BRIDGE_SHA="E6BE1EE79A59FEC0982286B0CDBC46F79A71B47448DE3A6DC0F41783E9160225"
IDENTITY=BASE.KEYS_WITHOUT_LEVEL

def verify_inputs(tolerance:Path,bridge:Path):
    if BASE.sha((bridge/"SV400_Native_To_PKHeX_Manifest.json").read_bytes())!=BRIDGE_SHA:
        raise ValueError("Original SHA-verified 61+223 Gen9 bridge manifest drift")
    folder=tolerance/"T30/comparison"
    for file,expected in CSV_SHA.items():
        if BASE.sha((folder/file).read_bytes())!=expected:
            raise ValueError("Independent immutable T30 SHA drift: "+file)
    return folder

def match_level_group(ref,native):
    """Minimum endpoint-cost one-to-one, retaining multiset occurrence counts.
    This diagnostic does not select encounter legality or modify a .pkl file.
    """
    if not native:return [],ref[:]
    if max(len(ref),len(native))>7:raise ValueError("Unexpected source interval group >7")
    r=sorted(ref,key=lambda x:(int(x["level_min"]),int(x["level_max"])))
    n=sorted(native,key=lambda x:(int(x["level_min"]),int(x["level_max"])))
    cost=lambda x,y:abs(int(x["level_min"])-int(y["level_min"]))+abs(int(x["level_max"])-int(y["level_max"]))
    if len(r)<=len(n):
        p=min(itertools.permutations(range(len(n)),len(r)),
              key=lambda v:(sum(cost(r[i],n[j]) for i,j in enumerate(v)),v))
        return [(r[i],n[j]) for i,j in enumerate(p)],[]
    p=min(itertools.permutations(range(len(r)),len(n)),
          key=lambda v:(sum(cost(r[i],n[j]) for j,i in enumerate(v)),v))
    return [(r[i],n[j]) for j,i in enumerate(p)],[x for i,x in enumerate(r) if i not in p]

def classify_wild(ref,native):
    a,b=defaultdict(list),defaultdict(list)
    for x in ref:a[tuple(x[f] for f in IDENTITY)].append(x)
    for x in native:b[tuple(x[f] for f in IDENTITY)].append(x)
    paired=[];surplus=[]
    for key in sorted(a):
        m,left=match_level_group(a[key],b.get(key,[]))
        surplus+=left
        for r,n in m:
            rmin,rmax=int(r["level_min"]),int(r["level_max"])
            nmin,nmax=int(n["level_min"]),int(n["level_max"])
            if rmin==nmin and rmax==nmax:raise ValueError("Disjoint reference CSV contains an equal slot")
            kind="max-only" if rmin==nmin else "min-only" if rmax==nmax else "both"
            paired.append({**{k:r[k] for k in IDENTITY},"native_min":nmin,
                "native_max":nmax,"reference_min":rmin,"reference_max":rmax,
                "delta_kind":kind,"reference_max_vs_native":"lower" if rmax<nmax else "higher" if rmax>nmax else "same"})
    if (len(paired),len(surplus))!=(666,10):raise ValueError("666/10 reference slot accounting changed")
    kinds=Counter(x["delta_kind"] for x in paired)
    if kinds!={"max-only":372,"min-only":220,"both":74}:
        raise ValueError("Source-verified original bound classification drift")
    priority=[r for r in paired if (int(r["location_id"]),int(r["cross_from_id"]))
             in ((178,0),(192,178),(180,178))]
    bylocation=Counter((int(r["location_id"]),int(r["cross_from_id"])) for r in priority)
    if bylocation!={(178,0):57,(192,178):57,(180,178):28} or any(
        r["delta_kind"]!="max-only" or r["reference_max_vs_native"]!="lower" for r in priority):
        raise ValueError("178/192/180 source upper-bound priority signature drift")
    return paired,surplus,dict(kinds)

def classify_fixed_14(rows):
    groups=Counter()
    for r in rows:
        species=int(r["species_national"])
        loc={int(r[f"location{i}"]) for i in range(4)}-{0}
        if loc=={176,194}:k="176_and_194"
        elif species==194 and 158 in loc:k="wooper_146_and_158"
        elif species==297:k="unmatched_nonlocation_297"
        elif {16,67}.issubset(loc):k="16_and_67"
        else:k="OTHER_UNEXPLAINED"
        groups[k]+=1
    if groups!={"176_and_194":9,"wooper_146_and_158":2,
               "16_and_67":2,"unmatched_nonlocation_297":1}:
        raise ValueError("Fourteen fixed non-158-identity families changed")
    return dict(groups)

def audit(tolerance,bridge,out):
    folder=verify_inputs(tolerance,bridge)
    # Reuses original source-provenance and exact 20-byte baseline intersection
    # checks, including the irreversible loss from global 158 deletion.
    baseline=BASE.investigate(tolerance,bridge,out)
    wref=BASE.csv_rows(folder/"wild_pkhex_only.csv",BASE.WILD_FIELDS)
    wnat=BASE.csv_rows(folder/"wild_native_only.csv",BASE.WILD_FIELDS)
    pairs,surplus,kinds=classify_wild(wref,wnat)
    remaining=BASE.csv_rows(out/"fixed_remaining_native_only.csv",BASE.FIXED_FIELDS)
    fixedgroups=classify_fixed_14(remaining)
    fixed=baseline["fixed"]
    if (fixed["native_only_158_removal_would_match_pkhex_only"]!=189 or
        fixed["native_only_unexplained_by_158_removal"]!=14 or
        fixed["original_exactly_matched_templates_with_158"]!=114 or
        fixed["baseline_pkhex_matches"]!=774 or
        baseline["wild"]["pkhex_only"]!=676):
        raise ValueError("Original fixed 189 + 14 and 114 baseline matching 158 guard drift")
    report={"status":"SOURCE_ATTESTED_676_WILD_203_FIXED_ZERO_LOSS_RESEARCH_NOT_RUNTIME_LEGALITY",
      "source_original":"61 SV 4.0.0 M2 + 223 SHA-verified TRCOL",
      "pinned_pkhex_commit":BASE.PIN,
      "native_pinned_original_wild_matches":26185,"native_pinned_original_fixed_matches":774,
      "wild":{"reference_only":676,"level_only_diagnostic_pairs":len(pairs),
              "multiset_surplus_occurrences":len(surplus),
              "delta_kinds":kinds,"candidate_178_192_180_max_lower":142},
      "fixed":{"reference_only":203,"exact_remove158_counterfactual_pairs":189,
               "unpaired_each_side":14,"non158_families":fixedgroups,
               "baseline_matched_with_158_must_not_delete":114},
      "sha256_original_csv":CSV_SHA,"sha256_bridge_manifest":BRIDGE_SHA,
      "warnings":["No native encounter generation rules modified",
         "Minimum endpoint-distance matching is a diagnostic, not a native causal explanation",
         "Never remove 158 globally; 114 already-matched fixed templates contain it",
         "Never choose a legality template solely by PKHeX reference parity"]}
    with (out/"SV400_676_Wild_203_Fixed_ZeroLoss_Provenance.json").open("w",encoding="utf-8") as f:
        json.dump(report,f,ensure_ascii=False,indent=2);f.write("\n")
    with (out/"SV400_Wild_666_MinimumCost_Level_Bound_Groups.csv").open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.DictWriter(f,fieldnames=list(pairs[0]));w.writeheader();w.writerows(pairs)
    with (out/"SV400_Wild_10_Reference_Surplus.csv").open("w",encoding="utf-8-sig",newline="") as f:
        w=csv.DictWriter(f,fieldnames=list(BASE.WILD_FIELDS));w.writeheader();w.writerows(surplus)
    return report

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--tolerance-dir",type=Path,required=True)
    p.add_argument("--native-bridge-dir",type=Path,required=True)
    p.add_argument("--output",type=Path,required=True)
    a=p.parse_args()
    result=audit(a.tolerance_dir,a.native_bridge_dir,a.output)
    print(json.dumps(result,ensure_ascii=False,indent=2))

if __name__=="__main__":main()
