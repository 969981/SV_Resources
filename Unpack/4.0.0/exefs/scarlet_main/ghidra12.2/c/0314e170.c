/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314e170; name: _INIT_1189
 */


void _INIT_1189(void)

{
  if ((DAT_04879b88 & 1) == 0) {
    DAT_04879b78 = 0;
    DAT_04879b80 = 0;
    DAT_04879b68 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879b68;
    DAT_04879b70 = &DAT_0467c650;
    DAT_04879b88 = 1;
  }
  return;
}


