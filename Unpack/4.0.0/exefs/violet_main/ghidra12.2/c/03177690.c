/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03177690; name: _INIT_1337
 */


void _INIT_1337(void)

{
  if ((DAT_0487bf70 & 1) == 0) {
    DAT_0487bf60 = 0;
    DAT_0487bf68 = 0;
    DAT_0487bf50 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bf50;
    DAT_0487bf58 = &DAT_0468d950;
    DAT_0487bf70 = 1;
  }
  return;
}


