/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03146580; name: _INIT_900
 */


void _INIT_900(void)

{
  if ((DAT_04876e60 & 1) == 0) {
    DAT_04876e50 = 0;
    DAT_04876e58 = 0;
    DAT_04876e40 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876e40;
    DAT_04876e48 = &DAT_0466b138;
    DAT_04876e60 = 1;
  }
  return;
}


