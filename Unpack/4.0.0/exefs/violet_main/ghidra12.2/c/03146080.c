/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03146080; name: _INIT_884
 */


void _INIT_884(void)

{
  if ((DAT_04876be0 & 1) == 0) {
    DAT_04876bd0 = 0;
    DAT_04876bd8 = 0;
    DAT_04876bc0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876bc0;
    DAT_04876bc8 = &DAT_0466a228;
    DAT_04876be0 = 1;
  }
  return;
}


