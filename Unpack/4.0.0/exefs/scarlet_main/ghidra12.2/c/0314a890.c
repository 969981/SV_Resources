/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314a890; name: _INIT_1054
 */


void _INIT_1054(void)

{
  if ((DAT_04878670 & 1) == 0) {
    DAT_04878660 = 0;
    DAT_04878668 = 0;
    DAT_04878650 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878650;
    DAT_04878658 = &DAT_04674740;
    DAT_04878670 = 1;
  }
  return;
}


