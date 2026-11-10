/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031461c0; name: _INIT_888
 */


void _INIT_888(void)

{
  if ((DAT_04876c80 & 1) == 0) {
    DAT_04876c70 = 0;
    DAT_04876c78 = 0;
    DAT_04876c60 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876c60;
    DAT_04876c68 = &DAT_0466a598;
    DAT_04876c80 = 1;
  }
  return;
}


