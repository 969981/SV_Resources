/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03179fe0; name: _INIT_1417
 */


void _INIT_1417(void)

{
  if ((DAT_0487cbf0 & 1) == 0) {
    DAT_0487cbe0 = 0;
    DAT_0487cbe8 = 0;
    DAT_0487cbd0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cbd0;
    DAT_0487cbd8 = &DAT_04692cb8;
    DAT_0487cbf0 = 1;
  }
  return;
}


