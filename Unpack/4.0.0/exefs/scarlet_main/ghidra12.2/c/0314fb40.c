/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314fb40; name: _INIT_1267
 */


void _INIT_1267(void)

{
  if ((DAT_0487a7b8 & 1) == 0) {
    DAT_0487a7a8 = 0;
    DAT_0487a7b0 = 0;
    DAT_0487a798 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a798;
    DAT_0487a7a0 = &DAT_046810c0;
    DAT_0487a7b8 = 1;
  }
  return;
}


