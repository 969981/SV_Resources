/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314e080; name: _INIT_1186
 */


void _INIT_1186(void)

{
  if ((DAT_04879b10 & 1) == 0) {
    DAT_04879b00 = 0;
    DAT_04879b08 = 0;
    DAT_04879af0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879af0;
    DAT_04879af8 = &DAT_0467c320;
    DAT_04879b10 = 1;
  }
  return;
}


