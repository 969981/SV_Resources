/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319bc80; name: _INIT_1506
 */


void _INIT_1506(void)

{
  if ((DAT_0487e308 & 1) == 0) {
    DAT_0487e2f8 = 0;
    DAT_0487e300 = 0;
    DAT_0487e2e8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e2e8;
    DAT_0487e2f0 = &DAT_0469e4a8;
    DAT_0487e308 = 1;
  }
  return;
}


