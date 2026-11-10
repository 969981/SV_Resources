/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314c6c0; name: _INIT_1113
 */


void _INIT_1113(void)

{
  if ((DAT_04878fa8 & 1) == 0) {
    DAT_04878f98 = 0;
    DAT_04878fa0 = 0;
    DAT_04878f88 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878f88;
    DAT_04878f90 = &DAT_04677b20;
    DAT_04878fa8 = 1;
  }
  return;
}


