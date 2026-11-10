/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03175e70; name: _INIT_1286
 */


void _INIT_1286(void)

{
  if ((DAT_0487b778 & 1) == 0) {
    DAT_0487b768 = 0;
    DAT_0487b770 = 0;
    DAT_0487b758 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b758;
    DAT_0487b760 = &DAT_0468a130;
    DAT_0487b778 = 1;
  }
  return;
}


