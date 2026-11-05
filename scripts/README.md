# Scripts and executable tooling

Place maintained PowerShell/Python tools here. Do not put scripts directly under `4.0.0/`, `docs/` or the repository root.

## RomFS transfer tools (added by the task-package bootstrap)
- `Sync-SV-Violet-RomFS.ps1`: read-only source transfer, >90 MiB 7z volumes, per-file SHA-256, explicit 600 MiB Git batch commits and pushes.
- `Verify-SV-Violet-RomFS.ps1`: full manifest, archive and optional source-hash checks.
- `Restore-SV-Violet-RomFS.ps1`: restore to a separate directory, never over the Git archive.
- `Check-RepoLayout.ps1`: lightweight repository layout validation.

Windows example:

```powershell
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Sync-SV-Violet-RomFS.ps1 -DryRun
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Sync-SV-Violet-RomFS.ps1
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Verify-SV-Violet-RomFS.ps1 -DeepArchiveTest -CompareSource
```

Source defaults to the owner's `X:\ROMS\Nintendo Switch\Pokemon\Pokemon Violet\4.0.0\..._NCA\1`. Destination defaults to `E:\Test\SV_Resources\4.0.0\1`. 7-Zip defaults to `D:\Tool\7-Zip\7z.exe`.

For every new script, document required tooling, inputs, outputs, safe default behavior, command examples, supported versions and related evidence in `docs/`. Never hardcode secrets. Keep temporary data outside tracked directories.

## Shared helper and synthetic validation

`SV-RomFS.Transfer.psm1` contains the shared hashing, 7-Zip, manifest, and Git safety helpers. `Test-Transfer-Synthetic.ps1` uses generated files and a temporary local bare remote; it never pushes to the configured GitHub repository.

Run the synthetic test and repository layout check with:

```powershell
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\tests\Test-Transfer-Synthetic.ps1
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Check-RepoLayout.ps1
```

Use `-NoPush` to complete local verification and commits while a remote is unavailable; a later normal run retries pending pushes. Use `-MaxFilesPerRun N` for a bounded checkpoint run. Parameterize `-ArchiveThresholdBytes`, `-VolumeSize`, and `-BatchTargetBytes` for synthetic transfer tests.

## SV extraction planning and external tool source

- `Plan-SV-Unpack.py`: generate `Unpack/4.0.0/_index/unpack_plan.json` and, optionally, empty per-file output directories from the exact existing manifest. It **does not extract any resources**. Use `--dry-run` first, then `--create-directories`; `--force` is required to overwrite a prior plan.
- `Sync-SV-Tools.ps1`: clone pinned PokeDocs/gftool/pkNX source into ignored `tools/_external`; `-IncludeLegacy` includes SCVI_Extract. This does not build or run tools.

```powershell
python .\scripts\Plan-SV-Unpack.py --repo . --dry-run
python .\scripts\Plan-SV-Unpack.py --repo . --create-directories
powershell.exe -NoProfile -ExecutionPolicy Bypass -File .\scripts\Sync-SV-Tools.ps1
python -m unittest discover -s tests -p test_plan_sv_unpack.py
```
