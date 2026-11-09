"""GDB Python observer for Violet 4.0.0 Lua load ONLY.

Usage after attaching to a matching offline guest:
  (gdb) set $main = 0xACTUAL_RUNTIME_MAIN_BASE
  (gdb) source scripts/SV400_Lua_R7_Load_ReadOnly.py

Requires GDB with Python and readable guest memory. This script does not call
game APIs or modify game data; the debugger's breakpoint mechanism may alter
instruction bytes/scheduling. It does NOT capture R13 or UpVal*.
"""
import hashlib
import json

import gdb

BLUA_SHA = "ae4a7d0168751f53af11746ac5ae7771cb1a5bfa580bcc0f79e2b9ee85acb572"
BLUA_BYTES = 5342713
LOAD_CALL_RVA = 0xE37F70
LOAD_CALL_A64 = bytes.fromhex("cc000094")


class SVR7LuaLoad(gdb.Breakpoint):
    def stop(self):
        result = {"event": "R7_LUA_LOAD_ANCHOR_ONLY", "version": "Violet 4.0.0",
                  "native_rva": hex(LOAD_CALL_RVA), "upval_evidence": "NOT_OBSERVED"}
        try:
            L = int(gdb.parse_and_eval("$x0"))
            data = int(gdb.parse_and_eval("$x1"))
            length = int(gdb.parse_and_eval("$x2"))
            result["lua_state"] = hex(L)
            result["length"] = length
            if L and data and length == BLUA_BYTES:
                raw = bytes(gdb.selected_inferior().read_memory(data, length))
                result["chunk_sha256"] = hashlib.sha256(raw).hexdigest()
                result["match_original_main_dynamic"] = (
                    result["chunk_sha256"] == BLUA_SHA)
            else:
                result["match_original_main_dynamic"] = False
        except (gdb.error, ValueError, MemoryError) as exc:
            result["error"] = type(exc).__name__ + ": " + str(exc)[:180]
        gdb.write(json.dumps(result, sort_keys=True) + "\n")
        return False


try:
    base = int(gdb.parse_and_eval("$main"))
except (gdb.error, ValueError):
    raise gdb.GdbError("Set $main to runtime NSO main base before sourcing R7 observer")
if base <= 0 or base >= 2**64:
    raise gdb.GdbError("Invalid main runtime base")
observed = bytes(gdb.selected_inferior().read_memory(base + LOAD_CALL_RVA, 4))
if observed != LOAD_CALL_A64:
    raise gdb.GdbError(
        "Violet 4.0.0 load-call codeword mismatch; wrong NSO base/build, refusing breakpoint")
bp = SVR7LuaLoad("*" + hex(base + LOAD_CALL_RVA), internal=False)
bp.silent = True
gdb.write("R7 load-only observer active at " + hex(base + LOAD_CALL_RVA) +
          "; downstream VM UpVal capture is NOT configured.\n")
