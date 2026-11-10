/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03149ba0; name: _INIT_1025
 */


void _INIT_1025(void)

{
  if ((DAT_048781e8 & 1) == 0) {
    DAT_048781d8 = 0;
    DAT_048781e0 = 0;
    DAT_048781c8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048781c8;
    DAT_048781d0 = &DAT_04672cb8;
    DAT_048781e8 = 1;
  }
  return;
}


