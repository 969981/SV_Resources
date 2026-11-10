/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314ab60; name: _INIT_1063
 */


void _INIT_1063(void)

{
  if ((DAT_048787d8 & 1) == 0) {
    DAT_048787c8 = 0;
    DAT_048787d0 = 0;
    DAT_048787b8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048787b8;
    DAT_048787c0 = &DAT_04674f98;
    DAT_048787d8 = 1;
  }
  return;
}


