/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314c620; name: _INIT_1111
 */


void _INIT_1111(void)

{
  if ((DAT_04878f58 & 1) == 0) {
    DAT_04878f48 = 0;
    DAT_04878f50 = 0;
    DAT_04878f38 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878f38;
    DAT_04878f40 = &DAT_04677970;
    DAT_04878f58 = 1;
  }
  return;
}


