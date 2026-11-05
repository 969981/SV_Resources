#!/usr/bin/env python3
"""Native SV 4.0.0 Trinity FlatBuffer *evidence* adapter (read-only).

Reads native TRMDL/TRMSH/TRMBF/TRMTR/TRSKL/TRANM records using the pinned
PokeDocs SV field ordering; validates inter-file references, no asset fabrication.
This is not a renderer, vertex decoder or an animation-to-glTF converter.
"""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path, PurePosixPath
import struct
import sys

MAX_FILE = 256 * 1024 * 1024
MAX_VECTOR = 200_000
MAX_STRING = 1024 * 1024
VERSION = 'sv-native-flatbuffers-r3.1'


class NativeError(ValueError):
    pass


class FB:
    """Bounds-checked FlatBuffers table reader; no signatures are invented."""
    def __init__(self, data: bytes):
        if len(data) < 8 or len(data) > MAX_FILE:
            raise NativeError('File size outside supported FlatBuffers bounds')
        self.b = data
        self.root = self._ref(0)
        self._vtable(self.root)

    def bounds(self, p: int, n: int):
        if not isinstance(p, int) or p < 0 or n < 0 or p + n > len(self.b):
            raise NativeError(f'Invalid FlatBuffers offset/length {p}+{n}/{len(self.b)}')

    def get(self, p: int, fmt: str):
        size = struct.calcsize('<' + fmt)
        self.bounds(p, size)
        return struct.unpack_from('<' + fmt, self.b, p)[0]

    def _ref(self, p: int):
        delta = self.get(p, 'I')
        if delta < 4:
            raise NativeError('Invalid relative table reference')
        dest = p + delta
        self.bounds(dest, 4)
        return dest

    def _vtable(self, table: int):
        self.bounds(table, 4)
        vt = table - self.get(table, 'i')
        self.bounds(vt, 4)
        vsize, object_size = self.get(vt, 'H'), self.get(vt + 2, 'H')
        if vsize < 4 or vsize % 2 or object_size < 4:
            raise NativeError('Invalid FlatBuffers vtable header')
        self.bounds(vt, vsize)
        self.bounds(table, object_size)
        return vt, vsize, object_size

    def field(self, table: int, index: int):
        vt, n, object_size = self._vtable(table)
        if 4 + index * 2 + 2 > n:
            return None
        offset = self.get(vt + 4 + index * 2, 'H')
        if not offset:
            return None
        if offset >= object_size:
            raise NativeError('Field offset outside table body')
        return table + offset

    def scalar(self, table: int, index: int, fmt='I', default=0):
        pos = self.field(table, index)
        return self.get(pos, fmt) if pos is not None else default

    def ref(self, table: int, index: int):
        pos = self.field(table, index)
        return self._ref(pos) if pos is not None else None

    def string(self, table: int, index: int):
        pos = self.ref(table, index)
        if pos is None:
            return None
        n = self.get(pos, 'I')
        if n > MAX_STRING:
            raise NativeError('String length excessive')
        self.bounds(pos + 4, n + 1)
        if self.b[pos + 4 + n] != 0:
            raise NativeError('String terminator missing')
        return self.b[pos + 4:pos + 4 + n].decode('utf-8', errors='strict')

    def vector(self, table: int, index: int, element_size=4):
        p = self.ref(table, index)
        if p is None:
            return None, 0
        n = self.get(p, 'I')
        if n > MAX_VECTOR:
            raise NativeError('Vector length excessive')
        self.bounds(p + 4, n * element_size)
        return p + 4, n

    def tables(self, table: int, index: int):
        pos, n = self.vector(table, index)
        return [self._ref(pos + i * 4) for i in range(n)] if pos is not None else []

    def strings(self, table: int, index: int):
        pos, n = self.vector(table, index)
        if pos is None:
            return []
        return [self._string_at(self._ref(pos + i * 4)) for i in range(n)]

    def _string_at(self, pos):
        n = self.get(pos, 'I')
        if n > MAX_STRING:
            raise NativeError('Vector string excessive')
        self.bounds(pos + 4, n + 1)
        if self.b[pos + 4 + n] != 0:
            raise NativeError('String vector terminator missing')
        return self.b[pos + 4:pos + 4 + n].decode('utf-8', errors='strict')

    def structs(self, table: int, index: int, size: int):
        pos, n = self.vector(table, index, size)
        return [pos + size * i for i in range(n)] if pos is not None else []


def read_native(path: Path) -> FB:
    if not path.is_file() or path.stat().st_size > MAX_FILE:
        raise NativeError('Missing/oversized native input: ' + str(path))
    return FB(path.read_bytes())


