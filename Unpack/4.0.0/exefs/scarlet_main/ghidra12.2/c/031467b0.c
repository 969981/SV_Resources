/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031467b0; name: _INIT_902
 */


void _INIT_902(void)

{
  if ((DAT_04876eb0 & 1) == 0) {
    DAT_04876ea0 = 0;
    DAT_04876ea8 = 0;
    DAT_04876e90 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876e90;
    DAT_04876e98 = &DAT_0466b2b0;
    DAT_04876eb0 = 1;
  }
  return;
}


