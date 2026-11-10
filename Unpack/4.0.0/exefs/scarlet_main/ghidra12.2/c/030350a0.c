/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030350a0; name: _INIT_735
 */


void _INIT_735(void)

{
  if ((DAT_04872338 & 1) == 0) {
    DAT_04872328 = 0;
    DAT_04872330 = 0;
    DAT_04872318 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872318;
    DAT_04872320 = &DAT_04646300;
    DAT_04872338 = 1;
  }
  return;
}


