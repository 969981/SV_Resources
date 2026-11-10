/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030362c0; name: _INIT_793
 */


void _INIT_793(void)

{
  if ((DAT_04872c48 & 1) == 0) {
    DAT_04872c38 = 0;
    DAT_04872c40 = 0;
    DAT_04872c28 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872c28;
    DAT_04872c30 = &DAT_04649f78;
    DAT_04872c48 = 1;
  }
  return;
}


