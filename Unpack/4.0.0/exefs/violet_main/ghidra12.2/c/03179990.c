/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03179990; name: _INIT_1411
 */


void _INIT_1411(void)

{
  if ((DAT_0487cb00 & 1) == 0) {
    DAT_0487caf0 = 0;
    DAT_0487caf8 = 0;
    DAT_0487cae0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cae0;
    DAT_0487cae8 = &DAT_04692720;
    DAT_0487cb00 = 1;
  }
  return;
}


