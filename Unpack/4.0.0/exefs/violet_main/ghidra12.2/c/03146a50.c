/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03146a50; name: _INIT_910
 */


void _INIT_910(void)

{
  if ((DAT_04876ff0 & 1) == 0) {
    DAT_04876fe0 = 0;
    DAT_04876fe8 = 0;
    DAT_04876fd0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876fd0;
    DAT_04876fd8 = &DAT_0466ba28;
    DAT_04876ff0 = 1;
  }
  return;
}


