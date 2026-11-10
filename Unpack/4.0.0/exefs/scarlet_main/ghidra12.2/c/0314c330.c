/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314c330; name: _INIT_1102
 */


void _INIT_1102(void)

{
  if ((DAT_04878df0 & 1) == 0) {
    DAT_04878de0 = 0;
    DAT_04878de8 = 0;
    DAT_04878dd0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878dd0;
    DAT_04878dd8 = &DAT_04677168;
    DAT_04878df0 = 1;
  }
  return;
}


