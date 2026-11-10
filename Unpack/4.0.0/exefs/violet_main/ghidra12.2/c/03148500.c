/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03148500; name: _INIT_958
 */


void _INIT_958(void)

{
  if ((DAT_04877770 & 1) == 0) {
    DAT_04877760 = 0;
    DAT_04877768 = 0;
    DAT_04877750 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877750;
    DAT_04877758 = &DAT_0466e530;
    DAT_04877770 = 1;
  }
  return;
}


