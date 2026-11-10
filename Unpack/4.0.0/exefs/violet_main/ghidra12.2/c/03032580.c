/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03032580; name: _INIT_597
 */


void _INIT_597(void)

{
  if ((DAT_04870da8 & 1) == 0) {
    DAT_04870d98 = 0;
    DAT_04870da0 = 0;
    DAT_04870d88 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870d88;
    DAT_04870d90 = &DAT_0463dfc8;
    DAT_04870da8 = 1;
  }
  return;
}


