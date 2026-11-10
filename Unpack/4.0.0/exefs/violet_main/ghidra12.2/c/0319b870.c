/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319b870; name: _INIT_1493
 */


void _INIT_1493(void)

{
  if ((DAT_0487e100 & 1) == 0) {
    DAT_0487e0f0 = 0;
    DAT_0487e0f8 = 0;
    DAT_0487e0e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e0e0;
    DAT_0487e0e8 = &DAT_0469d550;
    DAT_0487e100 = 1;
  }
  return;
}


