/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03148870; name: _INIT_964
 */


void _INIT_964(void)

{
  if ((DAT_04877860 & 1) == 0) {
    DAT_04877850 = 0;
    DAT_04877858 = 0;
    DAT_04877840 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877840;
    DAT_04877848 = &DAT_0466ebd8;
    DAT_04877860 = 1;
  }
  return;
}