def parse_trmdl(f: FB):
    t = f.root
    mesh_refs = [f.string(x, 0) for x in f.tables(t, 1)]
    skel = f.ref(t, 2)
    lod = []
    for obj in f.tables(t, 4):
        lod.append({'indices': [f.scalar(i, 0) for i in f.tables(obj, 0)],
                    'type': f.string(obj, 1)})
    return {'mesh_references': mesh_refs, 'skeleton_reference': f.string(skel, 0) if skel else None,
            'material_references': f.strings(t, 3), 'lods': lod,
            'trltt_reference': f.string(t, 7)}


def parse_trmsh(f: FB):
    meshes = []
    for t in f.tables(f.root, 1):
        vertex_attrs = []
        for accessor_group in f.tables(t, 3):
            attributes = []
            for a in f.tables(accessor_group, 0):
                attributes.append({'semantic': f.scalar(a, 1), 'layer': f.scalar(a, 2),
                                   'format': f.scalar(a, 3), 'offset': f.scalar(a, 4),
                                   'slot': f.scalar(a, 0, 'i', -1)})
            vertex_attrs.append({'attributes': attributes, 'strides':
                                  [f.scalar(e, 0) for e in f.tables(accessor_group, 1)]})
        materials = [{'name': f.string(x, 3), 'polygon_count': f.scalar(x, 0),
                      'polygon_offset': f.scalar(x, 1)} for x in f.tables(t, 4)]
        meshes.append({'name': f.string(t, 0), 'mesh_name': f.string(t, 12),
                       'polygon_type': f.scalar(t, 2), 'vertex_layouts': vertex_attrs,
                       'materials': materials,
                       'influences': len(f.tables(t, 10)),
                       'morph_shapes': len(f.tables(t, 14))})
    return {'meshes': meshes, 'buffer_reference': f.string(f.root, 2)}


def parse_trmbf(f: FB):
    results = []
    for buffer in f.tables(f.root, 1):
        # Vector of byte tables (never export or copy the binary bytes).
        index = [f.vector(x, 0, 1)[1] for x in f.tables(buffer, 0)]
        vertex = [f.vector(x, 0, 1)[1] for x in f.tables(buffer, 1)]
        results.append({'index_buffer_sizes': index, 'vertex_buffer_sizes': vertex,
                        'morph_sets': len(f.tables(buffer, 2))})
    return {'buffer_sets': results}


def parse_trmtr(f: FB):
    materials = []
    for t in f.tables(f.root, 1):
        textures = [{'name': f.string(x, 0), 'file': f.string(x, 1),
                     'slot': f.scalar(x, 2)} for x in f.tables(t, 2)]
        materials.append({'name': f.string(t, 0), 'textures': textures,
                          'shaders': [f.string(x, 0) for x in f.tables(t, 1)],
                          'sampler_count': len(f.tables(t, 3))})
    return {'materials': materials}


def parse_trskl(f: FB):
    nodes = []
    for t in f.tables(f.root, 1):
        nodes.append({'name': f.string(t, 0), 'parent': f.scalar(t, 4, 'i', -1),
                      'rig_index': f.scalar(t, 5, 'i', -1), 'node_type': f.scalar(t, 7)})
    # Check parent bounds and the *entire* ancestor chain: valid-looking indices
    # can still contain cycles and cause infinite evaluation in a renderer.
    for i, node in enumerate(nodes):
        seen = {i}
        p = node['parent']
        while p != -1:
            if p < 0 or p >= len(nodes) or p in seen:
                raise NativeError('Invalid/cyclic skeleton parent chain at node ' + str(i))
            seen.add(p)
            p = nodes[p]['parent']
    return {'nodes': nodes, 'bone_matrix_count': len(f.tables(f.root, 2)),
            'ik_count': len(f.tables(f.root, 3)), 'rig_offset': f.scalar(f.root, 4)}


