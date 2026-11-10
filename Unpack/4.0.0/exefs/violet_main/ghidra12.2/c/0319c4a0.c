/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319c4a0; name: _INIT_1532
 */


void _INIT_1532(void)

{
  if ((DAT_0487e718 & 1) == 0) {
    DAT_0487e708 = 0;
    DAT_0487e710 = 0;
    DAT_0487e6f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e6f8;
    DAT_0487e700 = &DAT_046a0188;
    DAT_0487e718 = 1;
  }
  return;
}


