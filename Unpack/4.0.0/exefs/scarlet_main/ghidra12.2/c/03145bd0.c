/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03145bd0; name: _INIT_869
 */


void _INIT_869(void)

{
  if ((DAT_04876988 & 1) == 0) {
    DAT_04876978 = 0;
    DAT_04876980 = 0;
    DAT_04876968 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876968;
    DAT_04876970 = &DAT_04669420;
    DAT_04876988 = 1;
  }
  return;
}


