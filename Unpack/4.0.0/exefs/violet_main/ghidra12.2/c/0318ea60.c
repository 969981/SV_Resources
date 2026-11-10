/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0318ea60; name: _INIT_1475
 */


void _INIT_1475(void)

{
  if ((DAT_0487d738 & 1) == 0) {
    DAT_0487d728 = 0;
    DAT_0487d730 = 0;
    DAT_0487d718 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d718;
    DAT_0487d720 = &DAT_04698440;
    DAT_0487d738 = 1;
  }
  return;
}


