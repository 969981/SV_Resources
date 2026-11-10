/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03176140; name: _INIT_1295
 */


void _INIT_1295(void)

{
  if ((DAT_0487b8e0 & 1) == 0) {
    DAT_0487b8d0 = 0;
    DAT_0487b8d8 = 0;
    DAT_0487b8c0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b8c0;
    DAT_0487b8c8 = &DAT_0468ace8;
    DAT_0487b8e0 = 1;
  }
  return;
}


