/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0318eab0; name: _INIT_1476
 */


void _INIT_1476(void)

{
  if ((DAT_0487d760 & 1) == 0) {
    DAT_0487d750 = 0;
    DAT_0487d758 = 0;
    DAT_0487d740 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d740;
    DAT_0487d748 = &DAT_046985b8;
    DAT_0487d760 = 1;
  }
  return;
}


