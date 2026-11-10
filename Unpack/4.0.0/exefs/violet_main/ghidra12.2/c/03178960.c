/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03178960; name: _INIT_1379
 */


void _INIT_1379(void)

{
  if ((DAT_0487c600 & 1) == 0) {
    DAT_0487c5f0 = 0;
    DAT_0487c5f8 = 0;
    DAT_0487c5e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c5e0;
    DAT_0487c5e8 = &DAT_046904e8;
    DAT_0487c600 = 1;
  }
  return;
}


