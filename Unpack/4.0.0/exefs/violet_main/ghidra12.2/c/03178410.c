/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03178410; name: _INIT_1362
 */


void _INIT_1362(void)

{
  if ((DAT_0487c358 & 1) == 0) {
    DAT_0487c348 = 0;
    DAT_0487c350 = 0;
    DAT_0487c338 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c338;
    DAT_0487c340 = &DAT_0468f338;
    DAT_0487c358 = 1;
  }
  return;
}


