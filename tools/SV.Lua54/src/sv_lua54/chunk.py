"""Lossless Lua 5.4 binary-chunk IR for SV 4.0.0.

All integers/floats are kept as raw 8-byte payloads; instruction words,
string bytes, debug records and upvalue metadata are not discarded.
This module never edits the input path and does not claim decompilation.
"""
from __future__ import annotations

from collections import Counter
from dataclasses import dataclass, field
from hashlib import sha256
from io import BytesIO
import struct

SIGNATURE = bytes.fromhex("1b4c7561540019930d0a1a0a")
HEADER_SIZE = 31
LIMIT = 15_000_000


class Lua54FormatError(ValueError):
    pass


class Reader:
    def __init__(self, data: bytes):
        self.data = data
        self.pos = 0

    def take(self, length: int) -> bytes:
        if length < 0 or length > len(self.data) - self.pos:
            raise Lua54FormatError(f"truncated chunk: offset={self.pos}, take={length}")
        value = self.data[self.pos:self.pos + length]
        self.pos += length
        return value

    def byte(self) -> int:
        return self.take(1)[0]

    def vint(self) -> int:
        value = 0
        for _ in range(12):
            b = self.byte()
            value = (value << 7) | (b & 0x7F)
            if b & 0x80:
                return value
        raise Lua54FormatError(f"varint too long: offset={self.pos}")

    def count(self, label: str, upper: int = LIMIT) -> int:
        count = self.vint()
        if count > upper:
            raise Lua54FormatError(f"{label} count {count} exceeds bound {upper} at {self.pos}")
        return count

    def string(self) -> bytes | None:
        length = self.vint()
        return None if length == 0 else self.take(length - 1)


def enc_vint(n: int) -> bytes:
    if not 0 <= n < 2**64:
        raise Lua54FormatError(f"varint out of range: {n}")
    groups = [n & 127]
    n >>= 7
    while n:
        groups.append(n & 127)
        n >>= 7
    groups.reverse()
    groups[-1] |= 128
    return bytes(groups)


def enc_string(value: bytes | None) -> bytes:
    if value is None:
        return enc_vint(0)
    return enc_vint(len(value) + 1) + value


@dataclass(slots=True)
class Constant:
    tag: int
    payload: bytes | None = None  # 8 raw numeric bytes or exact string bytes

    def value_repr(self) -> str:
        if self.tag == 0:
            return "nil"
        if self.tag == 1:
            return "false"
        if self.tag == 17:
            return "true"
        if self.tag == 3:
            return str(int.from_bytes(self.payload or b"", "little", signed=True))
        if self.tag == 19:
            return repr(struct.unpack("<d", self.payload)[0])
        if self.tag in (4, 20):
            return repr(self.payload)
        return f"unknown:{self.tag}"


@dataclass(slots=True)
class Proto:
    id: int
    parent_id: int | None
    start: int
    code_offset: int
    end: int
    source: bytes | None
    line_defined: int
    last_line_defined: int
    num_params: int
    is_vararg: int
    max_stack_size: int
    code: bytes
    constants: list[Constant] = field(default_factory=list)
    upvalues: bytes = b""  # 3 bytes each: instack, idx, kind
    children: list["Proto"] = field(default_factory=list)
    lineinfo: bytes = b""
    abslineinfo: list[tuple[int, int]] = field(default_factory=list)
    locvars: list[tuple[bytes | None, int, int]] = field(default_factory=list)
    upvalue_names: list[bytes | None] = field(default_factory=list)

    @property
    def instruction_count(self) -> int:
        return len(self.code) // 4

    @property
    def upvalue_count(self) -> int:
        return len(self.upvalues) // 3


