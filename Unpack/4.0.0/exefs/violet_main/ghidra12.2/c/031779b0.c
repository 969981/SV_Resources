/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031779b0; name: _INIT_1342
 */


void _INIT_1342(void)

{
  if ((DAT_0487c038 & 1) == 0) {
    DAT_0487c028 = 0;
    DAT_0487c030 = 0;
    DAT_0487c018 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c018;
    DAT_0487c020 = &DAT_0468ddc8;
    DAT_0487c038 = 1;
  }
  return;
}


