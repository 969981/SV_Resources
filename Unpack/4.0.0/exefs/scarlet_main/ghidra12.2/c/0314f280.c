/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314f280; name: _INIT_1239
 */


void _INIT_1239(void)

{
  if ((DAT_0487a358 & 1) == 0) {
    DAT_0487a348 = 0;
    DAT_0487a350 = 0;
    DAT_0487a338 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a338;
    DAT_0487a340 = &DAT_0467f948;
    DAT_0487a358 = 1;
  }
  return;
}


