/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030355a0; name: _INIT_751
 */


void _INIT_751(void)

{
  if ((DAT_048725b8 & 1) == 0) {
    DAT_048725a8 = 0;
    DAT_048725b0 = 0;
    DAT_04872598 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872598;
    DAT_048725a0 = &DAT_046471f8;
    DAT_048725b8 = 1;
  }
  return;
}


