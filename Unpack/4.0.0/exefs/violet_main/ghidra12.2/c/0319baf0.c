/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319baf0; name: _INIT_1501
 */


void _INIT_1501(void)

{
  if ((DAT_0487e240 & 1) == 0) {
    DAT_0487e230 = 0;
    DAT_0487e238 = 0;
    DAT_0487e220 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e220;
    DAT_0487e228 = &DAT_0469df58;
    DAT_0487e240 = 1;
  }
  return;
}


