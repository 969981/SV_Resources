/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035e60; name: _INIT_779
 */


void _INIT_779(void)

{
  if ((DAT_04872a18 & 1) == 0) {
    DAT_04872a08 = 0;
    DAT_04872a10 = 0;
    DAT_048729f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048729f8;
    DAT_04872a00 = &DAT_046491d0;
    DAT_04872a18 = 1;
  }
  return;
}


