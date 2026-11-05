[CmdletBinding()]
param(
    [string]$RepositoryRoot
)

$ErrorActionPreference = 'Stop'
Set-StrictMode -Version Latest
if (-not $RepositoryRoot) { $RepositoryRoot = Split-Path -Parent $PSScriptRoot }
$RepositoryRoot = [IO.Path]::GetFullPath($RepositoryRoot)
$failures = New-Object System.Collections.ArrayList

function Assert-RepoPath {
    param([string]$RelativePath, [string]$Kind)
    $path = Join-Path $RepositoryRoot $RelativePath
    if ($Kind -eq 'directory' -and -not (Test-Path -LiteralPath $path -PathType Container)) { [void]$failures.Add("Missing directory: $RelativePath") }
    if ($Kind -eq 'file' -and -not (Test-Path -LiteralPath $path -PathType Leaf)) { [void]$failures.Add("Missing file: $RelativePath") }
}

@('4.0.0\0', '4.0.0\1', 'docs', 'docs\research', 'scripts', 'tests') | ForEach-Object { Assert-RepoPath $_ 'directory' }
@('AGENTS.md', 'README.md', 'docs\README.md', 'docs\repository-layout.md', 'docs\resource-provenance.md', 'docs\romfs-transfer.md', 'scripts\README.md', 'scripts\Sync-SV-Violet-RomFS.ps1', 'scripts\Verify-SV-Violet-RomFS.ps1', 'scripts\Restore-SV-Violet-RomFS.ps1', 'scripts\Check-RepoLayout.ps1', 'tests\Test-Transfer-Synthetic.ps1') | ForEach-Object { Assert-RepoPath $_ 'file' }

$manifestPath = Join-Path $RepositoryRoot 'violet_4.0.0_romfs_transfer_manifest.json'
if (Test-Path -LiteralPath $manifestPath -PathType Leaf) {
    try {
        $manifest = Get-Content -LiteralPath $manifestPath -Raw | ConvertFrom-Json
        foreach ($entry in @($manifest.files)) {
            if (-not $entry.relativePath -or $entry.relativePath -match '(^|/)\.\.(/|$)') { [void]$failures.Add("Unsafe manifest source path: $($entry.relativePath)"); continue }
            foreach ($artifact in @($entry.artifacts)) {
                $artifactPath = Join-Path $RepositoryRoot ([string]$artifact.path.Replace('/', '\'))
                if (-not (Test-Path -LiteralPath $artifactPath -PathType Leaf)) { [void]$failures.Add("Missing manifest artifact: $($artifact.path)") }
            }
        }
    } catch {
        [void]$failures.Add("Invalid transfer manifest: $($_.Exception.Message)")
    }
} else {
    Write-Host 'Transfer manifest not present yet; repository layout can still be checked.'
}

$rootToolFiles = @(Get-ChildItem -LiteralPath $RepositoryRoot -File | Where-Object { $_.Extension -in @('.ps1', '.py', '.cmd', '.bat') })
foreach ($file in $rootToolFiles) { [void]$failures.Add("Tool script must be under scripts/: $($file.Name)") }
$exeFs = Join-Path $RepositoryRoot '4.0.0\0'
if (Test-Path -LiteralPath $exeFs -PathType Container) {
    $files = @(Get-ChildItem -LiteralPath $exeFs -File -Recurse)
    if ($files.Count -eq 0) { [void]$failures.Add('4.0.0/0 must retain its existing ExeFS files.') }
}

if ($failures.Count -gt 0) {
    $failures | ForEach-Object { Write-Error $_ -ErrorAction Continue }
    exit 1
}
Write-Host "Repository layout checks passed: $RepositoryRoot"
exit 0
