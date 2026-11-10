/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314f2d0; name: _INIT_1240
 */


void _INIT_1240(void)

{
  if ((DAT_0487a380 & 1) == 0) {
    DAT_0487a370 = 0;
    DAT_0487a378 = 0;
    DAT_0487a360 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a360;
    DAT_0487a368 = &DAT_0467fa28;
    DAT_0487a380 = 1;
  }
  return;
}


