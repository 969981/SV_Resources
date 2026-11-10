/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317a490; name: _INIT_1422
 */


void _INIT_1422(void)

{
  if ((DAT_0487ccb8 & 1) == 0) {
    DAT_0487cca8 = 0;
    DAT_0487ccb0 = 0;
    DAT_0487cc98 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cc98;
    DAT_0487cca0 = &DAT_04693130;
    DAT_0487ccb8 = 1;
  }
  return;
}