@dataclass(slots=True)
class Chunk:
    header: bytes
    main_upvalues: int
    root: Proto
    input_sha256: str

    def protos(self):
        queue = [self.root]
        while queue:
            p = queue.pop()
            yield p
            queue.extend(reversed(p.children))

    def summary(self) -> dict:
        nodes = list(self.protos())
        tag_counts = Counter(c.tag for p in nodes for c in p.constants)
        return {
            "sha256": self.input_sha256,
            "prototype_count": len(nodes),
            "top_level_prototype_count": len(self.root.children),
            "instruction_count": sum(p.instruction_count for p in nodes),
            "constant_count": sum(len(p.constants) for p in nodes),
            "constant_tag_counts": {str(k): v for k, v in sorted(tag_counts.items())},
            "upvalue_count": sum(p.upvalue_count for p in nodes),
            "debug": {
                "lineinfo_bytes": sum(len(p.lineinfo) for p in nodes),
                "abslineinfo_entries": sum(len(p.abslineinfo) for p in nodes),
                "locvar_entries": sum(len(p.locvars) for p in nodes),
                "upvalue_name_entries": sum(len(p.upvalue_names) for p in nodes),
                "prototypes_with_any_debug": sum(bool(p.lineinfo or p.abslineinfo or p.locvars or p.upvalue_names) for p in nodes),
            },
            "main_upvalues": self.main_upvalues,
            "max_depth": max((self._depth(p, nodes) for p in nodes), default=0),
        }

    @staticmethod
    def _depth(p: Proto, all_nodes: list[Proto]) -> int:
        # Proto ids are preorder indices, so parent ids are always smaller.
        depth = 0
        while p.parent_id is not None:
            depth += 1
            p = all_nodes[p.parent_id]
        return depth

    def encode(self) -> bytes:
        if len(self.header) != HEADER_SIZE:
            raise Lua54FormatError("header size changed")
        stream = BytesIO()
        stream.write(self.header)
        stream.write(bytes((self.main_upvalues,)))
        def dump(p: Proto):
            stream.write(enc_string(p.source))
            stream.write(enc_vint(p.line_defined))
            stream.write(enc_vint(p.last_line_defined))
            stream.write(bytes((p.num_params, p.is_vararg, p.max_stack_size)))
            if len(p.code) % 4:
                raise Lua54FormatError(f"proto {p.id}: misaligned instructions")
            stream.write(enc_vint(p.instruction_count))
            stream.write(p.code)
            stream.write(enc_vint(len(p.constants)))
            for c in p.constants:
                stream.write(bytes((c.tag,)))
                if c.tag in (3, 19):
                    if c.payload is None or len(c.payload) != 8:
                        raise Lua54FormatError(f"proto {p.id}: numeric payload must have 8 bytes")
                    stream.write(c.payload)
                elif c.tag in (4, 20):
                    stream.write(enc_string(c.payload))
                elif c.tag not in (0, 1, 17):
                    raise Lua54FormatError(f"proto {p.id}: unknown constant tag {c.tag}")
            if len(p.upvalues) % 3:
                raise Lua54FormatError(f"proto {p.id}: misaligned upvalues")
            stream.write(enc_vint(p.upvalue_count))
            stream.write(p.upvalues)
            stream.write(enc_vint(len(p.children)))
            for child in p.children:
                dump(child)
            stream.write(enc_vint(len(p.lineinfo)))
            stream.write(p.lineinfo)
            stream.write(enc_vint(len(p.abslineinfo)))
            for pc, line in p.abslineinfo:
                stream.write(enc_vint(pc))
                stream.write(enc_vint(line))
            stream.write(enc_vint(len(p.locvars)))
            for name, first, last in p.locvars:
                stream.write(enc_string(name))
                stream.write(enc_vint(first))
                stream.write(enc_vint(last))
            stream.write(enc_vint(len(p.upvalue_names)))
            for name in p.upvalue_names:
                stream.write(enc_string(name))
        dump(self.root)
        return stream.getvalue()


def parse(data: bytes) -> Chunk:
    reader = Reader(data)
    header = reader.take(HEADER_SIZE)
    if header[:12] != SIGNATURE:
        raise Lua54FormatError("not standard Lua 5.4 bytecode")
    if header[12:15] != b"\x04\x08\x08":
        raise Lua54FormatError("unsupported instruction/integer/float ABI")
    if int.from_bytes(header[15:23], "little") != 0x5678:
        raise Lua54FormatError("unsupported Lua integer/endian layout")
    if struct.unpack("<d", header[23:31])[0] != 370.5:
        raise Lua54FormatError("unsupported Lua float/endian layout")
    main_upvalues = reader.byte()
    next_id = 0

    def read_proto(parent: int | None, depth: int) -> Proto:
        nonlocal next_id
        if depth > 150:
            raise Lua54FormatError(f"prototype nesting exceeds 150 at offset {reader.pos}")
        start = reader.pos
        pid = next_id
        next_id += 1
        source = reader.string()
        line = reader.vint()
        last_line = reader.vint()
        params, vararg, stack = reader.take(3)
        n_code = reader.count("code")
        code_offset = reader.pos
        code = reader.take(n_code * 4)
        constants = []
        for _ in range(reader.count("constants", 1_000_000)):
            tag = reader.byte()
            if tag in (0, 1, 17):
                constants.append(Constant(tag))
            elif tag in (3, 19):
                constants.append(Constant(tag, reader.take(8)))
            elif tag in (4, 20):
                constants.append(Constant(tag, reader.string()))
            else:
                raise Lua54FormatError(f"bad constant tag {tag} in proto {pid} at {reader.pos}")
        n_upvalues = reader.count("upvalues", 1_000_000)
        upvalues = reader.take(3 * n_upvalues)
        node = Proto(pid, parent, start, code_offset, -1, source, line, last_line,
                     params, vararg, stack, code, constants, upvalues)
        for _ in range(reader.count("children", 200_000)):
            node.children.append(read_proto(pid, depth + 1))
        node.lineinfo = reader.take(reader.count("lineinfo"))
        for _ in range(reader.count("abslineinfo")):
            node.abslineinfo.append((reader.vint(), reader.vint()))
        for _ in range(reader.count("locvars")):
            node.locvars.append((reader.string(), reader.vint(), reader.vint()))
        for _ in range(reader.count("upvalue names")):
            node.upvalue_names.append(reader.string())
        node.end = reader.pos
        return node

    root = read_proto(None, 0)
    if reader.pos != len(data):
        raise Lua54FormatError(f"trailing {len(data)-reader.pos} bytes at offset {reader.pos}")
    if root.upvalue_count != main_upvalues:
        raise Lua54FormatError(f"root upvalue count mismatch: {root.upvalue_count} != {main_upvalues}")
    return Chunk(header, main_upvalues, root, sha256(data).hexdigest())
