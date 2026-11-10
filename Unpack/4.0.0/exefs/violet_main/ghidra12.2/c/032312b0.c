/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032312b0; name: _INIT_1679
 */


void _INIT_1679(void)

{
  if ((DAT_04885760 & 1) == 0) {
    DAT_04885750 = 0;
    DAT_04885758 = 0;
    DAT_04885740 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04885740;
    DAT_04885748 = &DAT_046ab288;
    DAT_04885760 = 1;
  }
  return;
}


