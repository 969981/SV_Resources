/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03032710; name: _INIT_602
 */


void _INIT_602(void)

{
  if ((DAT_04870e70 & 1) == 0) {
    DAT_04870e60 = 0;
    DAT_04870e68 = 0;
    DAT_04870e50 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870e50;
    DAT_04870e58 = &DAT_0463e518;
    DAT_04870e70 = 1;
  }
  return;
}


