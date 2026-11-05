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
