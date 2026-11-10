/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314f640; name: _INIT_1251
 */


void _INIT_1251(void)

{
  if ((DAT_0487a538 & 1) == 0) {
    DAT_0487a528 = 0;
    DAT_0487a530 = 0;
    DAT_0487a518 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a518;
    DAT_0487a520 = &DAT_046802e0;
    DAT_0487a538 = 1;
  }
  return;
}


