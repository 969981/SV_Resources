# Initialize all five pinned git submodules under tools/.
# Preserves local changes: git submodule update stops rather than overwriting conflicts.
[CmdletBinding()]
param(
    [string]$RepositoryRoot = (Split-Path -Parent $PSScriptRoot),
    [switch]$VerifyOnly,
    [switch]$IncludeLegacy  # Kept for old callers; legacy SCVI_Extract is now always included.
)
Set-StrictMode -Version Latest
$ErrorActionPreference = 'Stop'
$RepositoryRoot = [IO.Path]::GetFullPath($RepositoryRoot)
$manifestPath = Join-Path $RepositoryRoot 'tools\upstream.json'
if (-not (Test-Path -LiteralPath $manifestPath -PathType Leaf)) { throw "Missing: $manifestPath" }
$config = Get-Content -LiteralPath $manifestPath -Raw | ConvertFrom-Json
if ($config.sourceTracking -ne 'git-submodule') { throw 'Unexpected tool manifest version' }
if (-not (Get-Command git -ErrorAction SilentlyContinue)) { throw 'Git executable not found' }

if (-not $VerifyOnly) {
    & git -C $RepositoryRoot submodule sync --recursive
    if ($LASTEXITCODE -ne 0) { throw 'git submodule sync failed' }
}
foreach ($item in $config.tools) {
    $path = [string]$item.path
    $expected = [string]$item.ref
    if (-not $path.StartsWith('tools/', [StringComparison]::Ordinal) -or
        $path.Contains('..') -or $path.Contains('\')) {
        throw "Unsafe submodule path in manifest: $path"
    }
    $dest = Join-Path $RepositoryRoot $path.Replace('/', '\')
    if (-not $VerifyOnly) {
        & git -C $RepositoryRoot submodule update --init --recursive -- $path
        if ($LASTEXITCODE -ne 0) { throw "Unable to initialize $path" }
    }
    if (-not (Test-Path -LiteralPath (Join-Path $dest '.git'))) {
        throw "Submodule not initialized: $path (run script without -VerifyOnly)"
    }
    $actual = (& git -C $dest rev-parse HEAD).Trim()
    if ($LASTEXITCODE -ne 0 -or $actual -ne $expected) {
        throw "Pinned revision mismatch: $path expected=$expected actual=$actual"
    }
    Write-Host "$path  $actual"
}
Write-Host 'All five tool sources initialized and verified. No game data extracted or tool executables run.'
