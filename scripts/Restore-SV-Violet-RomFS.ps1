[CmdletBinding()]
param(
    [string]$RepositoryRoot,
    [string]$ManifestPath,
    [string]$OutputDirectory = (Join-Path $env:TEMP 'SV_Resources-Violet-4.0.0-Restored'),
    [string]$SevenZipPath,
    [string]$RelativePath
)

$ErrorActionPreference = 'Stop'
Set-StrictMode -Version Latest
Import-Module (Join-Path $PSScriptRoot 'SV-RomFS.Transfer.psm1') -Force
if (-not $RepositoryRoot) { $RepositoryRoot = Split-Path -Parent $PSScriptRoot }
$RepositoryRoot = [IO.Path]::GetFullPath($RepositoryRoot)
if (-not $ManifestPath) { $ManifestPath = Join-Path $RepositoryRoot 'violet_4.0.0_romfs_transfer_manifest.json' }
if (-not (Test-Path -LiteralPath $ManifestPath -PathType Leaf)) { throw "Transfer manifest is missing: $ManifestPath" }
$OutputDirectory = [IO.Path]::GetFullPath($OutputDirectory)
$repoPrefix = [IO.Path]::GetFullPath($RepositoryRoot).TrimEnd('\') + '\'
if ($OutputDirectory.StartsWith($repoPrefix, [StringComparison]::OrdinalIgnoreCase) -or $OutputDirectory.TrimEnd('\') -eq $RepositoryRoot.TrimEnd('\')) {
    throw 'Restore output must be outside the Git repository.'
}
$Manifest = Get-Content -LiteralPath $ManifestPath -Raw | ConvertFrom-Json
$SevenZipPath = Resolve-SVRomFS7Zip -Path $SevenZipPath
$StateDirectory = Join-Path (Get-SVGitDirectory -RepositoryRoot $RepositoryRoot) 'sv-romfs-restore'
if (-not (Test-Path -LiteralPath $StateDirectory)) { New-Item -ItemType Directory -Path $StateDirectory -Force | Out-Null }
if (-not (Test-Path -LiteralPath $OutputDirectory)) { New-Item -ItemType Directory -Path $OutputDirectory -Force | Out-Null }

$entries = @($Manifest.files)
if ($RelativePath) {
    $entries = @($entries | Where-Object { $_.relativePath -eq $RelativePath.Replace('\', '/') })
    if ($entries.Count -ne 1) { throw "Manifest does not contain exactly one file named '$RelativePath'." }
}

foreach ($entry in $entries) {
    $relative = [string]$entry.relativePath
    if (-not $relative -or $relative.StartsWith('/') -or $relative -match '(^|/)\.\.(/|$)') { throw "Unsafe source relative path in manifest: $relative" }
    $destination = Join-Path $OutputDirectory ($relative.Replace('/', '\'))
    $destinationParent = Split-Path -Parent $destination
    if (-not (Test-Path -LiteralPath $destinationParent)) { New-Item -ItemType Directory -Path $destinationParent -Force | Out-Null }

    if (Test-Path -LiteralPath $destination -PathType Leaf) {
        $existing = Get-Item -LiteralPath $destination
        if ($existing.Length -eq [int64]$entry.sourceBytes -and (Get-SVSha256 -Path $destination) -eq [string]$entry.sourceSha256) {
            Write-Host "Already restored and verified: $relative"
            continue
        }
        throw "Restore destination contains different content; refusing to overwrite: $destination"
    }

    if ($entry.storageMethod -eq 'copy') {
        $artifacts = @($entry.artifacts)
        if ($artifacts.Count -ne 1) { throw "Invalid copy artifact count for '$relative'." }
        $sourceArtifact = Join-Path $RepositoryRoot ([string]$artifacts[0].path.Replace('/', '\'))
        if (-not (Test-Path -LiteralPath $sourceArtifact -PathType Leaf)) { throw "Missing Git artifact: $sourceArtifact" }
        if ((Get-Item -LiteralPath $sourceArtifact).Length -ne [int64]$artifacts[0].sizeBytes -or (Get-SVSha256 -Path $sourceArtifact) -ne [string]$artifacts[0].sha256) {
            throw "Git artifact failed manifest validation: $sourceArtifact"
        }
        $partial = $destination + '.sv-writing'
        if (Test-Path -LiteralPath $partial) { Remove-Item -LiteralPath $partial -Force }
        Copy-Item -LiteralPath $sourceArtifact -Destination $partial
        if ((Get-Item -LiteralPath $partial).Length -ne [int64]$entry.sourceBytes -or (Get-SVSha256 -Path $partial) -ne [string]$entry.sourceSha256) {
            throw "Restored copy failed source SHA-256: $relative"
        }
        Move-Item -LiteralPath $partial -Destination $destination
    } elseif ($entry.storageMethod -eq 'archive') {
        $artifacts = @($entry.artifacts | Sort-Object { [int]$_.partNumber })
        if ($artifacts.Count -eq 0 -or -not ([string]$artifacts[0].path).EndsWith('.7z.001', [StringComparison]::OrdinalIgnoreCase)) {
            throw "Manifest does not identify a .7z.001 volume for '$relative'."
        }
        $volumePaths = @()
        foreach ($artifact in $artifacts) {
            $volumePath = Join-Path $RepositoryRoot ([string]$artifact.path.Replace('/', '\'))
            if (-not (Test-Path -LiteralPath $volumePath -PathType Leaf)) { throw "Missing archive volume: $volumePath" }
            if ((Get-Item -LiteralPath $volumePath).Length -ne [int64]$artifact.sizeBytes -or (Get-SVSha256 -Path $volumePath) -ne [string]$artifact.sha256) {
                throw "Archive volume failed manifest validation: $volumePath"
            }
            $volumePaths += $volumePath
        }
        $volumeInfos = @($volumePaths | ForEach-Object { Get-Item -LiteralPath $_ } | Sort-Object { [int]([IO.Path]::GetExtension($_.Name).TrimStart('.')) })
        Assert-SV7ZipVolumeSequence -Volumes $volumeInfos -MaximumVolumeBytes ([int64]$Manifest.archiveThresholdBytes)
        [void](Invoke-SVNativeProcess -FilePath $SevenZipPath -ArgumentList @('t', $volumePaths[0]) -WorkingDirectory (Split-Path -Parent $volumePaths[0]))

        $extractDirectory = Join-Path $StateDirectory ([Guid]::NewGuid().ToString('N'))
        New-Item -ItemType Directory -Path $extractDirectory -Force | Out-Null
        try {
            [void](Invoke-SVNativeProcess -FilePath $SevenZipPath -ArgumentList @('x', $volumePaths[0], "-o$extractDirectory", '-y') -WorkingDirectory (Split-Path -Parent $volumePaths[0]))
            $restoredTemporary = Join-Path $extractDirectory ([IO.Path]::GetFileName($relative))
            if (-not (Test-Path -LiteralPath $restoredTemporary -PathType Leaf)) { throw "Archive did not restore the expected basename for '$relative'." }
            if ((Get-Item -LiteralPath $restoredTemporary).Length -ne [int64]$entry.sourceBytes -or (Get-SVSha256 -Path $restoredTemporary) -ne [string]$entry.sourceSha256) {
                throw "Restored archive content failed source size or SHA-256 validation: $relative"
            }
            $partial = $destination + '.sv-writing'
            Copy-Item -LiteralPath $restoredTemporary -Destination $partial
            if ((Get-Item -LiteralPath $partial).Length -ne [int64]$entry.sourceBytes -or (Get-SVSha256 -Path $partial) -ne [string]$entry.sourceSha256) {
                throw "Output copy failed source validation: $relative"
            }
            Move-Item -LiteralPath $partial -Destination $destination
        } finally {
            if (Test-Path -LiteralPath $extractDirectory) { Remove-Item -LiteralPath $extractDirectory -Recurse -Force -ErrorAction SilentlyContinue }
        }
    } else {
        throw "Unsupported storage method for '$relative': $($entry.storageMethod)"
    }
    Write-Host "Restored and verified: $relative"
}

Write-Host "Restore complete. Output: $OutputDirectory"
