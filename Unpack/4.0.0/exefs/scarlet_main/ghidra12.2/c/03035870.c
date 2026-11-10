/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035870; name: _INIT_760
 */


void _INIT_760(void)

{
  if ((DAT_04872720 & 1) == 0) {
    DAT_04872710 = 0;
    DAT_04872718 = 0;
    DAT_04872700 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872700;
    DAT_04872708 = &DAT_04647a00;
    DAT_04872720 = 1;
  }
  return;
}


