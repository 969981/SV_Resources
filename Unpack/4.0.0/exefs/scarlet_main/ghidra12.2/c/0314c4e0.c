/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314c4e0; name: _INIT_1107
 */


void _INIT_1107(void)

{
  if ((DAT_04878eb8 & 1) == 0) {
    DAT_04878ea8 = 0;
    DAT_04878eb0 = 0;
    DAT_04878e98 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878e98;
    DAT_04878ea0 = &DAT_04677640;
    DAT_04878eb8 = 1;
  }
  return;
}


