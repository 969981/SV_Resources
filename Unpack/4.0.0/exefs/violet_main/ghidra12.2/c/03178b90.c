/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03178b90; name: _INIT_1386
 */


void _INIT_1386(void)

{
  if ((DAT_0487c718 & 1) == 0) {
    DAT_0487c708 = 0;
    DAT_0487c710 = 0;
    DAT_0487c6f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c6f8;
    DAT_0487c700 = &DAT_04690be8;
    DAT_0487c718 = 1;
  }
  return;
}


