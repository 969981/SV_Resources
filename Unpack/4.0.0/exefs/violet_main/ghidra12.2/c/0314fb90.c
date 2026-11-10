/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314fb90; name: _INIT_1268
 */


void _INIT_1268(void)

{
  if ((DAT_0487a7e0 & 1) == 0) {
    DAT_0487a7d0 = 0;
    DAT_0487a7d8 = 0;
    DAT_0487a7c0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a7c0;
    DAT_0487a7c8 = &DAT_04681160;
    DAT_0487a7e0 = 1;
  }
  return;
}


