/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03031910; name: _INIT_557
 */


void _INIT_557(void)

{
  if ((DAT_04870778 & 1) == 0) {
    DAT_04870768 = 0;
    DAT_04870770 = 0;
    DAT_04870758 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870758;
    DAT_04870760 = &DAT_0463b8f8;
    DAT_04870778 = 1;
  }
  return;
}


