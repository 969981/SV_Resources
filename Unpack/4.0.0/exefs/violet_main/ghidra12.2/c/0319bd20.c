/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


