"""Synthetic R3/R4 regression. These fixtures are NOT native SV conversions."""
import hashlib
import json
from pathlib import Path
import sqlite3
import struct
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'scripts/resource_pipeline'))
import r34


def make_glb(material=True, textured=True, malformed_uv=False):
    raw = b'\x00' * 24
    doc = {
        'asset': {'version': '2.0'}, 'buffers': [{'byteLength': len(raw)}],
        'bufferViews': [{'buffer': 0, 'byteOffset': 0, 'byteLength': len(raw)}],
        'accessors': [{'bufferView': 0, 'componentType': 5126, 'count': 1, 'type': 'VEC3'},
                      {'bufferView': 0, 'componentType': 5126, 'count': 1, 'type': 'VEC2'}],
        'meshes': [{'primitives': [{'attributes': {'POSITION': 0, **({} if malformed_uv else {'TEXCOORD_0': 1})},
                                   **({'material': 0} if material else {})}]}],
        'nodes': [{'mesh': 0}], 'scenes': [{'nodes': [0]}], 'scene': 0,
        'materials': [{'pbrMetallicRoughness': {'baseColorTexture': {'index': 0}}} if textured else {}],
        'textures': [{'source': 0}] if textured else [],
        'images': [{'bufferView': 0, 'mimeType': 'image/png'}] if textured else [],
    }
    encoded = json.dumps(doc).encode()
    encoded += b' ' * (-len(encoded) % 4)
    result = struct.pack('<4sII', b'glTF', 2, 12 + 8 + len(encoded) + 8 + len(raw))
    return result + struct.pack('<I4s', len(encoded), b'JSON') + encoded + struct.pack('<I4s', len(raw), b'BIN\x00') + raw


