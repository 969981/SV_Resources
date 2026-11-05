"""Native FlatBuffers reader unit tests. Constructed fixtures are NOT game data."""
from pathlib import Path
import hashlib
import json
import struct
import sys
import tempfile
import unittest
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'scripts/resource_pipeline'))
import native_sv as sv


class MakeFB:
    def __init__(self):
        self.b = bytearray(4)
        self.root = None

    def pad(self, multiple=4):
        self.b.extend(b'\x00' * (-len(self.b) % multiple))

    def table(self, fields):
        # Each field in a deliberately simple synthetic table has a 4-byte slot.
        self.pad(4)
        count = max(fields, default=-1) + 1
        vt = len(self.b)
        size = 4 + count * 2
        self.b.extend(struct.pack('<HH', size, 4 + count * 4))
        self.b.extend(b''.join(struct.pack('<H', 4 + 4 * i if i in fields else 0) for i in range(count)))
        self.pad(4)
        obj = len(self.b)
        self.b.extend(struct.pack('<i', obj - vt))
        self.b.extend(b'\0' * (4 * count))
        if self.root is None:
            self.root = obj
        return [obj + 4 + 4 * i for i in range(count)]

    def ref(self, slot, target):
        assert target > slot
        struct.pack_into('<I', self.b, slot, target - slot)

    def value(self, slot, val, fmt='I'):
        struct.pack_into('<' + fmt, self.b, slot, val)

    def string(self, s):
        self.pad(4)
        p = len(self.b)
        data = s.encode('utf-8')
        self.b.extend(struct.pack('<I', len(data)) + data + b'\0')
        return p

    def vector(self, count):
        self.pad(4)
        p = len(self.b)
        self.b.extend(struct.pack('<I', count) + bytes(4 * count))
        return [p + 4 + 4 * i for i in range(count)]

    def finish(self):
        struct.pack_into('<I', self.b, 0, self.root)
        return bytes(self.b)


def model_bytes():
    b = MakeFB()
    root = b.table({1, 2, 3})
    meshes = b.vector(1)
    b.ref(root[1], meshes[0] - 4)
    mesh = b.table({0})
    b.ref(meshes[0], mesh[0] - 4)
    b.ref(mesh[0], b.string('obj.trmsh'))
    skeleton = b.table({0})
    b.ref(root[2], skeleton[0] - 4)
    b.ref(skeleton[0], b.string('obj.trskl'))
    materials = b.vector(1)
    b.ref(root[3], materials[0] - 4)
    b.ref(materials[0], b.string('obj.trmtr'))
    return b.finish()


def empty_mesh():
    b = MakeFB()
    root = b.table({1, 2})
    vec = b.vector(1)
    b.ref(root[1], vec[0] - 4)
    shape = b.table({0, 4})
    b.ref(vec[0], shape[0] - 4)
    b.ref(shape[0], b.string('Body'))
    material_array = b.vector(1)
    b.ref(shape[4], material_array[0] - 4)
    material = b.table({3})
    b.ref(material_array[0], material[0] - 4)
    b.ref(material[3], b.string('body_mat'))
    b.ref(root[2], b.string('obj.trmbf'))
    return b.finish()


def skeleton_bytes():
    b = MakeFB()
    root = b.table({1})
    vec = b.vector(1)
    b.ref(root[1], vec[0] - 4)
    bone = b.table({0, 4})
    b.ref(vec[0], bone[0] - 4)
    b.ref(bone[0], b.string('Root'))
    b.value(bone[4], -1, 'i')
    return b.finish()


def material_bytes():
    b = MakeFB()
    root = b.table({1})
    vec = b.vector(1)
    b.ref(root[1], vec[0] - 4)
    mat = b.table({0})
    b.ref(vec[0], mat[0] - 4)
    b.ref(mat[0], b.string('body_mat'))
    return b.finish()


def buffer_bytes():
    b = MakeFB()
    root = b.table({1})
    vec = b.vector(1)
    b.ref(root[1], vec[0] - 4)
    t = b.table({})
    b.ref(vec[0], b.root if False else len(b.b) - 4)
    return b.finish()


def anim_bytes():
    b = MakeFB()
    root = b.table({0, 1})
    info = b.table({0, 1, 2})
    b.ref(root[0], info[0] - 4)
    b.value(info[1], 60)
    b.value(info[2], 30)
    track_parent = b.table({0})
    b.ref(root[1], track_parent[0] - 4)
    vec = b.vector(1)
    b.ref(track_parent[0], vec[0] - 4)
    track = b.table({0})
    b.ref(vec[0], track[0] - 4)
    b.ref(track[0], b.string('Root'))
    return b.finish()


class Tests(unittest.TestCase):
    def test_native_flatbuffers_model_reader(self):
        d = sv.parse_trmdl(sv.FB(model_bytes()))
        self.assertEqual(d['mesh_references'], ['obj.trmsh'])
        self.assertEqual(d['material_references'], ['obj.trmtr'])
        self.assertEqual(d['skeleton_reference'], 'obj.trskl')
        with self.assertRaises(sv.NativeError):
            sv.FB(model_bytes()[:13])

    def test_track_reading_and_rejection(self):
        result = sv.parse_tranm(sv.FB(anim_bytes()))
        self.assertEqual(result['frame_count'], 60)
        self.assertEqual(result['tracks'][0]['bone_name'], 'Root')
        with self.assertRaises(sv.NativeError):
            sv.FB(b'\xFF' * 16)

    def test_real_cross_file_links_on_constructed_data(self):
        with tempfile.TemporaryDirectory() as t:
            root = Path(t)
            x = root / 'virtual/pokemon/demo'
            x.mkdir(parents=True)
            for name, data in [('obj.trmdl', model_bytes()), ('obj.trmsh', empty_mesh()),
                               ('obj.trskl', skeleton_bytes()), ('obj.trmtr', material_bytes()),
                               ('anim.tranm', anim_bytes())]:
                (x / name).write_bytes(data)
            report = sv.audit_bundle(root, 'pokemon/demo/obj.trmdl', 'pokemon/demo/anim.tranm')
            self.assertEqual(report['checks']['model_dependencies'], 'INCOMPLETE')  # missing trmbf
            self.assertEqual(report['checks']['materials']['status'], 'PASS')
            self.assertEqual(report['checks']['animation_binding']['status'], 'PASS')
            self.assertEqual(report['checks']['skeleton']['nodes'], 1)
            self.assertEqual(len(report['linked']), 3)
            (x / 'obj.trmbf').write_bytes(b'\0' * 16)
            self.assertEqual(sv.resolve_ref(root, 'pokemon/demo/obj.trmdl', '../../../../../etc/passwd')['status'], 'REJECTED_TRAVERSAL')

    def test_no_path_escape_or_invalid_vtable(self):
        with tempfile.TemporaryDirectory() as t:
            root = Path(t)
            (root / 'virtual').mkdir()
            with self.assertRaises(sv.NativeError):
                sv.check_virtual(root, '../../etc/shadow')
            with self.assertRaises(sv.NativeError):
                sv.FB(bytes(28))


if __name__ == '__main__':
    unittest.main()
