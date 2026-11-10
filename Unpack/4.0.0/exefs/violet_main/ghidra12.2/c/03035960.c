/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035960; name: _INIT_763
 */


void _INIT_763(void)

{
  if ((DAT_04872798 & 1) == 0) {
    DAT_04872788 = 0;
    DAT_04872790 = 0;
    DAT_04872778 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872778;
    DAT_04872780 = &DAT_04647e68;
    DAT_04872798 = 1;
  }
  return;
}


