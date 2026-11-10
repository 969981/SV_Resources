/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031776e0; name: _INIT_1338
 */


void _INIT_1338(void)

{
  if ((DAT_0487bf98 & 1) == 0) {
    DAT_0487bf88 = 0;
    DAT_0487bf90 = 0;
    DAT_0487bf78 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bf78;
    DAT_0487bf80 = &DAT_0468da70;
    DAT_0487bf98 = 1;
  }
  return;
}


