/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03145e50; name: _INIT_877
 */


void _INIT_877(void)

{
  if ((DAT_04876ac8 & 1) == 0) {
    DAT_04876ab8 = 0;
    DAT_04876ac0 = 0;
    DAT_04876aa8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876aa8;
    DAT_04876ab0 = &DAT_04669b90;
    DAT_04876ac8 = 1;
  }
  return;
}


