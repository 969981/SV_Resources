/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319c8b0; name: _INIT_1545
 */


void _INIT_1545(void)

{
  if ((DAT_0487e920 & 1) == 0) {
    DAT_0487e910 = 0;
    DAT_0487e918 = 0;
    DAT_0487e900 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e900;
    DAT_0487e908 = &DAT_046a1008;
    DAT_0487e920 = 1;
  }
  return;
}


