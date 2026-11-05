# Clone exact, reviewed upstream source revisions; no binaries installed.
[CmdletBinding()]
param(
    [string]$ToolsRoot = (Join-Path $PSScriptRoot '..\tools\_external'),
    [switch]$IncludeLegacy
)
Set-StrictMode -Version Latest
$ErrorActionPreference = 'Stop'
$repoRoot = (Resolve-Path (Join-Path $PSScriptRoot '..')).Path
$config = Get-Content -LiteralPath (Join-Path $repoRoot 'tools\upstream.json') -Raw | ConvertFrom-Json
if (-not (Get-Command git -ErrorAction SilentlyContinue)) { throw 'git executable not found' }
New-Item -ItemType Directory -Force -Path $ToolsRoot | Out-Null
foreach ($item in $config.tools) {
    if ($item.optional -and -not $IncludeLegacy) { Write-Host "SKIP optional: $($item.name)"; continue }
    $dest = Join-Path $ToolsRoot $item.name
    if (Test-Path -LiteralPath $dest) {
        if (-not (Test-Path -LiteralPath (Join-Path $dest '.git'))) { throw "Target is not git: $dest" }
        $origin = (& git -C $dest remote get-url origin).Trim()
        if ($LASTEXITCODE -ne 0 -or $origin -ne $item.repository) { throw "Unexpected origin for $dest : $origin" }
        $dirty = & git -C $dest status --porcelain
        if ($LASTEXITCODE -ne 0 -or $dirty) { throw "Local checkout is dirty: $dest" }
        & git -C $dest fetch origin
        if ($LASTEXITCODE -ne 0) { throw "git fetch failed for $dest" }
    } else {
        & git clone $item.repository $dest
        if ($LASTEXITCODE -ne 0) { throw "git clone failed for $($item.name)" }
    }
    & git -C $dest checkout --detach $item.ref
    if ($LASTEXITCODE -ne 0) { throw "Cannot checkout pinned ref for $($item.name)" }
    if ($item.submodules) {
        & git -C $dest submodule update --init --recursive
        if ($LASTEXITCODE -ne 0) { throw "Submodule checkout failed for $($item.name)" }
    }
    $head = (& git -C $dest rev-parse HEAD).Trim()
    if ($head -ne $item.ref) { throw "Revision mismatch for $($item.name)" }
    Write-Host "$($item.name) pinned at $head"
}
Write-Host 'Tool sources checked out. Build/extraction not performed.'
