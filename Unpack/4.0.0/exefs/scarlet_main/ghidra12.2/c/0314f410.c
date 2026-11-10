/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314f410; name: _INIT_1244
 */


void _INIT_1244(void)

{
  if ((DAT_0487a420 & 1) == 0) {
    DAT_0487a410 = 0;
    DAT_0487a418 = 0;
    DAT_0487a400 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a400;
    DAT_0487a408 = &DAT_0467fe40;
    DAT_0487a420 = 1;
  }
  return;
}


