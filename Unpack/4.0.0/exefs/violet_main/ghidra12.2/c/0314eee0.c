/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314eee0; name: _INIT_1232
 */


void _INIT_1232(void)

{
  if ((DAT_0487a240 & 1) == 0) {
    DAT_0487a230 = 0;
    DAT_0487a238 = 0;
    DAT_0487a220 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a220;
    DAT_0487a228 = &DAT_0467f310;
    DAT_0487a240 = 1;
  }
  return;
}


