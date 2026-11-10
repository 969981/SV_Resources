/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319bf50; name: _INIT_1515
 */


void _INIT_1515(void)

{
  if ((DAT_0487e470 & 1) == 0) {
    DAT_0487e460 = 0;
    DAT_0487e468 = 0;
    DAT_0487e450 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e450;
    DAT_0487e458 = &DAT_0469ee98;
    DAT_0487e470 = 1;
  }
  return;
}


