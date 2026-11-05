"""R4 native reference-fingerprint regression using synthetic FlatBuffers."""
import hashlib
from pathlib import Path
import sqlite3
import sys
import tempfile
import unittest
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'scripts/resource_pipeline'))
sys.path.insert(0, str(Path(__file__).resolve().parent))
import r34
from test_sv_native import model_bytes, empty_mesh, skeleton_bytes, material_bytes, buffer_bytes, anim_bytes


class IntegrationTests(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        self.addCleanup(self.tmp.cleanup)
        self.root = Path(self.tmp.name) / 'trpfs'
        (self.root / 'virtual/pokemon/demo').mkdir(parents=True)
        self.conn = sqlite3.connect(':memory:')
        self.addCleanup(self.conn.close)
        self.conn.executescript('''
        CREATE TABLE raw_files (id INTEGER PRIMARY KEY,virtual_path TEXT,sha256_recorded TEXT,available INTEGER,extract_status TEXT);
        CREATE TABLE conversion_jobs (id INTEGER PRIMARY KEY,raw_file_id INTEGER,stage TEXT,fingerprint TEXT UNIQUE,status TEXT,updated_utc TEXT,error_message TEXT);
        CREATE TABLE resource_assets (id INTEGER PRIMARY KEY,raw_file_id INTEGER,asset_kind TEXT,output_path TEXT,sha256 TEXT,status TEXT,updated_utc TEXT,UNIQUE(raw_file_id,asset_kind,output_path));
        ''')
        self.sources = [('obj.trmdl', model_bytes()), ('obj.trmsh', empty_mesh()),
                        ('obj.trskl', skeleton_bytes()), ('obj.trmtr', material_bytes()),
                        ('obj.trmbf', buffer_bytes()), ('anim.tranm', anim_bytes())]
        for idx, (name, content) in enumerate(self.sources, 1):
            source = self.root / 'virtual/pokemon/demo' / name
            source.write_bytes(content)
            self.conn.execute('INSERT INTO raw_files VALUES(?,?,?,?,?)',
                              (idx, 'pokemon/demo/' + name, hashlib.sha256(content).hexdigest().upper(), 1, 'OK'))
        self.conn.commit()
        self.schema = Path(self.tmp.name) / 'schema.sql'
        self.schema.write_text('schema-version-1', encoding='utf-8')

    def get_tasks(self):
        return {task['path']: task for task in r34.load_tasks(self.conn, self.root, self.schema, 'converter-version', '')}

    def test_native_refs_feed_fingerprint_and_audit(self):
        tasks = self.get_tasks()
        model = tasks['pokemon/demo/obj.trmdl']
        animation = tasks['pokemon/demo/anim.tranm']
        self.assertEqual(len(model['spec']['inputs']), 5)
        self.assertEqual(len(animation['spec']['inputs']), 6)
        self.assertFalse(model['spec']['native_evidence_warnings'])
        self.assertEqual(r34.native_audit(self.root, model)['evidence']['checks']['model_dependencies'], 'PASS')
        evidence = r34.native_audit(self.root, animation)['evidence']['checks']['animation_binding']
        self.assertEqual(evidence['status'], 'PASS')
        mat = self.root / 'virtual/pokemon/demo/obj.trmtr'
        mat.write_bytes(material_bytes() + b'\x00')
        self.conn.execute('UPDATE raw_files SET sha256_recorded=? WHERE virtual_path=?',
                          (r34.sha256(mat), 'pokemon/demo/obj.trmtr'))
        self.conn.commit()
        changed = self.get_tasks()
        self.assertNotEqual(changed[model['path']]['fingerprint'], model['fingerprint'])
        self.assertNotEqual(changed[animation['path']]['fingerprint'], animation['fingerprint'])


if __name__ == '__main__':
    unittest.main()
