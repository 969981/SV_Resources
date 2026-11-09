#!/usr/bin/env python3
"""Compare upstream Lua 5.4 table regression program outputs before/after R4 Rust patch.

The original cases live exclusively in the pinned v1.4.5 upstream checkout;
this script does not copy their source or any decompiled game code into Git.
A case passes only if original and reconstructed scripts both execute with
return code zero and identical deterministic stdout; stderr is captured as a
bounded diagnostic when failures occur.
"""
from __future__ import annotations
import argparse
import json
from pathlib import Path
import subprocess
import tempfile

CASE_PATHS = (
    "tests/case_tables/constructor_01_table_constructor_eval_ownership.lua",
    "tests/case_tables/constructor_03_constructor_nil_local_prefix.lua",
    "tests/case_tables/constructor_06_constructor_run_boundaries.lua",
    "tests/case_tables/constructor_07_closure_table_results.lua",
    "tests/case_tables/constructor_25_nil_batch_call_prefix.lua",
    "tests/case_tables/setlist_05_adjacent_uncertain_setlist.lua",
    "tests/case_tables/setlist_07_table_constructor_local_acceptance.lua",
    "tests/case_tables/multireturn_04_table_result_nil_shape.lua",
    "tests/case_tables/capacity_01_indexed_array_capacity.lua",
    "tests/case_tables/setlist_08_puc_fixed_setlist_nil_capacity.lua",
)

def execute(cmd: list[str], timeout: int):
    try:
        p = subprocess.run(cmd, capture_output=True, text=True, errors="replace",
                           timeout=timeout)
        return {"rc":p.returncode, "out":p.stdout, "err":p.stderr[-1200:]}
    except subprocess.TimeoutExpired:
        return {"rc":-124, "out":"", "err":"TIMEOUT"}

def compare(checkout: Path, unluac: Path, lua: str, luac: str, timeout: int) -> dict:
    cases=[]
    with tempfile.TemporaryDirectory(prefix="sv-r4-upstream-cases-") as work:
        temp=Path(work)
        for i,rel in enumerate(CASE_PATHS):
            source=checkout/rel
            if not source.is_file(): raise ValueError(f"Missing pinned case {rel}")
            raw=temp/f"{i:02}.luac"
            recovered=temp/f"{i:02}.lua"
            compiled=temp/f"{i:02}-recompiled.luac"
            compile_result=execute([luac,"-o",str(raw),str(source)],timeout)
            if compile_result["rc"]:
                cases.append({"case":rel,"state":"ORIGINAL_COMPILE_FAILED",
                              "error":compile_result["err"]})
                continue
            decomp=execute([str(unluac),"-i",str(raw),"-D","lua5.4",
                            "--generate-mode","strict"],timeout)
            if decomp["rc"]:
                cases.append({"case":rel,"state":"STRICT_DECOMPILATION_FAILED",
                              "error":decomp["err"]})
                continue
            recovered.write_text(decomp["out"],"utf-8")
            syntax=execute([luac,"-p",str(recovered)],timeout)
            recomp=execute([luac,"-o",str(compiled),str(recovered)],timeout)
            if syntax["rc"] or recomp["rc"]:
                cases.append({"case":rel,"state":"LUA_COMPILATION_FAILED",
                              "error":(syntax["err"]+recomp["err"])[-1200:]})
                continue
            before=execute([lua,str(raw)],timeout)
            after=execute([lua,str(compiled)],timeout)
            same=before["rc"]==after["rc"]==0 and before["out"]==after["out"]
            cases.append({"case":rel,"state":"EXECUTABLE_AB_MATCH" if same else "RUNTIME_MISMATCH",
                          "stdout_equal":before["out"]==after["out"],
                          "before_rc":before["rc"],"after_rc":after["rc"],
                          "before_stderr":before["err"] if not same else "",
                          "after_stderr":after["err"] if not same else "",
                          "before_stdout_tail":before["out"][-500:] if not same else "",
                          "after_stdout_tail":after["out"][-500:] if not same else ""})
    return {"schema":1,"upstream_tag":"v1.4.5","selected_upstream_cases":len(CASE_PATHS),
            "cases":cases,"all_match":all(x["state"]=="EXECUTABLE_AB_MATCH" for x in cases)}
def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--checkout",type=Path,required=True)
    p.add_argument("--backend",type=Path,required=True)
    p.add_argument("--lua",default="lua5.4")
    p.add_argument("--luac",default="luac5.4")
    p.add_argument("--timeout",type=int,default=20)
    p.add_argument("--report",type=Path,required=True)
    args=p.parse_args()
    report=compare(args.checkout.resolve(),args.backend.resolve(),args.lua,args.luac,args.timeout)
    args.report.parent.mkdir(parents=True,exist_ok=True)
    args.report.write_text(json.dumps(report,ensure_ascii=False,sort_keys=True,indent=2)+"\n","utf-8")
    for c in report["cases"]:
        print("SLR_R4_UPSTREAM_CASE",c["state"],c["case"])
        if c["state"]!="EXECUTABLE_AB_MATCH":print("SLR_R4_DIAG",json.dumps(c,ensure_ascii=False)[:1000])
    print("SLR_R4_UPSTREAM_SUMMARY",sum(c["state"]=="EXECUTABLE_AB_MATCH" for c in report["cases"]),
          "/",report["selected_upstream_cases"])
    if not report["all_match"]:raise SystemExit(1)
if __name__=="__main__":main()
