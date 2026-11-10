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
    if raw[offset_of(segs,LITERAL):offset_of(segs,LITERAL)+10]!=b"cE35B3EB3":
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
    target_addends={}
    with path.open("rb") as src:
        elf=ELFFile(src)
        for key in KEYS:
            occurrences=[m for m in inspect_elf(path,game,keys=KEYS)["literal_occurrences"] if m["literal"]==key]
            target_addends[key]={int(loc["rva"],16)
                 for rec in occurrences for hit in rec["exact_ascii_matches_first_16"]
                 for loc in hit["mapped_segments"]}
        for section in elf.iter_sections():
            if not isinstance(section,RelocationSection):continue
            for reloc in section.iter_relocations():
                if not reloc.is_RELA():continue
                addend=reloc["r_addend"]
                for key,addresses in target_addends.items():
                    if addend in addresses:
                        refs.append({
                            "relocation_address":f"0x{reloc['r_offset']:x}",
                            "relocation_section":section.name,
                            "relocation_type":reloc["r_info_type"],
                            "literal":key,"literal_rva":f"0x{addend:x}",
                            "status":"EXACT_RELOCATION_ADDEND_TO_LITERAL_NOT_FUNCTION_POINTER",
                        })
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
       "cpp_abi_status":"NOT_RESOLVED","guest_runtime":"NOT_OBSERVED",
    },indent=2))
    if not equal:raise ValueError("Scarlet/Violet code near class literal differs; keep separate evidence")
if __name__=="__main__":main()
