/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03034ab0; name: _INIT_716
 */


void _INIT_716(void)

{
  if ((DAT_04872040 & 1) == 0) {
    DAT_04872030 = 0;
    DAT_04872038 = 0;
    DAT_04872020 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872020;
    DAT_04872028 = &DAT_04645198;
    DAT_04872040 = 1;
  }
  return;
}