class R34Tests(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        self.addCleanup(self.tmp.cleanup)
        base = Path(self.tmp.name)
        self.root = base / 'data.trpfs'
        (self.root / 'virtual').mkdir(parents=True)
        (self.root / '_index').mkdir(parents=True)
        self.conn = sqlite3.connect(self.root / '_index/catalog.sqlite')
        self.addCleanup(self.conn.close)
        self.conn.executescript('''
        CREATE TABLE raw_files (id INTEGER PRIMARY KEY, virtual_path TEXT, sha256_recorded TEXT, available INTEGER, extract_status TEXT);
        CREATE TABLE conversion_jobs (id INTEGER PRIMARY KEY, raw_file_id INTEGER,stage TEXT,fingerprint TEXT UNIQUE,status TEXT,updated_utc TEXT,error_message TEXT);
        CREATE TABLE resource_assets (id INTEGER PRIMARY KEY,raw_file_id INTEGER,asset_kind TEXT,output_path TEXT,sha256 TEXT,status TEXT,updated_utc TEXT,UNIQUE(raw_file_id,asset_kind,output_path));
        ''')
        self.schema = base / 'schema.sql'
        self.schema.write_text('v1', encoding='utf-8')
        self.native = 'pokemon/demo/demo.trmdl'
        self.add_native(self.native, b'\x00native\x00', 1)
        self.add_native('pokemon/demo/demo.trmsh', b'\x01mesh\x00', 2)
        self.glb = base / 'fixture.glb'
        self.glb.write_bytes(make_glb())
        self.converter = base / 'adapter.py'
        self.converter.write_text('''import shutil, sys\nshutil.copyfile(sys.argv[1], sys.argv[2])\n''')
        self.command = f'{sys.executable} {self.converter} {self.glb} {{output}} {{input}}'

    def add_native(self, path, data, rid):
        source = self.root / 'virtual' / path
        source.parent.mkdir(parents=True, exist_ok=True)
        source.write_bytes(data)
        self.conn.execute('INSERT INTO raw_files VALUES(?,?,?,?,?)',
                          (rid, path, hashlib.sha256(data).hexdigest().upper(), 1, 'OK'))
        self.conn.commit()

    def tasks(self, cmd=None, version='converter1'):
        return list(r34.load_tasks(self.conn, self.root, self.schema, version,
                                   self.command if cmd is None else cmd))

    def test_glb_structure_and_reject_fake_or_wrong_uv(self):
        report = r34.glb_check(self.glb, 'model')
        self.assertEqual(report['verdict'], 'STRUCTURAL_PASS_VISUAL_PENDING')
        self.assertEqual(report['uv'], 'PASS')
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / 'wrong.glb'
            path.write_bytes(make_glb(malformed_uv=True))
            with self.assertRaisesRegex(ValueError, 'UV'):
                r34.glb_check(path, 'model')
            path.write_bytes(b'TRMDL' + bytes(64))
            with self.assertRaisesRegex(ValueError, 'GLB'):
                r34.glb_check(path, 'model')

    def test_plan_fingerprint_skip_tamper_and_promotion(self):
        (task,) = self.tasks()
        self.assertEqual(len(task['spec']['inputs']), 2)
        self.assertEqual(r34.run_one(self.conn, self.root, task, ''), 'BLOCKED')
        self.assertEqual(r34.run_one(self.conn, self.root, task, self.command), 'PENDING')
        converted = r34.output_path(self.root, task)
        self.assertTrue(converted.is_file())
        self.assertEqual(r34.run_one(self.conn, self.root, task, self.command), 'SKIPPED')
        self.assertFalse(r34.output_path(self.root, task, 'resources').exists())
        bad_review = Path(self.tmp.name) / 'review.json'
        bad_review.write_text(json.dumps({'reviewer': 'someone', 'fingerprint': 'wrong', 'checks': {}}))
        with self.assertRaises(ValueError):
            r34.promote(self.conn, self.root, task, bad_review)
        bad_review.write_text(json.dumps({
            'reviewer': 'human-verifier', 'fingerprint': task['fingerprint'],
            'output_sha256': r34.sha256(converted),
            'checks': {x: 'PASS' for x in ('materials', 'uv', 'lod', 'skeleton', 'animation', 'scene')}
        }))
        destination = r34.promote(self.conn, self.root, task, bad_review)
        self.assertTrue(destination.is_file())
        self.assertEqual(self.conn.execute('SELECT status FROM conversion_jobs WHERE fingerprint=?',
                                           (task['fingerprint'],)).fetchone()[0], 'OK')
        self.assertNotEqual(task['fingerprint'], self.tasks(version='converter2')[0]['fingerprint'])
        self.schema.write_text('v2')
        self.assertNotEqual(task['fingerprint'], self.tasks()[0]['fingerprint'])

    def test_retry_failure_and_modified_source_fingerprint(self):
        (task,) = self.tasks()
        bad_cmd = f'{sys.executable} {self.converter} missing.glb {{output}} {{input}}'
        self.assertEqual(r34.run_one(self.conn, self.root, task, bad_cmd), 'FAILED')
        self.assertEqual(r34.run_one(self.conn, self.root, task, self.command, retry_failed=True), 'PENDING')
        self.assertEqual(r34.run_one(self.conn, self.root, task, self.command, retry_failed=True), 'SKIPPED')
        companion = self.root / 'virtual/pokemon/demo/demo.trmsh'
        companion.write_bytes(b'changed')
        with self.assertRaisesRegex(ValueError, 'SHA mismatch'):
            self.tasks()
        self.conn.execute('UPDATE raw_files SET sha256_recorded=? WHERE id=2', (r34.sha256(companion),))
        self.conn.commit()
        self.assertNotEqual(task['fingerprint'], self.tasks()[0]['fingerprint'])

    def test_safe_paths_and_sharding(self):
        for v in ('../x.trmdl', '/tmp/x.trmdl', 'aa\\bb.trmdl'):
            with self.assertRaises(ValueError):
                r34.safe_relative(v)
        self.assertEqual(sum(len(list(r34.load_tasks(self.conn,self.root,self.schema,'v',self.command,i,3)))
                             for i in range(3)), 1)

if __name__ == '__main__':
    unittest.main()
