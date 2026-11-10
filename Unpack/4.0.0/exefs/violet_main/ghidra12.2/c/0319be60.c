/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319be60; name: _INIT_1512
 */


void _INIT_1512(void)

{
  if ((DAT_0487e3f8 & 1) == 0) {
    DAT_0487e3e8 = 0;
    DAT_0487e3f0 = 0;
    DAT_0487e3d8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e3d8;
    DAT_0487e3e0 = &DAT_0469ebb0;
    DAT_0487e3f8 = 1;
  }
  return;
}


