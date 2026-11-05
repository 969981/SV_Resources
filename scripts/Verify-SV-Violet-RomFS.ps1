[CmdletBinding()]
param(
    [string]$RepositoryRoot,
    [string]$ManifestPath,
    [string]$SourceRoot = 'X:\ROMS\Nintendo Switch\Pokemon\Pokemon Violet\4.0.0\d24a763a8882575f1c252dce37021db5_NCA\1',
    [string]$SevenZipPath,
    [ValidateSet('Quick', 'Full')][string]$Mode = 'Quick',
    [switch]$CompareSource,
    [string]$ReportDirectory
)

$ErrorActionPreference = 'Stop'
Set-StrictMode -Version Latest
Import-Module (Join-Path $PSScriptRoot 'SV-RomFS.Transfer.psm1') -Force
if (-not $RepositoryRoot) { $RepositoryRoot = Split-Path -Parent $PSScriptRoot }
$RepositoryRoot = [IO.Path]::GetFullPath($RepositoryRoot)
if (-not $ManifestPath) { $ManifestPath = Join-Path $RepositoryRoot 'violet_4.0.0_romfs_transfer_manifest.json' }
if (-not $ReportDirectory) { $ReportDirectory = Join-Path $RepositoryRoot 'docs\verification' }
if (-not (Test-Path -LiteralPath $ManifestPath -PathType Leaf)) { throw "Transfer manifest is missing: $ManifestPath" }
$Manifest = Get-Content -LiteralPath $ManifestPath -Raw | ConvertFrom-Json
$SevenZipPath = Resolve-SVRomFS7Zip -Path $SevenZipPath
$TargetRoot = Join-Path $RepositoryRoot '4.0.0\1'
$GitDirectory = Get-SVGitDirectory -RepositoryRoot $RepositoryRoot
$ReportRows = New-Object System.Collections.ArrayList
$expectedPaths = @{}
$verifyRoot = Join-Path $GitDirectory ('sv-romfs-verify-' + [Guid]::NewGuid().ToString('N'))

function Add-VerificationResult {
    param(
        [string]$Status,
        [string]$SourceRelativePath,
        [string]$ArtifactPath,
        [string]$Check,
        [string]$Expected,
        [string]$Actual,
        [string]$Details
    )
    [void]$ReportRows.Add([pscustomobject]@{
        status = $Status
        sourceRelativePath = $SourceRelativePath
        artifactPath = $ArtifactPath
        check = $Check
        expected = $Expected
        actual = $Actual
        details = $Details
    })
}