def _track(f: FB, t: int, kind: int, size: int):
    if kind == 0:
        if t is not None:
            raise NativeError('Union object exists with no union type')
        return {'type': 'NONE', 'keyframes': 0}
    if kind not in (1, 2, 3, 4) or t is None:
        raise NativeError('Unknown/missing native animation union type')
    if kind == 1:
        field = f.field(t, 0)
        if field is None:
            raise NativeError('Fixed track without native value')
        f.bounds(field, size)
        return {'type': 'FIXED', 'keyframes': 1}
    if kind == 2:
        return {'type': 'DYNAMIC', 'keyframes': f.vector(t, 0, size)[1]}
    frame_size = 2 if kind == 3 else 1
    pos, n = f.vector(t, 0, frame_size)
    coords = f.vector(t, 1, size)[1]
    if pos is None or n != coords:
        raise NativeError('Animation frame/value vector length mismatch')
    frame_values = [f.get(pos + i * frame_size, 'H' if frame_size == 2 else 'B')
                    for i in range(n)]
    if frame_values != sorted(set(frame_values)):
        raise NativeError('Animation frame indices are not strictly increasing')
    return {'type': 'FRAMED16' if kind == 3 else 'FRAMED8',
            'keyframes': n, 'first_frame': frame_values[0] if n else None,
            'last_frame': frame_values[-1] if n else None}


def parse_tranm(f: FB):
    info = f.ref(f.root, 0)
    animation = f.ref(f.root, 1)
    if info is None or animation is None:
        raise NativeError('TRANM missing animation info or track table')
    frame_count = f.scalar(info, 1)
    rate = f.scalar(info, 2)
    tracks = []
    for t in f.tables(animation, 0):
        dims = {}
        for name, type_field, ptr_field, size in (
                ('scale', 1, 2, 12), ('rotation', 3, 4, 6), ('translation', 5, 6, 12)):
            dims[name] = _track(f, f.ref(t, ptr_field), f.scalar(t, type_field, 'B'), size)
        tracks.append({'bone_name': f.string(t, 0), 'channels': dims})
    return {'loop_flag': f.scalar(info, 0), 'frame_count': frame_count,
            'frame_rate': rate, 'tracks': tracks}


PARSERS = {'.trmdl': parse_trmdl, '.trmsh': parse_trmsh, '.trmbf': parse_trmbf,
           '.trmtr': parse_trmtr, '.trskl': parse_trskl, '.tranm': parse_tranm}


def check_virtual(root: Path, value: str):
    if '\\' in value or '\x00' in value or PurePosixPath(value).is_absolute():
        raise NativeError('Unsafe virtual path')
    path = (root / 'virtual' / value).resolve()
    if not path.is_relative_to((root / 'virtual').resolve()):
        raise NativeError('Native path traverses outside virtual directory')
    return path


def parse_file(root: Path, virtual: str):
    path = check_virtual(root, virtual)
    ext = path.suffix.lower()
    if ext not in PARSERS:
        raise NativeError('Unsupported native format: ' + ext)
    f = read_native(path)
    return {'path': virtual, 'sha256': hashlib.sha256(f.b).hexdigest().upper(),
            'size': len(f.b), 'format': ext, 'parser_version': VERSION,
            'data': PARSERS[ext](f)}


def resolve_ref(root: Path, model_path: str, name: str):
    """Resolve a native reference exactly; do not infer game IDs from filenames."""
    if not name or '\\' in name or name.startswith('/'):
        return {'reference': name, 'status': 'UNRESOLVED'}
    # Native paths can use ../ to reach shared parents, but must stay in virtual/.
    parent = PurePosixPath(model_path).parent
    candidate = (root / 'virtual' / parent / name).resolve()
    virtual_base = (root / 'virtual').resolve()
    if not candidate.is_relative_to(virtual_base):
        return {'reference': name, 'status': 'REJECTED_TRAVERSAL'}
    relative = candidate.relative_to(virtual_base).as_posix()
    if candidate.is_file():
        return {'reference': name, 'status': 'FOUND_EXACT', 'virtual_path': relative}
    return {'reference': name, 'status': 'MISSING', 'virtual_path': relative}


