/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324ad70; name: _INIT_1745
 */


void _INIT_1745(void)

{
  if ((DAT_048886a0 & 1) == 0) {
    DAT_04888690 = 0;
    DAT_04888698 = 0;
    DAT_04888680 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888680;
    DAT_04888688 = &DAT_046bb180;
    DAT_048886a0 = 1;
  }
  return;
}


