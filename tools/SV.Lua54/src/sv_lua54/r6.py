"""R6 bounded static audit of SV Lua 5.4 Haxe-style metatable bootstrap.

This module classifies *bytecode structure*, not live Lua objects. A captured
stack-slot UpVal is not an immutable copy of the referenced Table, and
syntactic later register uses do not establish table-object identity.
"""
from __future__ import annotations

from .chunk import Proto
from .r1 import decode
from .r5 import write_kind


def ascii_key(proto: Proto, idx: int) -> str | None:
    if not 0 <= idx < len(proto.constants):
        return None
    c = proto.constants[idx]
    if c.tag not in (4, 20) or not isinstance(c.payload, bytes):
        return None
    try:
        return c.payload.decode("ascii")
    except UnicodeDecodeError:
        return None


def brief(ins) -> dict:
    return {"pc": ins.pc, "opcode": ins.name, "a": ins.a,
            "b": ins.b, "c": ins.c, "k": ins.k, "bx": ins.bx}


def newindex_handler(proto: Proto) -> dict:
    """Strict structural classification; NEVER infer source names from it."""
    ops = decode(proto)
    names = [x.name for x in ops]
    expected = ["GETFIELD", "SETTABLE", "GETTABUP", "MOVE",
                "MOVE", "MOVE", "CALL", "RETURN0"]
    shape = False
    if names == expected:
        field, write, fn, m1, m2, m3, call, _ = ops
        base = field.a
        shape = (
            proto.num_params == 3
            and field.b == 0 and ascii_key(proto, field.c) == "__fields__"
            and write.a == base and write.b == 1 and write.c == 2
            and write.k == 0
            and fn.a == base and fn.b == 0
            and ascii_key(proto, fn.c) == "rawset"
            and [(m1.a, m1.b), (m2.a, m2.b), (m3.a, m3.b)]
                == [(base + 1, 0), (base + 2, 1), (base + 3, 2)]
            and call.a == base and call.b == 4 and call.c == 1
        )
    return {
        "proto_id": proto.id, "num_params": proto.num_params,
        "upvalue_bytes": list(proto.upvalues),
        "instruction_count": len(ops),
        "instructions": [brief(x) for x in ops[:12]],
        "key_refs": [ascii_key(proto, ops[i].c) for i in (0, 2)]
            if len(ops) > 2 and names[0] == "GETFIELD"
            and names[2] == "GETTABUP" else [],
        "strict_three_argument_handler_shape": shape,
        "semantic_shape_if_executed": (
            "self.__fields__[key]=value; rawset(self,key,value)"
            if shape else "UNCLASSIFIED"
        ),
        "runtime_invocation": "NOT_OBSERVED",
    }


def root_capture_sites(proto: Proto, register: int, begin: int, end: int) -> list[dict]:
    """All syntactic captures in PC window, NOT all runtime aliases of a Table."""
    out = []
    for ins in decode(proto)[begin:end]:
        if ins.name != "CLOSURE" or ins.bx >= len(proto.children):
            continue
        child = proto.children[ins.bx]
        for slot in range(child.upvalue_count):
            desc = child.upvalues[3 * slot:3 * slot + 3]
            if desc[:2] == bytes((1, register)):
                out.append({"root_pc": ins.pc, "child_proto_id": child.id,
                            "upvalue_slot": slot, "descriptor": list(desc)})
    return out


