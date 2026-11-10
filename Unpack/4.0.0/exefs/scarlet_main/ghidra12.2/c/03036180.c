/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03036180; name: _INIT_789
 */


void _INIT_789(void)

{
  if ((DAT_04872ba8 & 1) == 0) {
    DAT_04872b98 = 0;
    DAT_04872ba0 = 0;
    DAT_04872b88 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872b88;
    DAT_04872b90 = &DAT_04649cf8;
    DAT_04872ba8 = 1;
  }
  return;
}


