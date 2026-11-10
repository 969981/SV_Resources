/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03176410; name: _INIT_1304
 */


void _INIT_1304(void)

{
  if ((DAT_0487ba48 & 1) == 0) {
    DAT_0487ba38 = 0;
    DAT_0487ba40 = 0;
    DAT_0487ba28 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487ba28;
    DAT_0487ba30 = &DAT_0468b6c0;
    DAT_0487ba48 = 1;
  }
  return;
}


