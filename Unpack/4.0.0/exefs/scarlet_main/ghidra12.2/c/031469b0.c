/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031469b0; name: _INIT_908
 */


void _INIT_908(void)

{
  if ((DAT_04876fa0 & 1) == 0) {
    DAT_04876f90 = 0;
    DAT_04876f98 = 0;
    DAT_04876f80 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876f80;
    DAT_04876f88 = &DAT_0466b848;
    DAT_04876fa0 = 1;
  }
  return;
}


