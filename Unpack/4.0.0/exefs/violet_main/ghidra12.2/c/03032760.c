/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03032760; name: _INIT_603
 */


void _INIT_603(void)

{
  if ((DAT_04870e98 & 1) == 0) {
    DAT_04870e88 = 0;
    DAT_04870e90 = 0;
    DAT_04870e78 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870e78;
    DAT_04870e80 = &DAT_0463e5d0;
    DAT_04870e98 = 1;
  }
  return;
}


