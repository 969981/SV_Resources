# Violet 4.0.0 RomFS transfer

## Scope and source

This workflow transfers all files from the Violet 4.0.0 NCA section 1 while preserving each source-relative path beneath `4.0.0/1/`. The source NCA identifier is `d24a763a8882575f1c252dce37021db5_NCA`. The default local source is `X:\ROMS\Nintendo Switch\Pokemon\Pokemon Violet\4.0.0\d24a763a8882575f1c252dce37021db5_NCA\1`; scripts only read from it.

The source inventory is `violet_4.0.0_file_inventory.csv`. Before transfer, the sync tool checks the complete section 1 file set against that inventory by relative path, byte length, and SHA-256. It does not modify the source or the existing `4.0.0/0/` ExeFS files.

## Storage policy

- Original files up to and including 90 MiB (94,371,840 bytes) are copied unchanged.
- Larger originals are stored as native 7z volumes alongside their original relative path, for example `4.0.0/1/arc/data.trpfs.7z.001`.
- 7-Zip runs with `-t7z -mx=1 -mmt=on -v90m`. Archives contain the original basename only, not a machine-specific absolute path.
- Every staged archive is checked with `7z t`, extracted to a temporary directory, and SHA-256 checked against the source before its volumes are published to `4.0.0/1/`.
- Each volume is checked for continuity, byte length, and SHA-256. No artifact may reach 100,000,000 bytes, the ordinary GitHub Git per-file limit.
- Data commits target about 600 MiB and stage explicit artifact paths. They are named `data: add Violet 4.0.0 RomFS batch NNN`. The manifest is committed separately.

The sync tool stores its resumable checkpoint and staging area under `.git/sv-romfs-transfer/`, outside the tracked tree. A failed or interrupted archive remains temporary until its complete test and round-trip hash check pass.

## Manifest

`violet_4.0.0_romfs_transfer_manifest.json` is generated after every source file has a validated result. It contains the game/version and NCA identifier, source-relative path, source size and SHA-256, `copy` or `archive` storage method, each artifact path/size/SHA-256/part number, verification status, and Git commit/push status. It contains no absolute source path. The private local checkpoint additionally records the last error and batch commit state.

The inventory CSV is the source-side evidence. `scripts/Verify-SV-Violet-RomFS.ps1` produces a JSON and CSV report beneath `docs/verification/`; reports can be written elsewhere with `-ReportDirectory`.

## Run, resume, and verify

Run from the repository root in Windows PowerShell 5.1 or later. The default source, repository, and 7-Zip paths match the local transfer setup. A dry run reports source and storage counts without hashing or writing data:

```powershell
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Sync-SV-Violet-RomFS.ps1 -DryRun
```

Run the transfer with per-batch pushes enabled:

```powershell
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Sync-SV-Violet-RomFS.ps1
```

The script checks `master`, staged changes, and `origin/master` before each pushed batch. It stops on remote divergence or a failed push, records the reason in the local checkpoint, and leaves verified files and commits available for a later rerun. If pushes are unavailable but local verification and commits should continue, pass `-NoPush`; a later normal run retries pending pushes first. `-MaxFilesPerRun N` supports a bounded checkpoint run. Repeating a completed run verifies the source and existing artifacts and does not create duplicate data commits.

Quick verification hashes every manifest artifact, checks missing and extra files, tests volume continuity and size limits, and runs `7z t`:

```powershell
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Verify-SV-Violet-RomFS.ps1 -Mode Quick
```

Full verification additionally extracts each archive and compares the restored source size and SHA-256. Add `-CompareSource` to hash the original X: files again:

```powershell
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Verify-SV-Violet-RomFS.ps1 -Mode Full -CompareSource
```

Any failed check returns a nonzero exit code. Restore one file or the full RomFS into a directory outside the repository:

```powershell
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Restore-SV-Violet-RomFS.ps1 -OutputDirectory E:\Temp\Violet-RomFS -RelativePath arc\data.trpfs
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Restore-SV-Violet-RomFS.ps1 -OutputDirectory E:\Temp\Violet-RomFS
```

The restore tool validates artifact hashes and the extracted source SHA-256, skips identical existing outputs, and stops before overwriting different content. It never writes to X:.

Run the synthetic-only workflow (temporary source and repository, local bare Git remote; never the configured GitHub remote) and layout check with:

```powershell
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\tests\Test-Transfer-Synthetic.ps1
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Check-RepoLayout.ps1
```

## Validation and execution record

Initial environment inspection found 30 section 1 files totaling 9,925,201,368 bytes, including six originals above 90 MiB. The matching CSV has 30 section 1 rows with the same aggregate byte count. The destination was empty, E: had 98 GB free, Windows PowerShell 5.1 was available, and the preferred D: 7-Zip executable reported version 26.01. The sync script checks every source SHA-256 against the CSV before creating or reusing artifacts.

The synthetic test completed 23 assertions using generated data. It covered direct copy, multi-volume 7z creation, size limits, resume, archive extraction and source hashes, idempotent commits, explicit-path staging, pushes to a local bare remote, JSON/CSV verification reports, single/all-file restore, and safe stop on a remote-ahead conflict. No real ROM data or real GitHub remote was used by that test.

The actual RomFS transfer, full source comparison, data commit list, and remote push result are recorded below after execution. Do not interpret the initial counts or synthetic results as completion of the real transfer.

## Known limitations and research directions

This is a byte-preserving transfer and verification workflow; it does not decode Trinity or other internal resource formats. The file extensions below are paths for future investigation, not confirmed schema claims:

- `arc/data.trpfd`: compare its observed entries, offsets, and lengths with the corresponding `arc/data.trpfs` bytes. Keep field meanings `UNKNOWN` until supported by repeatable byte-level evidence.
- `arc/data.trpfs`: inspect container boundaries and candidate record layouts, beginning with independently validated offsets and lengths; do not infer names or IDs from extension alone.
- `event/trevt/bin/event.trevt`: examine its raw header and candidate tables, then test any proposed links against native code or multiple independent resources.
- `system/prefetch/data/*.trpre`: record file-by-file sizes, hashes, and stable byte patterns before proposing relationships to loaded resources.

When research starts, create focused notes under `docs/research/`, include exact input hashes and reproducible commands, and label unconfirmed interpretations `CANDIDATE` or `UNKNOWN`.
