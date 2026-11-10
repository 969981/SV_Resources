/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03179560; name: _INIT_1407
 */


void _INIT_1407(void)

{
  if ((DAT_0487ca60 & 1) == 0) {
    DAT_0487ca50 = 0;
    DAT_0487ca58 = 0;
    DAT_0487ca40 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487ca40;
    DAT_0487ca48 = &DAT_046923c8;
    DAT_0487ca60 = 1;
  }
  return;
}


