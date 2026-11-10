/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314ca80; name: _INIT_1125
 */


void _INIT_1125(void)

{
  if ((DAT_04879188 & 1) == 0) {
    DAT_04879178 = 0;
    DAT_04879180 = 0;
    DAT_04879168 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879168;
    DAT_04879170 = &DAT_04678630;
    DAT_04879188 = 1;
  }
  return;
}


