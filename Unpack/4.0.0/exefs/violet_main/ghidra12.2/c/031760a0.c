/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031760a0; name: _INIT_1293
 */


void _INIT_1293(void)

{
  if ((DAT_0487b890 & 1) == 0) {
    DAT_0487b880 = 0;
    DAT_0487b888 = 0;
    DAT_0487b870 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b870;
    DAT_0487b878 = &DAT_0468aa20;
    DAT_0487b890 = 1;
  }
  return;
}


