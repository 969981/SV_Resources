/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314e490; name: _INIT_1199
 */


void _INIT_1199(void)

{
  if ((DAT_04879d18 & 1) == 0) {
    DAT_04879d08 = 0;
    DAT_04879d10 = 0;
    DAT_04879cf8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879cf8;
    DAT_04879d00 = &DAT_0467d028;
    DAT_04879d18 = 1;
  }
  return;
}


