/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031462b0; name: _INIT_891
 */


void _INIT_891(void)

{
  if ((DAT_04876cf8 & 1) == 0) {
    DAT_04876ce8 = 0;
    DAT_04876cf0 = 0;
    DAT_04876cd8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876cd8;
    DAT_04876ce0 = &DAT_0466a828;
    DAT_04876cf8 = 1;
  }
  return;
}


