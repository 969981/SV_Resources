/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03146170; name: _INIT_887
 */


void _INIT_887(void)

{
  if ((DAT_04876c58 & 1) == 0) {
    DAT_04876c48 = 0;
    DAT_04876c50 = 0;
    DAT_04876c38 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876c38;
    DAT_04876c40 = &DAT_0466a4b8;
    DAT_04876c58 = 1;
  }
  return;
}


