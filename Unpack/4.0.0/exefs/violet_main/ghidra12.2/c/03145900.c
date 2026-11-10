/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03145900; name: _INIT_860
 */


void _INIT_860(void)

{
  if ((DAT_04876820 & 1) == 0) {
    DAT_04876810 = 0;
    DAT_04876818 = 0;
    DAT_04876800 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876800;
    DAT_04876808 = &DAT_04668c10;
    DAT_04876820 = 1;
  }
  return;
}


