#!/usr/bin/env python3
"""R17 bounded original SV400 ELF AArch64 code/relocation analysis.

Native BL/BLR and ELF data-pointer candidates are STATIC only. No CFunction
mapping, cppbindings signature, original function ownership or guest runtime
is inferred without independent evidence.
"""
import argparse,hashlib,json,struct,sys
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"tools/SV.Lua54/src"))
from sv_lua54.emit_haxe.r16_engine_bridge import EXPECTED_ELF,_elf_segments,inspect_elf

ELFS={
 "scarlet_main":Path("Unpack/4.0.0/exefs/scarlet_main/scarlet_main.elf"),
 "violet_main":Path("Unpack/4.0.0/exefs/violet_main/violet_main.elf")}
XREF=0x13fe21c
LITERAL=0x3b04bcb
KEYS=("cE35B3EB3","f558733FC")

def offset_of(segs,vaddr):
    hits=[off+(vaddr-va) for off,end,va,flags in segs if va<=vaddr<va+end-off]
    if len(hits)!=1:raise ValueError(f"expected unique PT_LOAD for 0x{vaddr:x}")
    return hits[0]

def analyze(game,path):
    raw=path.read_bytes()
    if hashlib.sha256(raw).hexdigest()!=EXPECTED_ELF[game]:
        raise ValueError("wrong original SV400 ELF SHA")
    segs=_elf_segments(raw)
    code_start=XREF-0x240
    code_stop=XREF+0x580
    first=offset_of(segs,code_start)
    last=offset_of(segs,code_stop)
    if last-first!=code_stop-code_start:
        raise ValueError("not contiguous ELF mapped code")
    if raw[offset_of(segs,XREF):offset_of(segs,XREF)+8].hex().upper()!="213801D0212C2F91":
        raise ValueError("xref not original ARM64 ADRP+ADD bytes")
    if raw[offset_of(segs,LITERAL):offset_of(segs,LITERAL)+len(b"cE35B3EB3")]!=b"cE35B3EB3":
        raise ValueError("class literal not original ELF")
    cs=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN)
    instructions=[]
    calls=[]
    for i in cs.disasm(raw[first:last],code_start):
        entry={"rva":f"0x{i.address:x}","mnemonic":i.mnemonic,"operands":i.op_str,
               "bytes":i.bytes.hex().upper()}
        instructions.append(entry)
        if i.mnemonic in ("bl","blr","br") or i.mnemonic.startswith("b.") or i.mnemonic in ("cbz","cbnz","tbz","tbnz"):
            calls.append(entry)
    # Distinguish relocation-backed data pointers from arbitrary 8-byte values.
    refs=[]
    all_relocations=[]
    target_addends={}
    literals_audit=inspect_elf(path,game,keys=KEYS)["literal_occurrences"]
    with path.open("rb") as src:
        elf=ELFFile(src)
        for key in KEYS:
            occurrences=[m for m in literals_audit if m["literal"]==key]
            target_addends[key]={int(loc["rva"],16)
                 for rec in occurrences for hit in rec["exact_ascii_matches_first_16"]
                 for loc in hit["mapped_segments"]}
        for section in elf.iter_sections():
            if not isinstance(section,RelocationSection):continue
            for reloc in section.iter_relocations():
                if not reloc.is_RELA():continue
                addend=reloc["r_addend"]
                all_relocations.append({"r_offset":reloc["r_offset"],"r_addend":addend,"r_info_type":reloc["r_info_type"]})
                for key,addresses in target_addends.items():
                    if addend in addresses:
                        refs.append({
                            "relocation_address":f"0x{reloc['r_offset']:x}",
                            "relocation_section":section.name,
                            "relocation_type":reloc["r_info_type"],
                            "literal":key,"literal_rva":f"0x{addend:x}",
                            "status":"EXACT_RELOCATION_ADDEND_TO_LITERAL_NOT_FUNCTION_POINTER",
                        })
    # Follow the actual original BL and callback pointer loaded into X2.
    # Validated source: X1="cE35B3EB3", X2=main+0x1600050,
    # W3=1, BL main+0xE7D200, then tail branch to main+0xB5DB00.
    if raw[offset_of(segs,0x13fe234):offset_of(segs,0x13fe234)+4].hex().upper()!="F3FBE997":
        raise ValueError("original direct BL to +0xE7D200 changed")
    traced_targets={}
    for label,target in (
        ("class_register_callee_candidate",0xE7D200),
        ("class_registration_x2_callback_candidate",0x1600050),
        ("tail_branch",0xB5DB00),
    ):
        pos=offset_of(segs,target)
        flags=next((flag for off,end,va,flag in segs if va<=target<va+end-off),0)
        if not flags&1:
            raise ValueError("native target not in executable PT_LOAD: "+label)
        code=list(cs.disasm(raw[pos:pos+0x220],target))
        traced_targets[label]={
          "rva":f"0x{target:x}",
          "executable_segment_flags":flags,
          "decoded_count":len(code),
          "first_80_instructions":[{
            "rva":f"0x{x.address:x}","op":x.mnemonic,"args":x.op_str,
            "bytes":x.bytes.hex().upper()
          } for x in code[:80]],
          "direct_bl_targets":[
            {"at":f"0x{x.address:x}","to":x.op_str}
            for x in code if x.mnemonic=="bl"
          ],
          "entry_identity_status":"PROVEN_CODE_ADDRESS_NOT_FUNCTION_SIGNATURE",
        }
    # Reconstruct relocation neighbors around the two native method-name
    # pointers. A relocation addend to code is a possible dispatch-data
    # pointer but DOES NOT establish that Lua ever reaches that CFunction.
    method_ptr_locations=(0x4426AC0,0x44B1670)
    relocation_neighbors={}
    for where in method_ptr_locations:
        pos=offset_of(segs,where)
        adjacent=[
            {"offset":f"0x{r['r_offset']:x}",
             "addend":f"0x{(r['r_addend'] & 0xffffffffffffffff):x}",
             "reloc_type":r["r_info_type"],
             "code_segment_target":any(
                 va<=r["r_addend"]<va+end-off and (flags&1)
                 for off,end,va,flags in segs)
            }
            for r in all_relocations if where-0x60<=r["r_offset"]<where+0x68
        ]
        relocation_neighbors[f"0x{where:x}"]={
            "raw_pointer_area_before_96":raw[pos-0x60:pos].hex().upper(),
            "raw_pointer_area_after_104":raw[pos:pos+0x68].hex().upper(),
            "relocation_entries_within_0x60":adjacent,
            "status":"DATA_STRUCTURE_CANDIDATE_NOT_CONFIRMED_CPP_CALLABLE",
        }
    literals={}
    for key in KEYS:
        rv=sorted(target_addends[key])
        literals[key]=[]
        for rva in rv:
            pos=offset_of(segs,rva)
            before=raw[max(0,pos-48):pos].hex().upper()
            after=raw[pos:pos+96].hex().upper()
            literals[key].append({"rva":f"0x{rva:x}",
                                   "bytes_before_48":before,
                                   "bytes_after_96":after})
    around=[x for x in instructions if XREF-0x80<=int(x["rva"],16)<=XREF+0x100]
    return {
        "game":game,"elf_sha256":EXPECTED_ELF[game],
        "verified_class_xref":f"0x{XREF:x}",
        "verified_class_literal":f"0x{LITERAL:x}",
        "native_code_window":[f"0x{code_start:x}",f"0x{code_stop:x}"],
        "instructions":instructions,"branches_and_calls":calls,
        "near_class_reference":around,
        "relocations_to_exact_class_or_method_literal":refs,
        "literal_data_context":literals,
        "native_direct_call_and_callback_code":traced_targets,
        "native_method_relocation_pointer_neighbors":relocation_neighbors,
        "static_cpp_call_target_proven":False,
        "lua_cclosure_pointer_proven":False,
        "runtime_status":"NOT_OBSERVED",
    }

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--out",type=Path,required=True)
    x=parser.parse_args()
    results={game:analyze(game,ROOT/p) for game,p in ELFS.items()}
    pairs=[(i["mnemonic"],i["operands"],i["bytes"]) for i in results["scarlet_main"]["near_class_reference"]]
    other=[(i["mnemonic"],i["operands"],i["bytes"]) for i in results["violet_main"]["near_class_reference"]]
    equal=pairs==other
    summary={
      "kind":"SV400_R17_NATIVE_CODE_RELOCATION_BOUNDED_STATIC_TRACE",
      "near_reference_same_machine_assembly_both_games":equal,
      "original_elf":results,
      "guest_runtime_status":"NOT_OBSERVED",
      "native_cpp_binding_proven":False,
    }
    x.out.parent.mkdir(parents=True,exist_ok=True)
    x.out.write_text(json.dumps(summary,indent=2,ensure_ascii=False)+"\n","utf-8")
    print(json.dumps({
       "near_reference_same_both_versions":equal,
       "branch_counts":{k:len(v["branches_and_calls"]) for k,v in results.items()},
       "relocation_literal_count":{k:len(v["relocations_to_exact_class_or_method_literal"]) for k,v in results.items()},
       "scarlet_near_xref":results["scarlet_main"]["near_class_reference"],
       "scarlet_relocations":results["scarlet_main"]["relocations_to_exact_class_or_method_literal"][:15],
       "scarlet_followed_native_entries":{
            k:{"rva":v["rva"],"first_instructions":v["first_80_instructions"][:18],
               "bl_targets":v["direct_bl_targets"][:8]}
            for k,v in results["scarlet_main"]["native_direct_call_and_callback_code"].items()
       },
       "scarlet_method_pointer_relocation_neighbors":results["scarlet_main"]["native_method_relocation_pointer_neighbors"],
       "cpp_abi_status":"NOT_RESOLVED","guest_runtime":"NOT_OBSERVED",
    },indent=2))
    if not equal:raise ValueError("Scarlet/Violet code near class literal differs; keep separate evidence")
if __name__=="__main__":main()
