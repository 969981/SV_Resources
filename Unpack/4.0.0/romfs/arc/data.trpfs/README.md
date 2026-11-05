# SV 4.0.0 data.trpfs virtual file extraction

Original input: 4.0.0/1/arc/data.trpfs.7z.001 through .083.
Restored source: 8,016,551,536 bytes (SHA-256 pinned in root transfer manifest).
Target: Unpack/4.0.0/romfs/arc/data.trpfs/virtual/<original-vfs-path>.

The upstream container cannot be treated as a normal 7z subdirectory. First reconstruct the continuous TRPFS file, verify its original SHA-256, then read TRPFS/TRPFD via GFTool.Core and decompress individual entries with Oodle.

No extracted virtual files have been generated merely by this README.

## M2 actual TRPFS source restoration and staged extraction

The Windows hosted runner previously reported approximately 147 GiB free on D:, adequate for the 83 stored TRPFS volumes, temporary restored container, and small extraction batches. The true work is done by GitHub Actions workflow '.github/workflows/sv-m2-virtual-extract.yml'.

On initial workflow push, it attempts:
- sparse fetch ONLY the 83 source volume parts, descriptor, tools and scripts;
- reconstruct the 8,016,551,536-byte data.trpfs and verify against the transfer manifest;
- use tracked scripts/deps/oo2core_8_win64.dll plus cached SV GFPAKHashCache;
- decode the first 2 native TRPAK packs and export their actual virtual files to 'Unpack/4.0.0/romfs/arc/data.trpfs/virtual/...';
- commit only the successful, individually extracted native bytes with append-only '_index/export.jsonl' evidence.

For later batches, use Actions > 'SV M2 - extract Trinity virtual files into Unpack' > Run workflow, with 'start_pack' and 'max_packs' (1-200). Packs are selected in increasing native TRPFD order. These batches require full source restore on each standard ephemeral hosted runner. Do not overstate completion of all 23,589 native packs based on a small batch.

The generated output index records file hash, path, byte size, SHA-256, pack name, offset, and failure information; failed names remain UNKNOWN. Native original bytes under 4.0.0/1 are not altered. The Git history may become very large if all 408,641 virtual entries are published; use a staged, verified, selective strategy and respect game asset distribution rights.
