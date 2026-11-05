# Run the gftool-core-based batch dumper from a verified local RomFS copy.
[CmdletBinding()]
param(
  [Parameter(Mandatory=$true)][string]$Workspace,
  [string]$RepositoryRoot = (Split-Path -Parent $PSScriptRoot),
  [int]$MaxPacks = 0,
  [int]$StartPack = 0,
  [int]$MaxFiles = 0,
  [switch]$DryRun,
  [switch]$IncludeUnused
)
$ErrorActionPreference = 'Stop'
Set-StrictMode -Version Latest
$RepositoryRoot = [IO.Path]::GetFullPath($RepositoryRoot)
$cacheDir = Join-Path $RepositoryRoot 'tools\_local'
$cache = Join-Path $cacheDir 'GFPAKHashCache.bin'
$oodle = Join-Path $cacheDir 'oo2core_8_win64.dll'
$project = Join-Path $RepositoryRoot 'tools\SV.TrinityDump\SV.TrinityDump.csproj'
$outdir = Join-Path $RepositoryRoot 'Unpack\4.0.0\romfs\arc\data.trpfs'
if (-not (Test-Path -LiteralPath $cache -PathType Leaf)) { throw "Missing $cache; run Prepare-SV-Trinity.ps1" }
if (-not $DryRun -and -not (Test-Path -LiteralPath $oodle -PathType Leaf)) { throw "Missing private Oodle DLL at $oodle" }
$dotnet = Get-Command dotnet -ErrorAction Stop
$argv = @('run', '--project', $project, '-c', 'Release', '--', '--romfs', $Workspace,
           '--output', $outdir, '--cache', $cache)
if (Test-Path -LiteralPath $oodle -PathType Leaf) { $argv += @('--oodle', $oodle) }
if ($DryRun) { $argv += '--dry-run' }
if ($IncludeUnused) { $argv += '--include-unused' }
if ($MaxPacks -gt 0) { $argv += @('--max-packs', "$MaxPacks") }
if ($StartPack -gt 0) { $argv += @('--start-pack', "$StartPack") }
if ($MaxFiles -gt 0) { $argv += @('--max-files', "$MaxFiles") }
& $dotnet.Source @argv
if ($LASTEXITCODE -ne 0) { throw "Trinity dumper failed with exit code $LASTEXITCODE; inspect export.jsonl" }
