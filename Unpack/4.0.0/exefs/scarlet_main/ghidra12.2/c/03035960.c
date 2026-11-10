/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035960; name: _INIT_763
 */


void _INIT_763(void)

{
  if ((DAT_04872798 & 1) == 0) {
    DAT_04872788 = 0;
    DAT_04872790 = 0;
    DAT_04872778 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872778;
    DAT_04872780 = &DAT_04647e68;
    DAT_04872798 = 1;
  }
  return;
}


