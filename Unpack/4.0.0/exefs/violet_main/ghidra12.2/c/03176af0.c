/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03176af0; name: _INIT_1326
 */


void _INIT_1326(void)

{
  if ((DAT_0487bdb8 & 1) == 0) {
    DAT_0487bda8 = 0;
    DAT_0487bdb0 = 0;
    DAT_0487bd98 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bd98;
    DAT_0487bda0 = &DAT_0468cf70;
    DAT_0487bdb8 = 1;
  }
  return;
}


