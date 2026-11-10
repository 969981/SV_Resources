/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319c810; name: _INIT_1543
 */


void _INIT_1543(void)

{
  if ((DAT_0487e8d0 & 1) == 0) {
    DAT_0487e8c0 = 0;
    DAT_0487e8c8 = 0;
    DAT_0487e8b0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e8b0;
    DAT_0487e8b8 = &DAT_046a0d18;
    DAT_0487e8d0 = 1;
  }
  return;
}


