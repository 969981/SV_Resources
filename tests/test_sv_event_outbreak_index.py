"""No-ROM structural, source pin and bitmask tests for SV Gen9 event index."""
from pathlib import Path
import importlib.util
import sqlite3
import struct
import tempfile
import unittest

SCRIPT=Path(__file__).resolve().parents[1]/"scripts"/"Extend-SV-Encounter-Index.py"
SPEC=importlib.util.spec_from_file_location("sv_events", SCRIPT)
MOD=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(MOD)


class TestGen9Events(unittest.TestCase):
    def test_exact_source_record_counts(self):
        self.assertEqual(MOD.SOURCES["distribution_tera_raid"][1:3],(174,62))
        self.assertEqual(MOD.SOURCES["mighty_tera_raid"][1:3],(56,62))
        self.assertEqual(MOD.SOURCES["distribution_outbreak"][1:3],(12636,28))
        self.assertEqual(174*62,10788)
        self.assertEqual(56*62,3472)
        self.assertEqual(12636*28,353808)

    def test_git_object_hash_is_real_blob_hash(self):
        # 'test content' computed using git hash-object --stdin semantics
        import hashlib
        data=b"test content"
        self.assertEqual(MOD.git_blob_sha(data),
                         hashlib.sha1(b"blob 12\0test content").hexdigest())

    def test_62_byte_raid_csharp_offsets(self):
        raw=bytearray(62)
        struct.pack_into("<H",raw,0,214)
        raw[2:8] = bytes([1,3,4,5,1,75])
        struct.pack_into("<4H",raw,8,1,2,3,4)
        raw[0x10:0x14]=bytes([9,10,7,20])
        struct.pack_into("<16H",raw,0x14,*range(16))
        raw[0x34]=23
        struct.pack_into("<6b",raw,0x35,31,31,31,31,31,31)
        raw[0x3B:0x3E]=bytes([1,2,128])
        for kind in ("distribution_tera_raid","mighty_tera_raid"):
            rows=MOD.parse_event_raid(bytes(raw),kind)
            self.assertEqual(len(rows),1)
            r=rows[0]
            self.assertEqual((r["species_national"],r["level"],r["stars"]),(214,75,7))
            self.assertEqual(r["moves"],[1,2,3,4])
            self.assertEqual(r["gender_raw"],2)
            self.assertEqual(r["weight_stages"][2]["scarlet_total"],10)
            self.assertEqual(r["ivs_raw"],[31]*6)
        with self.assertRaises(ValueError):
            MOD.parse_event_raid(bytes(raw[:-1]),"mighty_tera_raid")

    def test_outbreak_mask_is_base_plus_bit_offset(self):
        raw=bytearray(28)
        struct.pack_into("<HBBBBBBBBBB",raw,0,23,0,1,12,31,255,3,1,10,200,0)
        raw[12]=156
        flags=(1<<0)|(1<<2)|(1<<39)
        raw[13:28]=flags.to_bytes(15,"little")
        r=MOD.parse_event_outbreak(raw)[0]
        self.assertEqual(r["allowed_locations"],[156,158,195])
        self.assertEqual(r["met_flags_hex"],f"{flags:030X}")
        self.assertEqual(MOD.region(195),"Blueberry")
        with self.assertRaises(ValueError):
            MOD.parse_event_outbreak(raw[:-1])

    def test_verify_existing_real_base_source(self):
        with tempfile.TemporaryDirectory() as d:
            c=sqlite3.connect(Path(d)/"test.db")
            c.executescript("""CREATE TABLE sources(
                table_key TEXT,pkhex_commit TEXT,templates INTEGER);
                CREATE TABLE encounters(id INTEGER PRIMARY KEY);""")
            for key,expected in (("wild",26861),("fixed",977),("raid_paldea",454),
                                 ("raid_kitakami",133),("raid_blueberry",113)):
                c.execute("INSERT INTO sources VALUES (?,?,?)",(key,MOD.PIN,expected))
            with self.assertRaises(ValueError):
                MOD.verify_base(c) # record count really must be populated
            c.close()

    def test_event_source_is_not_current_event_availability(self):
        self.assertIn("teraraidbattleevents",MOD.SEREBII_RAID)
        self.assertIn("massoutbreakevents",MOD.SEREBII_OUTBREAK)

if __name__=="__main__":
    unittest.main()
