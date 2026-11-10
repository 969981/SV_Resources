"""Restricted real Lua 5.4 CFG -> typed HIR -> AST -> Haxe for constant returns.

Uses the existing sv_lua54.r1 decoded instructions and syntactic_edges.
It is deliberately not a general unluac-rs HIR parser or a source recovery
claim for arbitrary Proto. Only exact source-verifiable, side-effect-free
return literal shapes are currently accepted. Nothing is silently skipped.
"""
from __future__ import annotations

from dataclasses import dataclass
import hashlib
import re

from ..chunk import Proto
from ..r1 import decode, syntactic_edges

VALID_IDENT = re.compile(r"^[A-Za-z_][A-Za-z0-9_]*$")


class LiftFailure(ValueError):
    """A native method cannot be represented by this verified AST subset."""


@dataclass(frozen=True)
class Literal:
    kind: str
    value: int | bool | None
    source_pc: int


@dataclass(frozen=True)
class ReturnAst:
    value: Literal
    return_pc: int


@dataclass(frozen=True)
class Lifted:
    # CFG, HIR and AST are deliberately separate records.
    cfg_edges: tuple[tuple[int, int, str], ...]
    hir: tuple[dict, ...]
    ast: ReturnAst
    return_type: str
    haxe_expression: str
    proto_id: int
    source_words: tuple[str, ...]
    code_sha256: str


def lift_constant_return(proto: Proto) -> Lifted:
    if proto.parent_id != 0 or proto.num_params != 1 or proto.is_vararg:
        raise LiftFailure("requires original root-owned instance method with self only")
    if proto.upvalue_count != 0 or proto.children:
        raise LiftFailure("captured upvalue or nested Proto requires full closure lowering")
    ins = decode(proto)
    if len(ins) != 3:
        raise LiftFailure("requires LOAD_LITERAL, RETURN1, trailing compiler RETURN0")
    first, ret, dead = ins
    allowed = ("LOADI", "LOADF", "LOADTRUE", "LOADFALSE", "LOADNIL")
    if first.name not in allowed or ret.name != "RETURN1" or dead.name != "RETURN0":
        raise LiftFailure("non-literal opcode, side effect, or unsupported return shape")
    if first.a != 1 or ret.a != 1:
        raise LiftFailure("first register must be R1 after sole implicit self R0")
    if first.name == "LOADNIL" and first.b != 0:
        raise LiftFailure("LOADNIL must assign only R1")
    edges, defects = syntactic_edges(proto)
    if defects or edges != [(0, 1, "SEQUENTIAL")]:
        raise LiftFailure("non-trivial CFG or unexpected reachable edge")
    if first.name == "LOADI":
        value = first.sbx
        kind, typ, expr = "lua_integer", "Int", str(value)
    elif first.name == "LOADF":
        value = first.sbx
        kind, typ, expr = "lua_float", "Float", f"{value}.0"
    elif first.name in ("LOADTRUE", "LOADFALSE"):
        value = first.name == "LOADTRUE"
        kind, typ, expr = "boolean", "Bool", "true" if value else "false"
    else:
        value = None
        kind, typ, expr = "nil", "Dynamic", "null"
    lit = Literal(kind, value, 0)
    # Typed HIR: load literal into the exact original register, then return it.
    hir = ({"pc": 0, "operation": "store_literal", "register": 1,
            "kind": kind, "value": value},
           {"pc": 1, "operation": "return", "register": 1},
           {"pc": 2, "operation": "unreachable_return0", "not_emitted": True})
    return Lifted(tuple(edges), hir, ReturnAst(lit, 1), typ, expr,
                  proto.id, tuple(f"{i.word:08X}" for i in ins),
                  hashlib.sha256(proto.code).hexdigest())


def render_class(class_name: str, class_hash: str, methods: list[tuple[str, str, Lifted]],
                 source_sha: str) -> str:
    if not class_name.startswith("main.") or len(class_hash) != 17 or not class_hash.startswith("C"):
        raise LiftFailure("invalid main-class ABI")
    pack, basename = class_name.rsplit(".", 1)
    if not all(VALID_IDENT.fullmatch(x) for x in class_name.split(".")):
        raise LiftFailure("unsupported Haxe package or class identifier")
    if not methods or len({m[0] for m in methods}) != len(methods):
        raise LiftFailure("missing method or duplicate method name")
    out = [
        f"package {pack};", "",
        "/**",
        " * Evidence-gated SV 4.0.0 Haxe source (restricted CFG/HIR/AST backend).",
        f" * Class: {class_name} / {class_hash}",
        f" * Original main.blua SHA-256: {source_sha}",
        " * Only the listed methods are restored; other original class methods",
        " * are NOT represented. Original ROM bytes are never modified.",
        " */",
        "@:keep", '@:chunk("main")',
        f'@:hashAbi("{class_hash}")',
        f'@:expose("{class_hash}")',
        f'@:native("{class_hash}")',
        f"class {basename} {{",
    ]
    for name, hash_name, lifted in sorted(methods, key=lambda x: x[0]):
        if not VALID_IDENT.fullmatch(name) or not re.fullmatch(r"F[0-9A-F]{16}", hash_name):
            raise LiftFailure("invalid named F instance method")
        out += [
            f"    // Original Child Proto {lifted.proto_id}, PC [0,3),",
            f"    // code SHA-256 {lifted.code_sha256}; root PC held in methods.jsonl.",
            f"    // Raw opcode words: {' '.join(lifted.source_words)}",
            f'    @:hashAbi("{hash_name}")',
            f'    @:native("{hash_name}")',
            f"    public function {name}():{lifted.return_type} {{",
            f"        return {lifted.haxe_expression};",
            "    }",
            "",
        ]
    out += ["}", ""]
    return "\n".join(out)
