/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0318e970; name: _INIT_1472
 */


void _INIT_1472(void)

{
  if ((DAT_0487d6c0 & 1) == 0) {
    DAT_0487d6b0 = 0;
    DAT_0487d6b8 = 0;
    DAT_0487d6a0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d6a0;
    DAT_0487d6a8 = &DAT_046981c8;
    DAT_0487d6c0 = 1;
  }
  return;
}


