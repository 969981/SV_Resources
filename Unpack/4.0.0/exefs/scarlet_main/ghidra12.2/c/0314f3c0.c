/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314f3c0; name: _INIT_1243
 */


void _INIT_1243(void)

{
  if ((DAT_0487a3f8 & 1) == 0) {
    DAT_0487a3e8 = 0;
    DAT_0487a3f0 = 0;
    DAT_0487a3d8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a3d8;
    DAT_0487a3e0 = &DAT_0467fd60;
    DAT_0487a3f8 = 1;
  }
  return;
}


