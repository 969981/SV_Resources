"""Synthetic AArch64 ELF image tests; never import third-party game code."""
from __future__ import annotations
import hashlib
import importlib.util
from pathlib import Path
import struct
import tempfile
import unittest

SOURCE = Path(__file__).resolve().parents[1] / "scripts" / "Audit-SV400-LuaVM-ELF.py"
SPEC = importlib.util.spec_from_file_location("sv400_lua_vm_elf_audit", SOURCE)
mod = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(mod)


def fake_elf():
    data=bytearray(b"\x00"*0x240)
    data[:4]=b"\x7fELF"
    data[4]=2
    data[5]=1
    struct.pack_into("<H",data,18,183)
    struct.pack_into("<Q",data,32,0x40)
    struct.pack_into("<H",data,54,56)
    struct.pack_into("<H",data,56,1)
    struct.pack_into("<IIQQQQQQ",data,0x40,1,4,0x100,0x710000,0,0x100,0x100,0x1000)
    data[0x112:0x112+12]=b"luaV_execute"
    data[0x1A0:0x1A0+10]=b"lua_sethoo"
    return bytes(data)


class ELFPreflightTests(unittest.TestCase):
    def test_exact_segment_file_offset_to_vaddr(self):
        data=fake_elf()
        segs=mod.segments_from_elf(data)
        self.assertEqual(len(segs),1)
        self.assertEqual(mod.elf_vaddr(segs,0x112),0x710012)
        self.assertIsNone(mod.elf_vaddr(segs,0x220))

    def test_synthetic_named_string_not_promoted_to_vm_pc(self):
        data=fake_elf()
        with tempfile.TemporaryDirectory() as td:
            path=Path(td)/"fake.elf"
            path.write_bytes(data)
            result=mod.audit(path,hashlib.sha256(data).hexdigest())
            self.assertEqual(result["status"],"STATIC_IMAGE_STRING_PREFLIGHT_ONLY")
            self.assertEqual(result["candidate_dispatch_pc"],None)
            self.assertFalse(result["runtime_vm_attached"])
            matches=[row for row in result["ascii_markers_bounded"]
                     if row["token"]=="luaV_execute"]
            self.assertEqual(len(matches),1)
            self.assertEqual(matches[0]["elf_vaddr"],0x710012)
            self.assertFalse(matches[0]["executable_segment"])

    def test_mismatch_sha_blocks(self):
        with tempfile.TemporaryDirectory() as td:
            path=Path(td)/"fake.elf"
            path.write_bytes(fake_elf())
            with self.assertRaisesRegex(ValueError,"SHA-256"):
                mod.audit(path,"0"*64)

    def test_non_arm64_elf_rejected(self):
        data=bytearray(fake_elf())
        struct.pack_into("<H",data,18,62)
        with self.assertRaisesRegex(ValueError,"AArch64"):
            mod.segments_from_elf(data)


if __name__=="__main__":
    unittest.main()