def bootstrap_audit(root: Proto, mainbody_pc: int = 12242) -> dict:
    ops = decode(root)
    if len(ops) <= mainbody_pc or mainbody_pc < 51:
        raise ValueError("expected original root PC window is unavailable")
    if [(ops[i].name, ops[i].a) for i in (42, 43, 45, 47, 50, mainbody_pc)] != [
        ("CLOSURE", 12), ("NEWTABLE", 13), ("SETFIELD", 13),
        ("SETFIELD", 13), ("CLOSURE", 16), ("CLOSURE", 56)
    ]:
        raise ValueError("original metatable/root capture opcode fingerprint changed")
    if ops[44].name != "EXTRAARG":
        raise ValueError("PC44 must be consumed NEWTABLE EXTRAARG")
    if not (ascii_key(root, ops[45].b) == "__newindex"
            and ascii_key(root, ops[46].c) == "_hx_tostring"
            and ascii_key(root, ops[47].b) == "__tostring"):
        raise ValueError("root metatable keys differ")
    if ops[42].bx >= len(root.children) or ops[50].bx >= len(root.children):
        raise ValueError("original child index out of range")
    handler = root.children[ops[42].bx]
    wrapper = root.children[ops[50].bx]
    mainbody = root.children[ops[mainbody_pc].bx]
    if wrapper.upvalues != bytes((0, 0, 0, 1, 13, 0)):
        raise ValueError("Proto20 no longer captures root R13 as UpVal1")
    if mainbody.upvalues != bytes((0, 0, 0, 1, 16, 0)):
        raise ValueError("Proto752 no longer captures root R16 as UpVal1")
    if (handler.id, wrapper.id, mainbody.id) != (17, 20, 752):
        raise ValueError("unexpected proto mapping")
    if ops[46].name != "GETTABUP":
        raise ValueError("source of __tostring is not GETTABUP")
    assignments = [
        {"pc": i, "field": ascii_key(root, ins.b),
         "source_register": ins.c}
        for i, ins in enumerate(ops[43:50], start=43)
        if ins.name == "SETFIELD" and ins.a == 13
    ]
    if [(x["pc"], x["field"]) for x in assignments] != [
        (45, "__newindex"), (47, "__tostring")
    ]:
        raise ValueError("unexpected direct R13 SETFIELD before helper creation")
    # Register syntactic use, not object alias proof. A parent R13 overwrite
    # need not destroy the Table captured by the wrapper's UpVal.
    writes = [
        {"pc": ins.pc, "opcode": ins.name, "kind": write_kind(ins, 13)}
        for ins in ops[51:mainbody_pc]
        if write_kind(ins, 13) != "NO"
    ]
    captures = root_capture_sites(root, 13, 43, mainbody_pc + 1)
    return {
        "schema_version": 1,
        "evidence_grade": "PINNED_ORIGINAL_BYTECODE_STATIC_ONLY",
        "root_bootstrap_pcs": [brief(x) for x in ops[42:51]],
        "direct_r13_fields_before_capture": assignments,
        "literal_field_count": len(assignments),
        "newindex_handler": newindex_handler(handler),
        "wrapper": {
            "proto_id": wrapper.id,
            "root_creation_pc": 50,
            "captured_upvalues": [list(wrapper.upvalues[i:i + 3])
                                  for i in range(0, len(wrapper.upvalues), 3)],
            "registered_function": "setmetatable",
            "runtime_LClosure": "NOT_OBSERVED",
        },
        "mainbody": {
            "proto_id": mainbody.id, "root_creation_pc": mainbody_pc,
            "captured_upvalues": [list(mainbody.upvalues[i:i + 3])
                                  for i in range(0, len(mainbody.upvalues), 3)],
            "runtime_UpVal_identity": "NOT_OBSERVED",
        },
        "root_r13_syntactic_captures_before_mainbody_count": len(captures),
        "root_r13_syntactic_captures_first_20": captures[:20],
        "root_r13_syntactic_captures_truncated": len(captures) > 20,
        "root_r13_subsequent_register_writes_first_12": writes[:12],
        "root_r13_subsequent_register_writes_total": len(writes),
        "heap_table_alias_mutations": "NOT_PROVEN_ABSENT",
        "root_callinfo_and_upval_cell_identity": "NOT_OBSERVED",
        "mainbody_runtime_parity": "NOT_VERIFIED",
    }
