Set-StrictMode -Version Latest

function Resolve-SVRomFS7Zip {
    [CmdletBinding()]
    param([string]$Path)

    if ($Path) {
        if (-not (Test-Path -LiteralPath $Path -PathType Leaf)) {
            throw "The requested 7-Zip executable does not exist: $Path"
        }
        return (Get-Item -LiteralPath $Path).FullName
    }

    $candidates = @(@(
        'D:\Tool\7-Zip\7z.exe',
        (Join-Path $env:ProgramFiles '7-Zip\7z.exe'),
        (Join-Path ${env:ProgramFiles(x86)} '7-Zip\7z.exe')
    ) | Where-Object { $_ -and (Test-Path -LiteralPath $_ -PathType Leaf) })
    if ($candidates.Count -gt 0) { return (Get-Item -LiteralPath $candidates[0]).FullName }

    $command = Get-Command '7z.exe' -ErrorAction SilentlyContinue
    if ($command) { return $command.Source }
    throw '7-Zip was not found. Pass -SevenZipPath or install it in a supported location.'
}

function ConvertTo-SVNativeArgument {
    param([AllowEmptyString()][string]$Value)

    $builder = New-Object System.Text.StringBuilder
    [void]$builder.Append([char]34)
    $slashes = 0
    $slashString = [string]([char]92)
    foreach ($character in $Value.ToCharArray()) {
        if ($character -eq [char]92) {
            $slashes++
            continue
        }
        if ($character -eq [char]34) {
            if ($slashes -gt 0) { [void]$builder.Append(($slashString * (2 * $slashes))) }
            [void]$builder.Append($slashString + [string][char]34)
            $slashes = 0
            continue
        }
        if ($slashes -gt 0) { [void]$builder.Append(($slashString * $slashes)) }
        [void]$builder.Append($character)
        $slashes = 0
    }
    if ($slashes -gt 0) { [void]$builder.Append(($slashString * (2 * $slashes))) }
    [void]$builder.Append([char]34)
    return $builder.ToString()
}

function Invoke-SVNativeProcess {
    [CmdletBinding()]
    param(
        [Parameter(Mandatory = $true)][string]$FilePath,
        [Parameter(Mandatory = $true)][string[]]$ArgumentList,
        [Parameter(Mandatory = $true)][string]$WorkingDirectory,
        [switch]$AllowFailure
    )

    $startInfo = New-Object System.Diagnostics.ProcessStartInfo
    $startInfo.FileName = $FilePath
    $startInfo.Arguments = (($ArgumentList | ForEach-Object { ConvertTo-SVNativeArgument ([string]$_) }) -join ' ')
    $startInfo.WorkingDirectory = $WorkingDirectory
    $startInfo.UseShellExecute = $false
    $startInfo.CreateNoWindow = $true
    $startInfo.RedirectStandardOutput = $true
    $startInfo.RedirectStandardError = $true

    $process = New-Object System.Diagnostics.Process
    $process.StartInfo = $startInfo
    if (-not $process.Start()) { throw "Could not start process: $FilePath" }
    $stdoutTask = $process.StandardOutput.ReadToEndAsync()
    $stderrTask = $process.StandardError.ReadToEndAsync()
    $process.WaitForExit()
    $stdout = $stdoutTask.Result
    $stderr = $stderrTask.Result
    $result = [pscustomobject]@{
        ExitCode = $process.ExitCode
        StdOut = $stdout
        StdErr = $stderr
    }
    $process.Dispose()

    if ($result.ExitCode -ne 0 -and -not $AllowFailure) {
        $detail = ($stdout + [Environment]::NewLine + $stderr).Trim()
        throw "Process failed with exit code $($result.ExitCode): $FilePath $($ArgumentList -join ' ')`n$detail"
    }
    return $result
}

function Invoke-SVGIT {
    [CmdletBinding()]
    param(
        [Parameter(Mandatory = $true)][string]$RepositoryRoot,
        [Parameter(Mandatory = $true)][string[]]$ArgumentList,
        [switch]$AllowFailure
    )
    return Invoke-SVNativeProcess -FilePath 'git.exe' -ArgumentList (@('-C', $RepositoryRoot) + $ArgumentList) -WorkingDirectory $RepositoryRoot -AllowFailure:$AllowFailure
}

