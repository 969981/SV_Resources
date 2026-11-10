/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317a910; name: _INIT_1427
 */


void _INIT_1427(void)

{
  if ((DAT_0487cd80 & 1) == 0) {
    DAT_0487cd70 = 0;
    DAT_0487cd78 = 0;
    DAT_0487cd60 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cd60;
    DAT_0487cd68 = &DAT_046935a8;
    DAT_0487cd80 = 1;
  }
  return;
}


