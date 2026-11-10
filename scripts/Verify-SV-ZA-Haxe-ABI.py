#!/usr/bin/env python3
"""Check a pinned ZAScripts Lua build, WITHOUT claiming game ABI/runtime parity.

Run only after compiling with the custom Haxe executable + HashAbi +
LuaOutput macro/postprocessor.  This validates exported ABI symbols
and the finalizer fingerprint in the generated text.
"""
from __future__ import annotations
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT / "tools/SV.Lua54/haxe/4.0.0"
FIELDS = {
    "main": [
        ("CFEA9C3BFB3FCD429", "S424E3EA0446070E7"),
        ("C23E5342B132D5323", "S042B860498E558B2"),
        ("C5797B404FC92DA57", "F92D30755A380E89F"),
        ("C2391C1B3E531D954", "F727F99876D3FB086"),
        ("C2C51A2FB219477E8", "FC87C731D11C58354"),
        ("CB32008C74622B08D", "FBDA175393973D042"),
        ("CF68C37EE92559CB9", "FBDA175393973D042"),
        ("CA5A5606298DDCB29", "F1E76EA24E515CC0D"),
        ("C916675E6CD711E0A", "F9FD376B7D7006716"),
        ("C916675E6CD711E0A", "FCB3B1A213D375E75"),
    ],
    "dll_util": [("CED59418C4CAB0EC4", "S05B90B9B5A6DE6BC")],
}

def verify(work: Path = WORK) -> dict:
    pin=json.loads((work / "zascripts.lock.json").read_text("utf-8"))
    if pin.get("upstream_commit") != "c7bc243ac4d28356dff9f06b6723330ea92247d5":
        raise ValueError("ZAScripts upstream pin changed without review")
    report={}
    for module, pairs in FIELDS.items():
        path=work / "build" / f"za_{module}.lua"
        data=path.read_text("utf-8")
        if "local _za_create_table" not in data or "local function _hx_new(" not in data:
            raise ValueError(f"{module}: ZAScripts Lua finalizer runtime not installed")
        for c,s in pairs:
            if c not in data or s not in data:
                raise ValueError(f"{module}: missing exposed native ABI pair {c}/{s}")
        if not (work/"build"/f"za_{module}.blua").is_file():
            raise ValueError(f"{module}: no Lua 5.4.3 luac output")
        report[module]={"proven_abi_pairs":len(pairs),
                        "native_symbols_found":True,
                        "finalizer_fingerprint":True,
                        "lua_compiler":"UPSTREAM_LUA_5_4_3"}
    return {"compiler":"ZAScripts pinned custom Haxe 4.3.1",
            "upstream_commit":pin["upstream_commit"],
            "status":"CUSTOM_HAXE_COMPILER_ABI_AND_FINALIZER_SMOKE_ONLY",
            "runtime_parity":"NOT_VERIFIED", "modules":report}

if __name__ == "__main__":
    print(json.dumps(verify(),indent=2))
