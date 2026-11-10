/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03179600; name: _INIT_1409
 */


void _INIT_1409(void)

{
  if ((DAT_0487cab0 & 1) == 0) {
    DAT_0487caa0 = 0;
    DAT_0487caa8 = 0;
    DAT_0487ca90 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487ca90;
    DAT_0487ca98 = &DAT_046925a8;
    DAT_0487cab0 = 1;
  }
  return;
}


