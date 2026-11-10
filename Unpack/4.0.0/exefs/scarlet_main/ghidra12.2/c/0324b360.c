/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324b360; name: _INIT_1764
 */


void _INIT_1764(void)

{
  if ((DAT_04888998 & 1) == 0) {
    DAT_04888988 = 0;
    DAT_04888990 = 0;
    DAT_04888978 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888978;
    DAT_04888980 = &DAT_046bc3d0;
    DAT_04888998 = 1;
  }
  return;
}