function Test-ManifestArtifact {
    param([Parameter(Mandatory = $true)]$Artifact, [Parameter(Mandatory = $true)][string]$SourceRelativePath)
    $repoRelative = ([string]$Artifact.path).Replace('/', '\')
    $fullPath = Join-Path $RepositoryRoot $repoRelative
    $expectedPaths[[string]$Artifact.path] = $true
    if (-not (Test-Path -LiteralPath $fullPath -PathType Leaf)) {
        Add-VerificationResult 'fail' $SourceRelativePath $Artifact.path 'exists' 'present' 'missing' 'Manifest artifact is missing.'
        return $null
    }
    $item = Get-Item -LiteralPath $fullPath
    if ($item.Length -ne [int64]$Artifact.sizeBytes) {
        Add-VerificationResult 'fail' $SourceRelativePath $Artifact.path 'size' ([string]$Artifact.sizeBytes) ([string]$item.Length) 'Byte length differs from manifest.'
    } else {
        Add-VerificationResult 'pass' $SourceRelativePath $Artifact.path 'size' ([string]$Artifact.sizeBytes) ([string]$item.Length) ''
    }
    if ($item.Length -le 0 -or $item.Length -gt [int64]$Manifest.archiveThresholdBytes) {
        Add-VerificationResult 'fail' $SourceRelativePath $Artifact.path 'volume-limit' ("<= {0}" -f $Manifest.archiveThresholdBytes) ([string]$item.Length) 'Artifact violates the configured per-file size limit.'
    } elseif ($item.Length -ge 100000000) {
        Add-VerificationResult 'fail' $SourceRelativePath $Artifact.path 'github-limit' '< 100000000' ([string]$item.Length) 'Artifact is too large for ordinary GitHub Git.'
    }
    $actualHash = Get-SVSha256 -Path $fullPath
    if ($actualHash -ne [string]$Artifact.sha256) {
        Add-VerificationResult 'fail' $SourceRelativePath $Artifact.path 'sha256' ([string]$Artifact.sha256) $actualHash 'SHA-256 differs from manifest.'
    } else {
        Add-VerificationResult 'pass' $SourceRelativePath $Artifact.path 'sha256' ([string]$Artifact.sha256) $actualHash ''
    }
    return $fullPath
}

try {
    if ($Manifest.schemaVersion -ne 1 -or $Manifest.gameVersion -ne '4.0.0' -or $Manifest.game -ne 'Pokemon Violet') {
        throw 'Manifest schema or game version is not supported.'
    }
    if (-not (Test-Path -LiteralPath $TargetRoot -PathType Container)) { throw "RomFS target directory is missing: $TargetRoot" }
    New-Item -ItemType Directory -Path $verifyRoot -Force | Out-Null

    $seenSources = @{}
    foreach ($file in @($Manifest.files)) {
        $relativePath = [string]$file.relativePath
        if (-not $relativePath -or $relativePath.StartsWith('/') -or $relativePath -match '(^|/)\.\.(/|$)' -or $seenSources.ContainsKey($relativePath)) {
            Add-VerificationResult 'fail' $relativePath '' 'manifest-path' 'unique safe relative path' $relativePath 'Manifest contains an invalid or duplicate source path.'
            continue
        }
        $seenSources[$relativePath] = $true
        $artifactRecords = @($file.artifacts | Sort-Object { [int]$_.partNumber })
        if ($artifactRecords.Count -eq 0) {
            Add-VerificationResult 'fail' $relativePath '' 'manifest-artifacts' 'at least one artifact' 'none' 'Manifest file has no artifacts.'
            continue
        }

        if ($file.storageMethod -eq 'copy') {
            if ($artifactRecords.Count -ne 1 -or [int64]$file.sourceBytes -gt [int64]$Manifest.archiveThresholdBytes) {
                Add-VerificationResult 'fail' $relativePath '' 'copy-policy' 'one direct copy for a source <= threshold' ([string]$artifactRecords.Count) 'Copy entry violates the transfer policy.'
            }
            $artifact = $artifactRecords[0]
            $artifactPath = Test-ManifestArtifact -Artifact $artifact -SourceRelativePath $relativePath
            if ($artifactPath -and (Get-Item -LiteralPath $artifactPath).Length -eq [int64]$file.sourceBytes -and (Get-SVSha256 -Path $artifactPath) -eq [string]$file.sourceSha256) {
                Add-VerificationResult 'pass' $relativePath $artifact.path 'source-content' ([string]$file.sourceSha256) ([string]$artifact.sha256) 'Direct copy matches the recorded source hash.'
            }
        } elseif ($file.storageMethod -eq 'archive') {
            if ([int64]$file.sourceBytes -le [int64]$Manifest.archiveThresholdBytes) {
                Add-VerificationResult 'fail' $relativePath '' 'archive-policy' ("> $($Manifest.archiveThresholdBytes) source bytes") ([string]$file.sourceBytes) 'Archive entry is below or at the direct-copy threshold.'
            }
            $volumePaths = @()
            foreach ($artifact in $artifactRecords) {
                $path = Test-ManifestArtifact -Artifact $artifact -SourceRelativePath $relativePath
                if ($path) { $volumePaths += $path }
            }
            if ($artifactRecords.Count -ne [int]$file.archiveVolumeCount) {
                Add-VerificationResult 'fail' $relativePath '' 'volume-count' ([string]$file.archiveVolumeCount) ([string]$artifactRecords.Count) 'Manifest archive volume count is inconsistent.'
            }
            if ($volumePaths.Count -eq $artifactRecords.Count) {
                try {
                    $volumeInfos = @($volumePaths | ForEach-Object { Get-Item -LiteralPath $_ } | Sort-Object { [int]([IO.Path]::GetExtension($_.Name).TrimStart('.')) })
                    Assert-SV7ZipVolumeSequence -Volumes $volumeInfos -MaximumVolumeBytes ([int64]$Manifest.archiveThresholdBytes)
                    Add-VerificationResult 'pass' $relativePath $artifactRecords[0].path 'volume-sequence' '001..N, no gaps' ([string]$volumeInfos.Count) ''
                    [void](Invoke-SVNativeProcess -FilePath $SevenZipPath -ArgumentList @('t', $volumePaths[0]) -WorkingDirectory (Split-Path -Parent $volumePaths[0]))
                    Add-VerificationResult 'pass' $relativePath $artifactRecords[0].path '7z-test' 'exit code 0' 'exit code 0' '7-Zip tested the multi-volume archive.'
                    if ($Mode -eq 'Full') {
                        $extractDirectory = Join-Path $verifyRoot ([Guid]::NewGuid().ToString('N'))
                        New-Item -ItemType Directory -Path $extractDirectory -Force | Out-Null
                        [void](Invoke-SVNativeProcess -FilePath $SevenZipPath -ArgumentList @('x', $volumePaths[0], "-o$extractDirectory", '-y') -WorkingDirectory (Split-Path -Parent $volumePaths[0]))
                        $restoredPath = Join-Path $extractDirectory ([IO.Path]::GetFileName($relativePath))
                        if (-not (Test-Path -LiteralPath $restoredPath -PathType Leaf)) { throw "Archive did not restore the expected basename for '$relativePath'." }
                        $restoredHash = Get-SVSha256 -Path $restoredPath
                        if ($restoredHash -ne [string]$file.sourceSha256 -or (Get-Item -LiteralPath $restoredPath).Length -ne [int64]$file.sourceBytes) {
                            Add-VerificationResult 'fail' $relativePath $artifactRecords[0].path 'archive-roundtrip' ([string]$file.sourceSha256) $restoredHash 'Extracted file does not match the source record.'
                        } else {
                            Add-VerificationResult 'pass' $relativePath $artifactRecords[0].path 'archive-roundtrip' ([string]$file.sourceSha256) $restoredHash 'Extracted content matches the source SHA-256 and size.'
                        }
                    }
                } catch {
                    Add-VerificationResult 'fail' $relativePath $artifactRecords[0].path 'archive-integrity' 'valid tested archive' 'failed' $_.Exception.Message
                }
            }
        } else {
            Add-VerificationResult 'fail' $relativePath '' 'storage-method' 'copy or archive' ([string]$file.storageMethod) 'Manifest storage method is unsupported.'
        }

        if ($CompareSource) {
            $sourcePath = Join-Path $SourceRoot ($relativePath.Replace('/', '\'))
            if (-not (Test-Path -LiteralPath $sourcePath -PathType Leaf)) {
                Add-VerificationResult 'fail' $relativePath '' 'source-exists' 'present' 'missing' 'Optional source comparison file is missing.'
            } else {
                $sourceItem = Get-Item -LiteralPath $sourcePath
                $sourceHash = Get-SVSha256 -Path $sourcePath
                if ($sourceItem.Length -ne [int64]$file.sourceBytes -or $sourceHash -ne [string]$file.sourceSha256) {
                    Add-VerificationResult 'fail' $relativePath '' 'source-sha256' ([string]$file.sourceSha256) $sourceHash 'Source bytes differ from the transfer manifest.'
                } else {
                    Add-VerificationResult 'pass' $relativePath '' 'source-sha256' ([string]$file.sourceSha256) $sourceHash 'Source bytes match the transfer manifest.'
                }
            }
        }
    }

    $actualFiles = @(Get-ChildItem -LiteralPath $TargetRoot -File -Recurse -Force)
    foreach ($actual in $actualFiles) {
        $repoPath = Get-SVFileRelativePath -Root $RepositoryRoot -Path $actual.FullName
        if (-not $expectedPaths.ContainsKey($repoPath)) {
            Add-VerificationResult 'fail' '' $repoPath 'unexpected-file' 'listed in manifest' 'unlisted' 'Target contains an unlisted file.'
        }
    }
} catch {
    Add-VerificationResult 'fail' '' '' 'verification' 'completed' 'failed' $_.Exception.Message
} finally {
    if (Test-Path -LiteralPath $verifyRoot) { Remove-Item -LiteralPath $verifyRoot -Recurse -Force -ErrorAction SilentlyContinue }
}

if (-not (Test-Path -LiteralPath $ReportDirectory)) { New-Item -ItemType Directory -Path $ReportDirectory -Force | Out-Null }
$reportStem = 'violet_4.0.0_romfs_verification'
$jsonReport = Join-Path $ReportDirectory ($reportStem + '.json')
$csvReport = Join-Path $ReportDirectory ($reportStem + '.csv')
$summary = [ordered]@{
    generatedUtc = [DateTime]::UtcNow.ToString('o')
    mode = $Mode
    sourceCompared = [bool]$CompareSource
    totalChecks = $ReportRows.Count
    passed = @($ReportRows | Where-Object status -eq 'pass').Count
    failed = @($ReportRows | Where-Object status -eq 'fail').Count
    results = @($ReportRows.ToArray())
}
Write-SVJsonAtomic -Path $jsonReport -Value $summary
$ReportRows | Export-Csv -LiteralPath $csvReport -NoTypeInformation -Encoding UTF8
Write-Host ("{0}: {1} passed, {2} failed. Reports: {3}; {4}" -f $Mode, $summary.passed, $summary.failed, $jsonReport, $csvReport)
if ($summary.failed -gt 0) { exit 1 }
exit 0
