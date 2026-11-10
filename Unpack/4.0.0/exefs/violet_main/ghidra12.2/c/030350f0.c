/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030350f0; name: _INIT_736
 */


void _INIT_736(void)

{
  if ((DAT_04872360 & 1) == 0) {
    DAT_04872350 = 0;
    DAT_04872358 = 0;
    DAT_04872340 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872340;
    DAT_04872348 = &DAT_04646388;
    DAT_04872360 = 1;
  }
  return;
}


