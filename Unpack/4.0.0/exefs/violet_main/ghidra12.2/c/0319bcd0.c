/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319bcd0; name: _INIT_1507
 */


void _INIT_1507(void)

{
  if ((DAT_0487e330 & 1) == 0) {
    DAT_0487e320 = 0;
    DAT_0487e328 = 0;
    DAT_0487e310 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e310;
    DAT_0487e318 = &DAT_0469e620;
    DAT_0487e330 = 1;
  }
  return;
}


