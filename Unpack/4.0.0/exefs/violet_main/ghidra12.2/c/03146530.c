/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03146530; name: _INIT_899
 */


void _INIT_899(void)

{
  if ((DAT_04876e38 & 1) == 0) {
    DAT_04876e28 = 0;
    DAT_04876e30 = 0;
    DAT_04876e18 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876e18;
    DAT_04876e20 = &DAT_0466b018;
    DAT_04876e38 = 1;
  }
  return;
}


