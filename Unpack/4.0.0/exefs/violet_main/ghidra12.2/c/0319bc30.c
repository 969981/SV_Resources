/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319bc30; name: _INIT_1505
 */


void _INIT_1505(void)

{
  if ((DAT_0487e2e0 & 1) == 0) {
    DAT_0487e2d0 = 0;
    DAT_0487e2d8 = 0;
    DAT_0487e2c0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e2c0;
    DAT_0487e2c8 = &DAT_0469e408;
    DAT_0487e2e0 = 1;
  }
  return;
}


