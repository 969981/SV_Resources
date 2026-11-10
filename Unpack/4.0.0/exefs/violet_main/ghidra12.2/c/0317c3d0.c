/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317c3d0; name: _INIT_1463
 */


void _INIT_1463(void)

{
  if ((DAT_0487d320 & 1) == 0) {
    DAT_0487d310 = 0;
    DAT_0487d318 = 0;
    DAT_0487d300 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d300;
    DAT_0487d308 = &DAT_04695798;
    DAT_0487d320 = 1;
  }
  return;
}


