#!/usr/bin/env python3
"""Reproducibly unpack Scarlet/Violet 4.0.0 NPDM into native blocks and JSON.

All integer offsets are little-endian; ACI offsets are relative to ACI0,
ACID section offsets are relative to the beginning of its RSA signature.
This is structure parsing, NOT RSA verification or permission interpretation.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import struct
from pathlib import Path

NAMES = ("scarlet_main.npdm", "violet_main.npdm")


def num(data: bytes, offset: int, fmt: str = "<I") -> int:
    size = struct.calcsize(fmt)
    if offset < 0 or offset + size > len(data):
        raise ValueError(f"Out of bounds integer @ 0x{offset:X}")
    return struct.unpack_from(fmt, data, offset)[0]


def block(data: bytes, offset: int, size: int, label: str) -> bytes:
    if offset < 0 or size < 0 or offset + size > len(data):
        raise ValueError(f"{label} outside NPDM: offset=0x{offset:X}, size=0x{size:X}")
    return data[offset:offset + size]


def cstr(data: bytes) -> str:
    return data.split(b"\0", 1)[0].decode("ascii", "replace")


def section_map(data: bytes, base: int, length: int, pairs: dict) -> dict:
    result = {}
    for label, (relative_at, size_at) in pairs.items():
        off = num(data, relative_at)
        size = num(data, size_at)
        payload = block(data, base + off, size, label)
        if off + size > length:
            raise ValueError(f"{label} exceeds its parent section")
        result[label] = {
            "offsetRelative": off, "offsetAbsolute": base + off,
            "size": size, "sha256": hashlib.sha256(payload).hexdigest(),
        }
    return result


def parse(data: bytes) -> tuple[dict, dict, dict, dict[str, bytes]]:
    if len(data) < 0x80 or data[:4] != b"META":
        raise ValueError("Not a Switch META NPDM")
    aci_off, aci_size = num(data, 0x70), num(data, 0x74)
    acid_off, acid_size = num(data, 0x78), num(data, 0x7C)
    meta_bytes = data[:0x80]
    aci_bytes = block(data, aci_off, aci_size, "ACI0")
    acid_bytes = block(data, acid_off, acid_size, "ACID")
    if aci_bytes[:4] != b"ACI0":
        raise ValueError("ACI0 magic mismatch")
    if acid_size < 0x240 or acid_bytes[0x200:0x204] != b"ACID":
        raise ValueError("ACID magic mismatch")

    raw = {"META.bin": meta_bytes, "ACI0.bin": aci_bytes, "ACID.bin": acid_bytes}

    meta = {
        "magic": "META",
        "headerSize": 128,
        "signatureKeyGeneration": num(data, 4),
        "flags0Hex": f"0x{data[0xC]:02X}",
        "flags1Hex": f"0x{data[0xD]:02X}",
        "mainThreadPriority": data[0xE],
        "mainThreadCoreNumber": data[0xF],
        "systemResourceSize": num(data, 0x14),
        "version": num(data, 0x18),
        "mainThreadStackSize": num(data, 0x1C),
        "name": cstr(data[0x20:0x30]),
        "productCode": cstr(data[0x30:0x40]),
        "aci0": {"offset": aci_off, "size": aci_size},
        "acid": {"offset": acid_off, "size": acid_size},
    }
    program_id = num(data, aci_off + 0x10, "<Q")
    aci_subsections = section_map(data, aci_off, aci_size, {
        "FAC": (aci_off + 0x20, aci_off + 0x24),
        "SAC": (aci_off + 0x28, aci_off + 0x2C),
        "KC": (aci_off + 0x30, aci_off + 0x34),
    })
    for name, entry in aci_subsections.items():
        raw[f"ACI0_{name}.bin"] = block(
            data, entry["offsetAbsolute"], entry["size"], name)
    aci = {
        "magic": "ACI0",
        "programIdHex": f"{program_id:016X}",
        "sections": aci_subsections,
        "kernelCapabilityWordsHex": [
            f"0x{num(data, at):08X}" for at in
            range(aci_subsections["KC"]["offsetAbsolute"],
                  aci_subsections["KC"]["offsetAbsolute"] + aci_subsections["KC"]["size"], 4)
        ],
    }
    aci_kc = aci_subsections["KC"]["size"]
    if aci_kc % 4:
        raise ValueError("ACI0 kernel capability size is not a multiple of four")

    # Signed ACID is deliberately not signature-verified here.
    descriptor_size = num(data, acid_off + 0x204)
    acid_subsections = section_map(data, acid_off, acid_size, {
        "FAC": (acid_off + 0x220, acid_off + 0x224),
        "SAC": (acid_off + 0x228, acid_off + 0x22C),
        "KC": (acid_off + 0x230, acid_off + 0x234),
    })
    for name, entry in acid_subsections.items():
        raw[f"ACID_{name}.bin"] = block(
            data, entry["offsetAbsolute"], entry["size"], name)
    acid = {
        "magic": "ACID",
        "rsaSignatureSha256": hashlib.sha256(acid_bytes[:0x100]).hexdigest(),
        "rsaPublicKeySha256": hashlib.sha256(acid_bytes[0x100:0x200]).hexdigest(),
        "descriptorSizeRaw": descriptor_size,
        "descriptorVersion": data[acid_off + 0x208],
        "descriptorVersion2": data[acid_off + 0x209],
        "flagsHex": f"0x{num(data, acid_off + 0x20C):08X}",
        "programIdMinHex": f"{num(data, acid_off + 0x210, '<Q'):016X}",
        "programIdMaxHex": f"{num(data, acid_off + 0x218, '<Q'):016X}",
        "sections": acid_subsections,
        "signatureVerified": False,
    }
    if not (num(data, acid_off + 0x210, "<Q") <= program_id <=
            num(data, acid_off + 0x218, "<Q")):
        raise ValueError("ACI0 program ID outside ACID permitted range")
    return meta, aci, acid, raw


def save(root: Path, name: str) -> dict:
    source = root / "4.0.0" / "0" / name
    data = source.read_bytes()
    meta, aci, acid, raw = parse(data)
    dest = root / "Unpack" / "4.0.0" / "exefs" / name
    dest.mkdir(parents=True, exist_ok=True)
    output = {}
    for filename, payload in raw.items():
        path = dest / filename
        path.write_bytes(payload)
        output[filename] = {
            "size": len(payload), "sha256": hashlib.sha256(payload).hexdigest()
        }
    for filename, value in (("META.json", meta), ("ACI0.json", aci), ("ACID.json", acid)):
        payload = (json.dumps(value, ensure_ascii=False, indent=2) + "\n").encode("utf-8")
        (dest / filename).write_bytes(payload)
        output[filename] = {
            "size": len(payload), "sha256": hashlib.sha256(payload).hexdigest()
        }
    info = {
        "status": "CONFIRMED",
        "scope": "NPDM structural extraction only, not RSA signature verification",
        "version": "4.0.0",
        "sourcePath": source.relative_to(root).as_posix(),
        "sourceSize": len(data),
        "sourceSha256": hashlib.sha256(data).hexdigest(),
        "programIdHex": aci["programIdHex"],
        "sections": output,
    }
    (dest / "provenance.json").write_text(
        json.dumps(info, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    return info


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--repo-root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--names", nargs="+", choices=NAMES, default=list(NAMES))
    args = parser.parse_args()
    for name in args.names:
        print(json.dumps(save(args.repo_root.resolve(), name), ensure_ascii=False))


if __name__ == "__main__":
    main()
