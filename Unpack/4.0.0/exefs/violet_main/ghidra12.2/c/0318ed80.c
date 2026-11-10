/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0318ed80; name: _INIT_1485
 */


void _INIT_1485(void)

{
  if ((DAT_0487d8c8 & 1) == 0) {
    DAT_0487d8b8 = 0;
    DAT_0487d8c0 = 0;
    DAT_0487d8a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d8a8;
    DAT_0487d8b0 = &DAT_04698f38;
    DAT_0487d8c8 = 1;
  }
  return;
}


