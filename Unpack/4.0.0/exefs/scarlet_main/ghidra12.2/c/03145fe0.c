/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03145fe0; name: _INIT_882
 */


void _INIT_882(void)

{
  if ((DAT_04876b90 & 1) == 0) {
    DAT_04876b80 = 0;
    DAT_04876b88 = 0;
    DAT_04876b70 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876b70;
    DAT_04876b78 = &DAT_0466a038;
    DAT_04876b90 = 1;
  }
  return;
}


