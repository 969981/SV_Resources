/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03178910; name: _INIT_1378
 */


void _INIT_1378(void)

{
  if ((DAT_0487c5d8 & 1) == 0) {
    DAT_0487c5c8 = 0;
    DAT_0487c5d0 = 0;
    DAT_0487c5b8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c5b8;
    DAT_0487c5c0 = &DAT_046903f0;
    DAT_0487c5d8 = 1;
  }
  return;
}


