/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03030fb0; name: _INIT_527
 */


void _INIT_527(void)

{
  if ((DAT_048702c8 & 1) == 0) {
    DAT_048702b8 = 0;
    DAT_048702c0 = 0;
    DAT_048702a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048702a8;
    DAT_048702b0 = &DAT_04639e18;
    DAT_048702c8 = 1;
  }
  return;
}


