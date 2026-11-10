/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314f320; name: _INIT_1241
 */


void _INIT_1241(void)

{
  if ((DAT_0487a3a8 & 1) == 0) {
    DAT_0487a398 = 0;
    DAT_0487a3a0 = 0;
    DAT_0487a388 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a388;
    DAT_0487a390 = &DAT_0467fba0;
    DAT_0487a3a8 = 1;
  }
  return;
}


