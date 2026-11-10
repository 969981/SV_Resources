/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03178e60; name: _INIT_1395
 */


void _INIT_1395(void)

{
  if ((DAT_0487c880 & 1) == 0) {
    DAT_0487c870 = 0;
    DAT_0487c878 = 0;
    DAT_0487c860 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c860;
    DAT_0487c868 = &DAT_04691820;
    DAT_0487c880 = 1;
  }
  return;
}


