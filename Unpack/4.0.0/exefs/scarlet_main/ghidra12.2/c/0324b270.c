/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324b270; name: _INIT_1761
 */


void _INIT_1761(void)

{
  if ((DAT_04888920 & 1) == 0) {
    DAT_04888910 = 0;
    DAT_04888918 = 0;
    DAT_04888900 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888900;
    DAT_04888908 = &DAT_046bc198;
    DAT_04888920 = 1;
  }
  return;
}


