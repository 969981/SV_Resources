/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317ae50; name: _INIT_1434
 */


void _INIT_1434(void)

{
  if ((DAT_0487ce98 & 1) == 0) {
    DAT_0487ce88 = 0;
    DAT_0487ce90 = 0;
    DAT_0487ce78 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487ce78;
    DAT_0487ce80 = &DAT_04693c00;
    DAT_0487ce98 = 1;
  }
  return;
}


