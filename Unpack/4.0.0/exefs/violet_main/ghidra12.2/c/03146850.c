/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03146850; name: _INIT_904
 */


void _INIT_904(void)

{
  if ((DAT_04876f00 & 1) == 0) {
    DAT_04876ef0 = 0;
    DAT_04876ef8 = 0;
    DAT_04876ee0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876ee0;
    DAT_04876ee8 = &DAT_0466b4f0;
    DAT_04876f00 = 1;
  }
  return;
}


