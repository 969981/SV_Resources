/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03149c40; name: _INIT_1027
 */


void _INIT_1027(void)

{
  if ((DAT_04878238 & 1) == 0) {
    DAT_04878228 = 0;
    DAT_04878230 = 0;
    DAT_04878218 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878218;
    DAT_04878220 = &DAT_04672e78;
    DAT_04878238 = 1;
  }
  return;
}


