/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03176230; name: _INIT_1298
 */


void _INIT_1298(void)

{
  if ((DAT_0487b958 & 1) == 0) {
    DAT_0487b948 = 0;
    DAT_0487b950 = 0;
    DAT_0487b938 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b938;
    DAT_0487b940 = &DAT_0468b000;
    DAT_0487b958 = 1;
  }
  return;
}


