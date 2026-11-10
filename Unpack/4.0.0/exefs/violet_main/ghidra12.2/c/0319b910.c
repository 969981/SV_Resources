/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319b910; name: _INIT_1495
 */


void _INIT_1495(void)

{
  if ((DAT_0487e150 & 1) == 0) {
    DAT_0487e140 = 0;
    DAT_0487e148 = 0;
    DAT_0487e130 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e130;
    DAT_0487e138 = &DAT_0469d838;
    DAT_0487e150 = 1;
  }
  return;
}


