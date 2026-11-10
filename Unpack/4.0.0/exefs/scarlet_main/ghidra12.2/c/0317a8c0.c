/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317a8c0; name: _INIT_1426
 */


void _INIT_1426(void)

{
  if ((DAT_0487cd58 & 1) == 0) {
    DAT_0487cd48 = 0;
    DAT_0487cd50 = 0;
    DAT_0487cd38 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cd38;
    DAT_0487cd40 = &DAT_04693488;
    DAT_0487cd58 = 1;
  }
  return;
}


