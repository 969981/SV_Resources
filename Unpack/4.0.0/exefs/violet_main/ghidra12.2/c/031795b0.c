/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031795b0; name: _INIT_1408
 */


void _INIT_1408(void)

{
  if ((DAT_0487ca88 & 1) == 0) {
    DAT_0487ca78 = 0;
    DAT_0487ca80 = 0;
    DAT_0487ca68 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487ca68;
    DAT_0487ca70 = &DAT_04692488;
    DAT_0487ca88 = 1;
  }
  return;
}


