/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314f5a0; name: _INIT_1249
 */


void _INIT_1249(void)

{
  if ((DAT_0487a4e8 & 1) == 0) {
    DAT_0487a4d8 = 0;
    DAT_0487a4e0 = 0;
    DAT_0487a4c8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a4c8;
    DAT_0487a4d0 = &DAT_046801a0;
    DAT_0487a4e8 = 1;
  }
  return;
}


