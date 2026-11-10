/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035140; name: _INIT_737
 */


void _INIT_737(void)

{
  if ((DAT_04872388 & 1) == 0) {
    DAT_04872378 = 0;
    DAT_04872380 = 0;
    DAT_04872368 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872368;
    DAT_04872370 = &DAT_04646468;
    DAT_04872388 = 1;
  }
  return;
}


