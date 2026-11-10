/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03146910; name: _INIT_906
 */


void _INIT_906(void)

{
  if ((DAT_04876f50 & 1) == 0) {
    DAT_04876f40 = 0;
    DAT_04876f48 = 0;
    DAT_04876f30 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876f30;
    DAT_04876f38 = &DAT_0466b668;
    DAT_04876f50 = 1;
  }
  return;
}


