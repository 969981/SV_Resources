/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03178280; name: _INIT_1357
 */


void _INIT_1357(void)

{
  if ((DAT_0487c290 & 1) == 0) {
    DAT_0487c280 = 0;
    DAT_0487c288 = 0;
    DAT_0487c270 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c270;
    DAT_0487c278 = &DAT_0468ee08;
    DAT_0487c290 = 1;
  }
  return;
}


