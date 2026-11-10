/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319bdc0; name: _INIT_1510
 */


void _INIT_1510(void)

{
  if ((DAT_0487e3a8 & 1) == 0) {
    DAT_0487e398 = 0;
    DAT_0487e3a0 = 0;
    DAT_0487e388 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e388;
    DAT_0487e390 = &DAT_0469e9f0;
    DAT_0487e3a8 = 1;
  }
  return;
}


