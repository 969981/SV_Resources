/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03142900; name: _INIT_854
 */


void _INIT_854(void)

{
  if ((DAT_04876730 & 1) == 0) {
    DAT_04876720 = 0;
    DAT_04876728 = 0;
    DAT_04876710 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876710;
    DAT_04876718 = &DAT_046686c0;
    DAT_04876730 = 1;
  }
  return;
}


