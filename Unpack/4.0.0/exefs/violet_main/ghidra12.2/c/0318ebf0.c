/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0318ebf0; name: _INIT_1480
 */


void _INIT_1480(void)

{
  if ((DAT_0487d800 & 1) == 0) {
    DAT_0487d7f0 = 0;
    DAT_0487d7f8 = 0;
    DAT_0487d7e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d7e0;
    DAT_0487d7e8 = &DAT_046989f0;
    DAT_0487d800 = 1;
  }
  return;
}


