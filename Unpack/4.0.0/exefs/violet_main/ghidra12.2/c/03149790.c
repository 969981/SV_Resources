/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03149790; name: _INIT_1012
 */


void _INIT_1012(void)

{
  if ((DAT_04877fe0 & 1) == 0) {
    DAT_04877fd0 = 0;
    DAT_04877fd8 = 0;
    DAT_04877fc0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877fc0;
    DAT_04877fc8 = &DAT_04671d68;
    DAT_04877fe0 = 1;
  }
  return;
}


