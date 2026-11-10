/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314aa70; name: _INIT_1060
 */


void _INIT_1060(void)

{
  if ((DAT_04878760 & 1) == 0) {
    DAT_04878750 = 0;
    DAT_04878758 = 0;
    DAT_04878740 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878740;
    DAT_04878748 = &DAT_04674d48;
    DAT_04878760 = 1;
  }
  return;
}


