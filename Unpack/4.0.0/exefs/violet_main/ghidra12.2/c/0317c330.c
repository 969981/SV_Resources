/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317c330; name: _INIT_1461
 */


void _INIT_1461(void)

{
  if ((DAT_0487d2d0 & 1) == 0) {
    DAT_0487d2c0 = 0;
    DAT_0487d2c8 = 0;
    DAT_0487d2b0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d2b0;
    DAT_0487d2b8 = &DAT_04695528;
    DAT_0487d2d0 = 1;
  }
  return;
}


