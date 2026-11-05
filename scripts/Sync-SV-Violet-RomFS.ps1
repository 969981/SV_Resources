[CmdletBinding()]
param(
    [string]$SourceRoot = 'X:\ROMS\Nintendo Switch\Pokemon\Pokemon Violet\4.0.0\d24a763a8882575f1c252dce37021db5_NCA\1',
    [string]$RepositoryRoot,
    [string]$SevenZipPath,
    [long]$ArchiveThresholdBytes = 94371840,
    [string]$VolumeSize = '90m',
    [long]$BatchTargetBytes = 629145600,
    [long]$GitHubFileLimitBytes = 100000000,
    [int]$MaxFilesPerRun = 0,
    [switch]$DryRun,
    [switch]$NoPush
)

$ErrorActionPreference = 'Stop'
Set-StrictMode -Version Latest
Import-Module (Join-Path $PSScriptRoot 'SV-RomFS.Transfer.psm1') -Force

if (-not $RepositoryRoot) { $RepositoryRoot = Split-Path -Parent $PSScriptRoot }
$RepositoryRoot = [IO.Path]::GetFullPath($RepositoryRoot)
$SourceRoot = [IO.Path]::GetFullPath($SourceRoot)
if (-not (Test-Path -LiteralPath $RepositoryRoot -PathType Container)) { throw "Repository does not exist: $RepositoryRoot" }
if (-not (Test-Path -LiteralPath $SourceRoot -PathType Container)) { throw "Source directory does not exist: $SourceRoot" }
if ($ArchiveThresholdBytes -le 0 -or $BatchTargetBytes -le 0 -or $GitHubFileLimitBytes -le 0) { throw 'Size parameters must be positive.' }
if (-not $VolumeSize -or $VolumeSize -notmatch '^\d+(b|k|m|g)?$') { throw "Unsupported 7-Zip volume size '$VolumeSize'. Use a value such as 90m or 1048576b." }

$TargetRoot = Join-Path $RepositoryRoot '4.0.0\1'
$ManifestPath = Join-Path $RepositoryRoot 'violet_4.0.0_romfs_transfer_manifest.json'
$GitDirectory = Get-SVGitDirectory -RepositoryRoot $RepositoryRoot
$StateDirectory = Join-Path $GitDirectory 'sv-romfs-transfer'
$StatePath = Join-Path $StateDirectory 'state.json'
$SevenZipPath = Resolve-SVRomFS7Zip -Path $SevenZipPath
if (-not (Test-Path -LiteralPath $TargetRoot)) { New-Item -ItemType Directory -Path $TargetRoot -Force | Out-Null }
if (-not (Test-Path -LiteralPath $StateDirectory)) { New-Item -ItemType Directory -Path $StateDirectory -Force | Out-Null }

if (Test-Path -LiteralPath $StatePath -PathType Leaf) {
    $State = Get-Content -LiteralPath $StatePath -Raw | ConvertFrom-Json
} else {
    $State = [ordered]@{
        schemaVersion = 1
        createdUtc = [DateTime]::UtcNow.ToString('o')
        files = @()
        batches = @()
        manifestCommit = $null
        manifestPushStatus = 'pending'
        lastError = $null
    }
}

function Save-TransferState {
    Write-SVJsonAtomic -Path $StatePath -Value $State
}

function Set-FileState {
    param([Parameter(Mandatory = $true)]$Record)
    $prior = @($State.files | Where-Object { $_.relativePath -eq $Record.relativePath } | Select-Object -First 1)
    if ($prior.Count -gt 0 -and $prior[0].sourceSha256 -eq $Record.sourceSha256) {
        $priorArtifactHashes = @($prior[0].artifacts | ForEach-Object { "$($_.path):$($_.sha256)" } | Sort-Object)
        $recordArtifactHashes = @($Record.artifacts | ForEach-Object { "$($_.path):$($_.sha256)" } | Sort-Object)
        if (($priorArtifactHashes -join "`n") -eq ($recordArtifactHashes -join "`n")) {
            $Record.gitStatus = $prior[0].gitStatus
            $Record.gitCommit = $prior[0].gitCommit
        }
    }
    $updated = @($State.files | Where-Object { $_.relativePath -ne $Record.relativePath })
    $State.files = @($updated + @($Record))
    Save-TransferState
}

