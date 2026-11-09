#!/usr/bin/env python3
"""Build a temporary executable Lua 5.4 slice of real SV 4.0.0 Proto 752.

PC 649..665 are the ORIGINAL bytecode words (NEWTABLE/EXTRAARG,
arithmetics/hidden MM fallbacks/SETLIST). The wrapper only injects six
argument-to-register MOVEs and a RETURN1; it never modifies source BLUA.
The output MUST stay in RUNNER_TEMP and MUST NOT be committed or uploaded.
This tests just one pure region, not the whole game function or engine API.
"""
from __future__ import annotations

import argparse
import hashlib
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "SV.Lua54" / "src"))
from sv_lua54.chunk import Chunk, Proto, parse
from sv_lua54.r1 import OPNAMES, decode
from sv_lua54.ownership import trace_owner

REL = Path("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main_dynamic/main_dynamic.blua")
PIN = "ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572"
START, END = 649, 665


def abc(op: str, a: int, b: int = 0, c: int = 0, k: int = 0) -> bytes:
    return (OPNAMES.index(op) | (a << 7) | (k << 15)
            | (b << 16) | (c << 24)).to_bytes(4, "little")


def create_slice(source: bytes) -> bytes:
    if hashlib.sha256(source).hexdigest() != PIN:
        raise ValueError("original input SHA differs")
    parsed = parse(source)
    p = next(x for x in parsed.protos() if x.id == 752)
    ops = decode(p)
    if [(ops[x].name, ops[x].a) for x in (649, 650, 665)] != [
        ("NEWTABLE", 14), ("EXTRAARG", 0), ("SETLIST", 14),
    ]:
        raise ValueError("native instruction signature differs")
    owner = trace_owner(p, 665)
    if owner["producer_pc"] != 649 or owner["events"]:
        raise ValueError("ownership trace differs; testing halted")
    if owner["control_flow_barriers"]["region_incoming_edges"]:
        raise ValueError("unexpected incoming branch")
    if owner["control_flow_barriers"]["closure_capture_of_table_pcs"]:
        raise ValueError("closure captures newly created table")
    if owner["control_flow_barriers"]["candidate_clobber_or_escape"]:
        raise ValueError("alias or escape introduced before SETLIST")
    # This controlled slice explicitly includes the seven native MMBIN*
    # fallbacks, so it tests their real numeric/metamethod control flow.
    if owner["control_flow_barriers"]["implicit_metamethod_skip_pcs"] != [
        652, 654, 656, 658, 660, 662, 664,
    ]:
        raise ValueError("metamethod fallback PC set differs")
    if p.constants[117].value_repr() != "3" or p.constants[118].value_repr() != "20":
        raise ValueError(f"native arithmetic constants differ: K117={p.constants[117].tag}/{p.constants[117].value_repr()} K118={p.constants[118].tag}/{p.constants[118].value_repr()}")
    # Values of the original register frame R8..R13 are supplied as 6 args.
    # R0..R5 are initial parameters; move to the *same* native registers.
    seed = b"".join(abc("MOVE", 8+i, i) for i in range(6))
    original_words = p.code[START * 4:(END + 1) * 4]
    region = Proto(
        id=0, parent_id=None, start=0, code_offset=0, end=0,
        source=b"@SLR-R2-controlled-native-region",
        line_defined=0, last_line_defined=0,
        num_params=6, is_vararg=0,
        max_stack_size=max(p.max_stack_size, 18),
        code=seed + original_words + abc("RETURN1", 14),
        constants=p.constants, upvalues=b"", children=[],
    )
    chunk = Chunk(parsed.header, 0, region, "")
    raw = chunk.encode()
    if parse(raw).encode() != raw:
        raise ValueError("R2 test slice did not round-trip")
    # Verify the extracted bytes are actually copied, not rewritten.
    assert raw != source and region.code[6*4:6*4+len(original_words)] == original_words
    return raw


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", type=Path, default=ROOT)
    ap.add_argument("--output", type=Path, required=True)
    args = ap.parse_args()
    src = (args.root.resolve() / REL).read_bytes()
    payload = create_slice(src)
    path = args.output.resolve()
    if path == (args.root.resolve() / REL) or str(path).startswith(
        str(args.root.resolve() / "Unpack" / "4.0.0")
    ):
        raise ValueError("output must not overwrite any ROM content")
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_bytes(payload)
    print(f"Generated an EPHEMERAL {len(payload)}-byte Lua54 raw-native region test chunk.")
    print("Kept 17 original instruction words at PCs 649-665; injected 6 MOVEs and RETURN1.")
    print("Do not commit, distribute or infer whole-game runtime compatibility from this file.")


if __name__ == "__main__":
    main()
