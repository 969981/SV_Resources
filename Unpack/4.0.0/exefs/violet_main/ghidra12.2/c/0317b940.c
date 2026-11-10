/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317b940; name: _INIT_1444
 */


void _INIT_1444(void)

{
  if ((DAT_0487d028 & 1) == 0) {
    DAT_0487d018 = 0;
    DAT_0487d020 = 0;
    DAT_0487d008 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d008;
    DAT_0487d010 = &DAT_046944f0;
    DAT_0487d028 = 1;
  }
  return;
}


