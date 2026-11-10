/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03030f60; name: _INIT_526
 */


void _INIT_526(void)

{
  if ((DAT_048702a0 & 1) == 0) {
    DAT_04870290 = 0;
    DAT_04870298 = 0;
    DAT_04870280 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870280;
    DAT_04870288 = &DAT_04639d60;
    DAT_048702a0 = 1;
  }
  return;
}


