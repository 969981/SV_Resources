[CmdletBinding()]
param()

$ErrorActionPreference = 'Stop'
Set-StrictMode -Version Latest
$repoRoot = Split-Path -Parent $PSScriptRoot
Import-Module (Join-Path $repoRoot 'scripts\SV-RomFS.Transfer.psm1') -Force
$syncScript = Join-Path $repoRoot 'scripts\Sync-SV-Violet-RomFS.ps1'
$verifyScript = Join-Path $repoRoot 'scripts\Verify-SV-Violet-RomFS.ps1'
$restoreScript = Join-Path $repoRoot 'scripts\Restore-SV-Violet-RomFS.ps1'
$powerShellExe = (Get-Command 'powershell.exe' -ErrorAction Stop).Source
$gitExe = (Get-Command 'git.exe' -ErrorAction Stop).Source
$tempRoot = Join-Path $env:TEMP ('SV-RomFS-Synthetic-' + [Guid]::NewGuid().ToString('N'))
$repo = Join-Path $tempRoot 'repo'
$bare = Join-Path $tempRoot 'origin.git'
$sourceRoot = Join-Path $tempRoot 'source\nca\1'
$passed = New-Object System.Collections.ArrayList

function Assert-Test {
    param($Condition, [string]$Message)
    if (-not $Condition) { throw "ASSERTION FAILED: $Message" }
    [void]$passed.Add($Message)
}

function Invoke-GitForTest {
    param([string]$Root, [string[]]$Arguments)
    return Invoke-SVGIT -RepositoryRoot $Root -ArgumentList $Arguments
}

function Invoke-TransferScript {
    param([string]$ScriptPath, [string[]]$Arguments, [switch]$AllowFailure)
    return Invoke-SVNativeProcess -FilePath $powerShellExe -ArgumentList (@('-NoProfile', '-ExecutionPolicy', 'Bypass', '-File', $ScriptPath) + $Arguments) -WorkingDirectory $repo -AllowFailure:$AllowFailure
}

