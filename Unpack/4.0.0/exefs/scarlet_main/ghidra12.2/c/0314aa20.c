/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314aa20; name: _INIT_1059
 */


void _INIT_1059(void)

{
  if ((DAT_04878738 & 1) == 0) {
    DAT_04878728 = 0;
    DAT_04878730 = 0;
    DAT_04878718 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878718;
    DAT_04878720 = &DAT_04674c68;
    DAT_04878738 = 1;
  }
  return;
}


