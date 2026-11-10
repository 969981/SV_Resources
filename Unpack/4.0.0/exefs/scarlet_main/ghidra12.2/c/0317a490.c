/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317a490; name: _INIT_1422
 */


void _INIT_1422(void)

{
  if ((DAT_0487ccb8 & 1) == 0) {
    DAT_0487cca8 = 0;
    DAT_0487ccb0 = 0;
    DAT_0487cc98 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cc98;
    DAT_0487cca0 = &DAT_04693130;
    DAT_0487ccb8 = 1;
  }
  return;
}


