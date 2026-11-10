/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314e0d0; name: _INIT_1187
 */


void _INIT_1187(void)

{
  if ((DAT_04879b38 & 1) == 0) {
    DAT_04879b28 = 0;
    DAT_04879b30 = 0;
    DAT_04879b18 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879b18;
    DAT_04879b20 = &DAT_0467c3f8;
    DAT_04879b38 = 1;
  }
  return;
}


