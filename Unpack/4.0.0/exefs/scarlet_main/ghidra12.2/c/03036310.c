/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03036310; name: _INIT_794
 */


void _INIT_794(void)

{
  if ((DAT_04872c70 & 1) == 0) {
    DAT_04872c60 = 0;
    DAT_04872c68 = 0;
    DAT_04872c50 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872c50;
    DAT_04872c58 = &DAT_0464a018;
    DAT_04872c70 = 1;
  }
  return;
}


