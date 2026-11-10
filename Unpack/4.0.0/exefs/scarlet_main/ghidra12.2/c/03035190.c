/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035190; name: _INIT_738
 */


void _INIT_738(void)

{
  if ((DAT_048723b0 & 1) == 0) {
    DAT_048723a0 = 0;
    DAT_048723a8 = 0;
    DAT_04872390 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872390;
    DAT_04872398 = &DAT_04646548;
    DAT_048723b0 = 1;
  }
  return;
}


