/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03031ff0; name: _INIT_579
 */


void _INIT_579(void)

{
  if ((DAT_04870ae8 & 1) == 0) {
    DAT_04870ad8 = 0;
    DAT_04870ae0 = 0;
    DAT_04870ac8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870ac8;
    DAT_04870ad0 = &DAT_0463cf80;
    DAT_04870ae8 = 1;
  }
  return;
}


