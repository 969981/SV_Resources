# SV 4.0.0 data.trpfs virtual file extraction

Original input: 4.0.0/1/arc/data.trpfs.7z.001 through .083.
Restored source: 8,016,551,536 bytes (SHA-256 pinned in root transfer manifest).
Target: Unpack/4.0.0/romfs/arc/data.trpfs/virtual/<original-vfs-path>.

The upstream container cannot be treated as a normal 7z subdirectory. First reconstruct the continuous TRPFS file, verify its original SHA-256, then read TRPFS/TRPFD via GFTool.Core and decompress individual entries with Oodle.

No extracted virtual files have been generated merely by this README.
