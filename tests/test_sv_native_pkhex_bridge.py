"""No-ROM unit tests for original SV 4.0.0 native -> pinned PKHeX overlay bridge."""
from pathlib import Path
import importlib.util
import hashlib
import json
import struct
import tempfile
import unittest

ROOT=Path(__file__).resolve().parents[1]
SPEC=importlib.util.spec_from_file_location(
    "sv_native_bridge",ROOT/"scripts"/"Export-SV-Native-To-PKHeX-Database.py")
M=importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(M)

def sha(blob):
    return hashlib.sha256(blob).hexdigest().upper()

class BridgeTests(unittest.TestCase):
    def test_gen9_record_parsers_are_real_and_distinct(self):
        audit=M.audit_module()
        # Mini BinLinker: header "sv", one area offset[12,24], loc 156 + one slot.
        wild=b"sv"+struct.pack("<HIIHHHBBBBBB",1,12,24,156,158,214,0,1,12,18,0,1)
        # 4 header bytes + 2*4 offsets + 4 area header + 8 slot = 24
        self.assertEqual(len(wild),24)
        rows=audit.read_table("wild",wild)
        self.assertEqual(len(rows),1)
        self.assertEqual(rows[0]["cross_from_id"],158)
        self.assertEqual(rows[0]["species_national"],214)
        fixed=struct.pack("<HBBBBBBHHHHBBBB",214,0,55,3,2,0,1,1,2,3,4,156,158,0,0)
        self.assertEqual(len(fixed),20)
        self.assertEqual(audit.read_table("fixed",fixed)[0]["location1"],158)
        raid=struct.pack("<HBBBBBBHHHHBBBBhh",214,0,2,1,4,1,55,1,2,3,4,2,0,6,50,0,99)
        self.assertEqual(len(raid),24)
        self.assertEqual(audit.read_table("raid_kitakami",raid)[0]["stars"],6)

    def test_semantic_key_excludes_raw_list_order_only(self):
        a={"area_index":3,"slot_index":4,"location_id":156,"species_national":214}
        b=dict(a,area_index=14,slot_index=7)
        self.assertEqual(M.canonical(a,"wild"),M.canonical(b,"wild"))
        c=dict(b,location_id=158)
        self.assertNotEqual(M.canonical(a,"wild"),M.canonical(c,"wild"))

    def test_region_fallback_not_serebii_species_proof(self):
        self.assertEqual(M.region(156),"Kitakami")
        self.assertEqual(M.region(196),"Blueberry")
        self.assertEqual(M.region(6),"Paldea")
        self.assertEqual(M.region(666),"Unknown")
        self.assertTrue(M.REGION_PAGES["Kitakami"].endswith("/kitakami/"))

    def test_original_61_plus_223_manifest_replays_success(self):
        with tempfile.TemporaryDirectory() as root:
            base=Path(root)
            natives=base/"native"
            natives.mkdir()
            source=[]
            col=[]
            used=[]
            for group,total,prefix,status in (
                (source,61,"raw","EXTRACTED_NATIVE_SHA256_VERIFIED"),
                (col,223,"collision","TRCOL_ORIGINAL_SHA256_VERIFIED")
            ):
                for i in range(total):
                    suffix=".trcol" if prefix=="collision" else ".bin"
                    name=f"{prefix}/{i:03d}{suffix}"
                    blob=name.encode()
                    item=dict(source_virtual_path=name,native_sha256=sha(blob),
                              native_bytes=len(blob),status=status)
                    group.append(item)
                    used.append(dict(path=name,sha256=sha(blob),bytes=len(blob),
                                     verifiedByOriginalM2Manifest=True))
            s=base/"raw.json"
            c=base/"col.json"
            s.write_text(json.dumps(dict(status="61_NATIVE_TARGETS_EXTRACTED_SHA256_VERIFIED",targets=source)))
            c.write_text(json.dumps(dict(status="TRCOL_ORIGINAL_SHA256_VERIFIED",
                source="SV-4.0.0-original-TRPFD-TRPFS",
                unique_trcol_paths=223,targets=col)))
            generated=[]
            for name,_ in M.FILES.values():
                blob=name.encode()
                (natives/name).write_bytes(blob)
                generated.append(dict(name=name,bytes=len(blob),sha256=sha(blob)))
            build=dict(status="GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES",
                       collisionBlocker=None,unverifiedExtraFiles=[],originalTrcolEntries=223,
                       sourceFilesActuallyRead=used,generated=generated)
            (natives/"native-encounter-build.json").write_text(json.dumps(build))
            report=M.attest(natives,s,c)
            self.assertEqual(report["original_source_entries"],61)
            self.assertEqual(report["original_collision_entries"],223)
            self.assertEqual(report["consumed_input_files"],284)
            # A build manifest can claim any status; actual file bytes and SHA always win.
            (natives/M.FILES["wild"][0]).write_bytes(b"BAD")
            with self.assertRaises(ValueError):
                M.attest(natives,s,c)

    def test_rejects_unverified_havok(self):
        with tempfile.TemporaryDirectory() as root:
            base=Path(root)
            native=base/"native";native.mkdir()
            (native/"native-encounter-build.json").write_text(json.dumps(dict(
                status="GENERATED_FROM_4_0_0_NATIVE_M2_VERIFIED_SOURCES",
                collisionBlocker=None,unverifiedExtraFiles=[],originalTrcolEntries=222)))
            s=base/"source.json";c=base/"collision.json"
            s.write_text("{}");c.write_text("{}")
            with self.assertRaises(ValueError):
                M.attest(native,s,c)

    def test_reference_pin_has_expected_five_names(self):
        self.assertEqual(len(M.FILES),5)
        self.assertTrue(all(len(h)==64 for _,h in M.FILES.values()))
        self.assertEqual(M.PIN,"0660d1e1f4924b8478daec73281bb8071a82ad19")

if __name__=="__main__":
    unittest.main()
