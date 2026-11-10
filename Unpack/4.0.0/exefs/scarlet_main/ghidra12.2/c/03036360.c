/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03036360; name: _INIT_795
 */


void _INIT_795(void)

{
  if ((DAT_04872c98 & 1) == 0) {
    DAT_04872c88 = 0;
    DAT_04872c90 = 0;
    DAT_04872c78 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872c78;
    DAT_04872c80 = &DAT_0464a0b8;
    DAT_04872c98 = 1;
  }
  return;
}


