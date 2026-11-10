/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314e9e0; name: _INIT_1216
 */


void _INIT_1216(void)

{
  if ((DAT_04879fc0 & 1) == 0) {
    DAT_04879fb0 = 0;
    DAT_04879fb8 = 0;
    DAT_04879fa0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879fa0;
    DAT_04879fa8 = &DAT_0467e178;
    DAT_04879fc0 = 1;
  }
  return;
}


