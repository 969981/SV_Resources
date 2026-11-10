/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324b540; name: _INIT_1770
 */


void _INIT_1770(void)

{
  if ((DAT_04888a88 & 1) == 0) {
    DAT_04888a78 = 0;
    DAT_04888a80 = 0;
    DAT_04888a68 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888a68;
    DAT_04888a70 = &DAT_046bc9a0;
    DAT_04888a88 = 1;
  }
  return;
}


