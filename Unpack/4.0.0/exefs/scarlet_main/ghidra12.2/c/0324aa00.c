/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324aa00; name: _INIT_1734
 */


void _INIT_1734(void)

{
  if ((DAT_048884e8 & 1) == 0) {
    DAT_048884d8 = 0;
    DAT_048884e0 = 0;
    DAT_048884c8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048884c8;
    DAT_048884d0 = &DAT_046ba998;
    DAT_048884e8 = 1;
  }
  return;
}


