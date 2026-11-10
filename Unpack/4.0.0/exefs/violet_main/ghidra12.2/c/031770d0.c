/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031770d0; name: _INIT_1332
 */


void _INIT_1332(void)

{
  if ((DAT_0487bea8 & 1) == 0) {
    DAT_0487be98 = 0;
    DAT_0487bea0 = 0;
    DAT_0487be88 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487be88;
    DAT_0487be90 = &DAT_0468d4d8;
    DAT_0487bea8 = 1;
  }
  return;
}


