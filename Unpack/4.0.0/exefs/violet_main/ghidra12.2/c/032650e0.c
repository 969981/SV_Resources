/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032650e0; name: _INIT_1869
 */


void _INIT_1869(void)

{
  if ((DAT_0488a3b0 & 1) == 0) {
    DAT_0488a3a0 = 0;
    DAT_0488a3a8 = 0;
    DAT_0488a390 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a390;
    DAT_0488a398 = &DAT_046c6f60;
    DAT_0488a3b0 = 1;
  }
  return;
}


