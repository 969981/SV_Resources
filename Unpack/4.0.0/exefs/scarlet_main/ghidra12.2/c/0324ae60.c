/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324ae60; name: _INIT_1748
 */


void _INIT_1748(void)

{
  if ((DAT_04888718 & 1) == 0) {
    DAT_04888708 = 0;
    DAT_04888710 = 0;
    DAT_048886f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048886f8;
    DAT_04888700 = &DAT_046bb440;
    DAT_04888718 = 1;
  }
  return;
}


