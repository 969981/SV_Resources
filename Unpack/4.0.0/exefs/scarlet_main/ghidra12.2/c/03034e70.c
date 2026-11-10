/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03034e70; name: _INIT_728
 */


void _INIT_728(void)

{
  if ((DAT_04872220 & 1) == 0) {
    DAT_04872210 = 0;
    DAT_04872218 = 0;
    DAT_04872200 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872200;
    DAT_04872208 = &DAT_04645d38;
    DAT_04872220 = 1;
  }
  return;
}


