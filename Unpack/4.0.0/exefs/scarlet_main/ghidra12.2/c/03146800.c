/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03146800; name: _INIT_903
 */


void _INIT_903(void)

{
  if ((DAT_04876ed8 & 1) == 0) {
    DAT_04876ec8 = 0;
    DAT_04876ed0 = 0;
    DAT_04876eb8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876eb8;
    DAT_04876ec0 = &DAT_0466b3d0;
    DAT_04876ed8 = 1;
  }
  return;
}


