/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317ae50; name: _INIT_1434
 */


void _INIT_1434(void)

{
  if ((DAT_0487ce98 & 1) == 0) {
    DAT_0487ce88 = 0;
    DAT_0487ce90 = 0;
    DAT_0487ce78 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487ce78;
    DAT_0487ce80 = &DAT_04693c00;
    DAT_0487ce98 = 1;
  }
  return;
}


