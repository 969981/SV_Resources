/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324aa50; name: _INIT_1735
 */


void _INIT_1735(void)

{
  if ((DAT_04888510 & 1) == 0) {
    DAT_04888500 = 0;
    DAT_04888508 = 0;
    DAT_048884f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048884f0;
    DAT_048884f8 = &DAT_046baa38;
    DAT_04888510 = 1;
  }
  return;
}


