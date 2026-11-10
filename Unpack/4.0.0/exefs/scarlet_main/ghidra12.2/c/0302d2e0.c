/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0302d2e0; name: _INIT_516
 */


void _INIT_516(void)

{
  if ((DAT_04870110 & 1) == 0) {
    DAT_04870100 = 0;
    DAT_04870108 = 0;
    DAT_048700f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048700f0;
    DAT_048700f8 = &DAT_04639358;
    DAT_04870110 = 1;
  }
  return;
}


