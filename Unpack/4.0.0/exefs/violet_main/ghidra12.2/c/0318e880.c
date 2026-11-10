/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0318e880; name: _INIT_1469
 */


void _INIT_1469(void)

{
  if ((DAT_0487d648 & 1) == 0) {
    DAT_0487d638 = 0;
    DAT_0487d640 = 0;
    DAT_0487d628 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d628;
    DAT_0487d630 = &DAT_04697e00;
    DAT_0487d648 = 1;
  }
  return;
}


