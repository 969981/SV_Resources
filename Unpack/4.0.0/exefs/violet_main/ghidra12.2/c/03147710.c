/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03147710; name: _INIT_931
 */


void _INIT_931(void)

{
  if ((DAT_04877338 & 1) == 0) {
    DAT_04877328 = 0;
    DAT_04877330 = 0;
    DAT_04877318 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877318;
    DAT_04877320 = &DAT_0466cca8;
    DAT_04877338 = 1;
  }
  return;
}


