# SV 4.0.0 — Blueberry Points (BP) / BBQ native ELF recovery

**2026-11-11; static evidence, not a guest save/roundtrip test.** Both Scarlet and Violet `main.elf` Ghidra 12.2 projects were restored from published SHA-verified sources using `-noanalysis`; the original ELF, project database, generated C, and `master` were not modified.

## Evidence

1. [Native ELF slice Run #42938730037](https://github.com/969981/SV_Resources/actions/runs/42938730037): Scarlet and Violet **SUCCESS**. [Scarlet artifact](https://github.com/969981/SV_Resources/actions/runs/42938730037/artifacts/13819063526) SHA-256 `78a2ae6386fba40f0d1b425257e20fcf5b1faa53914ce7de6e5d4d53e7d305f1`; [Violet artifact](https://github.com/969981/SV_Resources/actions/runs/42938730037/artifacts/13820620119) SHA-256 `9ca6b4963894620c0cb9830595b62da035a0bbc3decd3c1342eb0afce23d2a33`.
2. The **five chosen function instruction-stream SHA-256 hashes match exactly** between Scarlet/Violet, including `02AFA3CC`, `02ADD878` (requested interior address `02ADD990`), `01576244`, `02AF1C14`, `02AF1E8C`. Both have successful Ghidra C recovery.
3. [Neighborhood Run #42939401385](https://github.com/969981/SV_Resources/actions/runs/42939401385) extracts neighboring BP accessors and mission-management routines. Scarlet recovered 31/31 functions in selected ranges. The C bodies for the key named accessors listed below were independently checked in both published Scarlet/Violet C directories.
4. **Address convention:** original Ghidra image base is `0x00100000`; Ghidra address `0x02AFA3CC` nominally corresponds to `main+0x029FA3CC`. This **must** be checked against actual guest module segment mapping and code bytes before calling it an absolute guest address.

## Proven BP wallet accessors

| Purpose | Ghidra function entry | Nominal main-relative address | Evidence |
|---|---|---|---|
| BP balance GET | `FUN_02AFA2C4` | `main+0x29FA2C4` | [native C](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/02afa2c4.c) |
| BP balance SET | `FUN_02AFA3CC` | `main+0x29FA3CC` | [native C](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/02afa3cc.c) |
| Common DB lookup | `FUN_00F844F4` | `main+0xF844F4` | [native C](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/00f844f4.c) |
| Generic HashDB read | `FUN_015DF1D0` | `main+0x14DF1D0` | [native C](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/015df1d0.c) |
| Generic HashDB update wrapper | `FUN_01576244` | `main+0x1476244` | [native C](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/01576244.c) |
| Existing-block update / new-block creation paths | `FUN_02AF1C14` / `FUN_02AF1E8C` | `main+0x29F1C14` / `main+0x29F1E8C` | [update](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/02af1c14.c), [create](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/02af1e8c.c) |

Both BP GET and SET use a **32-bit save block key `0x66A33824`**; the payload is 32 bits (`uint32_t`). GET calls the generic read and extracts the high 32 bits from its packed 64-bit return value, while checking a low-byte status for a failure/notification callback. SET accepts a 32-bit BP value, obtains the same save database and calls the generic storage update. The generic update has mutex, validation and failure paths; the BP SET wrapper returns `void` and discards the generic update status.

### Minimal data-flow pseudocode (not original C++ class names)

```cpp
uint32_t ReadBP() {
    uint64_t packed = HashDBRead(GetSaveDatabase(), 0x66A33824);
    // Lower status bits are handled by internal code/callback.
    return (uint32_t)(packed >> 32);
}
void WriteBP(uint32_t proposedBalance) {
    // Update request only; this wrapper does not return the underlying result.
    (void)HashDBUpdate(GetSaveDatabase(), 0x66A33824, &proposedBalance);
}
```

The available evidence **does not prove** a high-level `AddBP(amount)`, display refresh, maximum clamp, dirty-on-save confirmation, or file durability. Distinguish **absolute wallet replacement** from **award/delta calculation**.

## Blueberry quest/BBQ completion and counters

The previously supplied `main+0x29DD990` **belongs inside** `FUN_02ADD878` (Ghidra function entry `0x02ADD878`), not a distinct function entry. [Native C](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/02add878.c) and the slice ASM prove the task result structure, `+0x1C4` state, and conditional counters. `FUN_02ADD480` calls it three times under different completion conditions (see [native C](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/02add480.c)).

| BBQ Manager field | Native observed use | Getter |
|---|---|---|
| `+0x1C8` | completion-counter increment for non-type-2 cases | [`FUN_02ADF6CC`](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/02adf6cc.c) |
| `+0x1CC` | completion-counter increment for task type 2 | [`FUN_02ADF7F0`](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/02adf7f0.c) |
| `+0x1C4` | bounded/current mission progress state (observed upper cap `0x14` in completion routine) | [`FUN_02ADF914`](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/02adf914.c) |
| `+0x1C5, +0x4D1, +0x6E1, +0x8F1` | four small progress values summed and capped at 3 | [`FUN_02ADFA38`](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/02adfa38.c) |

In existing business context, `+0x1C8` and `+0x1CC` correspond to solo/team completion counters, but the exact native type enum should be confirmed by examining mission-definition data and real values; the machine code itself only distinguishes `type==2` from other cases.

**Do not conflate:** `FUN_02ADD878` changes mission state and fills a completion result. Its direct callees **do not include `FUN_02AFA3CC`**. The BP award consumer may be a Lua/event callback or different native caller; the chain `mission complete → reward amount → WriteBP` remains unclosed. The separate quest-record save block key `0x7BF02DBE`, native read/write routines, and serialized counter-offset correspondence are now recovered in the appendix below. The reward-award bridge remains unclosed.

## Remaining investigations and minimum proof

1. Locate the **actual BP reward award/accumulation consumer**: start at completed result from `FUN_02ADD878`, then the Lua enqueue/event path; identify mission base reward field, any modifiers and the transition into BP GET/SET, capturing an actual PC/LR if possible.
2. Confirm actual on-disk persistence by real guest save/reload. Static serializers now map payload `+0x188/+0x18C` to live `BBQManager+0x1C8/+0x1CC`; this is not yet a disk durability proof.
3. Observe before/after in guest: mission result, reward display, BP GET, HashDB update return, final BP GET, and **save/reload** on Scarlet and Violet; do not interpret transient RAM write as successful save.
4. Maintain separate categories: `STATICS_VERIFIED` for read/write and completion counter increments; `UNRESOLVED` for reward-chain bridging, persistent storage confirmation and 3-color quest-control side effects.

Only the separate analysis branch is modified; no live game process or save was touched.


## Update: quest record serializer and deserializer recovered (Run #42940820911)

### Two previously unrecognized native functions

The existing Ghidra project had **no function boundary** at the two original literal-key sites, although the native AArch64 instructions were present and identical in Scarlet/Violet in the [Run #42940336825](https://github.com/969981/SV_Resources/actions/runs/42940336825) disassembly. A narrowly scoped script [SV400BlueberryQuestRecover.java](https://github.com/969981/SV_Resources/blob/ghidra/sv400-semantic-recovery/scripts/ghidra/SV400BlueberryQuestRecover.java) temporarily built functions **inside a database transaction rolled back on exit**, exported decompiled C and emitted status without modifying the original saved Ghidra project.

| Ghidra recovered entry | Role | Key | Source / destination |
|---|---|---|---|
| `0x02AD814C` | **QuestRecords write/update** | `0x7BF02DBE` | `BBQManager+0x40` as input; 0x210-byte source data passed to `FUN_015D05BC` |
| `0x02AD889C` | **QuestRecords read/restore** | `0x7BF02DBE` | `BBQManager+0x40` as output; 0x210-byte destination capacity passed to `FUN_00F88478` |

Scarlet [artifact 13820148445](https://github.com/969981/SV_Resources/actions/runs/42940820911/artifacts/13820148445) contains both `02ad814c.c` and `02ad889c.c`, and `recovered.tsv` reports **both OK**. The first function creates/normalizes a HashDB record buffer of **0x215 bytes**; the generic [FUN_015D05BC](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/015d05bc.c) explicitly emits **1 type byte (4) + 4-byte length + 0x210 data bytes**, accounting for the additional five bytes. The second function calls generic [FUN_00F88478](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/00f88478.c), which reads the type+length header and copies the decoded payload to the provided output address. Both generic functions have status/error branches; this does **not** prove a successful physical save to the console's storage.

### Exact live-to-record offset correspondence

The `BBQManager+0x40` pointer is the first byte of the **logical 0x210-byte quest-record payload**. The two known live counters are within the copied data range:

```text
BBQManager+0x40  <-- copy begins, logical payload +0x000
     ...
BBQManager+0x1C8  == payload+0x188   counter A (non-type-2/solo)
BBQManager+0x1CC  == payload+0x18C   counter B (type-2/team)
     ...
BBQManager+0x24F  <-- last byte, logical payload +0x20F
```

The underlying serialized element reserves **0x215** bytes due to its 5-byte type+length header; thus raw hash-element storage offsets differ by +5 from *logical* payload offsets. Do not confuse the two forms. This mapping is a strong **STATIC_SERIALIZATION_LAYOUT_VERIFIED** result, not proof of disk write, online save acknowledgements, or guest save/load roundtrip.

### Status gate

- VERIFIED_STATIC: `KBlueberryPoints=0x66A33824` GET/SET, `KBlueberryQuestRecords=0x7BF02DBE` write/read, data size 0x210 and native field-layout mapping `+0x1C8/+0x1CC ↔ +0x188/+0x18C`.
- STILL UNRESOLVED: `CompletedResult → reward amount/mission modifiers → BP wallet delta → WriteBP`; which Lua/event callback actually pays rewards; on-disk durability and guest save/reload verification.
- IMPORTANT: no original native Ghidra DB, ELF, C, or master was altered. Recovered C files are in Actions artifacts only.


### Cross-version verification completed

[Run #42940820911](https://github.com/969981/SV_Resources/actions/runs/42940820911) has now completed successfully in **both** matrix jobs. Both reconstructed functions are recovered with `created=true,status=OK`:

- Scarlet [artifact 13820148445](https://github.com/969981/SV_Resources/actions/runs/42940820911/artifacts/13820148445), ZIP SHA-256 `c99282bef9e7fd14aa202f2603fd9990e9afa12f7e57954dd9a9ab9a71d7c5ae`.
- Violet [artifact 13821026072](https://github.com/969981/SV_Resources/actions/runs/42940820911/artifacts/13821026072), ZIP SHA-256 `9f21c648b77e7440ac331502e9af45b10083cc032051e5c003e055fb1a12675d`.

Downloaded and compared ZIP contents locally: the full reconstructed `02ad814c.c` files match **byte-for-byte** between Scarlet and Violet (SHA-256 `323dcbb4f5f68e6be87fb1a1e746f1151352a2dfbfc19cf7272dd83b7228b495`); so do `02ad889c.c` (SHA-256 `037f390b32cf5b7660ab4554d28147840830761ccee471e71f1d51f58f0dd4f8`) and `recovered.tsv`. This rules out an edition-dependent divergence in these two native quest-record routines within these reconstructed functions.


## Newly isolated BP wallet setter caller

The first targeted analysis ZIP `02afa3cc.json` includes three incoming references to `FUN_02AFA3CC`: `03ECCED4` (`INDIRECTION` in unwind data), `0418A1C8` (`DATA` unwind data), and a **single direct AArch64 call** at **Ghidra `009209C0`**. The direct call occurs in a code range not recognized as a function by the original Ghidra full analysis; the returned caller function is null. The unique callsite is a focused lead for `BP debit/award → new total → WriteBP`, but **does not yet prove it is the reward-consumer path**; spending BP could use the same wallet setter. [Read-only callsite workflow](https://github.com/969981/SV_Resources/actions/workflows/sv400-bp-reward-callsite.yml) exports nearby ARM64 instructions and getter xrefs for both original editions. Until the preceding `W0` dataflow and call conditions are verified, classify the operation as **UNRESOLVED_ABSOLUTE_BP_UPDATE_CALLER**, not as confirmed `AddBP`.


## Follow-up: unique wallet callsite is a Lua binding, not a proven award routine

**Evidence checked 2026-11-11:** [Run #42941605525](https://github.com/969981/SV_Resources/actions/runs/42941605525) finished **SUCCESS** in Scarlet and Violet, with [Scarlet artifact 13820762504](https://github.com/969981/SV_Resources/actions/runs/42941605525/artifacts/13820762504) and [Violet artifact 13821595564](https://github.com/969981/SV_Resources/actions/runs/42941605525/artifacts/13821595564). The `bp_caller_window.tsv` files are byte-identical (SHA-256 `dfbe8b0971761b73958a4626bbbbc5445374fadc81047247c990b6db043139b7`); the reference TSVs are also byte-identical (SHA-256 `c9d938b407ddd06763af81c267c9b275c795526bcfebd69dcf0e0b3929c64537`).

**Correction of the earlier reward-callsite hypothesis:** the `BL FUN_02AFA3CC` at Ghidra VA `0x009209C0` is inside a native **Lua binding wrapper**, not itself an observed BP reward calculation. Its apparent function entry is Ghidra VA `0x00920970` (`main+0x00820970` after subtracting the project's `0x00100000` image base). Original Ghidra function ownership is still empty, but its entry prologue and return epilogue are apparent in the exported ARM64 instructions:

```asm
00920970  sub sp,sp,#0x20
0092097C  mov w1,#0x1
00920980  mov x2,xzr
00920984  bl  0x00C92DF0     ; reads Lua stack integer at index 1, status ptr NULL
...
009209C0  bl  0x02AFA3CC     ; accepts returned low 32 bits as proposed balance
009209C8  mov w0,wzr        ; Lua C-function returns zero result values
009209D0  ret
```

The existing original decompilation [`FUN_00C92DF0`](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/00c92df0.c) retrieves a Lua stack slot by index and converts/checks the integer tag (`3`), with an optional status output. Thus this binding behaves like `LuaSetBlueberryPoints(L)`, obtaining a numeric Lua argument and invoking the native **absolute-balance** setter. It does **not** itself add an awarded delta or read the previous balance.

The paired Ghidra VA `0x00920A60` (`main+0x00820A60`) is the Lua GET binding. At `0x00920AA8` it calls `FUN_02AFA2C4`, passes the resulting value as argument 2 to [`FUN_00C5D960`](https://github.com/969981/SV_Resources/blob/master/Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/00c5d960.c) (which pushes the integer with Lua value tag `3`), then returns `1` Lua result. This gives a coherent native GET/SET Lua API pair, but their exact Lua-exposed names and registration table entries remain **UNKNOWN**.

**Verified/static:** wrapper instruction-stream parity between Scarlet and Violet; Lua argument integer → absolute wallet setter; wallet getter → Lua integer result. **Not verified:** the Lua-exposed registration names, any Lua/event script that calls this setter during mission completion, reward amount/delta calculation, BP UI refresh, write-status propagation, or saved-file durability. The direct-call xref listing is *not* exhaustive of indirect/dynamic calls.

**Next focused investigation:** resolve xrefs/registration-table entries of wrapper VAs `0x00920970` and `0x00920A60`; use discovered names to search the `main.blua` and event script call graph. On a read-only guest trace, capture the setter Lua argument, native setter entry, completion result and before/after wallet values; separately validate save/reload. Do not run full Ghidra analysis again.
