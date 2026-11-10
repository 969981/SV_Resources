/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035f50; name: _INIT_782
 */


void _INIT_782(void)

{
  if ((DAT_04872a90 & 1) == 0) {
    DAT_04872a80 = 0;
    DAT_04872a88 = 0;
    DAT_04872a70 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872a70;
    DAT_04872a78 = &DAT_04649560;
    DAT_04872a90 = 1;
  }
  return;
}


