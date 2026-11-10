/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03036450; name: _INIT_798
 */


void _INIT_798(void)

{
  if ((DAT_04872d10 & 1) == 0) {
    DAT_04872d00 = 0;
    DAT_04872d08 = 0;
    DAT_04872cf0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872cf0;
    DAT_04872cf8 = &DAT_0464a298;
    DAT_04872d10 = 1;
  }
  return;
}


