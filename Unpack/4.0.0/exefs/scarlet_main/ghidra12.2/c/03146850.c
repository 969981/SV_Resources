/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03146850; name: _INIT_904
 */


void _INIT_904(void)

{
  if ((DAT_04876f00 & 1) == 0) {
    DAT_04876ef0 = 0;
    DAT_04876ef8 = 0;
    DAT_04876ee0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876ee0;
    DAT_04876ee8 = &DAT_0466b4f0;
    DAT_04876f00 = 1;
  }
  return;
}


