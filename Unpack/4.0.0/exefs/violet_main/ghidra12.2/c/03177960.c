/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03177960; name: _INIT_1341
 */


void _INIT_1341(void)

{
  if ((DAT_0487c010 & 1) == 0) {
    DAT_0487c000 = 0;
    DAT_0487c008 = 0;
    DAT_0487bff0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bff0;
    DAT_0487bff8 = &DAT_0468dd08;
    DAT_0487c010 = 1;
  }
  return;
}


