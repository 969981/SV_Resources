/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035910; name: _INIT_762
 */


void _INIT_762(void)

{
  if ((DAT_04872770 & 1) == 0) {
    DAT_04872760 = 0;
    DAT_04872768 = 0;
    DAT_04872750 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872750;
    DAT_04872758 = &DAT_04647cf0;
    DAT_04872770 = 1;
  }
  return;
}


