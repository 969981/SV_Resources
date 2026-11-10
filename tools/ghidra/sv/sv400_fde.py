#!/usr/bin/env python3
"""Export validated AArch64 .eh_frame FDEs for Ghidra post-analysis recovery."""
import argparse
import csv
import gzip
import hashlib
import json
from pathlib import Path

from elftools.dwarf.callframe import FDE
from elftools.elf.elffile import ELFFile

HASHES = {
    "scarlet_main.elf": "53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f",
    "violet_main.elf": "84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30",
}

def sha(path):
    h = hashlib.sha256()
    with path.open("rb") as inp:
        for block in iter(lambda: inp.read(4 << 20), b""):
            h.update(block)
    return h.hexdigest()

def run(elf_path, out):
    expected = HASHES[elf_path.name]
    actual = sha(elf_path)
    if expected != actual:
        raise ValueError("Wrong ELF: " + actual)
    records = []
    with elf_path.open("rb") as source:
        elf = ELFFile(source)
        if elf.elfclass != 64 or elf["e_machine"] != "EM_AARCH64":
            raise ValueError("Not ELF64 AArch64")
        text = elf.get_section_by_name(".text")
        if text is None:
            raise ValueError("No ELF .text")
        start = int(text["sh_addr"])
        end = start + int(text["sh_size"])
        dwarf = elf.get_dwarf_info()
        if dwarf.has_EH_CFI():
            for entry in dwarf.EH_CFI_entries():
                if not isinstance(entry, FDE):
                    continue
                pc = int(entry["initial_location"])
                size = int(entry["address_range"])
                if pc % 4 or size <= 0 or size % 4 or pc < start or pc + size > end:
                    raise ValueError("Invalid FDE: " + hex(pc) + "/" + str(size))
                records.append((pc, size, int(entry.offset)))
    records.sort()
    for i in range(1, len(records)):
        if records[i][0] < records[i-1][0] + records[i-1][1]:
            raise ValueError("Overlapping FDEs")
    out.mkdir(parents=True, exist_ok=True)
    with gzip.open(out / "fde_ranges.csv.gz", "wt", encoding="utf-8", newline="") as dest:
        writer = csv.writer(dest)
        writer.writerow(["index", "entry_rva", "length_bytes", "end_exclusive", "fde_rva"])
        for i, (pc, size, offset) in enumerate(records):
            writer.writerow([i, f"0x{pc:X}", size, f"0x{pc+size:X}", f"0x{offset:X}"])
    summary = {"source": elf_path.name, "sha256": actual, "fde_count": len(records),
               "fde_total_bytes": sum(r[1] for r in records),
               "status": "VALIDATED" if records else "NONE",
               "note": "FDE hints do not prove all functions have been discovered"}
    (out / "fde_manifest.json").write_text(json.dumps(summary, indent=2) + "\n", encoding="utf-8")
    print(json.dumps(summary))

if __name__ == "__main__":
    p = argparse.ArgumentParser()
    p.add_argument("--elf", type=Path, required=True)
    p.add_argument("--out", type=Path, required=True)
    x = p.parse_args()
    run(x.elf, x.out)
