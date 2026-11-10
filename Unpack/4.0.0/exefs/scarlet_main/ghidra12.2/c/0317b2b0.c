/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317b2b0; name: _INIT_1438
 */


void _INIT_1438(void)

{
  if ((DAT_0487cf38 & 1) == 0) {
    DAT_0487cf28 = 0;
    DAT_0487cf30 = 0;
    DAT_0487cf18 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cf18;
    DAT_0487cf20 = &DAT_04693f58;
    DAT_0487cf38 = 1;
  }
  return;
}


