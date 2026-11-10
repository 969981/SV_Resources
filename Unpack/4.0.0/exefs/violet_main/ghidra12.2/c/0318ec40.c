/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0318ec40; name: _INIT_1481
 */


void _INIT_1481(void)

{
  if ((DAT_0487d828 & 1) == 0) {
    DAT_0487d818 = 0;
    DAT_0487d820 = 0;
    DAT_0487d808 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d808;
    DAT_0487d810 = &DAT_04698a90;
    DAT_0487d828 = 1;
  }
  return;
}


