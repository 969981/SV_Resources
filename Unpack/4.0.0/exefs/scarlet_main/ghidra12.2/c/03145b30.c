/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03145b30; name: _INIT_867
 */


void _INIT_867(void)

{
  if ((DAT_04876938 & 1) == 0) {
    DAT_04876928 = 0;
    DAT_04876930 = 0;
    DAT_04876918 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876918;
    DAT_04876920 = &DAT_04669208;
    DAT_04876938 = 1;
  }
  return;
}


