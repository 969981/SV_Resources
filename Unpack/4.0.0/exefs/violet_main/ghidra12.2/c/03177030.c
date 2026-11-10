/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03177030; name: _INIT_1330
 */


void _INIT_1330(void)

{
  if ((DAT_0487be58 & 1) == 0) {
    DAT_0487be48 = 0;
    DAT_0487be50 = 0;
    DAT_0487be38 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487be38;
    DAT_0487be40 = &DAT_0468d2f8;
    DAT_0487be58 = 1;
  }
  return;
}


