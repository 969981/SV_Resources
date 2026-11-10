/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324adc0; name: _INIT_1746
 */


void _INIT_1746(void)

{
  if ((DAT_048886c8 & 1) == 0) {
    DAT_048886b8 = 0;
    DAT_048886c0 = 0;
    DAT_048886a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048886a8;
    DAT_048886b0 = &DAT_046bb278;
    DAT_048886c8 = 1;
  }
  return;
}


