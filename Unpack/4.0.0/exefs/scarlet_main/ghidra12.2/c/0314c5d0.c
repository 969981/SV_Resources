/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314c5d0; name: _INIT_1110
 */


void _INIT_1110(void)

{
  if ((DAT_04878f30 & 1) == 0) {
    DAT_04878f20 = 0;
    DAT_04878f28 = 0;
    DAT_04878f10 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878f10;
    DAT_04878f18 = &DAT_04677878;
    DAT_04878f30 = 1;
  }
  return;
}


