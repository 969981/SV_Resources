/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031459a0; name: _INIT_862
 */


void _INIT_862(void)

{
  if ((DAT_04876870 & 1) == 0) {
    DAT_04876860 = 0;
    DAT_04876868 = 0;
    DAT_04876850 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876850;
    DAT_04876858 = &DAT_04668e80;
    DAT_04876870 = 1;
  }
  return;
}


