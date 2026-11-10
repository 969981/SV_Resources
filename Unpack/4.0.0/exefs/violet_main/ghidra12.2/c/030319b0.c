/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030319b0; name: _INIT_559
 */


void _INIT_559(void)

{
  if ((DAT_048707c8 & 1) == 0) {
    DAT_048707b8 = 0;
    DAT_048707c0 = 0;
    DAT_048707a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048707a8;
    DAT_048707b0 = &DAT_0463bb38;
    DAT_048707c8 = 1;
  }
  return;
}


