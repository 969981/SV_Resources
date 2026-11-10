/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314e030; name: _INIT_1185
 */


void _INIT_1185(void)

{
  if ((DAT_04879ae8 & 1) == 0) {
    DAT_04879ad8 = 0;
    DAT_04879ae0 = 0;
    DAT_04879ac8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879ac8;
    DAT_04879ad0 = &DAT_0467c1a8;
    DAT_04879ae8 = 1;
  }
  return;
}


