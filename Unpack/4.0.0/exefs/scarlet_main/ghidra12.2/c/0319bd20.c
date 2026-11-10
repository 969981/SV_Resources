/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319bd20; name: _INIT_1508
 */


void _INIT_1508(void)

{
  if ((DAT_0487e358 & 1) == 0) {
    DAT_0487e348 = 0;
    DAT_0487e350 = 0;
    DAT_0487e338 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e338;
    DAT_0487e340 = &DAT_0469e700;
    DAT_0487e358 = 1;
  }
  return;
}


