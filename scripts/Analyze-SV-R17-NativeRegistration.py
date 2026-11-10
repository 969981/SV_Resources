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
    # R7 used a different SHA ELF. Never borrow its VM dispatch offset
    # without comparing original instruction words in BOTH current ELFs.
    historical_vm_words={
       0x41150:0xD10383FF,0x411CC:0xB8404774,
       0x411E4:0x12001A88,0x411EC:0xF8685B08,
       0x411F0:0xD61F0100,0x453FC:0xF9400BE8,
       0x4543C:0x97FF9081,0x4548C:0x97FF90B5,
       0x454D8:0xF85E83B4,
    }
    historical_dispatch_probes=[]
    for location,expected in historical_vm_words.items():
        off=offset_of(segs,location)
        actual=struct.unpack_from("<I",raw,off)[0]
        historical_dispatch_probes.append({
           "rva":f"0x{location:x}",
           "historical_reference_word":f"{expected:08X}",
           "original_this_elf_word":f"{actual:08X}",
           "machine_word_matches":actual==expected,
           "status":"CURRENT_ORIGINAL_ELF_BYTE_CHECK_NOT_LIVE_GUEST"
        })
    # Native Lua 5.4 dispatch in R7 had a different ELF SHA. Nine
    # original machine-code words matched this version above, but actual
    # opcode handlers must also be validated via ELF RELA table, not guessed.
    vm_table=0x4383398
    opnames={"GETI":13,"GETFIELD":14,"SETFIELD":18,
             "SELF":20,"TEST":66,"CALL":68,"CLOSURE":79}
    vm_handlers={}
    for op,number in opnames.items():
        entry=vm_table+number*8
        r=next((r for r in all_relocations if r["r_offset"]==entry),None)
        if r is None or r["r_info_type"]!=1027:
            vm_handlers[op]={"opcode":number,"reloc_slot":f"0x{entry:x}",
                             "status":"NO_ORIGINAL_ELF_RELATIVE_RELOCATION_HANDLER"}
            continue
        h=r["r_addend"]
        executable=any(va<=h<va+end-off and (flags&1)
                       for off,end,va,flags in segs)
        native_pos=offset_of(segs,h)
        vm_handlers[op]={"opcode":number,"reloc_slot":f"0x{entry:x}",
                          "handler_rva":f"0x{h:x}",
                          "handler_first_8_raw_bytes":raw[native_pos:native_pos+8].hex().upper(),
                          "first_12_machine_instructions":[
                            {"rva":f"0x{x.address:x}","op":x.mnemonic,
                             "operands":x.op_str,"bytes":x.bytes.hex().upper()}
                            for x in list(cs.disasm(raw[native_pos:native_pos+0x30],h))[:12]
                          ],
                          "executable":bool(executable),
                          "status":"ELF_STATIC_RELOCATED_OPCODE_DISPATCH_NOT_GUEST_RUNTIME"}
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
        ("f558733FC_other_table_code_candidate",0x194E910),
        ("f558733FC_class_table_code_candidate",0x1959E40),
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
    # Check raw native wrapper bytes before interpreting possible Lua stack
    # argument positions. Two independent table-linked wrapper entry points
    # show calls with W1=1 and W1=2. The C API helper identities and
    # full native signature are NOT recovered here.
    checks={
      "class_table_wrapper":{
        0x1959E50:"21008052",0x1959E58:"EE9EC797",
        0x1959E6C:"41008052",0x1959E70:"E2031FAA",
        0x1959E74:"DFE3C897",0x1959EF8:"00013FD6",
        0x1959F00:"E0031F2A",0x1959F0C:"C0035FD6",
      },
      "other_table_wrapper":{
        0x194E920:"21008052",0x194E928:"3ACCC797",
        0x194E93C:"41008052",0x194E940:"E2031FAA",
        0x194E944:"2B11C997",0x194E998:"00013FD6",
      },
    }
    wrapper_evidence={}
    for name,expected_words in checks.items():
        for addr,hexword in expected_words.items():
            pos=offset_of(segs,addr)
            if raw[pos:pos+4].hex().upper()!=hexword:
                raise ValueError(f"original {name} source instruction mismatch at 0x{addr:X}")
        wrapper_evidence[name]={
          "original_source_bytes_verified":[{"pc":f"0x{p:x}","word_le":w} for p,w in expected_words.items()],
          "observed_lua_stack_indices":[1,2],
          "first_reader_direct_bl":"0xb41a10",
          "second_reader_direct_bl":"0xb92df0",
          "second_reader_x2_is_zero":True,
          "static_return_zero_path_observed":name=="class_table_wrapper",
          "callee_cpp_parameter_types":"NOT_RESOLVED",
          "lua_cclosure_object_identity":"NOT_OBSERVED",
          "status":"STATIC_LUA_CF_WRAPPER_ARGUMENT_READ_PATTERN_NOT_RUNTIME_ABI",
        }
    # Native callback +0x1600050 builds X1=+0x44B14E0 at PC+0x88,
    # calls +0xDEB2F0 at PC+0x98. Decode consecutive relocation pairs
    # as a possible registration array; each pair MUST be validated and
    # never elevated to a live CClosure or true native C++ signature.
    table=0x44B14E0
    if raw[offset_of(segs,0x1600088):offset_of(segs,0x1600088)+8].hex().upper()!="817501B021801391":
        raise ValueError("original class callback does not load 0x44B14E0")
    byreloc={r["r_offset"]:r for r in all_relocations}
    entries=[]
    for i in range(0,0x260,16):
        addr=table+i
        nr,fr=byreloc.get(addr),byreloc.get(addr+8)
        if nr is None or fr is None:
            entries.append({"index":i//16,"slot":f"0x{addr:x}",
                "status":"INCOMPLETE_PAIR_NOT_A_CONFIRMED_NATIVE_BINDING"})
            continue
        name_rva=nr["r_addend"]
        code_rva=fr["r_addend"]
        try:
            name_pos=offset_of(segs,name_rva)
            literal=raw[name_pos:name_pos+80].split(b"\0",1)[0].decode("utf-8")
            executable=any(va<=code_rva<va+end-off and (flags&1)
                           for off,end,va,flags in segs)
        except (ValueError,UnicodeDecodeError):
            literal=None;executable=False
        entries.append({
           "index":i//16,"slot":f"0x{addr:x}",
           "name_pointer":f"0x{name_rva:x}",
           "name_utf8":literal,
           "code_pointer":f"0x{code_rva:x}",
           "code_is_executable_segment":bool(executable),
           "status":"ELF_RELATIVE_POINTER_PAIR_NOT_RUNTIME_CFUNCTION_PROOF",
        })
    method_pairs=[e for e in entries if e.get("name_utf8")=="f558733FC"]
    if len(method_pairs)!=1 or method_pairs[0]["slot"]!="0x44b1670" or method_pairs[0]["code_pointer"]!="0x1959e40":
        raise ValueError("original class-array native method name/pointer pair drift")
    class_table_trace={
       "x2_callback_rva":"0x1600050",
       "table_loaded_at":"0x1600088 / 0x160008c",
       "table_first_rva":"0x44b14e0",
       "table_passed_to_direct_bl_pc":"0x1600098",
       "table_consumer_direct_bl_target":"0xdeb2f0",
       "relocation_pairs":entries,
       "f558733FC_pair":method_pairs[0],
       "status":"STATIC_CLASS_CALLBACK_TABLE_CANDIDATE_NOT_RUNTIME_BINDING_PROOF",
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
        "class_callback_relocation_pairs":class_table_trace,
        "native_lua_wrapper_arg_pattern":wrapper_evidence,
        "old_r7_vm_offsets_revalidated_against_this_elf":historical_dispatch_probes,
        "original_lua_vm_dispatch_relocation_handlers":vm_handlers,
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
       "scarlet_f558_candidate_wrapper_disassembly":{
           k:results["scarlet_main"]["native_direct_call_and_callback_code"][k]["first_80_instructions"][:68]
           for k in ("f558733FC_other_table_code_candidate","f558733FC_class_table_code_candidate")
       },
       "scarlet_verified_native_wrapper_arguments":results["scarlet_main"]["native_lua_wrapper_arg_pattern"],
       "old_r7_native_dispatch_elf_word_checks":results["scarlet_main"]["old_r7_vm_offsets_revalidated_against_this_elf"],
       "scarlet_native_lua_vm_opcode_dispatch_handlers":results["scarlet_main"]["original_lua_vm_dispatch_relocation_handlers"],
       "scarlet_class_method_table":{
          "source":results["scarlet_main"]["class_callback_relocation_pairs"]["table_first_rva"],
          "via_code":results["scarlet_main"]["class_callback_relocation_pairs"]["table_passed_to_direct_bl_pc"],
          "consumer":results["scarlet_main"]["class_callback_relocation_pairs"]["table_consumer_direct_bl_target"],
          "f558733FC":results["scarlet_main"]["class_callback_relocation_pairs"]["f558733FC_pair"],
          "entries":results["scarlet_main"]["class_callback_relocation_pairs"]["relocation_pairs"][:34],
       },
       "cpp_abi_status":"NOT_RESOLVED","guest_runtime":"NOT_OBSERVED",
    },indent=2))
    if not equal:raise ValueError("Scarlet/Violet code near class literal differs; keep separate evidence")
if __name__=="__main__":main()
