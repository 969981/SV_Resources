/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314a840; name: _INIT_1053
 */


void _INIT_1053(void)

{
  if ((DAT_04878648 & 1) == 0) {
    DAT_04878638 = 0;
    DAT_04878640 = 0;
    DAT_04878628 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878628;
    DAT_04878630 = &DAT_046745c8;
    DAT_04878648 = 1;
  }
  return;
}


