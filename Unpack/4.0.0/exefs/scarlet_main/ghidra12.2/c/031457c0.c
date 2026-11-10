/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031457c0; name: _INIT_856
 */


void _INIT_856(void)

{
  if ((DAT_04876780 & 1) == 0) {
    DAT_04876770 = 0;
    DAT_04876778 = 0;
    DAT_04876760 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876760;
    DAT_04876768 = &DAT_04668830;
    DAT_04876780 = 1;
  }
  return;
}


