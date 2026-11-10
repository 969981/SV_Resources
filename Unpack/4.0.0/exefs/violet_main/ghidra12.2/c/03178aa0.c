/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03178aa0; name: _INIT_1383
 */


void _INIT_1383(void)

{
  if ((DAT_0487c6a0 & 1) == 0) {
    DAT_0487c690 = 0;
    DAT_0487c698 = 0;
    DAT_0487c680 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c680;
    DAT_0487c688 = &DAT_046908d8;
    DAT_0487c6a0 = 1;
  }
  return;
}


