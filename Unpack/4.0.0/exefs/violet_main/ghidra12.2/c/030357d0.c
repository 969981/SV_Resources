/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030357d0; name: _INIT_758
 */


void _INIT_758(void)

{
  if ((DAT_048726d0 & 1) == 0) {
    DAT_048726c0 = 0;
    DAT_048726c8 = 0;
    DAT_048726b0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048726b0;
    DAT_048726b8 = &DAT_046477e8;
    DAT_048726d0 = 1;
  }
  return;
}


