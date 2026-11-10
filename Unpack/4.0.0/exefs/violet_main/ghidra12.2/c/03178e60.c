/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03178e60; name: _INIT_1395
 */


void _INIT_1395(void)

{
  if ((DAT_0487c880 & 1) == 0) {
    DAT_0487c870 = 0;
    DAT_0487c878 = 0;
    DAT_0487c860 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c860;
    DAT_0487c868 = &DAT_04691820;
    DAT_0487c880 = 1;
  }
  return;
}


