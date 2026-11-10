/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314c670; name: _INIT_1112
 */


void _INIT_1112(void)

{
  if ((DAT_04878f80 & 1) == 0) {
    DAT_04878f70 = 0;
    DAT_04878f78 = 0;
    DAT_04878f60 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878f60;
    DAT_04878f68 = &DAT_04677a68;
    DAT_04878f80 = 1;
  }
  return;
}


