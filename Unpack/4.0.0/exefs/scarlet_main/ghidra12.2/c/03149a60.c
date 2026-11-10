/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149a60; name: _INIT_1021
 */


void _INIT_1021(void)

{
  if ((DAT_04878148 & 1) == 0) {
    DAT_04878138 = 0;
    DAT_04878140 = 0;
    DAT_04878128 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878128;
    DAT_04878130 = &DAT_04672878;
    DAT_04878148 = 1;
  }
  return;
}


