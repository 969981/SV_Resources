/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03145f90; name: _INIT_881
 */


void _INIT_881(void)

{
  if ((DAT_04876b68 & 1) == 0) {
    DAT_04876b58 = 0;
    DAT_04876b60 = 0;
    DAT_04876b48 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876b48;
    DAT_04876b50 = &DAT_04669ff0;
    DAT_04876b68 = 1;
  }
  return;
}