def audit_bundle(root: Path, model: str, animation: str | None = None):
    """Native-file and link audit. Does NOT claim that an exported mesh is faithful."""
    root = root.resolve()
    native = parse_file(root, model)
    if native['format'] != '.trmdl':
        raise NativeError('--model must point to a .trmdl input')
    results = {'model': native, 'linked': [], 'checks': {}, 'status': 'NATIVE_STRUCTURE_ONLY'}
    parsed_by_type = {}
    references = []
    info = native['data']
    for kind, names in (('mesh', info['mesh_references']),
                        ('material', info['material_references']),
                        ('skeleton', [info['skeleton_reference']] if info['skeleton_reference'] else [])):
        for name in names:
            resolved = resolve_ref(root, model, name)
            resolved['role'] = kind
            references.append(resolved)
            if resolved['status'] == 'FOUND_EXACT':
                file = parse_file(root, resolved['virtual_path'])
                parsed_by_type.setdefault(file['format'], []).append(file)
                results['linked'].append(file)
    results['references'] = references
    # Native model mesh buffer names are separate native evidence; only follow
    # exact references, with no filename stem fallback or guessed joins.
    for mesh in parsed_by_type.get('.trmsh', []):
        buffer_name = mesh['data']['buffer_reference']
        if buffer_name:
            ref = resolve_ref(root, mesh['path'], buffer_name)
            ref['role'] = 'vertex_index_buffer'
            results['references'].append(ref)
            if ref['status'] == 'FOUND_EXACT':
                file = parse_file(root, ref['virtual_path'])
                results['linked'].append(file)
                parsed_by_type.setdefault('.trmbf', []).append(file)
    results['checks']['model_dependencies'] = ('PASS' if references and
        all(x['status'] == 'FOUND_EXACT' for x in results['references']) else 'INCOMPLETE')
    material_names = {m['name'] for f in parsed_by_type.get('.trmtr', [])
                      for m in f['data']['materials'] if m['name']}
    used_names = {m['name'] for f in parsed_by_type.get('.trmsh', [])
                  for sh in f['data']['meshes'] for m in sh['materials'] if m['name']}
    results['checks']['materials'] = {
        'status': 'PASS' if used_names and used_names <= material_names else 'INCOMPLETE',
        'mesh_materials': sorted(used_names), 'missing': sorted(used_names - material_names)}
    layouts = [layout['attributes'] for f in parsed_by_type.get('.trmsh', [])
               for sh in f['data']['meshes'] for layout in sh['vertex_layouts']]
    results['checks']['uv_declarations'] = {
        'status': 'DECLARED' if any(a['semantic'] == 6 for layout in layouts for a in layout) else 'NOT_FOUND',
        'sets': sum(a['semantic'] == 6 for layout in layouts for a in layout),
        'note': 'Vertex attribute declarations; UV bytes and render orientation not verified'}
    results['checks']['geometry'] = {'mesh_count': sum(len(f['data']['meshes']) for f in parsed_by_type.get('.trmsh', [])),
                                    'buffer_sets': sum(len(f['data']['buffer_sets']) for f in parsed_by_type.get('.trmbf', [])),
                                    'status': 'DESCRIPTORS_ONLY'}
    results['checks']['lod'] = {'declared_levels': len(info['lods']), 'status': 'DESCRIPTORS_ONLY'}
    skeletons = parsed_by_type.get('.trskl', [])
    names = {n['name'] for f in skeletons for n in f['data']['nodes'] if n['name']}
    results['checks']['skeleton'] = {'nodes': sum(len(f['data']['nodes']) for f in skeletons),
                                    'status': 'PARSED' if skeletons else 'MISSING'}
    if animation:
        anim = parse_file(root, animation)
        if anim['format'] != '.tranm':
            raise NativeError('--animation must be a .tranm')
        results['animation'] = anim
        tracks = {t['bone_name'] for t in anim['data']['tracks'] if t['bone_name']}
        missing = sorted(tracks - names)
        results['checks']['animation_binding'] = {
            'status': 'PASS' if tracks and not missing and skeletons else 'INCOMPLETE',
            'unique_track_bones': len(tracks), 'missing_skeleton_bones': missing,
            'note': 'Native track-name correspondence only; quaternion and interpolation not rendered'}
    return results


def main(argv=None):
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('action', choices=('inspect', 'audit-bundle'))
    p.add_argument('--root', type=Path, required=True, help='data.trpfs root containing virtual/')
    p.add_argument('--source', help='Original virtual path, for inspect')
    p.add_argument('--model', help='Original virtual .trmdl path, for audit-bundle')
    p.add_argument('--animation', help='Optional original virtual .tranm path')
    p.add_argument('--output', type=Path, help='Optional JSON evidence report')
    args = p.parse_args(argv)
    try:
        if args.action == 'inspect':
            if not args.source:
                p.error('--source is required')
            report = parse_file(args.root.resolve(), args.source)
        else:
            if not args.model:
                p.error('--model is required')
            report = audit_bundle(args.root, args.model, args.animation)
        content = json.dumps(report, ensure_ascii=False, sort_keys=True, indent=2) + '\n'
        if args.output:
            args.output.parent.mkdir(parents=True, exist_ok=True)
            args.output.write_text(content, encoding='utf-8')
        else:
            print(content)
        return 0
    except (NativeError, OSError, UnicodeError) as exc:
        print(json.dumps({'status': 'FAILED_NATIVE_PARSE', 'error': str(exc)}, ensure_ascii=False), file=sys.stderr)
        return 2


if __name__ == '__main__':
    raise SystemExit(main())
