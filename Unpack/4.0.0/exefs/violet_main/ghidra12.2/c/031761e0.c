/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031761e0; name: _INIT_1297
 */


void _INIT_1297(void)

{
  if ((DAT_0487b930 & 1) == 0) {
    DAT_0487b920 = 0;
    DAT_0487b928 = 0;
    DAT_0487b910 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b910;
    DAT_0487b918 = &DAT_0468af18;
    DAT_0487b930 = 1;
  }
  return;
}


