/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0318e9c0; name: _INIT_1473
 */


void _INIT_1473(void)

{
  if ((DAT_0487d6e8 & 1) == 0) {
    DAT_0487d6d8 = 0;
    DAT_0487d6e0 = 0;
    DAT_0487d6c8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d6c8;
    DAT_0487d6d0 = &DAT_046982a0;
    DAT_0487d6e8 = 1;
  }
  return;
}


