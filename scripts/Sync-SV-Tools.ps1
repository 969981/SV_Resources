# Verify two complete vendored source trees and initialize three pinned Git submodules under tools/.
# Preserves local changes: git submodule update stops rather than overwriting conflicts.
[CmdletBinding()]
param(
    [string]$RepositoryRoot = (Split-Path -Parent $PSScriptRoot),
    [switch]$VerifyOnly,
    [switch]$IncludeLegacy  # Kept for old callers; legacy SCVI_Extract is a vendored tree.
)
Set-StrictMode -Version Latest
$ErrorActionPreference = 'Stop'
$RepositoryRoot = [IO.Path]::GetFullPath($RepositoryRoot)
$manifestPath = Join-Path $RepositoryRoot 'tools\upstream.json'
if (-not (Test-Path -LiteralPath $manifestPath -PathType Leaf)) { throw "Missing: $manifestPath" }
$config = Get-Content -LiteralPath $manifestPath -Raw | ConvertFrom-Json
if ($config.sourceTracking -ne 'mixed-vendor-and-submodules') { throw 'Unexpected tool manifest version' }
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
    if ($item.importMethod -eq 'vendor-tree') {
        $treeSpec = "HEAD:$path"
        $tree = (& git -C $RepositoryRoot rev-parse $treeSpec).Trim()
        if ($LASTEXITCODE -ne 0 -or $tree -ne [string]$item.sourceTreeSha) {
            throw "Vendored source tree mismatch: $path expected=$($item.sourceTreeSha) actual=$tree"
        }
        if ($item.name -eq 'PokeDocs') {
            $hashlist = Join-Path $dest 'SV\Hashlists\FileSystem\hashes_inside_fd.txt'
            if (-not (Test-Path -LiteralPath $hashlist -PathType Leaf)) {
                throw "Missing vendored PokeDocs hashlist: $hashlist"
            }
        } elseif ($item.name -eq 'SCVI_Extract') {
            foreach ($relative in @('full_extract.py', 'trpfs_extract.py', 'trpak_extract.py',
                                    'info\names_original.txt', 'info\names_changed.txt',
                                    'schemas\trpfs.fbs', 'schemas\trpfd.fbs', 'schemas\trpak.fbs')) {
                $sourceFile = Join-Path $dest $relative
                if (-not (Test-Path -LiteralPath $sourceFile -PathType Leaf)) {
                    throw "Missing vendored SCVI_Extract file: $sourceFile"
                }
            }
        } else {
            throw "Unknown vendored source: $path"
        }
        Write-Host "$path  vendored tree $tree"
        continue
    }
    if ($item.importMethod -ne 'git-submodule') { throw "Unsupported import method for $path" }
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
Write-Host 'All five tool source locations verified (three submodules + two full source snapshots). No game data extracted or tool executables run.'
