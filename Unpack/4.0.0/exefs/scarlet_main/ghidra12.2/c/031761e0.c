/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031761e0; name: _INIT_1297
 */


void _INIT_1297(void)

{
  if ((DAT_0487b930 & 1) == 0) {
    DAT_0487b920 = 0;
    DAT_0487b928 = 0;
    DAT_0487b910 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b910;
    DAT_0487b918 = &DAT_0468af18;
    DAT_0487b930 = 1;
  }
  return;
}


