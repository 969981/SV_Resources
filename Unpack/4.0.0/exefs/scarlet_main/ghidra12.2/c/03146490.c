/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03146490; name: _INIT_897
 */


void _INIT_897(void)

{
  if ((DAT_04876de8 & 1) == 0) {
    DAT_04876dd8 = 0;
    DAT_04876de0 = 0;
    DAT_04876dc8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876dc8;
    DAT_04876dd0 = &DAT_0466ae40;
    DAT_04876de8 = 1;
  }
  return;
}


