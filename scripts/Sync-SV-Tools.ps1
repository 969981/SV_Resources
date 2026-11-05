# Verify six complete vendored source trees, with gftool/NxMiddleware included locally.
# Read-only verification; never downloads dependencies or alters tracked files.
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
if ($config.sourceTracking -ne 'vendor-only') { throw 'Unexpected tool manifest version' }
if (-not (Get-Command git -ErrorAction SilentlyContinue)) { throw 'Git executable not found' }

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
        } elseif ($item.name -eq 'nx2elf') {
            foreach ($file in @('CMakeLists.txt','nx2elf.cpp','lz4.c','elf.h','elf_eh.cpp')) {
                if (-not (Test-Path -LiteralPath (Join-Path $dest $file) -PathType Leaf)) { throw "Missing vendored nx2elf file: $file" }
            }
        } elseif ($item.name -eq 'gftool') {
            foreach ($relative in @('GFTool.Core/GFTool.Core.csproj', 'NxMiddleware/BnTxx/BnTxx.csproj', 'TrinityModLoader.sln', 'LICENSE')) {
                if (-not (Test-Path -LiteralPath (Join-Path $dest $relative) -PathType Leaf)) { throw "Missing vendored gftool file: $relative" }
            }
        } elseif ($item.name -eq 'pkNX') {
            if (-not (Test-Path -LiteralPath (Join-Path $dest 'pkNX.sln') -PathType Leaf)) { throw 'Missing vendored pkNX solution' }
        } elseif ($item.name -eq 'Switch-Toolbox') {
            if (-not (Test-Path -LiteralPath (Join-Path $dest 'Toolbox.sln') -PathType Leaf)) { throw 'Missing vendored Switch-Toolbox solution' }
        } else {
            throw "Unknown vendored source: $path"
        }
        Write-Host "$path  vendored tree $tree"
        continue
    }
    throw "Only vendor-tree source imports are supported: $path"
}
Write-Host 'All six tool source locations verified as real Git files. No submodule checkout or executable run required.'
