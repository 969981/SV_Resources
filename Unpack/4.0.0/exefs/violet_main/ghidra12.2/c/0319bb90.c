/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319bb90; name: _INIT_1503
 */


void _INIT_1503(void)

{
  if ((DAT_0487e290 & 1) == 0) {
    DAT_0487e280 = 0;
    DAT_0487e288 = 0;
    DAT_0487e270 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e270;
    DAT_0487e278 = &DAT_0469e1b0;
    DAT_0487e290 = 1;
  }
  return;
}


