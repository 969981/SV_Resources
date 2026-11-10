/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314c490; name: _INIT_1106
 */


void _INIT_1106(void)

{
  if ((DAT_04878e90 & 1) == 0) {
    DAT_04878e80 = 0;
    DAT_04878e88 = 0;
    DAT_04878e70 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878e70;
    DAT_04878e78 = &DAT_04677520;
    DAT_04878e90 = 1;
  }
  return;
}


