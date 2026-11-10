/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03179600; name: _INIT_1409
 */


void _INIT_1409(void)

{
  if ((DAT_0487cab0 & 1) == 0) {
    DAT_0487caa0 = 0;
    DAT_0487caa8 = 0;
    DAT_0487ca90 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487ca90;
    DAT_0487ca98 = &DAT_046925a8;
    DAT_0487cab0 = 1;
  }
  return;
}


