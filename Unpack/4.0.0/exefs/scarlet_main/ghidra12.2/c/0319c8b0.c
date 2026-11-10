/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319c8b0; name: _INIT_1545
 */


void _INIT_1545(void)

{
  if ((DAT_0487e920 & 1) == 0) {
    DAT_0487e910 = 0;
    DAT_0487e918 = 0;
    DAT_0487e900 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e900;
    DAT_0487e908 = &DAT_046a1008;
    DAT_0487e920 = 1;
  }
  return;
}


