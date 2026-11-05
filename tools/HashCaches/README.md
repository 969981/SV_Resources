# Local PokeDocs mirror and gftool cache files

- **Full PokeDocs source snapshot**: [../PokeDocs](../PokeDocs) (not a submodule or link).
- **Pinned source revision**: `242039cbcd9de3f5a424de5b68ae581f7bed2b23`.
- **SV cache**: [SV/GFPAKHashCache.bin](SV/GFPAKHashCache.bin).
- **ZA cache**: [ZA/GFPAKHashCache.bin](ZA/GFPAKHashCache.bin).
- Hash inputs: each game's `Hashlists/FileSystem/hashes_inside_fd.txt` and `hashes_inside_trpak.txt`.
- Format: **modern pkZukan/gftool** (little-endian UInt64 count; UInt64 hash + .NET UTF-8 BinaryWriter string).
- Each output has a `hashcache-report.json`; checksums and source revision are in [provenance.json](provenance.json).
- Binary caches are not compatible with the older Switch-Toolbox cache format.

To rebuild locally, run `python scripts/Build-SV-GFPAKHashCache.py --hashlist tools/PokeDocs/SV/Hashlists/FileSystem/hashes_inside_fd.txt --hashlist tools/PokeDocs/SV/Hashlists/FileSystem/hashes_inside_trpak.txt --output tools/HashCaches/SV/GFPAKHashCache.bin --overwrite` from the repository root (replace SV with ZA as needed).
