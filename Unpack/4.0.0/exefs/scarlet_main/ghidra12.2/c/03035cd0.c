/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035cd0; name: _INIT_774
 */


void _INIT_774(void)

{
  if ((DAT_04872950 & 1) == 0) {
    DAT_04872940 = 0;
    DAT_04872948 = 0;
    DAT_04872930 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872930;
    DAT_04872938 = &DAT_04648b38;
    DAT_04872950 = 1;
  }
  return;
}


