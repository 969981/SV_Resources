/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319ba50; name: _INIT_1499
 */


void _INIT_1499(void)

{
  if ((DAT_0487e1f0 & 1) == 0) {
    DAT_0487e1e0 = 0;
    DAT_0487e1e8 = 0;
    DAT_0487e1d0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e1d0;
    DAT_0487e1d8 = &DAT_0469dd40;
    DAT_0487e1f0 = 1;
  }
  return;
}


