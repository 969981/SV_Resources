/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031467b0; name: _INIT_902
 */


void _INIT_902(void)

{
  if ((DAT_04876eb0 & 1) == 0) {
    DAT_04876ea0 = 0;
    DAT_04876ea8 = 0;
    DAT_04876e90 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876e90;
    DAT_04876e98 = &DAT_0466b2b0;
    DAT_04876eb0 = 1;
  }
  return;
}