function Get-SVSha256 {
    [CmdletBinding()]
    param([Parameter(Mandatory = $true)][string]$Path)
    return (Get-FileHash -LiteralPath $Path -Algorithm SHA256).Hash.ToUpperInvariant()
}

function Write-SVJsonAtomic {
    [CmdletBinding()]
    param(
        [Parameter(Mandatory = $true)][string]$Path,
        [Parameter(Mandatory = $true)]$Value
    )
    $directory = Split-Path -Parent $Path
    if (-not (Test-Path -LiteralPath $directory)) { New-Item -ItemType Directory -Path $directory -Force | Out-Null }
    $temporary = "$Path.$PID.partial"
    $json = ConvertTo-Json -InputObject $Value -Depth 100
    Set-Content -LiteralPath $temporary -Value $json -Encoding UTF8
    Move-Item -LiteralPath $temporary -Destination $Path -Force
}

function Get-SVFileRelativePath {
    [CmdletBinding()]
    param(
        [Parameter(Mandatory = $true)][string]$Root,
        [Parameter(Mandatory = $true)][string]$Path
    )
    $rootFull = [IO.Path]::GetFullPath($Root).TrimEnd([IO.Path]::DirectorySeparatorChar, [IO.Path]::AltDirectorySeparatorChar)
    $pathFull = [IO.Path]::GetFullPath($Path)
    $prefix = $rootFull + [IO.Path]::DirectorySeparatorChar
    if (-not $pathFull.StartsWith($prefix, [StringComparison]::OrdinalIgnoreCase)) {
        throw "Path is outside the requested root: $Path"
    }
    return $pathFull.Substring($prefix.Length).Replace('\', '/')
}

function Get-SV7ZipVolumes {
    [CmdletBinding()]
    param([Parameter(Mandatory = $true)][string]$ArchivePath)
    $directory = Split-Path -Parent $ArchivePath
    $leaf = Split-Path -Leaf $ArchivePath
    $base = [IO.Path]::GetFileNameWithoutExtension($leaf)
    $prefix = "$base.7z."
    if (-not (Test-Path -LiteralPath $directory)) { return @() }
    return @(Get-ChildItem -LiteralPath $directory -File | Where-Object {
        $_.Name.StartsWith($prefix, [StringComparison]::OrdinalIgnoreCase) -and $_.Name.Substring($prefix.Length) -match '^\d{3,}$'
    } | Sort-Object { [int64]$_.Name.Substring($prefix.Length) })
}

function Assert-SV7ZipVolumeSequence {
    [CmdletBinding()]
    param(
        [Parameter(Mandatory = $true)][System.IO.FileInfo[]]$Volumes,
        [Parameter(Mandatory = $true)][long]$MaximumVolumeBytes,
        [long]$GitHubFileLimitBytes = 100000000
    )
    if ($Volumes.Count -eq 0) { throw 'The 7-Zip archive has no volume files.' }
    for ($index = 0; $index -lt $Volumes.Count; $index++) {
        $expected = '{0:D3}' -f ($index + 1)
        $actual = [IO.Path]::GetExtension($Volumes[$index].Name).TrimStart('.')
        if ($actual -ne $expected) { throw "Archive volumes are not continuous: expected $expected, found $actual." }
        if ($Volumes[$index].Length -le 0 -or $Volumes[$index].Length -gt $MaximumVolumeBytes) {
            throw "Archive volume exceeds the configured size or is empty: $($Volumes[$index].FullName) ($($Volumes[$index].Length) bytes)."
        }
        if ($Volumes[$index].Length -ge $GitHubFileLimitBytes) {
            throw "Archive volume is not eligible for ordinary GitHub Git: $($Volumes[$index].FullName) ($($Volumes[$index].Length) bytes)."
        }
    }
}

function Get-SVGitDirectory {
    [CmdletBinding()]
    param([Parameter(Mandatory = $true)][string]$RepositoryRoot)
    $result = Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList @('rev-parse', '--absolute-git-dir')
    return $result.StdOut.Trim()
}

function Assert-SVGitPreflight {
    [CmdletBinding()]
    param(
        [Parameter(Mandatory = $true)][string]$RepositoryRoot,
        [switch]$RequireRemote
    )
    $branch = (Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList @('branch', '--show-current')).StdOut.Trim()
    if ($branch -ne 'master') { throw "Expected branch master, found '$branch'." }
    $staged = Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList @('diff', '--cached', '--quiet') -AllowFailure
    if ($staged.ExitCode -ne 0) { throw 'The Git index contains staged user changes. Commit or unstage them before running the transfer.' }
    if ($RequireRemote) {
        $fetch = Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList @('fetch', 'origin', 'master') -AllowFailure
        if ($fetch.ExitCode -ne 0) { throw "Could not fetch origin/master: $($fetch.StdErr.Trim()) $($fetch.StdOut.Trim())" }
        $remote = Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList @('rev-parse', '--verify', 'origin/master') -AllowFailure
        if ($remote.ExitCode -eq 0) {
            $counts = (Invoke-SVGIT -RepositoryRoot $RepositoryRoot -ArgumentList @('rev-list', '--left-right', '--count', "HEAD...origin/master")).StdOut.Trim() -split '\s+'
            if ([int]$counts[1] -gt 0) { throw 'origin/master is ahead of or has diverged from local master. No automatic merge or reset was performed.' }
        }
    }
}

function Get-SVInventoryRecords {
    [CmdletBinding()]
    param(
        [Parameter(Mandatory = $true)][string]$RepositoryRoot,
        [Parameter(Mandatory = $true)][string]$SourceRoot
    )
    $inventoryPath = Join-Path $RepositoryRoot 'violet_4.0.0_file_inventory.csv'
    if (-not (Test-Path -LiteralPath $inventoryPath -PathType Leaf)) { throw "Violet inventory CSV is missing: $inventoryPath" }
    $sectionDirectory = Split-Path -Leaf (Split-Path -Parent $SourceRoot)
    $relativePrefix = "$sectionDirectory/1/"
    $rows = @(Import-Csv -LiteralPath $inventoryPath | Where-Object { $_.RelativePath -like "$relativePrefix*" })
    if ($rows.Count -eq 0) { throw "No inventory records match '$relativePrefix'." }
    $map = @{}
    foreach ($row in $rows) {
        $relative = $row.RelativePath.Substring($relativePrefix.Length).Replace('\', '/')
        if (-not $relative -or $relative.StartsWith('/') -or $relative -match '(^|/)\.\.(/|$)') { throw "Unsafe inventory relative path: $($row.RelativePath)" }
        if ($map.ContainsKey($relative)) { throw "Duplicate inventory path: $relative" }
        $map[$relative] = [pscustomobject]@{
            RelativePath = $relative
            SizeBytes = [int64]$row.SizeBytes
            SHA256 = ([string]$row.SHA256).ToUpperInvariant()
        }
    }
    return $map
}

function Get-SVSourceFiles {
    [CmdletBinding()]
    param([Parameter(Mandatory = $true)][string]$SourceRoot)
    $rootFull = [IO.Path]::GetFullPath($SourceRoot)
    $files = @(Get-ChildItem -LiteralPath $rootFull -File -Recurse -Force | Sort-Object FullName)
    if ($files.Count -eq 0) { throw "The source directory contains no files: $SourceRoot" }
    return $files
}

Export-ModuleMember -Function Resolve-SVRomFS7Zip, ConvertTo-SVNativeArgument, Invoke-SVNativeProcess, Invoke-SVGIT, Get-SVSha256, Write-SVJsonAtomic, Get-SVFileRelativePath, Get-SV7ZipVolumes, Assert-SV7ZipVolumeSequence, Get-SVGitDirectory, Assert-SVGitPreflight, Get-SVInventoryRecords, Get-SVSourceFiles
