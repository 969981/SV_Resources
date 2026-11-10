/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03032e90; name: _INIT_626
 */


void _INIT_626(void)

{
  if ((DAT_04871230 & 1) == 0) {
    DAT_04871220 = 0;
    DAT_04871228 = 0;
    DAT_04871210 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871210;
    DAT_04871218 = &DAT_0463fc40;
    DAT_04871230 = 1;
  }
  return;
}


