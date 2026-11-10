/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031786e0; name: _INIT_1371
 */


void _INIT_1371(void)

{
  if ((DAT_0487c4c0 & 1) == 0) {
    DAT_0487c4b0 = 0;
    DAT_0487c4b8 = 0;
    DAT_0487c4a0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c4a0;
    DAT_0487c4a8 = &DAT_0468fd20;
    DAT_0487c4c0 = 1;
  }
  return;
}


