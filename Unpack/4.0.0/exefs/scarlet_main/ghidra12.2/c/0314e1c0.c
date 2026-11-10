/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314e1c0; name: _INIT_1190
 */


void _INIT_1190(void)

{
  if ((DAT_04879bb0 & 1) == 0) {
    DAT_04879ba0 = 0;
    DAT_04879ba8 = 0;
    DAT_04879b90 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879b90;
    DAT_04879b98 = &DAT_0467c730;
    DAT_04879bb0 = 1;
  }
  return;
}


