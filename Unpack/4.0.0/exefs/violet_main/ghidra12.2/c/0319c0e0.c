/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319c0e0; name: _INIT_1520
 */


void _INIT_1520(void)

{
  if ((DAT_0487e538 & 1) == 0) {
    DAT_0487e528 = 0;
    DAT_0487e530 = 0;
    DAT_0487e518 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e518;
    DAT_0487e520 = &DAT_0469f370;
    DAT_0487e538 = 1;
  }
  return;
}


