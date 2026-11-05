# SV_Resources

Pokémon Scarlet / Violet resource and executable research workspace. Current focus: version 4.0.0, with Scarlet/Violet ExeFS comparison and the shared RomFS resource source used for reproducible extraction and analysis.

## Directory guide

- `4.0.0/0/` — existing executable modules and the separate Scarlet/Violet `main` and `main.npdm`; preserve as-is.
- `4.0.0/1/` — original Violet RomFS layout, with >90 MiB files stored as 90 MiB 7z volumes.
- `docs/` — technical notes and verification evidence.
- `scripts/` — PowerShell and Python tools, including import/verification/recovery scripts as they are added.
- `tests/` — reproducible synthetic tests.
- Root CSVs — input file inventories and the Scarlet/Violet file comparison.
- `violet_4.0.0_romfs_transfer_manifest.json` — added after import; verifies source-to-artifact mappings.

Start with [documentation](docs/README.md), [layout rules](docs/repository-layout.md) and [provenance policy](docs/resource-provenance.md). Automated contributors must read [AGENTS.md](AGENTS.md).

## Data integrity

Original source files remain read-only and are verified by SHA-256. Do not infer identical gameplay solely from matching RomFS hashes: version-specific program logic requires separate analysis. Large file transfer uses local Windows 7-Zip and explicit per-path Git batch commits; see `scripts/README.md`.

This repository may contain game-derived material. Do not add decryption keys, credentials or data without appropriate rights and access controls.

## RomFS transfer

See [the Violet 4.0.0 RomFS transfer guide](docs/romfs-transfer.md) for the manifest, resumable workflow, verification, and restoration steps.

## New: SV 4.0.0 unpack pipeline

See [Unpack/](Unpack/README.md), [milestone roadmap](docs/unpack-roadmap.md), and [upstream tools](tools/README.md). `scripts/Plan-SV-Unpack.py` creates a safe per-source-file task inventory; it does not unpack actual game archives. Use existing verification and restore scripts before running gftool against local, hash-validated files.

## Pinned external tool sources

Five upstream projects are available under [tools/](tools/README.md): full vendored PokeDocs source and four pinned Git submodules (gftool, pkNX, Switch-Toolbox and SCVI_Extract). After `git pull`, run `git submodule update --init --recursive` (or `scripts/Sync-SV-Tools.ps1`). The SV.TrinityDump .NET wrapper links to `tools/gftool`; do not use obsolete `tools/_external` paths. The already tracked `scripts/deps/oo2core_8_win64.dll` is not automatically redistributed or modified by this integration.
