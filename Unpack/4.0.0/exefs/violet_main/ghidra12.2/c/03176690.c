/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03176690; name: _INIT_1312
 */


void _INIT_1312(void)

{
  if ((DAT_0487bb88 & 1) == 0) {
    DAT_0487bb78 = 0;
    DAT_0487bb80 = 0;
    DAT_0487bb68 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bb68;
    DAT_0487bb70 = &DAT_0468c030;
    DAT_0487bb88 = 1;
  }
  return;
}


