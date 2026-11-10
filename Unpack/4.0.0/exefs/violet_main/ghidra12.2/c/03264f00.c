/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03264f00; name: _INIT_1863
 */


void _INIT_1863(void)

{
  if ((DAT_0488a2c0 & 1) == 0) {
    DAT_0488a2b0 = 0;
    DAT_0488a2b8 = 0;
    DAT_0488a2a0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a2a0;
    DAT_0488a2a8 = &DAT_046c6870;
    DAT_0488a2c0 = 1;
  }
  return;
}