try {
    New-Item -ItemType Directory -Path $repo, $sourceRoot -Force | Out-Null
    [void](Invoke-SVNativeProcess -FilePath $gitExe -ArgumentList @('init', '--bare', $bare) -WorkingDirectory $tempRoot)
    [void](Invoke-SVNativeProcess -FilePath $gitExe -ArgumentList @('init', '-b', 'master', $repo) -WorkingDirectory $tempRoot)
    [void](Invoke-GitForTest -Root $repo -Arguments @('config', 'user.name', 'Synthetic Transfer Test'))
    [void](Invoke-GitForTest -Root $repo -Arguments @('config', 'user.email', 'synthetic@example.invalid'))

    $smallPath = Join-Path $sourceRoot 'small.bin'
    $largePath = Join-Path $sourceRoot 'large.bin'
    [IO.File]::WriteAllBytes($smallPath, [Text.Encoding]::UTF8.GetBytes('synthetic small resource - no ROM data'))
    $bytes = New-Object byte[] (3 * 1024 * 1024 + 177)
    $rng = New-Object Security.Cryptography.RNGCryptoServiceProvider
    try { $rng.GetBytes($bytes) } finally { $rng.Dispose() }
    [IO.File]::WriteAllBytes($largePath, $bytes)

    $inventoryRows = @(
        [pscustomobject]@{ RelativePath = 'nca/1/large.bin'; SizeBytes = (Get-Item -LiteralPath $largePath).Length; SHA256 = Get-SVSha256 -Path $largePath },
        [pscustomobject]@{ RelativePath = 'nca/1/small.bin'; SizeBytes = (Get-Item -LiteralPath $smallPath).Length; SHA256 = Get-SVSha256 -Path $smallPath }
    )
    $inventoryRows | Export-Csv -LiteralPath (Join-Path $repo 'violet_4.0.0_file_inventory.csv') -NoTypeInformation -Encoding UTF8
    Set-Content -LiteralPath (Join-Path $repo 'README.md') -Value 'Synthetic repository for RomFS transfer tests.' -Encoding UTF8
    [void](Invoke-GitForTest -Root $repo -Arguments @('add', '--', 'README.md', 'violet_4.0.0_file_inventory.csv'))
    [void](Invoke-GitForTest -Root $repo -Arguments @('commit', '-m', 'test: seed synthetic repository'))
    [void](Invoke-GitForTest -Root $repo -Arguments @('remote', 'add', 'origin', $bare))
    [void](Invoke-GitForTest -Root $repo -Arguments @('push', '-u', 'origin', 'master'))

    $commonArgs = @(
        '-RepositoryRoot', $repo,
        '-SourceRoot', $sourceRoot,
        '-ArchiveThresholdBytes', '1048576',
        '-VolumeSize', '1m',
        '-BatchTargetBytes', '1572864'
    )
    $seedHead = (Invoke-SVNativeProcess -FilePath $gitExe -ArgumentList @('--git-dir', $bare, 'rev-parse', 'refs/heads/master') -WorkingDirectory $tempRoot).StdOut.Trim()
    $firstRun = Invoke-TransferScript -ScriptPath $syncScript -Arguments ($commonArgs + @('-MaxFilesPerRun', '1', '-NoPush'))
    Assert-Test ($firstRun.ExitCode -eq 0) "A one-file checkpoint run succeeds: $($firstRun.StdOut) $($firstRun.StdErr)"
    $statePath = Join-Path ((Invoke-GitForTest -Root $repo -Arguments @('rev-parse', '--absolute-git-dir')).StdOut.Trim()) 'sv-romfs-transfer\state.json'
    $stateAfterFirst = Get-Content -LiteralPath $statePath -Raw | ConvertFrom-Json
    Assert-Test (@($stateAfterFirst.files).Count -eq 1) 'The checkpoint records the completed large-file archive.'
    Assert-Test (@($stateAfterFirst.batches | Where-Object { $_.pushStatus -ne 'pending' }).Count -eq 0) 'Offline data commits are checkpointed as pending push.'
    $remoteAfterOfflineRun = (Invoke-SVNativeProcess -FilePath $gitExe -ArgumentList @('--git-dir', $bare, 'rev-parse', 'refs/heads/master') -WorkingDirectory $tempRoot).StdOut.Trim()
    Assert-Test ($remoteAfterOfflineRun -eq $seedHead) 'The offline checkpoint run does not update its local bare remote.'
    $partialVolumes = @(Get-ChildItem -LiteralPath (Join-Path $repo '4.0.0\1') -Filter '*.7z.*' -File -Recurse)
    Assert-Test ($partialVolumes.Count -ge 2) 'A source larger than the test threshold produces multiple 7-Zip volumes.'
    Assert-Test (@($partialVolumes | Where-Object { $_.Length -gt 1048576 }).Count -eq 0) 'Every synthetic archive volume is within the configured limit.'

    $resumeRun = Invoke-TransferScript -ScriptPath $syncScript -Arguments $commonArgs
    Assert-Test ($resumeRun.ExitCode -eq 0) "The resumed transfer completes: $($resumeRun.StdOut) $($resumeRun.StdErr)"
    $stateAfterResume = Get-Content -LiteralPath $statePath -Raw | ConvertFrom-Json
    Assert-Test (@($stateAfterResume.batches | Where-Object { $_.pushStatus -ne 'pushed' }).Count -eq 0) 'A normal rerun pushes each pending batch to the local bare remote.'
    $batchMessages = @(Invoke-GitForTest -Root $repo -Arguments @('log', '--format=%s', '--grep=^data: add Violet 4.0.0 RomFS batch')).StdOut.Trim() -split "`r?`n" | Where-Object { $_ }
    Assert-Test (@($batchMessages | Select-Object -Unique).Count -eq $batchMessages.Count) 'Batch numbers remain unique across checkpointed runs.'
    $manifestPath = Join-Path $repo 'violet_4.0.0_romfs_transfer_manifest.json'
    Assert-Test (Test-Path -LiteralPath $manifestPath -PathType Leaf) 'The completed run writes a transfer manifest.'
    $manifest = Get-Content -LiteralPath $manifestPath -Raw | ConvertFrom-Json
    Assert-Test (@($manifest.files).Count -eq 2) 'The manifest includes both synthetic source files.'
    Assert-Test ($manifest.files | Where-Object { $_.relativePath -eq 'large.bin' -and $_.storageMethod -eq 'archive' }) 'The large synthetic file is recorded as an archive.'
    Assert-Test ($manifest.files | Where-Object { $_.relativePath -eq 'small.bin' -and $_.storageMethod -eq 'copy' }) 'The small synthetic file is recorded as a direct copy.'

    $dataCommits = @(Invoke-GitForTest -Root $repo -Arguments @('log', '--format=%H', '--grep=^data: add Violet 4.0.0 RomFS batch')).StdOut.Trim() -split "`r?`n" | Where-Object { $_ }
    Assert-Test ($dataCommits.Count -ge 2) 'The configured small batch size creates multiple data commits.'
    $dataPaths = @(Invoke-GitForTest -Root $repo -Arguments @('show', '--format=', '--name-only', $dataCommits[$dataCommits.Count - 1])).StdOut.Trim() -split "`r?`n" | Where-Object { $_ }
    Assert-Test (@($dataPaths | Where-Object { $_ -notlike '4.0.0/1/*' }).Count -eq 0) 'Data batches stage explicit artifact paths only.'
    $commitCountBeforeRepeat = (Invoke-GitForTest -Root $repo -Arguments @('rev-list', '--count', 'master')).StdOut.Trim()
    $repeatRun = Invoke-TransferScript -ScriptPath $syncScript -Arguments $commonArgs
    Assert-Test ($repeatRun.ExitCode -eq 0) "A repeated transfer run succeeds: $($repeatRun.StdOut) $($repeatRun.StdErr)"
    $commitCountAfterRepeat = (Invoke-GitForTest -Root $repo -Arguments @('rev-list', '--count', 'master')).StdOut.Trim()
    Assert-Test ($commitCountBeforeRepeat -eq $commitCountAfterRepeat) 'A repeated run does not create duplicate commits.'

    $publishedHead = (Invoke-GitForTest -Root $repo -Arguments @('rev-parse', 'HEAD')).StdOut.Trim()
    $remoteHead = (Invoke-SVNativeProcess -FilePath $gitExe -ArgumentList @('--git-dir', $bare, 'rev-parse', 'refs/heads/master') -WorkingDirectory $tempRoot).StdOut.Trim()
    Assert-Test ($publishedHead -eq $remoteHead) 'Every synthetic batch is pushed to the local bare origin.'

    $reportDirectory = Join-Path $tempRoot 'reports'
    $verify = Invoke-TransferScript -ScriptPath $verifyScript -Arguments @('-RepositoryRoot', $repo, '-Mode', 'Full', '-CompareSource', '-SourceRoot', $sourceRoot, '-ReportDirectory', $reportDirectory)
    Assert-Test ($verify.ExitCode -eq 0) "Full manifest, volume, archive, and source verification succeeds: $($verify.StdOut) $($verify.StdErr)"
    $verification = Get-Content -LiteralPath (Join-Path $reportDirectory 'violet_4.0.0_romfs_verification.json') -Raw | ConvertFrom-Json
    Assert-Test ($verification.failed -eq 0) 'The JSON verification report records zero failures.'
    Assert-Test (Test-Path -LiteralPath (Join-Path $reportDirectory 'violet_4.0.0_romfs_verification.csv')) 'The verifier also emits a CSV report.'

    $singleOutput = Join-Path $tempRoot 'restore-one'
    $restoreOne = Invoke-TransferScript -ScriptPath $restoreScript -Arguments @('-RepositoryRoot', $repo, '-OutputDirectory', $singleOutput, '-RelativePath', 'large.bin')
    Assert-Test ($restoreOne.ExitCode -eq 0) "A single archive restores successfully: $($restoreOne.StdOut) $($restoreOne.StdErr)"
    Assert-Test ((Get-SVSha256 -Path (Join-Path $singleOutput 'large.bin')) -eq (Get-SVSha256 -Path $largePath)) 'Restored synthetic content matches the source hash.'
    $allOutput = Join-Path $tempRoot 'restore-all'
    $restoreAll = Invoke-TransferScript -ScriptPath $restoreScript -Arguments @('-RepositoryRoot', $repo, '-OutputDirectory', $allOutput)
    Assert-Test ($restoreAll.ExitCode -eq 0) "All manifest entries restore successfully: $($restoreAll.StdOut) $($restoreAll.StdErr)"
    Assert-Test ((Get-SVSha256 -Path (Join-Path $allOutput 'small.bin')) -eq (Get-SVSha256 -Path $smallPath)) 'The direct-copy restore matches the source hash.'

    $clonePath = Join-Path $tempRoot 'remote-writer'
    [void](Invoke-SVNativeProcess -FilePath $gitExe -ArgumentList @('clone', '--branch', 'master', $bare, $clonePath) -WorkingDirectory $tempRoot)
    [void](Invoke-SVNativeProcess -FilePath $gitExe -ArgumentList @('-C', $clonePath, 'config', 'user.name', 'Remote Conflict Test') -WorkingDirectory $tempRoot)
    [void](Invoke-SVNativeProcess -FilePath $gitExe -ArgumentList @('-C', $clonePath, 'config', 'user.email', 'conflict@example.invalid') -WorkingDirectory $tempRoot)
    Set-Content -LiteralPath (Join-Path $clonePath 'remote-change.txt') -Value 'remote-only change' -Encoding UTF8
    [void](Invoke-SVNativeProcess -FilePath $gitExe -ArgumentList @('-C', $clonePath, 'add', '--', 'remote-change.txt') -WorkingDirectory $tempRoot)
    [void](Invoke-SVNativeProcess -FilePath $gitExe -ArgumentList @('-C', $clonePath, 'commit', '-m', 'test: advance local bare origin') -WorkingDirectory $tempRoot)
    [void](Invoke-SVNativeProcess -FilePath $gitExe -ArgumentList @('-C', $clonePath, 'push', 'origin', 'master') -WorkingDirectory $tempRoot)
    $latePath = Join-Path $sourceRoot 'late.bin'
    [IO.File]::WriteAllBytes($latePath, [Text.Encoding]::UTF8.GetBytes('later synthetic file'))
    $newRows = @($inventoryRows) + @([pscustomobject]@{ RelativePath = 'nca/1/late.bin'; SizeBytes = (Get-Item -LiteralPath $latePath).Length; SHA256 = Get-SVSha256 -Path $latePath })
    $newRows | Export-Csv -LiteralPath (Join-Path $repo 'violet_4.0.0_file_inventory.csv') -NoTypeInformation -Encoding UTF8
    $conflictRun = Invoke-TransferScript -ScriptPath $syncScript -Arguments $commonArgs -AllowFailure
    Assert-Test ($conflictRun.ExitCode -ne 0 -and ($conflictRun.StdOut + $conflictRun.StdErr) -match 'ahead|diverged') 'The transfer stops safely when the remote advances.'
    Assert-Test (@(Invoke-GitForTest -Root $repo -Arguments @('diff', '--cached', '--name-only')).StdOut.Trim() -eq '') 'Remote conflict handling leaves the Git index untouched.'

    Write-Host ("Passed {0} synthetic transfer assertions." -f $passed.Count)
    $passed | ForEach-Object { Write-Host "PASS: $_" }
} finally {
    if (Test-Path -LiteralPath $tempRoot) { Remove-Item -LiteralPath $tempRoot -Recurse -Force -ErrorAction SilentlyContinue }
}
