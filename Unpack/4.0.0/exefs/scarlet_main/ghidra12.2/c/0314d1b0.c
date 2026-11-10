/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314d1b0; name: _INIT_1139
 */


void _INIT_1139(void)

{
  if ((DAT_048793b8 & 1) == 0) {
    DAT_048793a8 = 0;
    DAT_048793b0 = 0;
    DAT_04879398 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879398;
    DAT_048793a0 = &DAT_04679500;
    DAT_048793b8 = 1;
  }
  return;
}


