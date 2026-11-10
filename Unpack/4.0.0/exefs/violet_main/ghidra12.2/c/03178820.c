/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03178820; name: _INIT_1375
 */


void _INIT_1375(void)

{
  if ((DAT_0487c560 & 1) == 0) {
    DAT_0487c550 = 0;
    DAT_0487c558 = 0;
    DAT_0487c540 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c540;
    DAT_0487c548 = &DAT_04690130;
    DAT_0487c560 = 1;
  }
  return;
}


