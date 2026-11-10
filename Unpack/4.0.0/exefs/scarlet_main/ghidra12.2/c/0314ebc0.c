/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314ebc0; name: _INIT_1222
 */


void _INIT_1222(void)

{
  if ((DAT_0487a0b0 & 1) == 0) {
    DAT_0487a0a0 = 0;
    DAT_0487a0a8 = 0;
    DAT_0487a090 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a090;
    DAT_0487a098 = &DAT_0467e758;
    DAT_0487a0b0 = 1;
  }
  return;
}


