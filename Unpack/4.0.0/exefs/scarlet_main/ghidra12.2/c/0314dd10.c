/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314dd10; name: _INIT_1175
 */


void _INIT_1175(void)

{
  if ((DAT_04879958 & 1) == 0) {
    DAT_04879948 = 0;
    DAT_04879950 = 0;
    DAT_04879938 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879938;
    DAT_04879940 = &DAT_0467b870;
    DAT_04879958 = 1;
  }
  return;
}


