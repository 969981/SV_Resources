/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314d900; name: _INIT_1162
 */


void _INIT_1162(void)

{
  if ((DAT_04879750 & 1) == 0) {
    DAT_04879740 = 0;
    DAT_04879748 = 0;
    DAT_04879730 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879730;
    DAT_04879738 = &DAT_0467ab20;
    DAT_04879750 = 1;
  }
  return;
}


