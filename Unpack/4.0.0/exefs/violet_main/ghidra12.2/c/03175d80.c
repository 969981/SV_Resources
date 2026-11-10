/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03175d80; name: _INIT_1283
 */


void _INIT_1283(void)

{
  if ((DAT_0487b700 & 1) == 0) {
    DAT_0487b6f0 = 0;
    DAT_0487b6f8 = 0;
    DAT_0487b6e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b6e0;
    DAT_0487b6e8 = &DAT_04689dc8;
    DAT_0487b700 = 1;
  }
  return;
}


