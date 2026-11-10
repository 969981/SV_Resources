/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031784b0; name: _INIT_1364
 */


void _INIT_1364(void)

{
  if ((DAT_0487c3a8 & 1) == 0) {
    DAT_0487c398 = 0;
    DAT_0487c3a0 = 0;
    DAT_0487c388 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c388;
    DAT_0487c390 = &DAT_0468f560;
    DAT_0487c3a8 = 1;
  }
  return;
}


