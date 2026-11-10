/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03036220; name: _INIT_791
 */


void _INIT_791(void)

{
  if ((DAT_04872bf8 & 1) == 0) {
    DAT_04872be8 = 0;
    DAT_04872bf0 = 0;
    DAT_04872bd8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872bd8;
    DAT_04872be0 = &DAT_04649e38;
    DAT_04872bf8 = 1;
  }
  return;
}


