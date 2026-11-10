/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035f00; name: _INIT_781
 */


void _INIT_781(void)

{
  if ((DAT_04872a68 & 1) == 0) {
    DAT_04872a58 = 0;
    DAT_04872a60 = 0;
    DAT_04872a48 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872a48;
    DAT_04872a50 = &DAT_046493e8;
    DAT_04872a68 = 1;
  }
  return;
}


