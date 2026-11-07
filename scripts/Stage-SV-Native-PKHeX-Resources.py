#!/usr/bin/env python3
"""Stage five ORIGINAL SHA-attested SV 4.0.0 PKHeX templates in an isolated
PKHeX source tree for REAL embedded-resource LegalityAnalysis, no reference copying.
Do not modify the pinned reference checkout."""
from __future__ import annotations
import argparse,hashlib,json
from pathlib import Path

FILES=("encounter_wild_paldea.pkl","encounter_fixed_paldea.pkl",
       "encounter_gem_paldea.pkl","encounter_gem_kitakami.pkl",
       "encounter_gem_blueberry.pkl")
STATUS="GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES"
def sha(data:bytes)->str: return hashlib.sha256(data).hexdigest().upper()

def stage(native:Path,isolated:Path,original:Path,evidence:Path)->dict:
    native,isolated,original=map(Path.resolve,(native,isolated,original))
    if isolated==original or isolated.is_relative_to(original):
        raise ValueError("Do not overwrite pinned PKHeX reference source")
    if isolated==native or isolated.is_relative_to(native) or native.is_relative_to(isolated):
        raise ValueError("Original game outputs and PKHeX code must not overlap")
    m=native/"native-encounter-build.json"
    proof=json.loads(m.read_text("utf-8-sig"))
    if proof.get("status")!=STATUS or proof.get("collisionBlocker") or proof.get("unverifiedExtraFiles"):
        raise ValueError("Not all original SV 4.0.0 wild/fixed/raid tables passed native source SHA gates")
    generated=proof.get("generated",[])
    if len(generated)!=5 or {e["name"] for e in generated}!=set(FILES):
        raise ValueError("Exactly five source-generated Gen9 tables required")
    expected={e["name"]:e for e in generated}
    target=isolated/"PKHeX.Core/Resources/legality/wild/Gen9"
    if not target.is_dir():
        raise FileNotFoundError("Isolated PKHeX.Core source resources not found")
    records=[]
    pending=[]
    for name in FILES:
        src=native/name;dst=target/name
        if not src.is_file() or not dst.is_file():
            raise FileNotFoundError(f"Missing original native or reference resource {name}")
        generated_bytes=src.read_bytes()
        before=dst.read_bytes()
        if not generated_bytes or len(generated_bytes)!=expected[name]["bytes"] or sha(generated_bytes)!=expected[name]["sha256"]:
            raise ValueError(f"Native-generated PKHeX template size/hash disagrees with proven build: {name}")
        pending.append((dst,generated_bytes))
        records.append({"name":name,"pinned_reference_sha256":sha(before),
                        "native_sha256":sha(generated_bytes),"bytes":len(generated_bytes),
                        "same_as_reference":generated_bytes==before})
    for dst,data in pending:
        dst.write_bytes(data)
        if sha(dst.read_bytes())!=sha(data):
            raise ValueError(f"PKHeX embedded source replacement failed: {dst.name}")
    result={"status":"FIVE_NATIVE_GEN9_TABLES_EMBEDDED_IN_ISOLATED_PKHEX",
            "native_build_manifest_sha256":sha(m.read_bytes()),
            "original_pkhex_root_unmodified":str(original),
            "isolated_pkhex_root":str(isolated),
            "source":"SV-4.0.0-original-TRPFD-TRPFS",
            "resources":records}
    evidence.parent.mkdir(parents=True,exist_ok=True)
    evidence.write_text(json.dumps(result,ensure_ascii=False,indent=2)+"\n","utf-8")
    return result

def main():
    p=argparse.ArgumentParser(description=__doc__)
    for key in ("native-output","isolated-pkhex-root","original-pkhex-root","evidence"):
        p.add_argument("--"+key,required=True,type=Path)
    a=p.parse_args()
    result=stage(a.native_output,a.isolated_pkhex_root,a.original_pkhex_root,a.evidence)
    print(json.dumps({"status":result["status"],"replaced":len(result["resources"])}))
if __name__=="__main__":main()
