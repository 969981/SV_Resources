/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319b910; name: _INIT_1495
 */


void _INIT_1495(void)

{
  if ((DAT_0487e150 & 1) == 0) {
    DAT_0487e140 = 0;
    DAT_0487e148 = 0;
    DAT_0487e130 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e130;
    DAT_0487e138 = &DAT_0469d838;
    DAT_0487e150 = 1;
  }
  return;
}


