/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03177120; name: _INIT_1333
 */


void _INIT_1333(void)

{
  if ((DAT_0487bed0 & 1) == 0) {
    DAT_0487bec0 = 0;
    DAT_0487bec8 = 0;
    DAT_0487beb0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487beb0;
    DAT_0487beb8 = &DAT_0468d5f8;
    DAT_0487bed0 = 1;
  }
  return;
}


