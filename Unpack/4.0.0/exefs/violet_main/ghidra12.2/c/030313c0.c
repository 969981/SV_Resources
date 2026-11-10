/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030313c0; name: _INIT_540
 */


void _INIT_540(void)

{
  if ((DAT_048704d0 & 1) == 0) {
    DAT_048704c0 = 0;
    DAT_048704c8 = 0;
    DAT_048704b0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048704b0;
    DAT_048704b8 = &DAT_0463a928;
    DAT_048704d0 = 1;
  }
  return;
}


