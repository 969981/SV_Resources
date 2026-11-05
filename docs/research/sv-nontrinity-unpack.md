# SV 4.0.0 — non-Trinity source extraction (Obsidian)

> [!important] Scope and evidence
> This workflow deliberately **excludes** `arc/data.trpfs`, the separate 23,589-pack M2 job.
> A committed parser or task directory is not evidence of a successful extraction.
> Trust only `_index/provenance.json` with `EXTRACTED`, per-output SHA-256, and real files on disk.

## Source inventory

`4.0.0/0/`: 7 ExeFS inputs, including two version-specific main NSO binaries and two NPDM files.

`4.0.0/1/`: 30 original files: 2 Trinity (`data.trpfd`/`data.trpfs`), 16 Wwise `.bnk`, 5 Wwise `.pck`, 2 `.trmdd`, 2 Bink `.bk2`, one `.trevt`, two `.trpre`.

- `arc/data.trpfd`: **already indexed** in `Unpack/4.0.0/romfs/arc/data.trpfd/_index`; index generation does not mean all the virtual files were restored.
- `event/trevt/bin/event.trevt`: **already parsed** to event JSON, states, references and source provenance.
- `system/prefetch/data/global-resident_{0,1}.trpre`: **already parsed** to 64-bit hash vectors and comparison index.
- `audio/wwise/bin/Switch/*.bnk`: Wwise chunk directory, BNK header, DIDX/DATA embedded WEMs, HIRC object ID/type/offset index.
- `audio/wwise/bin/Switch/*.pck`: AKPK language, bank, sound and external tables, with raw WEM/BNK outputs where present.
- `4.0.0/0/*`: NSO0 text, rodata, data decompressed from LZ4 with size/hash checks; module build ID and BSS size. NPDM gets header evidence only.
- `audio/motion_detector/common/*.trmdd`: header bytes and SHA-256 **only**, unknown nested schema; not falsely marked as extracted.
- `demo/movie/*/*.bk2`: source SHA-256 and Bink2 container header fields **only**; video frames are NOT decoded. FFmpeg's Bink2 video decoder is not implemented.

## Output paths

Each original file has its own derived directory. Example:

```text
Unpack/4.0.0/
  exefs/violet_main/
    extracted/{text,rodata,data}.bin
    _index/provenance.json
  romfs/audio/wwise/bin/Switch/PM.bnk/
    extracted/<WwiseShortID>.wem
    _index/provenance.json
  romfs/audio/wwise/bin/Switch/Stream.pck/
    extracted/<WwiseShortID>.wem
    _index/provenance.json
  romfs/demo/movie/d020_movie_a/d020_movie_a.bk2/
    _index/provenance.json
```

`EXTRACTED`: real, hashed output exists. `PARTIAL`: one or more `SKIPPED_LARGE` or `SKIPPED_BUDGET` entries. `INDEXED_ONLY`: source metadata/structure but no exported child. `FAILED`: `_index/error.json` reports the exception and is **not** a valid extraction.

The extractor keeps the original `4.0.0/{0,1}` files unchanged, checks every RomFS source against the transfer manifest and refuses mismatching existing outputs. Byte offsets, lengths and output SHA-256s are recorded per native subfile. Media remains WEM, not WAV/OGG unless decoded separately with a proven codec.

## Native execution

Dependencies: Python 3.12+, `pip install lz4` for NSO, and 7-Zip for larger archived sources. Restore `.7z.001` sets to an **external temporary directory**, verify each volume and the whole source SHA-256 against `violet_4.0.0_romfs_transfer_manifest.json`. Do not restore over `4.0.0/1`.

From repository root, after restoring the missing PCK/BK2 files under the same relative paths in `E:\SV-restore`:

```powershell
python -m pip install lz4
python -m unittest discover -s tests -p test_sv_nontrinity_unpack.py -v
python scripts/Unpack-SV-Remaining.py --category all --restored-root E:\SV-restore --max-total-output-bytes 0
```

GitHub Actions: [SV M3 — non-Trinity unpack](../../.github/workflows/sv-nontrinity-unpack.yml). A workflow push automatically performs an initial bounded batch. Subsequent **Run workflow** invocations can increase the new-output budget; existing outputs are independently re-hashed and are not counted toward the new-output budget. Only successfully verified, size-limited media are committed. One 100MB+ output is never put in normal Git; that entry stays explicitly `SKIPPED_LARGE`.

## Parser references and limitations

- BNK `BKHD/DIDX/DATA/HIRC`: [Wwise SoundBank structure](https://open-source-modding.github.io/docs/wwise-soundbank-format/). A HIRC object ID is a Wwise ID, not an identified event name.
- AKPK `PCK`: [wwiser-utils PCK extraction table layout](https://github.com/bnnm/wwiser-utils/blob/master/scripts/wwise_pck_extractor.bms); do not infer English media filenames from ShortIDs.
- NSO: [Switchbrew NSO](https://switchbrew.org/wiki/NSO).
- Bink2: [FFmpeg demuxer source](https://github.com/FFmpeg/FFmpeg/blob/master/libavformat/bink.c). Video decoding is not available in the upstream FFmpeg decoder; header inspection is not unpacked video.

For every unknown header, keep the raw input immutable and state `UNKNOWN` rather than assigning unverified record names, species IDs or media identities.
