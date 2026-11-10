/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03148b60; name: _INIT_973
 */


void _INIT_973(void)

{
  if ((DAT_048779c8 & 1) == 0) {
    DAT_048779b8 = 0;
    DAT_048779c0 = 0;
    DAT_048779a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048779a8;
    DAT_048779b0 = &DAT_0466f478;
    DAT_048779c8 = 1;
  }
  return;
}


