/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314e710; name: _INIT_1207
 */


void _INIT_1207(void)

{
  if ((DAT_04879e58 & 1) == 0) {
    DAT_04879e48 = 0;
    DAT_04879e50 = 0;
    DAT_04879e38 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879e38;
    DAT_04879e40 = &DAT_0467d7f0;
    DAT_04879e58 = 1;
  }
  return;
}


