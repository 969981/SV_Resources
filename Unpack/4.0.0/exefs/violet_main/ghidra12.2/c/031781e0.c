/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031781e0; name: _INIT_1355
 */


void _INIT_1355(void)

{
  if ((DAT_0487c240 & 1) == 0) {
    DAT_0487c230 = 0;
    DAT_0487c238 = 0;
    DAT_0487c220 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c220;
    DAT_0487c228 = &DAT_0468eb98;
    DAT_0487c240 = 1;
  }
  return;
}


