#!/usr/bin/env python3
"""Validate AArch64 unwind ranges for Ghidra using the ELF .eh_frame_hdr table.

Some nx2elf 4.0.0 ELFs have an .eh_frame tail pyelftools cannot parse.
The compact header table is checked directly against the FDE PC/span.
If it is unsupported or absent, record status and allow Ghidra auto-analysis.
"""
import argparse
import csv
import gzip
import hashlib
import json
import struct
from pathlib import Path
from elftools.elf.elffile import ELFFile

HASHES = {
    "scarlet_main.elf": "53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f",
    "violet_main.elf": "84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30",
}

def sha(path):
    h = hashlib.sha256()
    with path.open("rb") as stream:
        for block in iter(lambda: stream.read(4 << 20), b""):
            h.update(block)
    return h.hexdigest()

def validated_fdes(elf):
    header = elf.get_section_by_name(".eh_frame_hdr")
    eh = elf.get_section_by_name(".eh_frame")
    code = elf.get_section_by_name(".text")
    if not header or not eh or not code:
        raise ValueError("Missing .eh_frame_hdr, .eh_frame, or .text")
    hdr = header.data()
    body = eh.data()
    if len(hdr) < 12 or tuple(hdr[:4]) != (1, 0x1b, 0x03, 0x3b):
        raise ValueError("Unsupported .eh_frame_hdr encoding")
    count = struct.unpack_from("<I", hdr, 8)[0]
    if 12 + 8 * count > len(hdr):
        raise ValueError("Truncated FDE header index")
    base, frame_base = int(header["sh_addr"]), int(eh["sh_addr"])
    text_start, text_end = int(code["sh_addr"]), int(code["sh_addr"]) + int(code["sh_size"])
    rows = []
    previous_end = text_start
    for index in range(count):
        start_delta, ptr_delta = struct.unpack_from("<ii", hdr, 12 + index * 8)
        pc, fde_pointer = base + start_delta, base + ptr_delta
        offset = fde_pointer - frame_base
        if offset < 0 or offset + 16 > len(body):
            raise ValueError("FDE pointer outside section: " + str(index))
        length, cie_rel, init_delta, span = struct.unpack_from("<IIiI", body, offset)
        if length < 12 or span <= 0 or pc != fde_pointer + 8 + init_delta:
            raise ValueError("FDE PC/span mismatch: " + str(index))
        if pc % 4 or span % 4 or pc < previous_end or pc < text_start or pc + span > text_end:
            raise ValueError("FDE overlaps/outside executable .text: " + str(index))
        rows.append((pc, span, fde_pointer))
        previous_end = pc + span
    return rows

def run(elf_path, out):
    expected = HASHES[elf_path.name]
    actual = sha(elf_path)
    if expected != actual:
        raise ValueError("Wrong source ELF: " + actual)
    warning = ""
    with elf_path.open("rb") as source:
        elf = ELFFile(source)
        if elf.elfclass != 64 or elf["e_machine"] != "EM_AARCH64":
            raise ValueError("Not ELF64 AArch64")
        try:
            rows = validated_fdes(elf)
        except ValueError as exc:
            # Preserve the failure explicitly. No fabricated FDE entries.
            rows = []
            warning = str(exc)
    out.mkdir(parents=True, exist_ok=True)
    with gzip.open(out / "fde_ranges.csv.gz", "wt", encoding="utf-8", newline="") as dest:
        writer = csv.writer(dest)
        writer.writerow(["index", "entry_rva", "length_bytes", "end_exclusive", "fde_rva"])
        for i, (pc, size, ptr) in enumerate(rows):
            writer.writerow([i, f"0x{pc:X}", size, f"0x{pc+size:X}", f"0x{ptr:X}"])
    summary = {"source": elf_path.name, "sha256": actual,
               "fde_count": len(rows), "fde_total_bytes": sum(x[1] for x in rows),
               "status": "VALIDATED" if rows else "NO_VALIDATED_FDE",
               "warning": warning,
               "note": "No FDE means only Ghidra's normal function discovery will be used"}
    (out / "fde_manifest.json").write_text(json.dumps(summary, indent=2) + "\n", encoding="utf-8")
    print(json.dumps(summary))
    return summary

if __name__ == "__main__":
    p = argparse.ArgumentParser()
    p.add_argument("--elf", type=Path, required=True)
    p.add_argument("--out", type=Path, required=True)
    x = p.parse_args()
    run(x.elf, x.out)
