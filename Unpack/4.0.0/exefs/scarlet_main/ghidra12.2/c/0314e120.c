/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314e120; name: _INIT_1188
 */


void _INIT_1188(void)

{
  if ((DAT_04879b60 & 1) == 0) {
    DAT_04879b50 = 0;
    DAT_04879b58 = 0;
    DAT_04879b40 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879b40;
    DAT_04879b48 = &DAT_0467c570;
    DAT_04879b60 = 1;
  }
  return;
}


