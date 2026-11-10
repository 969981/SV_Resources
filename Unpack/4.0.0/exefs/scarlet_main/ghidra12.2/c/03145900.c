/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03145900; name: _INIT_860
 */


void _INIT_860(void)

{
  if ((DAT_04876820 & 1) == 0) {
    DAT_04876810 = 0;
    DAT_04876818 = 0;
    DAT_04876800 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876800;
    DAT_04876808 = &DAT_04668c10;
    DAT_04876820 = 1;
  }
  return;
}