function Get-PreviousManifestEntries {
    $result = @{}
    if (Test-Path -LiteralPath $ManifestPath -PathType Leaf) {
        try {
            $manifest = Get-Content -LiteralPath $ManifestPath -Raw | ConvertFrom-Json
            foreach ($entry in @($manifest.files)) { $result[[string]$entry.relativePath] = $entry }
        } catch {
            throw "Existing transfer manifest is invalid and was left untouched: $($_.Exception.Message)"
        }
    }
    foreach ($entry in @($State.files)) { $result[[string]$entry.relativePath] = $entry }
    return $result
}

function Get-ArtifactRecord {
    param([string]$FullPath, [string]$RepoRelativePath, [int]$PartNumber)
    $item = Get-Item -LiteralPath $FullPath
    return [ordered]@{
        path = $RepoRelativePath.Replace('\', '/')
        sizeBytes = [int64]$item.Length
        sha256 = (Get-SVSha256 -Path $FullPath)
        partNumber = $PartNumber
    }
}

function Test-ExistingArtifactSet {
    param(
        [AllowNull()]$PreviousEntry,
        [Parameter(Mandatory = $true)][string]$RelativePath,
        [Parameter(Mandatory = $true)][string]$ExpectedSourceHash,
        [Parameter(Mandatory = $true)][long]$MaximumVolumeBytes
    )
    if (-not $PreviousEntry -or $PreviousEntry.sourceSha256 -ne $ExpectedSourceHash -or $PreviousEntry.storageMethod -ne 'archive') { return $null }
    $artifactRecords = @($PreviousEntry.artifacts)
    if ($artifactRecords.Count -eq 0) { return $null }
    $paths = @()
    foreach ($artifact in $artifactRecords) {
        $fullPath = Join-Path $RepositoryRoot ([string]$artifact.path)
        if (-not (Test-Path -LiteralPath $fullPath -PathType Leaf)) { return $null }
        $item = Get-Item -LiteralPath $fullPath
        if ($item.Length -ne [int64]$artifact.sizeBytes -or (Get-SVSha256 -Path $fullPath) -ne [string]$artifact.sha256) { return $null }
        $paths += $fullPath
    }
    $volumeInfos = @($paths | ForEach-Object { Get-Item -LiteralPath $_ } | Sort-Object { [int]([IO.Path]::GetExtension($_.Name).TrimStart('.')) })
    Assert-SV7ZipVolumeSequence -Volumes $volumeInfos -MaximumVolumeBytes $MaximumVolumeBytes -GitHubFileLimitBytes $GitHubFileLimitBytes
    $firstPath = $paths[0]
    $test = Invoke-SVNativeProcess -FilePath $SevenZipPath -ArgumentList @('t', $firstPath) -WorkingDirectory (Split-Path -Parent $firstPath)
    if ($test.ExitCode -ne 0) { return $null }
    return $artifactRecords
}

function New-VerifiedArchive {
    param(
        [Parameter(Mandatory = $true)][System.IO.FileInfo]$SourceFile,
        [Parameter(Mandatory = $true)][string]$RelativePath,
        [Parameter(Mandatory = $true)][string]$SourceHash,
        [Parameter(Mandatory = $true)][string]$StagingDirectory
    )
    $archiveBase = Join-Path $StagingDirectory ($SourceFile.Name + '.7z')
    $arguments = @('a', '-t7z', '-mx=1', '-mmt=on', "-v$VolumeSize", '-y', $archiveBase, $SourceFile.Name)
    [void](Invoke-SVNativeProcess -FilePath $SevenZipPath -ArgumentList $arguments -WorkingDirectory $SourceFile.DirectoryName)

    $volumes = @(Get-SV7ZipVolumes -ArchivePath $archiveBase)
    Assert-SV7ZipVolumeSequence -Volumes $volumes -MaximumVolumeBytes $ArchiveThresholdBytes -GitHubFileLimitBytes $GitHubFileLimitBytes
    [void](Invoke-SVNativeProcess -FilePath $SevenZipPath -ArgumentList @('t', $volumes[0].FullName) -WorkingDirectory $StagingDirectory)

    $extractDirectory = Join-Path $StagingDirectory 'extract'
    New-Item -ItemType Directory -Path $extractDirectory -Force | Out-Null
    [void](Invoke-SVNativeProcess -FilePath $SevenZipPath -ArgumentList @('x', $volumes[0].FullName, "-o$extractDirectory", '-y') -WorkingDirectory $StagingDirectory)
    $restoredPath = Join-Path $extractDirectory $SourceFile.Name
    if (-not (Test-Path -LiteralPath $restoredPath -PathType Leaf)) { throw "Archive did not restore the expected basename '$($SourceFile.Name)' for '$RelativePath'." }
    $restoredHash = Get-SVSha256 -Path $restoredPath
    if ($restoredHash -ne $SourceHash) { throw "Archive round-trip SHA-256 mismatch for '$RelativePath': expected $SourceHash, got $restoredHash." }
    $unexpected = @(Get-ChildItem -LiteralPath $extractDirectory -File -Recurse | Where-Object { $_.FullName -ne $restoredPath })
    if ($unexpected.Count -gt 0) { throw "Archive for '$RelativePath' contains unexpected paths." }
    return $volumes
}

function Publish-VerifiedVolumes {
    param(
        [Parameter(Mandatory = $true)][System.IO.FileInfo[]]$Volumes,
        [Parameter(Mandatory = $true)][string]$RelativePath
    )
    $destinationDirectory = Join-Path $TargetRoot (Split-Path -Parent $RelativePath)
    if (-not (Test-Path -LiteralPath $destinationDirectory)) { New-Item -ItemType Directory -Path $destinationDirectory -Force | Out-Null }
    $destinationNames = @()
    foreach ($volume in $Volumes) {
        $destinationPath = Join-Path $destinationDirectory $volume.Name
        $destinationNames += $destinationPath
        if (Test-Path -LiteralPath $destinationPath -PathType Leaf) {
            $existing = Get-Item -LiteralPath $destinationPath
            $same = $existing.Length -eq $volume.Length -and (Get-SVSha256 -Path $destinationPath) -eq (Get-SVSha256 -Path $volume.FullName)
            if ($same) { continue }
            $key = [Convert]::ToBase64String([Text.Encoding]::UTF8.GetBytes($RelativePath)).TrimEnd('=').Replace('/', '_').Replace('+', '-')
            $backupDirectory = Join-Path (Join-Path $StateDirectory 'backups') $key
            New-Item -ItemType Directory -Path $backupDirectory -Force | Out-Null
            $backupPath = Join-Path $backupDirectory ($volume.Name + '.' + [DateTime]::UtcNow.ToString('yyyyMMddTHHmmssfff'))
            Move-Item -LiteralPath $destinationPath -Destination $backupPath
        }
        $partialPath = $destinationPath + '.sv-writing'
        if (Test-Path -LiteralPath $partialPath) { Remove-Item -LiteralPath $partialPath -Force }
        Copy-Item -LiteralPath $volume.FullName -Destination $partialPath
        if ((Get-Item -LiteralPath $partialPath).Length -ne $volume.Length -or (Get-SVSha256 -Path $partialPath) -ne (Get-SVSha256 -Path $volume.FullName)) {
            throw "Copied volume failed validation: $destinationPath"
        }
        Move-Item -LiteralPath $partialPath -Destination $destinationPath -Force
    }

    $archiveStem = [IO.Path]::GetFileName($RelativePath) + '.7z.'
    $unexpected = @(Get-ChildItem -LiteralPath $destinationDirectory -File | Where-Object {
        $_.Name.StartsWith($archiveStem, [StringComparison]::OrdinalIgnoreCase) -and $_.Name.Substring($archiveStem.Length) -match '^\d{3,}$' -and $destinationNames -notcontains $_.FullName
    })
    if ($unexpected.Count -gt 0) { throw "Unexpected extra archive volumes exist for '$RelativePath': $($unexpected.Name -join ', ')" }
}

function Get-GitTrackedStatus {
    param([string]$RepoRelativePath)
    $result = Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList @('ls-files', '--error-unmatch', '--', $RepoRelativePath) -AllowFailure
    return ($result.ExitCode -eq 0)
}

function Get-CommitCommandArguments {
    param([Parameter(Mandatory = $true)][string]$Message)
    $name = (Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList @('config', 'user.name') -AllowFailure).StdOut.Trim()
    $email = (Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList @('config', 'user.email') -AllowFailure).StdOut.Trim()
    if (-not $name) { $name = (Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList @('log', '-1', '--format=%an')).StdOut.Trim() }
    if (-not $email) { $email = (Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList @('log', '-1', '--format=%ae')).StdOut.Trim() }
    if (-not $name -or -not $email) { throw 'Git commit identity is unavailable in local config and the previous commit.' }
    return @('-c', "user.name=$name", '-c', "user.email=$email", 'commit', '-m', $Message)
}

function Commit-ArtifactBatches {
    param([Parameter(Mandatory = $true)][object[]]$Artifacts)
    $units = @()
    foreach ($artifact in $Artifacts) {
        if (-not (Get-GitTrackedStatus -RepoRelativePath $artifact.path)) {
            $units += [pscustomobject]@{ Path = [string]$artifact.path; SizeBytes = [int64]$artifact.sizeBytes }
        }
    }
    if ($units.Count -eq 0) { return }

    $batches = New-Object System.Collections.ArrayList
    $current = New-Object System.Collections.ArrayList
    [long]$currentBytes = 0
    foreach ($unit in ($units | Sort-Object Path)) {
        if ($current.Count -gt 0 -and ($currentBytes + $unit.SizeBytes) -gt $BatchTargetBytes) {
            [void]$batches.Add(@($current.ToArray()))
            $current = New-Object System.Collections.ArrayList
            $currentBytes = 0
        }
        [void]$current.Add($unit)
        $currentBytes += $unit.SizeBytes
    }
    if ($current.Count -gt 0) { [void]$batches.Add(@($current.ToArray())) }

    $batchNumber = 1
    foreach ($batch in $batches) {
        if (-not $NoPush) { Assert-SVGitPreflight -RepositoryRoot $RepositoryRoot -RequireRemote }
        else { Assert-SVGitPreflight -RepositoryRoot $RepositoryRoot }
        $paths = @($batch | ForEach-Object { [string]$_.Path })
        [void](Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList (@('add', '--') + $paths))
        $staged = @(Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList @('diff', '--cached', '--name-only')).StdOut.Trim() -split "`r?`n" | Where-Object { $_ }
        $expected = @($paths | Sort-Object -Unique)
        $actual = @($staged | Sort-Object -Unique)
        if (($expected -join "`n") -ne ($actual -join "`n")) { throw "Staging contained unexpected paths. Expected: $($expected -join ', '); staged: $($actual -join ', ')" }
        $batchSize = [long](($batch | Measure-Object -Property SizeBytes -Sum).Sum)
        $message = 'data: add Violet 4.0.0 RomFS batch {0:D3}' -f $batchNumber
        [void](Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList (Get-CommitCommandArguments -Message $message))
        $commit = (Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList @('rev-parse', 'HEAD')).StdOut.Trim()
        $batchRecord = [ordered]@{
            number = $batchNumber
            commit = $commit
            sizeBytes = $batchSize
            paths = $paths
            pushStatus = 'pending'
            lastError = $null
        }
        $existingBatches = @($State.batches)
        $State.batches = @($existingBatches + @($batchRecord))
        Save-TransferState
        if (-not $NoPush) {
            try {
                [void](Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList @('push', 'origin', 'master'))
                $batchRecord.pushStatus = 'pushed'
                foreach ($fileState in @($State.files)) {
                    if (@($fileState.artifacts | Where-Object { $paths -contains [string]$_.path }).Count -gt 0) {
                        $fileState.gitStatus = 'pushed'
                        $fileState.gitCommit = $commit
                    }
                }
                Save-TransferState
            } catch {
                $batchRecord.lastError = $_.Exception.Message
                $State.lastError = $_.Exception.Message
                Save-TransferState
                throw
            }
        } else {
            foreach ($fileState in @($State.files)) {
                if (@($fileState.artifacts | Where-Object { $paths -contains [string]$_.path }).Count -gt 0) {
                    $fileState.gitStatus = 'committed-pending-push'
                    $fileState.gitCommit = $commit
                }
            }
            Save-TransferState
        }
        $batchNumber++
    }
}

function Retry-PendingPushes {
    if ($NoPush) { return }
    $pending = @($State.batches | Where-Object { $_.pushStatus -ne 'pushed' })
    if ($pending.Count -gt 0 -or ($State.manifestCommit -and $State.manifestPushStatus -ne 'pushed')) {
        Assert-SVGitPreflight -RepositoryRoot $RepositoryRoot -RequireRemote
        [void](Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList @('push', 'origin', 'master'))
        foreach ($batch in $pending) { $batch.pushStatus = 'pushed'; $batch.lastError = $null }
        if ($State.manifestCommit) { $State.manifestPushStatus = 'pushed' }
        foreach ($fileState in @($State.files)) {
            if ($fileState.gitCommit) { $fileState.gitStatus = 'pushed' }
        }
        $State.lastError = $null
        Save-TransferState
    }
}

try {
    Assert-SVGitPreflight -RepositoryRoot $RepositoryRoot
    Retry-PendingPushes
    $sourceFiles = @(Get-SVSourceFiles -SourceRoot $SourceRoot)
    $inventory = Get-SVInventoryRecords -RepositoryRoot $RepositoryRoot -SourceRoot $SourceRoot
    if ($sourceFiles.Count -ne $inventory.Count) { throw "Source file count ($($sourceFiles.Count)) differs from matching inventory row count ($($inventory.Count))." }

    $largeFiles = @($sourceFiles | Where-Object { $_.Length -gt $ArchiveThresholdBytes })
    $expectedVolumes = 0
    foreach ($file in $largeFiles) { $expectedVolumes += [int][Math]::Ceiling([double]$file.Length / [double]$ArchiveThresholdBytes) }
    if ($DryRun) {
        [pscustomobject]@{
            SourceFiles = $sourceFiles.Count
            SourceBytes = [int64](($sourceFiles | Measure-Object -Property Length -Sum).Sum)
            DirectCopies = $sourceFiles.Count - $largeFiles.Count
            ArchivedFiles = $largeFiles.Count
            EstimatedMinimumVolumes = $expectedVolumes
            ArchiveThresholdBytes = $ArchiveThresholdBytes
            BatchTargetBytes = $BatchTargetBytes
            SourceRoot = $SourceRoot
            TargetRoot = $TargetRoot
        } | Format-List
        return
    }

    $previousEntries = Get-PreviousManifestEntries
    $manifestRecords = New-Object System.Collections.ArrayList
    $artifactRecords = New-Object System.Collections.ArrayList
    $processedThisRun = 0
    foreach ($sourceFile in $sourceFiles) {
        if ($MaxFilesPerRun -gt 0 -and $processedThisRun -ge $MaxFilesPerRun) { break }
        $relativePath = Get-SVFileRelativePath -Root $SourceRoot -Path $sourceFile.FullName
        if (-not $inventory.ContainsKey($relativePath)) { throw "Source path is not present in violet_4.0.0_file_inventory.csv: $relativePath" }
        $inventoryEntry = $inventory[$relativePath]
        if ($sourceFile.Length -ne $inventoryEntry.SizeBytes) { throw "Source byte length differs from inventory for '$relativePath': $($sourceFile.Length) != $($inventoryEntry.SizeBytes)." }
        $sourceHash = Get-SVSha256 -Path $sourceFile.FullName
        if ($sourceHash -ne $inventoryEntry.SHA256) { throw "Source SHA-256 differs from inventory for '$relativePath': $sourceHash != $($inventoryEntry.SHA256)." }

        $artifactList = New-Object System.Collections.ArrayList
        $storageMethod = 'copy'
        $destinationFile = Join-Path $TargetRoot $relativePath
        if ($sourceFile.Length -le $ArchiveThresholdBytes) {
            $destinationDirectory = Split-Path -Parent $destinationFile
            if (-not (Test-Path -LiteralPath $destinationDirectory)) { New-Item -ItemType Directory -Path $destinationDirectory -Force | Out-Null }
            if (Test-Path -LiteralPath $destinationFile -PathType Leaf) {
                $existing = Get-Item -LiteralPath $destinationFile
                if ($existing.Length -ne $sourceFile.Length -or (Get-SVSha256 -Path $destinationFile) -ne $sourceHash) {
                    throw "Destination conflict; refusing to overwrite '$destinationFile'."
                }
            } else {
                $partialPath = $destinationFile + '.sv-writing'
                if (Test-Path -LiteralPath $partialPath) { Remove-Item -LiteralPath $partialPath -Force }
                Copy-Item -LiteralPath $sourceFile.FullName -Destination $partialPath
                if ((Get-Item -LiteralPath $partialPath).Length -ne $sourceFile.Length -or (Get-SVSha256 -Path $partialPath) -ne $sourceHash) {
                    throw "Copied file failed size or SHA-256 validation: $relativePath"
                }
                Move-Item -LiteralPath $partialPath -Destination $destinationFile
            }
            $repoPath = Get-SVFileRelativePath -Root $RepositoryRoot -Path $destinationFile
            [void]$artifactList.Add((Get-ArtifactRecord -FullPath $destinationFile -RepoRelativePath $repoPath -PartNumber 0))
        } else {
            $storageMethod = 'archive'
            $previous = $null
            if ($previousEntries.ContainsKey($relativePath)) { $previous = $previousEntries[$relativePath] }
            $artifactListFromManifest = Test-ExistingArtifactSet -PreviousEntry $previous -RelativePath $relativePath -ExpectedSourceHash $sourceHash -MaximumVolumeBytes $ArchiveThresholdBytes
            if ($artifactListFromManifest) {
                foreach ($artifact in $artifactListFromManifest) { [void]$artifactList.Add($artifact) }
            } else {
                $stagingDirectory = Join-Path $StateDirectory ('staging-' + [Guid]::NewGuid().ToString('N'))
                New-Item -ItemType Directory -Path $stagingDirectory -Force | Out-Null
                $volumes = @(New-VerifiedArchive -SourceFile $sourceFile -RelativePath $relativePath -SourceHash $sourceHash -StagingDirectory $stagingDirectory)
                Publish-VerifiedVolumes -Volumes $volumes -RelativePath $relativePath
                for ($index = 0; $index -lt $volumes.Count; $index++) {
                    $repoPath = Get-SVFileRelativePath -Root $RepositoryRoot -Path (Join-Path (Join-Path $TargetRoot (Split-Path -Parent $relativePath)) $volumes[$index].Name)
                    [void]$artifactList.Add((Get-ArtifactRecord -FullPath (Join-Path (Join-Path $TargetRoot (Split-Path -Parent $relativePath)) $volumes[$index].Name) -RepoRelativePath $repoPath -PartNumber ($index + 1)))
                }
                Remove-Item -LiteralPath $stagingDirectory -Recurse -Force
            }
        }

        foreach ($artifact in $artifactList) { [void]$artifactRecords.Add($artifact) }
        $fileRecord = [ordered]@{
            relativePath = $relativePath
            sourceBytes = [int64]$sourceFile.Length
            sourceSha256 = $sourceHash
            storageMethod = $storageMethod
            archiveVolumeCount = if ($storageMethod -eq 'archive') { $artifactList.Count } else { 0 }
            artifacts = @($artifactList.ToArray())
            verificationStatus = 'verified'
            gitStatus = 'pending'
            lastError = $null
        }
        [void]$manifestRecords.Add($fileRecord)
        Set-FileState -Record $fileRecord
        $processedThisRun++
        Write-Host ("Verified {0} ({1})" -f $relativePath, $storageMethod)
    }

    Commit-ArtifactBatches -Artifacts @($artifactRecords.ToArray())

    if ($MaxFilesPerRun -gt 0 -and $processedThisRun -lt $sourceFiles.Count) {
        Write-Host "Stopped after $processedThisRun source files as requested; rerun to continue from the verified checkpoint."
        return
    }

    if ($manifestRecords.Count -ne $sourceFiles.Count) {
        throw "Only $($manifestRecords.Count) of $($sourceFiles.Count) source files have verified transfer records."
    }
    foreach ($fileRecord in @($manifestRecords.ToArray())) {
        $artifactStatuses = New-Object System.Collections.ArrayList
        $enrichedArtifacts = New-Object System.Collections.ArrayList
        foreach ($artifact in @($fileRecord.artifacts)) {
            $matchingBatches = @($State.batches | Where-Object { @($_.paths) -contains [string]$artifact.path } | Sort-Object { [int]$_.number })
            if ($matchingBatches.Count -gt 0) {
                $batchRecord = $matchingBatches[$matchingBatches.Count - 1]
                $commitStatus = 'committed'
                $commitHash = [string]$batchRecord.commit
                $pushStatus = [string]$batchRecord.pushStatus
            } elseif (Get-GitTrackedStatus -RepoRelativePath ([string]$artifact.path)) {
                $commitStatus = 'committed'
                $commitHash = (Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList @('log', '-1', '--format=%H', '--', [string]$artifact.path)).StdOut.Trim()
                $pushStatus = 'unknown'
            } else {
                $commitStatus = 'pending'
                $commitHash = $null
                $pushStatus = 'pending'
            }
            [void]$artifactStatuses.Add($pushStatus)
            [void]$enrichedArtifacts.Add([ordered]@{
                path = [string]$artifact.path
                sizeBytes = [int64]$artifact.sizeBytes
                sha256 = [string]$artifact.sha256
                partNumber = [int]$artifact.partNumber
                gitCommitStatus = $commitStatus
                gitCommit = $commitHash
                gitPushStatus = $pushStatus
            })
        }
        $fileRecord.artifacts = @($enrichedArtifacts.ToArray())
        $statuses = @($artifactStatuses.ToArray() | Select-Object -Unique)
        $fileRecord.gitStatus = if (@($fileRecord.artifacts | Where-Object { $_.gitCommitStatus -ne 'committed' }).Count -eq 0) { 'committed' } else { 'pending' }
        $fileRecord.gitPushStatus = if ($statuses.Count -eq 1) { $statuses[0] } else { 'mixed' }
        Set-FileState -Record $fileRecord
    }
    $ncaDirectory = Split-Path -Leaf (Split-Path -Parent $SourceRoot)
    $manifest = [ordered]@{
        schemaVersion = 1
        game = 'Pokemon Violet'
        gameVersion = '4.0.0'
        ncaId = $ncaDirectory
        sourceSection = 1
        createdUtc = [string]$State.createdUtc
        archiveThresholdBytes = $ArchiveThresholdBytes
        gitBatchTargetBytes = $BatchTargetBytes
        files = @($manifestRecords.ToArray() | Sort-Object relativePath)
    }
    Write-SVJsonAtomic -Path $ManifestPath -Value $manifest
    $manifestRepoPath = Get-SVFileRelativePath -Root $RepositoryRoot -Path $ManifestPath
    $manifestTracked = Get-GitTrackedStatus -RepoRelativePath $manifestRepoPath
    $manifestChanged = (Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList @('diff', '--quiet', '--', $manifestRepoPath) -AllowFailure).ExitCode -ne 0
    if (-not $manifestTracked -or $manifestChanged) {
        if (-not $NoPush) { Assert-SVGitPreflight -RepositoryRoot $RepositoryRoot -RequireRemote }
        else { Assert-SVGitPreflight -RepositoryRoot $RepositoryRoot }
        [void](Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList @('add', '--', $manifestRepoPath))
        [void](Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList (Get-CommitCommandArguments -Message 'docs: add Violet 4.0.0 RomFS transfer manifest'))
        $State.manifestCommit = (Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList @('rev-parse', 'HEAD')).StdOut.Trim()
        Save-TransferState
        if (-not $NoPush) {
            try {
                [void](Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList @('push', 'origin', 'master'))
                $State.manifestPushStatus = 'pushed'
                Save-TransferState
            } catch {
                $State.lastError = $_.Exception.Message
                Save-TransferState
                throw
            }
        }
    }

    $State.lastError = $null
    Save-TransferState
    Write-Host ("Completed local verification for {0} RomFS files; {1} artifacts totaling {2:N0} bytes." -f $manifestRecords.Count, $artifactRecords.Count, (($artifactRecords | Measure-Object -Property sizeBytes -Sum).Sum))
    if ($NoPush) { Write-Host 'Pushes were disabled for this run. Local commits are pending push.' }
} catch {
    $State.lastError = $_.Exception.Message
    Save-TransferState
    throw
}
