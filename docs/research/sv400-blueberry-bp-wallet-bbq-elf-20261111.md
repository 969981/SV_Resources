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

**Do not conflate:** `FUN_02ADD878` changes mission state and fills a completion result. Its direct callees **do not include `FUN_02AFA3CC`**. The BP award consumer may be a Lua/event callback or different native caller; the chain `mission complete → reward amount → WriteBP` remains unclosed. The save-block key proposed for quest history (`0x7BF02DBE`) and specific quest record offsets `+0x188/+0x18C` are **not yet independently located** in this narrow slice.

## Remaining investigations and minimum proof

1. Locate the **actual BP reward award/accumulation consumer**: start at completed result from `FUN_02ADD878`, then the Lua enqueue/event path; identify mission base reward field, any modifiers and the transition into BP GET/SET, capturing an actual PC/LR if possible.
2. Independently confirm `KBlueberryQuestRecords=0x7BF02DBE` readers/writers and persistence, comparing save record `+0x188/+0x18C` and the live `BBQManager+0x1C8/+0x1CC` counters.
3. Observe before/after in guest: mission result, reward display, BP GET, HashDB update return, final BP GET, and **save/reload** on Scarlet and Violet; do not interpret transient RAM write as successful save.
4. Maintain separate categories: `STATICS_VERIFIED` for read/write and completion counter increments; `UNRESOLVED` for reward-chain bridging, persistent storage confirmation and 3-color quest-control side effects.

Only the separate analysis branch is modified; no live game process or save was touched.
