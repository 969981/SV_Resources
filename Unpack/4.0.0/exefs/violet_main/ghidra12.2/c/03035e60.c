/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035e60; name: _INIT_779
 */


void _INIT_779(void)

{
  if ((DAT_04872a18 & 1) == 0) {
    DAT_04872a08 = 0;
    DAT_04872a10 = 0;
    DAT_048729f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048729f8;
    DAT_04872a00 = &DAT_046491d0;
    DAT_04872a18 = 1;
  }
  return;
}


