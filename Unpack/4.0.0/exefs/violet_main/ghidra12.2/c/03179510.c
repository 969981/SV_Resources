/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03179510; name: _INIT_1406
 */


void _INIT_1406(void)

{
  if ((DAT_0487ca38 & 1) == 0) {
    DAT_0487ca28 = 0;
    DAT_0487ca30 = 0;
    DAT_0487ca18 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487ca18;
    DAT_0487ca20 = &DAT_046922a8;
    DAT_0487ca38 = 1;
  }
  return;
}


