/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031478f0; name: _INIT_937
 */


void _INIT_937(void)

{
  if ((DAT_04877428 & 1) == 0) {
    DAT_04877418 = 0;
    DAT_04877420 = 0;
    DAT_04877408 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877408;
    DAT_04877410 = &DAT_0466d2c0;
    DAT_04877428 = 1;
  }
  return;
}


