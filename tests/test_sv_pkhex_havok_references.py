"""Synthetic FlatBuffer tests for exact native SV TRSCN -> Havok TRCOL references."""
import importlib.util
import struct
from pathlib import Path
import unittest

SCRIPT=Path(__file__).resolve().parents[1]/"scripts/Resolve-SV-PKHeX-Havok-References.py"
spec=importlib.util.spec_from_file_location("sv_havok_locator",SCRIPT)
lib=importlib.util.module_from_spec(spec)
spec.loader.exec_module(lib)


def insert_table(buf, pos, vpos, offsets, obj_size):
    struct.pack_into("<i",buf,pos,pos-vpos)
    struct.pack_into("<HH",buf,vpos,4+2*len(offsets),obj_size)
    for i,offset in enumerate(offsets):
        struct.pack_into("<H",buf,vpos+4+2*i,offset)


def set_ref(buf,ptr,target):
    assert target>ptr
    struct.pack_into("<I",buf,ptr,target-ptr)


def string(buf,pos,name):
    raw=name.encode("utf-8")
    struct.pack_into("<I",buf,pos,len(raw))
    buf[pos+4:pos+4+len(raw)]=raw
    buf[pos+4+len(raw)]=0


def sample_component(path="world/col/test.trcol",shape=4):
    buf=bytearray(512)
    struct.pack_into("<I",buf,0,64)
    insert_table(buf,64,48,[4,8],12)
    buf[68]=1  # ComponentUnion CollisionComponent
    set_ref(buf,72,128)
    insert_table(buf,128,112,[4,8],12)
    buf[132]=shape
    set_ref(buf,136,192)
    insert_table(buf,192,176,[4],8)
    set_ref(buf,196,256)
    string(buf,256,path)
    return bytes(buf)


def sample_scene(component):
    # Template objects=[TemplateEntry {SubObjects=[CollisionEntry]}]
    raw=bytearray(1600)
    struct.pack_into("<I",raw,0,64)
    insert_table(raw,64,40,[0,0,0,0,4],8)
    set_ref(raw,68,160)
    struct.pack_into("<I",raw,160,1)
    set_ref(raw,164,200)
    insert_table(raw,200,184,[0,0,4],8)
    set_ref(raw,204,240)
    struct.pack_into("<I",raw,240,1)
    set_ref(raw,244,280)
    insert_table(raw,280,264,[4,8,0],12)
    set_ref(raw,284,360)
    set_ref(raw,288,400)
    string(raw,360,"trinity_CollisionComponent")
    struct.pack_into("<I",raw,400,len(component))
    raw[404:404+len(component)]=component
    return bytes(raw)


class Gen9HavokNativeTests(unittest.TestCase):
    def test_exact_havok_union(self):
        kind,path=lib.decode_component(sample_component())
        self.assertEqual(kind,"Havok")
        self.assertEqual(path,"world/col/test.trcol")

    def test_box_has_no_trcol_reference(self):
        self.assertEqual(lib.decode_component(sample_component(shape=2)),("Box",None))

    def test_scene_scans_only_first_collision_child(self):
        count,found=lib.scene_havok_references(sample_scene(sample_component()))
        self.assertEqual(count["scene_objects"],1)
        self.assertEqual(count["collision_objects"],1)
        self.assertEqual(count["havok_objects"],1)
        self.assertEqual(found,[{"scene_object_index":0,"trcol_path":"world/col/test.trcol"}])

    def test_scene_box_does_not_guess_trcol(self):
        count,found=lib.scene_havok_references(sample_scene(sample_component(shape=2)))
        self.assertEqual(count["box_objects"],1)
        self.assertEqual(found,[])

    def test_bad_schema_or_bounds_fails_closed(self):
        with self.assertRaises(ValueError):
            lib.decode_component(b"no")
        raw=bytearray(sample_component())
        struct.pack_into("<I",raw,0,5000)
        with self.assertRaises(ValueError):
            lib.decode_component(bytes(raw))
        raw=bytearray(sample_component())
        raw[132]=99
        with self.assertRaises(ValueError):
            lib.decode_component(bytes(raw))

    def test_reject_unsafe_native_trcol_strings(self):
        for path in ("","../bad","C:/x","/world/col","x//bad",r"world\abc.trcol"):
            with self.assertRaises(ValueError):
                lib.normalize(path)
        self.assertEqual(lib.normalize("World/A.TRCol"),"world/a.trcol")


if __name__=="__main__":
    unittest.main()
