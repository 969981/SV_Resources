# Prepare validated local Violet 4.0.0 Trinity RomFS and local-only dependencies.
[CmdletBinding()]
param(
  [Parameter(Mandatory=$true)][string]$Workspace,
  [string]$RepositoryRoot = (Split-Path -Parent $PSScriptRoot),
  [string]$OodleDllPath,
  [string]$SevenZipPath,
  [switch]$WithTrpakHashes,
  [switch]$SkipRestore
)
$ErrorActionPreference = 'Stop'
Set-StrictMode -Version Latest
$RepositoryRoot = [IO.Path]::GetFullPath($RepositoryRoot)
$Workspace = [IO.Path]::GetFullPath($Workspace)
if ($Workspace.TrimEnd('\') -eq $RepositoryRoot.TrimEnd('\') -or
    $Workspace.StartsWith($RepositoryRoot.TrimEnd('\') + '\', [StringComparison]::OrdinalIgnoreCase)) {
  throw 'Workspace must be OUTSIDE the Git repository.'
}
$cacheDir = Join-Path $RepositoryRoot 'tools\_local'
New-Item -ItemType Directory -Force -Path $cacheDir | Out-Null
New-Item -ItemType Directory -Force -Path $Workspace | Out-Null
$sourceNames = @('arc\data.trpfd', 'arc\data.trpfs')
if (-not $SkipRestore) {
  foreach ($rel in $sourceNames) {
    $argsRestore = @{ RepositoryRoot=$RepositoryRoot; OutputDirectory=$Workspace; RelativePath=$rel }
    if ($SevenZipPath) { $argsRestore.SevenZipPath = $SevenZipPath }
    & (Join-Path $PSScriptRoot 'Restore-SV-Violet-RomFS.ps1') @argsRestore
    if ($LASTEXITCODE -and $LASTEXITCODE -ne 0) { throw "Restore failed: $rel" }
  }
}
$manifest = Get-Content -LiteralPath (Join-Path $RepositoryRoot 'violet_4.0.0_romfs_transfer_manifest.json') -Raw | ConvertFrom-Json
foreach ($rel in @('arc/data.trpfd', 'arc/data.trpfs')) {
  $entry = @($manifest.files | Where-Object { $_.relativePath -eq $rel })
  if ($entry.Count -ne 1) { throw "Missing manifest entry: $rel" }
  $path = Join-Path $Workspace ($rel.Replace('/', '\'))
  if (-not (Test-Path -LiteralPath $path -PathType Leaf)) { throw "Missing restored input: $path" }
  $actual = (Get-FileHash -LiteralPath $path -Algorithm SHA256).Hash
  if ((Get-Item -LiteralPath $path).Length -ne [long]$entry[0].sourceBytes -or $actual -ne $entry[0].sourceSha256) {
    throw "Restored input SHA256/length mismatch: $rel"
  }
  Write-Host "Verified: $rel ($actual)"
}
$pokeDocs = Join-Path $RepositoryRoot 'tools\_external\PokeDocs\SV\Hashlists\FileSystem'
$lists = @((Join-Path $pokeDocs 'hashes_inside_fd.txt'))
if ($WithTrpakHashes) { $lists += (Join-Path $pokeDocs 'hashes_inside_trpak.txt') }
foreach ($p in $lists) {
  if (-not (Test-Path -LiteralPath $p -PathType Leaf)) {
    throw "PokeDocs hashlist missing; run Sync-SV-Tools.ps1 first: $p"
  }
}
$python = Get-Command python -ErrorAction Stop
$buildArgs = @((Join-Path $PSScriptRoot 'Build-SV-GFPAKHashCache.py'))
foreach ($p in $lists) { $buildArgs += @('--hashlist', $p) }
$buildArgs += @('--output', (Join-Path $cacheDir 'GFPAKHashCache.bin'), '--overwrite',
                '--report', (Join-Path $cacheDir 'GFPAKHashCache.report.json'))
& $python.Source @buildArgs
if ($LASTEXITCODE -ne 0) { throw 'Hashcache generation failed' }
if ($OodleDllPath) {
  $src = [IO.Path]::GetFullPath($OodleDllPath)
  if (-not (Test-Path -LiteralPath $src -PathType Leaf)) { throw "Oodle library missing: $src" }
  $dest = Join-Path $cacheDir 'oo2core_8_win64.dll'
  if ($src -ne $dest) { Copy-Item -LiteralPath $src -Destination $dest -Force }
  Write-Host ("Local Oodle SHA256: " + (Get-FileHash -LiteralPath $dest -Algorithm SHA256).Hash)
}
Write-Host "Ready: RomFS=$Workspace; cache=$cacheDir\GFPAKHashCache.bin"
Write-Host 'Next: Run-SV-TrinityDump.ps1 -Workspace <same path> -MaxPacks 2 (smoke test)'
