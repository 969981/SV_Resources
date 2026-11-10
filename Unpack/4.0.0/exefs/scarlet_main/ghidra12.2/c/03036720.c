/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03036720; name: _INIT_807
 */


void _INIT_807(void)

{
  if ((DAT_04872e78 & 1) == 0) {
    DAT_04872e68 = 0;
    DAT_04872e70 = 0;
    DAT_04872e58 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872e58;
    DAT_04872e60 = &DAT_0464aca0;
    DAT_04872e78 = 1;
  }
  return;
}


