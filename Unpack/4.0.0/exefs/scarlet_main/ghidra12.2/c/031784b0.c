/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031784b0; name: _INIT_1364
 */


void _INIT_1364(void)

{
  if ((DAT_0487c3a8 & 1) == 0) {
    DAT_0487c398 = 0;
    DAT_0487c3a0 = 0;
    DAT_0487c388 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c388;
    DAT_0487c390 = &DAT_0468f560;
    DAT_0487c3a8 = 1;
  }
  return;
}


