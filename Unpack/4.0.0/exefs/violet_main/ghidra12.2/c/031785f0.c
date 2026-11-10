/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031785f0; name: _INIT_1368
 */


void _INIT_1368(void)

{
  if ((DAT_0487c448 & 1) == 0) {
    DAT_0487c438 = 0;
    DAT_0487c440 = 0;
    DAT_0487c428 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c428;
    DAT_0487c430 = &DAT_0468f990;
    DAT_0487c448 = 1;
  }
  return;
}


