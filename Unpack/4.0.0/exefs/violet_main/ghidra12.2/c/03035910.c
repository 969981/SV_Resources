/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035910; name: _INIT_762
 */


void _INIT_762(void)

{
  if ((DAT_04872770 & 1) == 0) {
    DAT_04872760 = 0;
    DAT_04872768 = 0;
    DAT_04872750 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872750;
    DAT_04872758 = &DAT_04647cf0;
    DAT_04872770 = 1;
  }
  return;
}


