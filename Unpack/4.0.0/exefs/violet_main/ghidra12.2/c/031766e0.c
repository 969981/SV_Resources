/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031766e0; name: _INIT_1313
 */


void _INIT_1313(void)

{
  if ((DAT_0487bbb0 & 1) == 0) {
    DAT_0487bba0 = 0;
    DAT_0487bba8 = 0;
    DAT_0487bb90 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bb90;
    DAT_0487bb98 = &DAT_0468c120;
    DAT_0487bbb0 = 1;
  }
  return;
}


