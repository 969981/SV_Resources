#!/usr/bin/env python3
"""R3 model/animation/scene adapter and R4 resumable fingerprint planner.

Stdlib only. No proprietary binary is guessed or silently published.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import os
from pathlib import Path, PurePosixPath
import shlex
import shutil
import sqlite3
import struct
import subprocess
import tempfile
from datetime import datetime, timezone

VERSION = 'r3r4.2'
try:
    from . import native_sv
except ImportError:
    import native_sv
ROOT = 'Unpack/4.0.0/romfs/arc/data.trpfs'
EXTENSIONS = {'.trmdl': 'model', '.tranm': 'animation', '.trscn': 'scene'}
COMPANIONS = {'.trmsh', '.trmbf', '.trskl', '.tracm', '.trmdl', '.tranm', '.trscn'}


def sha256(path):
    h = hashlib.sha256()
    with Path(path).open('rb') as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b''):
            h.update(chunk)
    return h.hexdigest().upper()


def dump(obj):
    return json.dumps(obj, ensure_ascii=False, sort_keys=True, separators=(',', ':'))


def atomic_json(path, obj):
    path.parent.mkdir(parents=True, exist_ok=True)
    with tempfile.NamedTemporaryFile(mode='w', encoding='utf-8', dir=path.parent, delete=False) as f:
        tmp = Path(f.name)
        f.write(json.dumps(obj, indent=2, ensure_ascii=False, sort_keys=True) + '\n')
    os.replace(tmp, path)


def safe_relative(name):
    if not name or '\\' in name or '\x00' in name:
        raise ValueError('Unsafe resource name')
    p = PurePosixPath(name)
    if p.is_absolute() or any(x in ('', '.', '..') for x in name.split('/')):
        raise ValueError('Unsafe resource path')
    return p


def asset(root, layer, name):
    return root / layer / safe_relative(name)


def glb_check(path, profile):
    """Check GLB v2 structure and glTF graph references; not a visual render test."""
    raw = path.read_bytes()
    if len(raw) < 20 or raw[:4] != b'glTF':
        raise ValueError('Expected binary GLB v2, not a renamed native container')
    version, length = struct.unpack_from('<II', raw, 4)
    if version != 2 or length != len(raw):
        raise ValueError('Invalid GLB version/declared length')
    pos, json_chunk, binary = 12, None, None
    while pos < len(raw):
        if pos + 8 > len(raw):
            raise ValueError('Incomplete GLB chunk')
        size, kind = struct.unpack_from('<II', raw, pos)
        pos += 8
        if size % 4 or pos + size > len(raw):
            raise ValueError('Invalid GLB chunk bounds/alignment')
        body = raw[pos:pos + size]
        pos += size
        if kind == 0x4E4F534A:
            if json_chunk is not None or pos != 20 + size:
                raise ValueError('Duplicate or non-first GLB JSON chunk')
            json_chunk = body
        elif kind == 0x004E4942:
            if binary is not None:
                raise ValueError('Duplicate GLB BIN chunk')
            binary = body
        else:
            raise ValueError('Unsupported GLB chunk')
    if json_chunk is None:
        raise ValueError('Missing JSON chunk')
    doc = json.loads(json_chunk.decode('utf-8').rstrip(' \x00'))
    if doc.get('asset', {}).get('version') != '2.0':
        raise ValueError('Not glTF 2.0')
    buffers = doc.get('buffers', [])
    if any('uri' in b for b in buffers) or len(buffers) > 1:
        raise ValueError('Only embedded GLB buffers supported')
    if buffers and (binary is None or buffers[0]['byteLength'] > len(binary)
                    or len(binary) - buffers[0]['byteLength'] > 3):
        raise ValueError('GLB BIN buffer missing/incorrect length')
    if binary is not None and not buffers:
        raise ValueError('Orphan GLB binary chunk')

    views = doc.get('bufferViews', [])
    for view in views:
        ix = view.get('buffer', 0)
        if ix >= len(buffers) or ix < 0 or view.get('byteOffset', 0) < 0 or view.get('byteLength', 0) < 0:
            raise ValueError('Invalid bufferView reference')
        if view.get('byteOffset', 0) + view['byteLength'] > buffers[ix]['byteLength']:
            raise ValueError('bufferView outside declared buffer')
    accessors = doc.get('accessors', [])
    for ac in accessors:
        if ac.get('count', 0) < 0:
            raise ValueError('Invalid accessor count')
        if 'bufferView' in ac and not 0 <= ac['bufferView'] < len(views):
            raise ValueError('Invalid accessor bufferView')
    materials = doc.get('materials', [])
    textures = doc.get('textures', [])
    images = doc.get('images', [])
    for image in images:
        if 'uri' in image or 'bufferView' not in image or not 0 <= image['bufferView'] < len(views):
            raise ValueError('External or invalid embedded image')
        if image.get('mimeType') not in ('image/png', 'image/jpeg', 'image/ktx2', 'image/webp'):
            raise ValueError('Unrecognized image MIME type')
    for tex in textures:
        if 'source' not in tex or not 0 <= tex['source'] < len(images):
            raise ValueError('Invalid texture image index')
    meshes = doc.get('meshes', [])
    nodes = doc.get('nodes', [])
    skins = doc.get('skins', [])
    animations = doc.get('animations', [])
    scene_defs = doc.get('scenes', [])
    primitive_count = 0
    textured_count = 0
    for mesh in meshes:
        if not mesh.get('primitives'):
            raise ValueError('Empty mesh')
        for prim in mesh['primitives']:
            primitive_count += 1
            attrs = prim.get('attributes', {})
            if not 0 <= attrs.get('POSITION', -1) < len(accessors):
                raise ValueError('Missing/invalid POSITION accessor')
            if 'indices' in prim and not 0 <= prim['indices'] < len(accessors):
                raise ValueError('Invalid indices accessor')
            mi = prim.get('material')
            if mi is None or not 0 <= mi < len(materials):
                raise ValueError('Primitive lacks valid material')
            mat = materials[mi]
            refs = []
            for field in (mat.get('pbrMetallicRoughness', {}).get('baseColorTexture'),
                          mat.get('pbrMetallicRoughness', {}).get('metallicRoughnessTexture'),
                          mat.get('normalTexture'), mat.get('occlusionTexture'), mat.get('emissiveTexture')):
                if field is not None:
                    refs.append(field)
            for ref in refs:
                if not 0 <= ref.get('index', -1) < len(textures):
                    raise ValueError('Invalid material texture index')
                if not 0 <= attrs.get('TEXCOORD_' + str(ref.get('texCoord', 0)), -1) < len(accessors):
                    raise ValueError('Textured primitive lacks referenced UV accessor')
            if refs:
                textured_count += 1
            if 'JOINTS_0' in attrs or 'WEIGHTS_0' in attrs:
                if not (0 <= attrs.get('JOINTS_0', -1) < len(accessors)
                        and 0 <= attrs.get('WEIGHTS_0', -1) < len(accessors)):
                    raise ValueError('Incomplete skinning vertex attributes')
    for node in nodes:
        for field, arr in (('mesh', meshes), ('skin', skins), ('camera', doc.get('cameras', []))):
            if field in node and not 0 <= node[field] < len(arr):
                raise ValueError('Invalid node ' + field)
        for child in node.get('children', []):
            if not 0 <= child < len(nodes):
                raise ValueError('Invalid child node')
    for scene in scene_defs:
        for n in scene.get('nodes', []):
            if not 0 <= n < len(nodes):
                raise ValueError('Invalid scene root')
    for skin in skins:
        if not skin.get('joints') or any(not 0 <= j < len(nodes) for j in skin['joints']):
            raise ValueError('Invalid skeleton joint list')
        if 'inverseBindMatrices' in skin and not 0 <= skin['inverseBindMatrices'] < len(accessors):
            raise ValueError('Invalid inverse bind matrices')
    for anim in animations:
        samplers = anim.get('samplers', [])
        if not samplers or not anim.get('channels'):
            raise ValueError('Empty animation')
        for smp in samplers:
            if any(not 0 <= smp.get(k, -1) < len(accessors) for k in ('input', 'output')):
                raise ValueError('Invalid animation keyframe accessor')
        for ch in anim['channels']:
            t = ch.get('target', {})
            if not 0 <= ch.get('sampler', -1) < len(samplers) or not 0 <= t.get('node', -1) < len(nodes):
                raise ValueError('Invalid animation target')
            if t.get('path') not in ('translation', 'rotation', 'scale', 'weights'):
                raise ValueError('Invalid animation target path')
    lod = 0
    for obj in [*nodes, *meshes]:
        ids = obj.get('extensions', {}).get('MSFT_lod', {}).get('ids', [])
        if ids:
            lod += 1
            target = nodes if obj in nodes else meshes
            if any(not 0 <= i < len(target) for i in ids):
                raise ValueError('Invalid LOD level index')
    if profile in ('model', 'scene') and not primitive_count:
        raise ValueError('No mesh geometry')
    if profile == 'scene' and (not scene_defs or doc.get('scene', 0) >= len(scene_defs)):
        raise ValueError('No valid scene')
    if profile == 'animation' and not animations:
        raise ValueError('Animation conversion has no animation tracks')
    return {'profile': profile, 'verdict': 'STRUCTURAL_PASS_VISUAL_PENDING',
            'meshes': len(meshes), 'primitives': primitive_count,
            'materials': len(materials), 'textured_primitives': textured_count,
            'uv': 'PASS' if textured_count else 'NOT_APPLICABLE_NO_TEXTURES',
            'lod': 'STRUCTURAL_PASS' if lod else 'NOT_PRESENT',
            'skins': len(skins), 'animations': len(animations),
            'scenes': len(scene_defs), 'notes': 'Does not prove fidelity to native materials, UV, LOD, rig or animation'}


def native_dependency_paths(root, path, known, by_directory):
    """Follow native string references, never infer dependencies solely from a stem.

    If a local synthetic or unknown layout cannot be parsed, preserve the old
    sibling set and record a parser warning; conversion will not become verified.
    """
    extra = set()
    warnings = []
    try:
        model = None
        if path.endswith('.trmdl'):
            model = path
        elif path.endswith('.tranm'):
            parent = safe_relative(path).parent
            candidates = [p for p in by_directory.get(parent, ())
                          if safe_relative(p).suffix.lower() == '.trmdl']
            if len(candidates) == 1:
                model = candidates[0]
            else:
                warnings.append('TRANM model binding ambiguous or unavailable')
        if model:
            extra.add(model)
            info = native_sv.parse_file(root, model)['data']
            direct = list(info['mesh_references']) + list(info['material_references'])
            if info['skeleton_reference']:
                direct.append(info['skeleton_reference'])
            for name in direct:
                ref = native_sv.resolve_ref(root, model, name)
                if ref['status'] == 'FOUND_EXACT' and ref['virtual_path'] in known:
                    virtual = ref['virtual_path']
                    extra.add(virtual)
                    if virtual.endswith('.trmsh'):
                        mesh_info = native_sv.parse_file(root, virtual)['data']
                        if mesh_info['buffer_reference']:
                            bf = native_sv.resolve_ref(root, virtual, mesh_info['buffer_reference'])
                            if bf['status'] == 'FOUND_EXACT' and bf['virtual_path'] in known:
                                extra.add(bf['virtual_path'])
                            else:
                                warnings.append('Unresolved mesh vertex/index buffer: ' + str(bf))
                else:
                    warnings.append('Unresolved native model dependency: ' + str(ref))
    except (OSError, ValueError) as exc:
        warnings.append('Native dependency parser unavailable: ' + str(exc)[:200])
    return extra, warnings


def native_audit(root, task):
    """Audit native references as evidence, never as rendered geometry."""
    if task['kind'] == 'model':
        result = native_sv.audit_bundle(root, task['path'])
    elif task['kind'] == 'animation':
        parent = safe_relative(task['path']).parent
        candidates = [x['path'] for x in task['spec']['inputs']
                      if safe_relative(x['path']).parent == parent and x['path'].endswith('.trmdl')]
        if len(candidates) == 1:
            result = native_sv.audit_bundle(root, candidates[0], task['path'])
        else:
            result = {'status': 'NATIVE_ANIMATION_ONLY_UNBOUND',
                      'animation': native_sv.parse_file(root, task['path']),
                      'note': 'No unique model reference; skeleton mapping unproven'}
    else:
        raise ValueError('Native adapter does not support scene files yet')
    return {'fingerprint': task['fingerprint'], 'source': task['path'],
            'input_sha256': task['spec']['inputs'], 'evidence': result,
            'status': 'NATIVE_STRUCTURE_ONLY'}


def load_tasks(conn, root, schema_file, converter_version, converter, shard_index=0, shard_count=1):
    if shard_count < 1 or not 0 <= shard_index < shard_count:
        raise ValueError('Invalid shard configuration')
    schema_sha = sha256(schema_file)
    # The implementation and native .fbs schemas are part of the rebuild key.
    schema_root = Path(__file__).resolve().parents[2] / 'tools/PokeDocs/SV/Flatbuffers'
    schema_names = ('model/trmdl.fbs', 'model/trmsh.fbs', 'model/trmbf.fbs',
                    'model/trmtr.fbs', 'model/trskl.fbs', 'animation/tranm.fbs')
    native_schema = {name: sha256(schema_root / name)
                     for name in schema_names if (schema_root / name).is_file()}
    native_parser_sha = sha256(Path(native_sv.__file__))
    rows = conn.execute("SELECT id,virtual_path,sha256_recorded FROM raw_files WHERE available=1 AND extract_status='OK' ORDER BY virtual_path").fetchall()
    known = {p: (rid, h) for rid, p, h in rows}
    by_directory = {}
    for p in known:
        by_directory.setdefault(safe_relative(p).parent, []).append(p)
    for rid, path, manifest_sha in rows:
        name = safe_relative(path)
        ext = name.suffix.lower()
        if ext not in EXTENSIONS:
            continue
        if int(hashlib.sha256(path.encode()).hexdigest()[:8], 16) % shard_count != shard_index:
            continue
        # Only siblings with identical stems are grouped. Names are evidence, not proof
        # of an in-game object relationship; converters must verify the pairing.
        related = sorted(p for p in by_directory.get(name.parent, ())
                         if safe_relative(p).stem == name.stem
                         and safe_relative(p).suffix.lower() in COMPANIONS)
        native_paths, native_warnings = native_dependency_paths(root, path, known, by_directory)
        related = sorted(set(related) | native_paths | {path})
        inputs = []
        for p in related:
            source = asset(root, 'virtual', p)
            if not source.is_file():
                raise FileNotFoundError('Indexed native file not present: ' + p)
            actual = sha256(source)
            recorded = known[p][1]
            if recorded and actual != recorded.upper():
                raise ValueError('Native extraction SHA mismatch: ' + p)
            inputs.append({'path': p, 'sha256': actual})
        spec = {'source_version': 'SV_4.0.0', 'primary': path, 'inputs': inputs,
                'parser_version': VERSION, 'schema_sha256': schema_sha,
                'native_parser_sha256': native_parser_sha,
                'native_schema_sha256': native_schema,
                'native_evidence_warnings': native_warnings,
                'conversion_params': {'profile': EXTENSIONS[ext],
                                      'converter_template': converter or '',
                                      'converter_version': converter_version}}
        fingerprint = hashlib.sha256(dump(spec).encode('utf-8')).hexdigest()
        yield {'rid': rid, 'path': path, 'kind': EXTENSIONS[ext], 'fingerprint': fingerprint,
               'spec': spec}


def upsert_job(conn, task, state, error=None):
    conn.execute("""INSERT INTO conversion_jobs(raw_file_id,stage,fingerprint,status,updated_utc,error_message)
      VALUES(?,?,?,?,?,?) ON CONFLICT(fingerprint) DO UPDATE SET
      status=excluded.status,updated_utc=excluded.updated_utc,error_message=excluded.error_message""",
      (task['rid'], 'r3-' + task['kind'], task['fingerprint'], state,
       datetime.now(timezone.utc).isoformat(), error))


def add_record(conn, task, kind, rel, sha, state):
    conn.execute("""INSERT INTO resource_assets(raw_file_id,asset_kind,output_path,sha256,status,updated_utc)
      VALUES(?,?,?,?,?,?) ON CONFLICT(raw_file_id,asset_kind,output_path) DO UPDATE SET
      sha256=excluded.sha256,status=excluded.status,updated_utc=excluded.updated_utc""",
      (task['rid'], kind, rel, sha, state, datetime.now(timezone.utc).isoformat()))


def output_path(root, task, layer='converted'):
    return asset(root, layer, 'gltf/' + str(safe_relative(task['path']).with_suffix('.glb')))


def report_path(root, task):
    return asset(root, 'parsed', 'r3/' + task['path'] + '.validation.json')


def run_one(conn, root, task, converter, retry_failed=False, timeout=600):
    prev = conn.execute('SELECT status FROM conversion_jobs WHERE fingerprint=?',
                        (task['fingerprint'],)).fetchone()
    target = output_path(root, task)
    report = report_path(root, task)
    if retry_failed and (not prev or prev[0] != 'FAILED'):
        return 'SKIPPED'
    if not retry_failed and prev and prev[0] in ('OK', 'PENDING') and target.is_file() and report.is_file():
        recorded = json.loads(report.read_text('utf-8'))
        if recorded.get('fingerprint') == task['fingerprint'] and recorded.get('output_sha256') == sha256(target):
            return 'SKIPPED'
    if not converter:
        upsert_job(conn, task, 'BLOCKED', 'No local authorized native-to-glTF converter installed')
        conn.commit()
        return 'BLOCKED'
    target.parent.mkdir(parents=True, exist_ok=True)
    report.parent.mkdir(parents=True, exist_ok=True)
    # Write a bundle manifest for adapters needing other native siblings. Do not
    # alter source files, and do not use shell execution.
    bundle = report.with_suffix('.bundle.json')
    atomic_json(bundle, task['spec'])
    fd, filename = tempfile.mkstemp(prefix='.r3-', suffix='.glb', dir=target.parent)
    os.close(fd)
    tmp = Path(filename)
    tmp.unlink()
    try:
        tokens = shlex.split(converter, posix=(os.name != 'nt'))
        if not tokens or not any('{input}' in s for s in tokens) or not any('{output}' in s for s in tokens):
            raise ValueError('Converter needs {input} and {output} placeholders')
        values = {'input': str(asset(root, 'virtual', task['path'])),
                  'output': str(tmp), 'bundle': str(bundle)}
        argv = [token.replace('{input}', values['input']).replace('{output}', values['output'])
                .replace('{bundle}', values['bundle']) for token in tokens]
        completed = subprocess.run(argv, timeout=timeout, text=True, capture_output=True, check=False)
        if completed.returncode:
            raise RuntimeError('Adapter exit ' + str(completed.returncode) + ': ' + completed.stderr[-500:])
        verdict = glb_check(tmp, task['kind'])
        os.replace(tmp, target)
        output_sha = sha256(target)
        atomic_json(report, {'fingerprint': task['fingerprint'], 'source': task['path'],
                             'inputs': task['spec']['inputs'], 'output_sha256': output_sha,
                             'checks': verdict, 'promotion': 'NEEDS_EXTERNAL_VISUAL_REVIEW'})
        add_record(conn, task, 'GLB_CANDIDATE', target.relative_to(root).as_posix(), output_sha, 'CANDIDATE')
        upsert_job(conn, task, 'PENDING', 'GLB structure passed; native fidelity needs review')
        conn.commit()
        return 'PENDING'
    except Exception as exc:
        tmp.unlink(missing_ok=True)
        conn.rollback()
        upsert_job(conn, task, 'FAILED', str(exc)[:2000])
        conn.commit()
        return 'FAILED'
    finally:
        tmp.unlink(missing_ok=True)


def promote(conn, root, task, review_path):
    """User-authored review cannot be confused with automatic native verification."""
    report = json.loads(report_path(root, task).read_text('utf-8'))
    output = output_path(root, task)
    review = json.loads(review_path.read_text('utf-8'))
    checks = review.get('checks', {})
    required = ('materials', 'uv', 'lod', 'skeleton', 'animation', 'scene')
    if (report['fingerprint'] != task['fingerprint'] or
        report['output_sha256'] != sha256(output) or
        review.get('fingerprint') != task['fingerprint'] or
        review.get('output_sha256') != report['output_sha256'] or
        not review.get('reviewer') or
        any(checks.get(field) not in ('PASS', 'NOT_APPLICABLE') for field in required)):
        raise ValueError('Visual review missing, incomplete or does not match converted bytes')
    destination = output_path(root, task, 'resources')
    destination.parent.mkdir(parents=True, exist_ok=True)
    shutil.copyfile(output, destination)
    add_record(conn, task, 'GLB_REVIEWED', destination.relative_to(root).as_posix(), sha256(destination), 'CONFIRMED')
    upsert_job(conn, task, 'OK')
    conn.commit()
    return destination


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('action', choices=('plan', 'run', 'retry-failed', 'native-audit', 'status', 'promote', 'verify-glb'))
    parser.add_argument('--root', type=Path, default=Path(ROOT))
    parser.add_argument('--db', type=Path)
    parser.add_argument('--schema', type=Path, default=Path(__file__).with_name('schema.sql'))
    parser.add_argument('--converter', default='')
    parser.add_argument('--converter-version', default='UNSPECIFIED')
    parser.add_argument('--limit', type=int, default=0)
    parser.add_argument('--shard-index', type=int, default=0)
    parser.add_argument('--shard-count', type=int, default=1)
    parser.add_argument('--source', help='Exact virtual path for promote')
    parser.add_argument('--review', type=Path)
    parser.add_argument('--glb', type=Path)
    parser.add_argument('--profile', choices=('model', 'animation', 'scene'), default='model')
    args = parser.parse_args(argv)
    if args.action == 'verify-glb':
        if not args.glb:
            parser.error('--glb is required')
        print(json.dumps(glb_check(args.glb, args.profile), indent=2))
        return 0
    root = args.root.resolve()
    db = args.db or root / '_index/resource_catalog.sqlite'
    if not db.is_file():
        parser.error('Run scripts/resource_pipeline/cli.py scan before R3/R4')
    conn = sqlite3.connect(db)
    try:
        if args.action == 'status':
            print(json.dumps(dict(conn.execute("SELECT status, COUNT(*) FROM conversion_jobs WHERE stage LIKE 'r3-%' GROUP BY status")), indent=2))
            return 0
        tasks = load_tasks(conn, root, args.schema, args.converter_version,
                           args.converter, args.shard_index, args.shard_count)
        if args.action == 'promote' and (not args.source or not args.review):
            parser.error('promote requires --source and --review')
        counts = {'PLANNED': 0, 'PENDING': 0, 'BLOCKED': 0, 'SKIPPED': 0, 'FAILED': 0, 'OK': 0}
        for task in tasks:
            if args.action == 'promote' and task['path'] != args.source:
                continue
            if args.limit and sum(counts.values()) >= args.limit:
                break
            if args.action == 'plan':
                state = conn.execute('SELECT status FROM conversion_jobs WHERE fingerprint=?',
                                     (task['fingerprint'],)).fetchone()
                print(dump({'path': task['path'], 'fingerprint': task['fingerprint'],
                            'status': state[0] if state else 'NEW'}))
                counts['PLANNED'] += 1
            elif args.action == 'promote':
                print(str(promote(conn, root, task, args.review)))
                counts['OK'] += 1
            elif args.action == 'native-audit':
                try:
                    report = native_audit(root, task)
                    location = asset(root, 'parsed', 'r3/' + task['path'] + '.native-evidence.json')
                    atomic_json(location, report)
                    add_record(conn, task, 'R3_NATIVE_EVIDENCE', location.relative_to(root).as_posix(),
                               sha256(location), 'CANDIDATE')
                    upsert_job(conn, task, 'PENDING', 'Native structure verified; GLB visual fidelity not tested')
                    conn.commit()
                    counts['PENDING'] += 1
                except (OSError, ValueError) as exc:
                    conn.rollback()
                    upsert_job(conn, task, 'FAILED', 'Native audit: ' + str(exc)[:1800])
                    conn.commit()
                    counts['FAILED'] += 1
            else:
                result = run_one(conn, root, task, args.converter,
                                 args.action == 'retry-failed')
                counts[result] += 1
        print(json.dumps(counts, indent=2))
        return 2 if counts['FAILED'] else 0
    finally:
        conn.close()


if __name__ == '__main__':
    raise SystemExit(main())
