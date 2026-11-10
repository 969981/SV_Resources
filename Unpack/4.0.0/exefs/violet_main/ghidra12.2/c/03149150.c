/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03149150; name: _INIT_992
 */


void _INIT_992(void)

{
  if ((DAT_04877cc0 & 1) == 0) {
    DAT_04877cb0 = 0;
    DAT_04877cb8 = 0;
    DAT_04877ca0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877ca0;
    DAT_04877ca8 = &DAT_04670a80;
    DAT_04877cc0 = 1;
  }
  return;
}


