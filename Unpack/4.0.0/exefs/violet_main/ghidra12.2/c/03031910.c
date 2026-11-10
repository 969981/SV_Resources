/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03031910; name: _INIT_557
 */


void _INIT_557(void)

{
  if ((DAT_04870778 & 1) == 0) {
    DAT_04870768 = 0;
    DAT_04870770 = 0;
    DAT_04870758 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870758;
    DAT_04870760 = &DAT_0463b8f8;
    DAT_04870778 = 1;
  }
  return;
}


