/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03032760; name: _INIT_603
 */


void _INIT_603(void)

{
  if ((DAT_04870e98 & 1) == 0) {
    DAT_04870e88 = 0;
    DAT_04870e90 = 0;
    DAT_04870e78 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870e78;
    DAT_04870e80 = &DAT_0463e5d0;
    DAT_04870e98 = 1;
  }
  return;
}


