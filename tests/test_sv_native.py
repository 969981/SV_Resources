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

    def rawvector(self, item_bytes, count):
        self.pad(4)
        p = len(self.b)
        self.b.extend(struct.pack('<I', count) + bytes(item_bytes))
        return p

    def bytevector(self, data):
        self.pad(4)
        p = len(self.b)
        self.b.extend(struct.pack('<I', len(data)) + bytes(data))
        return p

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
    buffer = b.table({0, 1})
    b.ref(vec[0], buffer[0] - 4)
    indices = b.vector(1)
    b.ref(buffer[0], indices[0] - 4)
    index = b.table({0})
    b.ref(indices[0], index[0] - 4)
    data = b.bytevector(bytes([0, 1, 2]))
    b.ref(index[0], data)
    vertices = b.vector(1)
    b.ref(buffer[1], vertices[0] - 4)
    vertex = b.table({0})
    b.ref(vertices[0], vertex[0] - 4)
    data2 = b.bytevector(bytes(range(12)))
    b.ref(vertex[0], data2)
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


def framed_animation_bytes():
    b = MakeFB()
    root = b.table({0, 1})
    info = b.table({1, 2})
    b.ref(root[0], info[0] - 4)
    b.value(info[1], 60)
    b.value(info[2], 30)
    anim = b.table({0})
    b.ref(root[1], anim[0] - 4)
    arr = b.vector(1)
    b.ref(anim[0], arr[0] - 4)
    track = b.table({0, 1, 2})
    b.ref(arr[0], track[0] - 4)
    b.ref(track[0], b.string('Root'))
    b.value(track[1], 3, 'B')
    channel = b.table({0, 1})
    b.ref(track[2], channel[0] - 4)
    frames = b.rawvector(struct.pack('<4H', 0, 2, 1, 1), 4)
    b.ref(channel[0], frames)
    positions = b.rawvector(bytes(12 * 4), 4)
    b.ref(channel[1], positions)
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
                               ('obj.trmbf', buffer_bytes()), ('anim.tranm', anim_bytes())]:
                (x / name).write_bytes(data)
            report = sv.audit_bundle(root, 'pokemon/demo/obj.trmdl', 'pokemon/demo/anim.tranm')
            self.assertEqual(report['checks']['model_dependencies'], 'PASS')
            self.assertEqual(report['checks']['materials']['status'], 'PASS')
            self.assertEqual(report['checks']['animation_binding']['status'], 'PASS')
            self.assertEqual(report['checks']['skeleton']['nodes'], 1)
            self.assertEqual(len(report['linked']), 4)
            self.assertEqual(report['checks']['geometry']['buffer_sets'], 1)
            self.assertEqual(sv.parse_trmbf(sv.FB(buffer_bytes()))['buffer_sets'][0]['vertex_buffer_sizes'][0], 12)
            self.assertEqual(sv.resolve_ref(root, 'pokemon/demo/obj.trmdl', '../../../../../etc/passwd')['status'], 'REJECTED_TRAVERSAL')

    def test_nonmonotonic_native_frame_order_is_not_fabricated(self):
        report = sv.parse_tranm(sv.FB(framed_animation_bytes()))
        scale = report['tracks'][0]['channels']['scale']
        self.assertEqual(scale['keyframes'], 4)
        self.assertEqual(scale['frame_order'], 'NON_MONOTONIC')
        self.assertEqual(scale['reverse_steps'], 1)
        self.assertEqual(scale['duplicate_steps'], 1)

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
