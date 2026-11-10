# SV 4.0.0 experimental main.lua — validation record

> **EXPERIMENTAL / NOT GAME-READY.** The reconstructed file is a readable Lua 5.4 source *candidate*, not a proven semantic restoration. **Never replace original `main.blua` with it.**

## Provenance
- Original virtual resource: `Unpack/4.0.0/romfs/arc/data.trpfs/virtual/script/lua/bin/release/main/main.blua`
- Original size: **12,912,264 bytes**; SHA-256: `c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815`
- Recovered source size: **34,448,213 bytes**; SHA-256: `62db3e8515f8871c27f5ef034e74db5ea5ed114756c5dbc42a671750e01266c7`
- Original source candidate bundle: `SV400_main_lua_full_source_experimental.zip`; its `main.lua` byte-for-byte matches two separately saved `main.lua` copies.
- Sources: [Draft PR #92](https://github.com/969981/SV_Resources/pull/92), [R9 sharded strict run](https://github.com/969981/SV_Resources/actions/runs/42611019574), [R11 Java fallback run](https://github.com/969981/SV_Resources/actions/runs/42613425506).

## Recovery method (reported)
1. Parse source BLUA as Lua 5.4 bytecode; inspect root 429,034 instructions / 30,829 direct children, with 37,743 native Prototypes total.
2. Shard direct children across eight jobs and recover 30,736 with patched `unluac-rs` strict-mode output, each passing Lua 5.4 syntax checks.
3. Recover another 91 with independent Java `unluac`; hand-adjust cross-scope goto control flow for Proto 6311 and 22129.
4. Translate all root instructions into register-table Lua expressions; insert 30,829 child function bodies to produce a single `main.lua`.
5. Check Lua 5.4 compiler accepts this candidate; preserve semantic differences instead of claiming equivalence.

The full root AOT assembly/generator source and exact command line were **not present in PR #92** at this time, so this archive's generation is **not yet reproducible end-to-end from committed scripts**. See `scripts/Recover-SV-Main-Sliced.py` on the PR branch for the sharded direct-child stage.

## Validation matrix
| Gate | Result | Evidence / limitations |
| --- | --- | --- |
| Source archive CRC / ZIP integrity | PASS | ZIP test and extracted bytes compared on 2026-11-10 |
| Recovered source SHA-256 and byte count | PASS | This record + `provenance.json` |
| 30,829 direct-child source bodies | REPORTED PASS | Artifact manifest; includes 93 Java fallback/manual repairs |
| No `UNRECOVERED_NATIVE_PROTO` placeholder | PASS | Recovered file text scan |
| Lua 5.4 lexical/syntax compile | PASS | `luaL_loadbufferx(..., mode="t")` against `liblua5.4.so.0`, return 0 on 2026-11-10 |
| Original vs generated runtime A/B | FAIL / DIVERGED | Mock environment; see PR #92 |
| Real game engine VM/runtime equivalence | NOT OBSERVED | Do not deploy |

## Remaining risks
- Captured-by-reference UpVal allocation, closure identity and upvalue scope;
- Lua table `NEWTABLE` / `SETLIST` allocation order and metamethod side effects;
- Open-result CALL/RETURN and call frame semantics;
- Two manually adjusted `goto` regions need original bytecode CFG semantic tests.

## Independent verification
```sh
sha256sum recovered/main.lua
luac5.4 -p recovered/main.lua
```
The Lua syntax gate *only* parses/compiles the file. A syntax pass is not an A/B test or approval for runtime replacement.
