/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03031140; name: _INIT_532
 */


void _INIT_532(void)

{
  if ((DAT_04870390 & 1) == 0) {
    DAT_04870380 = 0;
    DAT_04870388 = 0;
    DAT_04870370 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870370;
    DAT_04870378 = &DAT_0463a248;
    DAT_04870390 = 1;
  }
  return;
}


