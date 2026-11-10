/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031785a0; name: _INIT_1367
 */


void _INIT_1367(void)

{
  if ((DAT_0487c420 & 1) == 0) {
    DAT_0487c410 = 0;
    DAT_0487c418 = 0;
    DAT_0487c400 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c400;
    DAT_0487c408 = &DAT_0468f898;
    DAT_0487c420 = 1;
  }
  return;
}


