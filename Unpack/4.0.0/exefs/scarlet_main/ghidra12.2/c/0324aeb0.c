/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324aeb0; name: _INIT_1749
 */


void _INIT_1749(void)

{
  if ((DAT_04888740 & 1) == 0) {
    DAT_04888730 = 0;
    DAT_04888738 = 0;
    DAT_04888720 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888720;
    DAT_04888728 = &DAT_046bb5b8;
    DAT_04888740 = 1;
  }
  return;
}


