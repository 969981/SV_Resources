/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03034b50; name: _INIT_718
 */


void _INIT_718(void)

{
  if ((DAT_04872090 & 1) == 0) {
    DAT_04872080 = 0;
    DAT_04872088 = 0;
    DAT_04872070 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872070;
    DAT_04872078 = &DAT_04645388;
    DAT_04872090 = 1;
  }
  return;
}


